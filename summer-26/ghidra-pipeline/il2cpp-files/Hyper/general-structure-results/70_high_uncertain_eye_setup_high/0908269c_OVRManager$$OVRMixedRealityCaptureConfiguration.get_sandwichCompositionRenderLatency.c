/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency
ENTRY_POINT: 0908269c
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency
               (float param_1,float param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float unaff_s10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar12;
  float unaff_s15;
  float fVar13;
  float in_stack_00000000;
  
  plVar3 = *(long **)(unaff_x23 + 0xf00);
  fVar9 = unaff_s9 - unaff_s11;
  fVar10 = unaff_s10 - unaff_s12;
  fVar11 = in_stack_00000000 - unaff_s13;
  fVar4 = unaff_s14 * unaff_s14 + param_1 + param_2;
  fVar6 = **(float **)(*plVar3 + 0xb8);
  if (fVar6 <= fVar4) {
    fVar7 = fVar11 * unaff_s14 + fVar9 * unaff_s8 + fVar10 * unaff_s15;
    fVar6 = unaff_s14 * fVar7;
    in_stack_00000000 = (unaff_s8 * fVar7) / fVar4;
    fVar9 = fVar9 - in_stack_00000000;
    fVar10 = fVar10 - (unaff_s15 * fVar7) / fVar4;
    fVar11 = fVar11 - fVar6 / fVar4;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar4 = (float)FUN_0a18a7a0(*(long *)(unaff_x19 + 0x30),0);
    if (*(char *)(unaff_x20 + 0x3e4) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
    }
    lVar1 = *(long *)(*unaff_x21 + 0xb8);
    fVar13 = *(float *)(lVar1 + 0x18);
    fVar12 = *(float *)(lVar1 + 0x1c);
    fVar7 = *(float *)(lVar1 + 0x20);
    if (*(char *)(unaff_x22 + 0x3e5) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      *(undefined1 *)(unaff_x22 + 0x3e5) = 1;
    }
    fVar5 = fVar7 * fVar7 + fVar13 * fVar13 + fVar12 * fVar12;
    if (**(float **)(*plVar3 + 0xb8) <= fVar5) {
      fVar8 = in_stack_00000000 * fVar7 + fVar4 * fVar13 + fVar6 * fVar12;
      fVar4 = fVar4 - (fVar13 * fVar8) / fVar5;
      fVar6 = fVar6 - (fVar12 * fVar8) / fVar5;
      in_stack_00000000 = in_stack_00000000 - (fVar7 * fVar8) / fVar5;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0907faf0(fVar9,fVar10,fVar11,*(long *)(unaff_x19 + 0x20),0);
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if (*(char *)(unaff_x20 + 0x3e4) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
      }
      lVar2 = *(long *)(*unaff_x21 + 0xb8);
      FUN_0a16ab34(fVar4,fVar6,in_stack_00000000,*(undefined4 *)(lVar2 + 0x18),
                   *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
      if (lVar1 != 0) {
        FUN_0907fa30(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


