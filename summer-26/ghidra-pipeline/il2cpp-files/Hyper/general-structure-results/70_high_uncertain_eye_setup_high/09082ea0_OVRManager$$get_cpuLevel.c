/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 09082ea0
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


void OVRManager__get_cpuLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float *unaff_x20;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float fVar4;
  float unaff_s10;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s15;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  fVar4 = unaff_s9 + param_2;
  fVar5 = unaff_s10 + param_3;
  fVar2 = (float)FUN_09083310();
  fVar5 = fVar5 - param_3;
  FUN_0a18a274(unaff_s8 - fVar2,fVar4 - param_2,fVar5);
  fVar2 = *unaff_x20;
  fVar6 = unaff_x20[1];
  fVar4 = unaff_x20[2];
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  fVar8 = *(float *)(lVar1 + 0x18);
  fVar9 = *(float *)(lVar1 + 0x1c);
  fVar7 = *(float *)(lVar1 + 0x20);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar3 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar3) {
    fVar6 = fVar4 * fVar7 + fVar2 * fVar8 + fVar6 * fVar9;
    fVar5 = (fVar8 * fVar6) / fVar3;
    fVar2 = fVar2 - fVar5;
    fVar4 = fVar4 - (fVar7 * fVar6) / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar6 = (float)FUN_0a18a1a0(*(long *)(unaff_x19 + 0x28),0);
    if (*(char *)(unaff_x19 + 0xd5) == '\0') {
      fVar7 = 0.0;
    }
    else {
      fVar7 = *(float *)(unaff_x19 + 0x4c);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_0a18a274(fVar2 + fVar6,fVar7 + unaff_s15 + *(float *)(unaff_x19 + 0x48),fVar4 + fVar5,
                   *(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_0907fa94(in_stack_00000020,uStack000000000000001c,uStack0000000000000018,
                     *(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_0907fa30(uStack0000000000000014,uStack0000000000000010,uStack000000000000000c,
                       uStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


