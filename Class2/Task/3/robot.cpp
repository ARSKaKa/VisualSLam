#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;


int main(int argc, char **argv) {
     // 1. construct tansfer matrix T1w & T2w.
     Quaterniond q1(0.55, 0.3, 0.2, 0.2), q2(-0.1, 0.3, -0.7, 0.2);
     q1.normalize(); // notice q shoule be normalized.
     q2.normalize();
     Isometry3d T1w = Isometry3d::Identity();             
     T1w.rotate(q1);
     T1w.pretranslate(Vector3d(0.7, 1.1, 0.2));
     cout << "Transform matrix T_cw1= \n" << T1w.matrix() << endl;
     cout << "Transform matrix T_cw1.inverse= \n" << T1w.inverse().matrix() << endl;
     Isometry3d T2w = Isometry3d::Identity();             
     T2w.rotate(q2);
     T2w.pretranslate(Vector3d(-0.1, 0.4, 0.8));
     cout << "Transform matrix T_cw2= \n" << T2w.matrix() << endl;
     // 2. input point in c1, wait to transfer to c2
     Vector4d p(0.5, -0.1, 0.2, 1);
     cout << "P = \n" << p << endl;
     // 3. Calculate point in c2.
     VectorXd pp = T2w*T1w.inverse()*p;
     cout << "Pp = \n" << pp << endl;
}
