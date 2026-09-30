/*
FUNCTION_NAME: OVRManager$$add_TrackingLost
ENTRY_POINT: 05d62294
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingLost(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)FUN_06bf4868();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    fVar4 = param_2;
    fVar5 = param_3;
    fVar3 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0x50),0);
    if (DAT_076cd82b == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279c00);
      DAT_076cd82b = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (lVar1 = FUN_06be6b04(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
      fVar2 = SQRT((param_3 - fVar5) * (param_3 - fVar5) +
                   (fVar2 - fVar3) * (fVar2 - fVar3) + (param_2 - fVar4) * (param_2 - fVar4));
      FUN_06bf4f28(fVar2 * *(float *)(unaff_x19 + 100),fVar2 * *(float *)(unaff_x19 + 0x68),
                   fVar2 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


