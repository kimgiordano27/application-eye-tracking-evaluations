/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 0281b610
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
  FUN_01876390();
  uVar1 = FUN_0271c480(0);
  FUN_018748a8();
  uVar2 = thunk_FUN_01a5dd74();
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfe660);
  uVar1 = FUN_0282f9d0(uVar3,uVar1,uVar2);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
  uVar2 = thunk_FUN_01a89e68();
  FUN_0276a4a8(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cfe670);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2,uVar1);
}


