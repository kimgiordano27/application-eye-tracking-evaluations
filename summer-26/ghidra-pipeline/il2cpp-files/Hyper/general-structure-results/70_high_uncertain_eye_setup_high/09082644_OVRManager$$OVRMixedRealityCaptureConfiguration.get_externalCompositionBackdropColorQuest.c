/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest
ENTRY_POINT: 09082644
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar13;
  float fVar14;
  float in_stack_00000000;
  
  FUN_04947ee4(PTR_DAT_0ac0def8);
  *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
  puVar1 = PTR_DAT_0ac0def8;
  lVar3 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  fVar10 = *(float *)(lVar3 + 0x18);
  fVar14 = *(float *)(lVar3 + 0x1c);
  fVar13 = *(float *)(lVar3 + 0x20);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  puVar2 = PTR_DAT_0ac0df00;
  fVar9 = unaff_s9 - unaff_s11;
  fVar11 = unaff_s10 - unaff_s12;
  fVar12 = in_stack_00000000 - unaff_s13;
  fVar5 = fVar13 * fVar13 + fVar10 * fVar10 + fVar14 * fVar14;
  fVar6 = **(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8);
  if (fVar6 <= fVar5) {
    fVar7 = fVar12 * fVar13 + fVar9 * fVar10 + fVar11 * fVar14;
    fVar6 = fVar13 * fVar7;
    in_stack_00000000 = (fVar10 * fVar7) / fVar5;
    fVar9 = fVar9 - in_stack_00000000;
    fVar11 = fVar11 - (fVar14 * fVar7) / fVar5;
    fVar12 = fVar12 - fVar6 / fVar5;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar10 = (float)FUN_0a18a7a0(*(long *)(unaff_x19 + 0x30),0);
    if (*(char *)(unaff_x20 + 0x3e4) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar5 = *(float *)(lVar3 + 0x18);
    fVar14 = *(float *)(lVar3 + 0x1c);
    fVar13 = *(float *)(lVar3 + 0x20);
    if (DAT_0b31f3e5 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f3e5 = '\x01';
    }
    fVar7 = fVar13 * fVar13 + fVar5 * fVar5 + fVar14 * fVar14;
    if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar7) {
      fVar8 = in_stack_00000000 * fVar13 + fVar10 * fVar5 + fVar6 * fVar14;
      fVar10 = fVar10 - (fVar5 * fVar8) / fVar7;
      fVar6 = fVar6 - (fVar14 * fVar8) / fVar7;
      in_stack_00000000 = in_stack_00000000 - (fVar13 * fVar8) / fVar7;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0907faf0(fVar9,fVar11,fVar12,*(long *)(unaff_x19 + 0x20),0);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (*(char *)(unaff_x20 + 0x3e4) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
      }
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_0a16ab34(fVar10,fVar6,in_stack_00000000,*(undefined4 *)(lVar4 + 0x18),
                   *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
      if (lVar3 != 0) {
        FUN_0907fa30(lVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


