/*
FUNCTION_NAME: FUN_050ad89c
ENTRY_POINT: 050ad89c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_050ad89c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo;
  puVar4 = OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo;
  puVar3 = OVRPlugin_FaceTrackingDataSource___TypeInfo;
  puVar2 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar1 = TMPro_TMP_SubMeshUI___TypeInfo;
  if ((DAT_066cd6cf & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    FUN_02b3c81c(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_02b3c81c(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_02b3c81c(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_02b3c81c(TMPro_TMP_SubMeshUI___TypeInfo);
    DAT_066cd6cf = 1;
  }
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_0440debc(uVar6,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_037a5cd0(uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar7 = uVar6;
  thunk_FUN_02bb0e9c(puVar7,uVar6);
  return;
}


