/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 027fc098
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar1 = thunk_FUN_01a89a98();
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_01a89d6c(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,0);
  }
  if (*(uint *)(unaff_x20 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  unaff_x20[8] = lVar1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20 + 8,lVar1);
  if (unaff_x19 != 0) {
    thunk_FUN_0364dcf8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


