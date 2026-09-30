/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 05d621b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_TrackingAcquired(float param_1,float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  
  lVar1 = FUN_06be6b04();
  lVar2 = FUN_06be6b04();
  if (lVar2 != 0) {
    fVar3 = (float)FUN_06bf4868(lVar2,0);
    if (DAT_076cd760 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_072795b0);
      DAT_076cd760 = '\x01';
    }
    if (lVar1 != 0) {
      param_2 = param_2 - unaff_s9 / param_1;
      param_3 = param_3 - unaff_s8 / param_1;
      lVar2 = *(long *)(*unaff_x22 + 0xb8);
      thunk_FUN_06bf5c64(fVar3 - unaff_s11 / param_1,param_2,param_3,*(undefined4 *)(lVar2 + 0x18),
                         *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),lVar1,0);
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        return;
      }
      lVar1 = FUN_06be6b04();
      if (lVar1 != 0) {
        fVar3 = (float)FUN_06bf4868(lVar1,0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar5 = param_2;
          fVar6 = param_3;
          fVar4 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0x50),0);
          if (DAT_076cd82b == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07279c00);
            DAT_076cd82b = '\x01';
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar1 = FUN_06be6b04(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
            fVar3 = SQRT((param_3 - fVar6) * (param_3 - fVar6) +
                         (fVar3 - fVar4) * (fVar3 - fVar4) + (param_2 - fVar5) * (param_2 - fVar5));
            FUN_06bf4f28(fVar3 * *(float *)(unaff_x19 + 100),fVar3 * *(float *)(unaff_x19 + 0x68),
                         fVar3 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


