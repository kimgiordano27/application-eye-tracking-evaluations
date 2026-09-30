/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.GestureTouchesUtility$$TryFindTouch
ENTRY_POINT: 06a26fb4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 90
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


uint UnityEngine_XR_Interaction_Toolkit_AR_GestureTouchesUtility__TryFindTouch(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack00000000000000cc;
  
  uVar3 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled();
  if ((uVar3 & 1) != 0) {
    uStack00000000000000cc = *unaff_x20;
    uVar3 = FUN_05935dc4(*unaff_x19,&stack0x000000cc,0);
    puVar1 = PTR_DAT_072794f0;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x12);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x12);
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar3 = FUN_06bece64(uVar4,uVar5,0);
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 2);
        uVar4 = *(undefined8 *)(unaff_x19 + 2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar2 = FUN_06bece64(uVar5,uVar4,0);
        goto LAB_06a2703c;
      }
    }
  }
  uVar2 = 0;
LAB_06a2703c:
  return uVar2 & 1;
}


