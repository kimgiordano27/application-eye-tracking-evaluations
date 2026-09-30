/*
FUNCTION_NAME: OVRPlugin$$set_useIPDInPositionTracking
ENTRY_POINT: 05d11c34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_useIPDInPositionTracking(void)

{
  long lVar1;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  
  lVar1 = FUN_05d121c4();
  *unaff_x21 = lVar1;
  thunk_FUN_03048534();
  if ((*unaff_x21 != 0) && (fVar2 = (float)FUN_05d1235c(), *unaff_x20 != 0)) {
    fVar3 = (float)FUN_05d1235c();
    fVar4 = 0.0;
    if (fVar2 - fVar3 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_05d11cb0;
      fVar4 = (float)FUN_05d1235c();
      fVar4 = (unaff_s8 - fVar4) / (fVar2 - fVar3);
    }
    *unaff_x19 = fVar4;
    return 1;
  }
LAB_05d11cb0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


