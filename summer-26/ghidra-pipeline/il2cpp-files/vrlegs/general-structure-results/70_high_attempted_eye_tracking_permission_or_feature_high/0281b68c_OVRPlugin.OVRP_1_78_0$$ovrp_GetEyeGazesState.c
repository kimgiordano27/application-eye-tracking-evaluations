/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 0281b68c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
  FUN_01876390();
  uVar1 = FUN_0271c480(0);
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfe668);
  uVar1 = FUN_0282f8b0(uVar2,uVar1);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar2 = thunk_FUN_01a89e68();
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf9fe8);
  FUN_026a7658(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cfe670);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2,uVar1);
}


