/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$BeginInvoke
ENTRY_POINT: 02616eac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__BeginInvoke
               (ulong param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
    thunk_FUN_01de290c();
    uVar1 = FUN_02616264();
  }
  return uVar1 & 1;
}


