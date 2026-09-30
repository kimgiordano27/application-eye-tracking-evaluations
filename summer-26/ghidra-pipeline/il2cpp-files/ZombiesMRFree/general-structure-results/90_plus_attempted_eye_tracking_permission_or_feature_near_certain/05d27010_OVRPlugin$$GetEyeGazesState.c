/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 05d27010
PROGRAM: ZombiesMRFree-libil2cpp.so
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
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  FUN_02fe925c();
  FUN_02fe925c(PTR_DAT_06fb8ba8);
  FUN_02fe925c(PTR_DAT_06fb8ba0);
  *(undefined1 *)(unaff_x22 + 0x910) = 1;
  thunk_FUN_0301080c(*unaff_x20);
  FUN_05a645d0();
  FUN_05c38dfc();
  if (((unaff_x19[9] != 0) &&
      (lVar1 = FUN_05109540(unaff_x19[9],*(undefined8 *)PTR_DAT_06fb8ba8), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0x98) != 0)) {
    unaff_x19[0xe] = *(long *)(*(long *)(lVar1 + 0x98) + 0x18);
    thunk_FUN_03048534();
    (**(code **)(*unaff_x19 + 0x1f8))();
    FUN_05c38ea0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


