/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 05d61f24
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioInChanged
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_06bc2168(param_4,0);
  if (lVar1 == 0) goto LAB_05d62014;
  FUN_06bc3a4c(lVar1,*(undefined8 *)(unaff_x19 + 0x58),0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar1 = FUN_06be6b04(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0)) goto LAB_05d62014;
    fVar3 = *(float *)(unaff_x19 + 100);
    fVar4 = *(float *)(unaff_x19 + 0x68);
    fVar5 = *(float *)(unaff_x19 + 0x6c);
    fVar2 = (float)FUN_05d60eb8();
    if (DAT_076cd828 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279c00);
      DAT_076cd828 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (lVar1 == 0) goto LAB_05d62014;
    fVar2 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2);
    FUN_06bf4f28(fVar3 * fVar2,fVar4 * fVar2,fVar5 * fVar2,lVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_06bc1cdc(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
LAB_05d62014:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


