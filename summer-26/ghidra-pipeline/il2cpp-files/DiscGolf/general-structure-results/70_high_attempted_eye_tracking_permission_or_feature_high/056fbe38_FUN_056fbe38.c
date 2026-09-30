/*
FUNCTION_NAME: FUN_056fbe38
ENTRY_POINT: 056fbe38
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_056fbe38(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = OVRPlugin_SpaceQueryResult___TypeInfo;
  puVar1 = OVRPlugin_EyeGazeState___TypeInfo;
  if ((DAT_06dbeb89 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_02d965b8(OVRPlugin_SpaceQueryResult___TypeInfo);
    DAT_06dbeb89 = 1;
  }
  auVar3 = FUN_03767208(param_2,*(undefined8 *)puVar1);
  FUN_037694f0(param_1,auVar3._0_8_,auVar3._8_8_ & 0xffffffff,*(undefined8 *)puVar2);
  return;
}


