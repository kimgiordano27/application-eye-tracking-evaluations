/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 05ea73b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x23;
  uint unaff_w24;
  undefined1 auVar2 [16];
  
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea72ac with catch @ 05ea73b0
                        */
  lVar1 = thunk_FUN_040b4e00();
  if (lVar1 != 0) {
                    /* try { // try from 05ea73c8 to 05fa73df has its CatchHandler @ 05ea74b4 */
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
                    /* try { // try from 05ea73e0 to 05fa7403 has its CatchHandler @ 05ea7258 */
    if ((*(uint *)(lVar1 + 0x18) < (uint)unaff_x23) ||
       (*(uint *)(lVar1 + 0x18) - (uint)unaff_x23 < (unaff_w24 & 0x7fffffff))) {
      FUN_0769a508(0);
    }
    auVar2._8_4_ = unaff_w24 & 0x7fffffff;
    auVar2._0_8_ = lVar1 + unaff_x23 * 2 + 0x20;
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* try { // try from 05ea7430 to 05fa7447 has its CatchHandler @ 05ea74b4 */
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0();
}


