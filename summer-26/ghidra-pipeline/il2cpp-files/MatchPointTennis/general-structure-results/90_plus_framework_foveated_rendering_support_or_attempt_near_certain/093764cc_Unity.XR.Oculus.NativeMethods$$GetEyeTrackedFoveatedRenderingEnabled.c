/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 093764cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 127
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (unaff_x20 != 0) {
    uVar2 = *(undefined4 *)(unaff_x19 + 0x44);
    uVar3 = *(undefined4 *)(unaff_x19 + 0x48);
                    /* try { // try from 093764d8 to 094764f7 has its CatchHandler @ 09376574 */
    FUN_09850ca8(*(undefined4 *)(unaff_x19 + 0x40));
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_09539d64(*(long *)(unaff_x19 + 0x38),0);
      uVar1 = FUN_09376168();
      *(undefined4 *)(unaff_x19 + 0x40) = uVar1;
      *(undefined4 *)(unaff_x19 + 0x44) = uVar2;
                    /* try { // try from 09376510 to 0947651b has its CatchHandler @ 09376598 */
      *(undefined4 *)(unaff_x19 + 0x48) = uVar3;
                    /* try { // try from 0937651c to 09476553 has its CatchHandler @ 093762c4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


