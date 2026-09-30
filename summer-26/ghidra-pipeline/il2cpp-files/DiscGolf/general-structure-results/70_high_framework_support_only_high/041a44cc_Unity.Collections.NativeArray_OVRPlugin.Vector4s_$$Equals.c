/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 041a44cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (in_w8 == *(int *)(lVar1 + 0x18)) {
      FUN_041a3d78();
      in_w8 = *(int *)(unaff_x19 + 0x18);
      lVar1 = *(long *)(unaff_x19 + 0x10);
    }
                    /* try { // try from 041a4500 to 042a454b has its CatchHandler @ 041a4500
                       catch() { ... } // from try @ 041a4500 with catch @ 041a4500
                       catch() { ... } // from try @ 041a45a4 with catch @ 041a4500
                       catch() { ... } // from try @ 041a45d4 with catch @ 041a4500
                       catch() { ... } // from try @ 041a4650 with catch @ 041a4500 */
    if (in_w8 - unaff_w20 != 0 && (int)unaff_w20 <= in_w8) {
      FUN_0550b264(lVar1,unaff_w20,lVar1,unaff_w20 + 1,in_w8 - unaff_w20,0);
      lVar1 = *(long *)(unaff_x19 + 0x10);
    }
    if (lVar1 != 0) {
      if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)unaff_w20 * 0x10;
        *(undefined4 *)(lVar1 + 0x20) = unaff_s11;
        *(undefined4 *)(lVar1 + 0x24) = unaff_s10;
        *(undefined4 *)(lVar1 + 0x28) = unaff_s9;
        *(undefined4 *)(lVar1 + 0x2c) = unaff_s8;
                    /* try { // try from 041a454c to 042a45a3 has its CatchHandler @ 041a45a4 */
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


