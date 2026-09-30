/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01c8f814
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
                    /* try { // try from 01c8f814 to 01d8f81b has its CatchHandler @ 01c8f9d0 */
  if (unaff_x20 != 0) {
                    /* try { // try from 01c8f828 to 01d8f82f has its CatchHandler @ 01c8fa2c */
    lVar1 = FUN_01ed7044();
    plVar3 = (long *)(unaff_x19 + 0x40);
    *plVar3 = lVar1;
                    /* try { // try from 01c8f834 to 01d8f83b has its CatchHandler @ 01c8f9a0 */
    thunk_FUN_01b4f09c(plVar3,lVar1);
    lVar1 = *plVar3;
                    /* try { // try from 01c8f844 to 01d8f84b has its CatchHandler @ 01c8f964 */
    uVar2 = FUN_0391c27c();
    if (lVar1 != 0) {
      FUN_03929660(lVar1,uVar2,0,0);
      lVar1 = FUN_01ed7044();
                    /* try { // try from 01c8f880 to 01d8f883 has its CatchHandler @ 01c8fa2c */
      plVar3 = (long *)(unaff_x19 + 0x38);
      *plVar3 = lVar1;
                    /* try { // try from 01c8f884 to 01d8f88b has its CatchHandler @ 01c8fa10 */
      thunk_FUN_01b4f09c(plVar3,lVar1);
      lVar1 = *plVar3;
      uVar2 = FUN_01f2f4f0(*(undefined8 *)StringLiteral_481,*(undefined8 *)StringLiteral_477);
      if (lVar1 != 0) {
        FUN_036de28c(lVar1,uVar2,0);
                    /* try { // try from 01c8f8cc to 01d8f907 has its CatchHandler @ 01c8fa0c */
        plVar4 = (long *)*plVar3;
        uVar2 = FUN_01f2f4f0(*(undefined8 *)StringLiteral_479,*(undefined8 *)StringLiteral_430);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x578))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x580));
          if (*plVar3 != 0) {
                    /* try { // try from 01c8f908 to 01d8f92b has its CatchHandler @ 01c8f694 */
            FUN_036df448(*plVar3,0,0);
            if (*plVar3 != 0) {
              FUN_036dedf8(0x42100000,*plVar3,0);
                    /* try { // try from 01c8f92c to 01d8f93f has its CatchHandler @ 01c8f984 */
              if (*plVar3 != 0) {
                FUN_036dfa14(*plVar3,1,0);
                FUN_01c8f964();
                *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x19 + 0x2c);
                    /* try { // try from 01c8f958 to 01d8f95f has its CatchHandler @ 01c8f96c */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01c8f960 to 01d8f9a7 has its CatchHandler @ 01c8f694 */
  FUN_01b48178();
}


