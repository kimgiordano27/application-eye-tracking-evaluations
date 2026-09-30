/*
FUNCTION_NAME: thunk_FUN_026ea810
ENTRY_POINT: 026e6d44
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 112
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool thunk_FUN_026ea810(void)

{
  int iVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (DAT_02c71920 == (code *)0x0) {
    uStack_18 = 0;
    pcStack_40 = "OculusXRPlugin";
    uStack_38 = 0xe;
    pcStack_30 = "GetEyeTrackedFoveatedRenderingEnabled";
    uStack_28 = 0x25;
    uStack_20 = DAT_007701b8;
    uStack_14 = 0;
    DAT_02c71920 = (code *)thunk_FUN_01269084(&pcStack_40);
  }
  iVar1 = (*DAT_02c71920)();
  return iVar1 != 0;
}


