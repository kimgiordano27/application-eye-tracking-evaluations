/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 01f87de8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_01f87b58();
  uVar1 = FUN_01f942e0(uVar1,0);
  uVar2 = FUN_01f87e48(param_2);
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar3 = thunk_FUN_0124bba8();
  FUN_01e7598c(uVar3,uVar1,uVar2,0);
  uVar1 = thunk_FUN_01279b34(PTR_DAT_027c1630);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar3,uVar1);
}


