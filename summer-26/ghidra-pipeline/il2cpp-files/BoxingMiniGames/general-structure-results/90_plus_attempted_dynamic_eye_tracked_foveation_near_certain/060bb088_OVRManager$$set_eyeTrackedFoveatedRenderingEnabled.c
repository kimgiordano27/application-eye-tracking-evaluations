/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 060bb088
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  int iVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_071c24dc();
  if ((uVar2 & 1) == 0) {
    FUN_060bb0dc();
    iVar1 = FUN_060bb158();
    *(int *)(unaff_x19 + 0x178) = iVar1;
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
    }
  }
  return;
}


