/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask
ENTRY_POINT: 09082614
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if (param_4 != 0) {
    FUN_0907ed1c((long)&stack0x00000000 + 4,param_4,0);
    fVar5 = fStack0000000000000008;
    if (DAT_0b31f3e4 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e4 = '\x01';
    }
    puVar1 = PTR_DAT_0ac0def8;
    lVar3 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    fVar9 = *(float *)(lVar3 + 0x18);
    fVar12 = *(float *)(lVar3 + 0x1c);
    fVar11 = *(float *)(lVar3 + 0x20);
    if (DAT_0b31f3e5 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f3e5 = '\x01';
    }
    puVar2 = PTR_DAT_0ac0df00;
    param_1 = param_1 - in_stack_00000000._4_4_;
    param_2 = param_2 - fVar5;
    fVar10 = param_3 - fStack000000000000000c;
    fVar5 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
    fVar6 = **(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8);
    if (fVar6 <= fVar5) {
      fVar7 = fVar10 * fVar11 + param_1 * fVar9 + param_2 * fVar12;
      fVar6 = fVar11 * fVar7;
      param_3 = (fVar9 * fVar7) / fVar5;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (fVar12 * fVar7) / fVar5;
      fVar10 = fVar10 - fVar6 / fVar5;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      fVar5 = (float)FUN_0a18a7a0(*(long *)(unaff_x19 + 0x30),0);
      if (DAT_0b31f3e4 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e4 = '\x01';
      }
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar12 = *(float *)(lVar3 + 0x18);
      fVar11 = *(float *)(lVar3 + 0x1c);
      fVar9 = *(float *)(lVar3 + 0x20);
      if (DAT_0b31f3e5 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0df00);
        DAT_0b31f3e5 = '\x01';
      }
      fVar7 = fVar9 * fVar9 + fVar12 * fVar12 + fVar11 * fVar11;
      if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar7) {
        fVar8 = param_3 * fVar9 + fVar5 * fVar12 + fVar6 * fVar11;
        fVar5 = fVar5 - (fVar12 * fVar8) / fVar7;
        fVar6 = fVar6 - (fVar11 * fVar8) / fVar7;
        param_3 = param_3 - (fVar9 * fVar8) / fVar7;
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_0907faf0(param_1,param_2,fVar10,*(long *)(unaff_x19 + 0x20),0);
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if (DAT_0b31f3e4 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          DAT_0b31f3e4 = '\x01';
        }
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
        FUN_0a16ab34(fVar5,fVar6,param_3,*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c)
                     ,*(undefined4 *)(lVar4 + 0x20),0);
        if (lVar3 != 0) {
          FUN_0907fa30(lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


