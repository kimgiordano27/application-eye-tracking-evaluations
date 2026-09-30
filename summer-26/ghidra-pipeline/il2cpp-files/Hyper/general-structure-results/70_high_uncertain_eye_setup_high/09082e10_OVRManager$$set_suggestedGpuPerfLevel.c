/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 09082e10
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


void OVRManager__set_suggestedGpuPerfLevel
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  long unaff_x19;
  float *unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar9;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  fVar5 = (unaff_s12 * param_1 + unaff_s11 * param_2 + unaff_s13 * param_4) - unaff_s14 * param_3;
  fVar6 = (unaff_s14 * param_2 + unaff_s11 * param_3 + unaff_s12 * param_4) - unaff_s13 * param_1;
  FUN_0a18a428((unaff_s13 * param_3 + param_5 + param_6) - unaff_s12 * param_2,fVar5,fVar6,
               ((unaff_s11 * param_4 - unaff_s14 * param_1) - unaff_s13 * param_2) -
               unaff_s12 * param_3);
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0a18a1a0(lVar1,0);
    fVar7 = unaff_s9 + fVar5;
    fVar8 = unaff_s10 + fVar6;
    fVar3 = (float)FUN_09083310();
    fVar8 = fVar8 - fVar6;
    FUN_0a18a274((unaff_s8 + fVar2) - fVar3,fVar7 - fVar5,fVar8,lVar1,0);
    fVar5 = *unaff_x20;
    fVar2 = unaff_x20[1];
    fVar6 = unaff_x20[2];
    if (DAT_0b31f3e4 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e4 = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    fVar7 = *(float *)(lVar1 + 0x18);
    fVar9 = *(float *)(lVar1 + 0x1c);
    fVar3 = *(float *)(lVar1 + 0x20);
    if (DAT_0b31f3e5 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f3e5 = '\x01';
    }
    fVar4 = fVar3 * fVar3 + fVar7 * fVar7 + fVar9 * fVar9;
    if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar4) {
      fVar2 = fVar6 * fVar3 + fVar5 * fVar7 + fVar2 * fVar9;
      fVar8 = (fVar7 * fVar2) / fVar4;
      fVar5 = fVar5 - fVar8;
      fVar6 = fVar6 - (fVar3 * fVar2) / fVar4;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar2 = (float)FUN_0a18a1a0(*(long *)(unaff_x19 + 0x28),0);
      if (*(char *)(unaff_x19 + 0xd5) == '\0') {
        fVar3 = 0.0;
      }
      else {
        fVar3 = *(float *)(unaff_x19 + 0x4c);
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_0a18a274(fVar5 + fVar2,fVar3 + unaff_s15 + *(float *)(unaff_x19 + 0x48),fVar6 + fVar8,
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


