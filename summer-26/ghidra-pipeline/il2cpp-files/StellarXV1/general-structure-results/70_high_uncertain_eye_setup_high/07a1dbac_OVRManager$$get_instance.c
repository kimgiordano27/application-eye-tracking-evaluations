/*
FUNCTION_NAME: OVRManager$$get_instance
ENTRY_POINT: 07a1dbac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_instance(float param_1,float param_2,undefined8 param_3)

{
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long lVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  undefined8 uVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  
  fVar2 = (float)FUN_089720bc(SQRT(param_1 + param_2 + unaff_s14 * unaff_s14),param_3,0);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* try { // try from 07a1dbd4 to 07b1dbdf has its CatchHandler @ 07a1dce0 */
                    /* try { // try from 07a1dbf0 to 07b1dbfb has its CatchHandler @ 07a1dcd0 */
    fVar3 = (float)FUN_089720bc(SQRT(unaff_s10 * unaff_s10 + unaff_s12 * unaff_s12 +
                                     unaff_s11 * unaff_s11) / unaff_s8,*(long *)(unaff_x19 + 0x40),0
                               );
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    FUN_07a1dcb4(fVar3);
    if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
      lVar1 = *(long *)(unaff_x19 + 0x48);
      if (DAT_098854e9 == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        DAT_098854e9 = '\x01';
      }
      fVar2 = *unaff_x20;
      uVar4 = *(undefined8 *)(unaff_x20 + 1);
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (lVar1 == 0) goto LAB_07a1dcb0;
      fVar3 = (float)uVar4;
      fVar5 = (float)((ulong)uVar4 >> 0x20);
      FUN_089720bc(SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5),lVar1,0);
      FUN_07a1dcb4();
    }
    return;
  }
LAB_07a1dcb0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


