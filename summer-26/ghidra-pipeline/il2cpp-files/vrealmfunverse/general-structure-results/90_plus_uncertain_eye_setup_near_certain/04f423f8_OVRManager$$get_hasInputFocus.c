/*
FUNCTION_NAME: OVRManager$$get_hasInputFocus
ENTRY_POINT: 04f423f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasInputFocus(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s9;
  float fVar10;
  float unaff_s10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float fVar13;
  float in_stack_00000000;
  
  lVar2 = *(long *)(*unaff_x21 + 0xb8);
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar13 = *(float *)(lVar2 + 0x1c);
  fVar12 = *(float *)(lVar2 + 0x20);
  if (*(char *)(unaff_x22 + 0x98e) == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    *(undefined1 *)(unaff_x22 + 0x98e) = 1;
  }
  puVar1 = PTR_DAT_06315600;
  fVar8 = unaff_s9 - unaff_s11;
  fVar10 = unaff_s10 - unaff_s12;
  fVar11 = in_stack_00000000 - unaff_s13;
  fVar4 = fVar12 * fVar12 + fVar9 * fVar9 + fVar13 * fVar13;
  fVar5 = **(float **)(*(long *)PTR_DAT_06315600 + 0xb8);
  if (fVar5 <= fVar4) {
    fVar6 = fVar11 * fVar12 + fVar8 * fVar9 + fVar10 * fVar13;
    fVar5 = fVar12 * fVar6;
    in_stack_00000000 = (fVar9 * fVar6) / fVar4;
    fVar8 = fVar8 - in_stack_00000000;
    fVar10 = fVar10 - (fVar13 * fVar6) / fVar4;
    fVar11 = fVar11 - fVar5 / fVar4;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar9 = (float)FUN_05c9c5bc(*(long *)(unaff_x19 + 0x30),0);
    if (*(char *)(unaff_x20 + 0xcaa) == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      *(undefined1 *)(unaff_x20 + 0xcaa) = 1;
    }
    lVar2 = *(long *)(*unaff_x21 + 0xb8);
    fVar4 = *(float *)(lVar2 + 0x18);
    fVar13 = *(float *)(lVar2 + 0x1c);
    fVar12 = *(float *)(lVar2 + 0x20);
    if (*(char *)(unaff_x22 + 0x98e) == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      *(undefined1 *)(unaff_x22 + 0x98e) = 1;
    }
    fVar6 = fVar12 * fVar12 + fVar4 * fVar4 + fVar13 * fVar13;
    if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar6) {
      fVar7 = in_stack_00000000 * fVar12 + fVar9 * fVar4 + fVar5 * fVar13;
      fVar9 = fVar9 - (fVar4 * fVar7) / fVar6;
      fVar5 = fVar5 - (fVar13 * fVar7) / fVar6;
      in_stack_00000000 = in_stack_00000000 - (fVar12 * fVar7) / fVar6;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_04f3f8c8(fVar8,fVar10,fVar11,*(long *)(unaff_x19 + 0x20),0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (*(char *)(unaff_x20 + 0xcaa) == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        *(undefined1 *)(unaff_x20 + 0xcaa) = 1;
      }
      lVar3 = *(long *)(*unaff_x21 + 0xb8);
      FUN_05c7bac0(fVar9,fVar5,in_stack_00000000,*(undefined4 *)(lVar3 + 0x18),
                   *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),0);
      if (lVar2 != 0) {
        FUN_04f3f808(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


