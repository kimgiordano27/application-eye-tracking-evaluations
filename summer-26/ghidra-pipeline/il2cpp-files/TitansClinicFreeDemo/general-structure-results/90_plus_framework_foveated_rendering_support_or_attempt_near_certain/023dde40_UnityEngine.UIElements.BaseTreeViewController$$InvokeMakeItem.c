/*
FUNCTION_NAME: UnityEngine.UIElements.BaseTreeViewController$$InvokeMakeItem
ENTRY_POINT: 023dde40
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 104
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool UnityEngine_UIElements_BaseTreeViewController__InvokeMakeItem(void)

{
  int iVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (DAT_029423f0 == (code *)0x0) {
    uStack_18 = 0;
    pcStack_40 = "OculusXRPlugin";
    uStack_38 = 0xe;
    pcStack_30 = "GetEyeTrackedFoveatedRenderingSupported";
    uStack_28 = 0x27;
    uStack_20 = DAT_007456a8;
    uStack_14 = 0;
    DAT_029423f0 = (code *)thunk_FUN_0124be64(&pcStack_40);
  }
  iVar1 = (*DAT_029423f0)();
  return iVar1 != 0;
}


