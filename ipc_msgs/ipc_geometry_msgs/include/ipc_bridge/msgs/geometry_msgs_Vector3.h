/* automatically generated by xdrgen from xdr/geometry_msgs_Vector3.xdr
 * xdrgen cvs version: $Revision: 1.7 $ $Date: 2009/01/12 15:54:59 $
 * xdr/geometry_msgs_Vector3.xdr last modified: Wed Apr 28 10:56:47 2010
 */

#ifndef INCgeometry_msgs_Vector3_h
#define INCgeometry_msgs_Vector3_h


struct geometry_msgs_Vector3 {
  double x;
  double y;
  double z;
#define geometry_msgs_Vector3_IPC_FORMAT "{double,double,double}"
  static const char *getIPCFormat(void) {
    return geometry_msgs_Vector3_IPC_FORMAT;
  }
};


namespace ipc_bridge
{
    namespace geometry_msgs
    {
        typedef geometry_msgs_Vector3 Vector3;
    }
}


#endif /* INCgeometry_msgs_Vector3_h */
