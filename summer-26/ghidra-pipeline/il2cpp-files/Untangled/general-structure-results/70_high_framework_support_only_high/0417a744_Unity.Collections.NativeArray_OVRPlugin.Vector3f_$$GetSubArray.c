/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetSubArray
ENTRY_POINT: 0417a744
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetSubArray(void)

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  
  *(uint *)(unaff_x19 + 0x18) = in_w8;
  if (in_w8 - unaff_w20 != 0 && unaff_w20 <= (int)in_w8) {
    FUN_0562505c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,in_w8 - unaff_w20,0);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (in_w8 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)in_w8 * 0x20;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
                    /* try { // try from 0417a7a8 to 0427a7af has its CatchHandler @ 0417a87c */
      thunk_FUN_02f411dc(lVar1 + 0x20,0);
                    /* try { // try from 0417a7b0 to 0427a85b has its CatchHandler @ 0417a5c8 */
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


