/*
FUNCTION_NAME: FUN_067b7268
ENTRY_POINT: 067b7268
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_067b7268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar1 = PTR_DAT_06f991a0;
  if ((DAT_073a174a & 1) == 0) {
    FUN_02fe925c(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_02fe925c(PTR_DAT_06f991a0);
    DAT_073a174a = 1;
  }
  uVar3 = FUN_04aef77c(param_3,*(undefined8 *)puVar2);
  System_Linq_Enumerable_<>c__DisplayClass6_0<OVRAnchor>___ctor(param_1,uVar3,*(undefined8 *)puVar1)
  ;
  return;
}


