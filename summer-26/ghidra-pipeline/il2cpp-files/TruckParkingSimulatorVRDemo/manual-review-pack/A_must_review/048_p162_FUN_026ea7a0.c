/*
FUNCTION_NAME: FUN_026ea7a0
ENTRY_POINT: 026ea7a0
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool FUN_026ea7a0(void)

{
  int iVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_02c71918 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OculusXRPlugin";
    uStack_38 = 0xe;
    local_30 = "GetEyeTrackedFoveatedRenderingSupported";
    uStack_28 = 0x27;
    local_20 = DAT_007701b8;
    local_14 = 0;
    DAT_02c71918 = (code *)thunk_FUN_01269084(&local_40);
  }
  iVar1 = (*DAT_02c71918)();
  return iVar1 != 0;
}


