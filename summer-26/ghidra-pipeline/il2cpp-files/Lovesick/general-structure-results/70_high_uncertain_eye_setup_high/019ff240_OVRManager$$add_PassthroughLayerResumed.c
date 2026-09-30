/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 019ff240
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_PassthroughLayerResumed(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float fVar3;
  float unaff_s10;
  float fVar4;
  float unaff_s11;
  float fVar5;
  float unaff_s12;
  float unaff_s13;
  
  FUN_0266622c(param_1,1,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_02689f9c(*(long *)(unaff_x19 + 0x30),unaff_s8 >= 0.0,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar3 = ABS(unaff_s8);
      if (unaff_s9 < ABS(unaff_s8)) {
        fVar3 = unaff_s9;
      }
      fVar3 = fVar3 * unaff_s13 + unaff_s10;
      FUN_02689f9c(*(long *)(unaff_x19 + 0x28),unaff_s8 < 0.0,0);
      fVar2 = *(float *)(unaff_x19 + 0x60);
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar4 = unaff_s12 * unaff_s11 + unaff_s10;
        fVar5 = fVar4 + fVar3;
        if (0.0 <= unaff_s8) {
          fVar2 = fVar5;
        }
        FUN_0268fd10(*(long *)(unaff_x19 + 0x20),0);
        uVar1 = FUN_019ff598(fVar2);
        fVar2 = 0.0;
        if ((0.0 <= unaff_s8) && (unaff_w20 != 0)) {
          fVar2 = fVar3 - *(float *)(unaff_x19 + 0x60);
        }
        FUN_019ff750(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x40));
        if (0.0 <= unaff_s8) {
          fVar2 = fVar5;
          if (unaff_w20 != 0) {
            fVar2 = fVar4 + *(float *)(unaff_x19 + 0x60);
          }
          FUN_019ff7d8(fVar2);
          fVar2 = -*(float *)(unaff_x19 + 0x60);
        }
        else {
          FUN_019ff7d8(*(undefined4 *)(unaff_x19 + 0x60));
          fVar2 = -fVar3 - fVar4;
        }
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          FUN_0268fd10(*(long *)(unaff_x19 + 0x18),0);
          uVar1 = FUN_019ff598(fVar2);
          if ((unaff_w20 & unaff_s8 < 0.0) == 0) {
            fVar2 = 0.0;
          }
          else {
            fVar2 = *(float *)(unaff_x19 + 0x60) - fVar3;
          }
          FUN_019ff750(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x38));
          if (0.0 <= unaff_s8) {
            fVar5 = *(float *)(unaff_x19 + 0x60);
          }
          else if (unaff_w20 != 0) {
            fVar5 = fVar4 + *(float *)(unaff_x19 + 0x60);
          }
          FUN_019ff7d8(fVar5);
          FUN_019ff82c(fVar3,fVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


