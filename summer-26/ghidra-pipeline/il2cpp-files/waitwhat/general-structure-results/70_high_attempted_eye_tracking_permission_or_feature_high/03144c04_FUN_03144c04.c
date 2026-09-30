/*
FUNCTION_NAME: FUN_03144c04
ENTRY_POINT: 03144c04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_03144c04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = OVRPlugin_FaceTrackingDataSource___TypeInfo;
  puVar1 = OVRPlugin_EyeGazeState___TypeInfo;
  if ((DAT_07557874 & 1) == 0) {
    FUN_03188a78(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    FUN_03188a78(OVRPlugin_EyeGazeState___TypeInfo);
    DAT_07557874 = 1;
  }
  uVar3 = FUN_03188d04("Cannot marshal field \'%s\' of type \'%s\': Reference type field marshaling is not supported."
                       ,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,0);
}


