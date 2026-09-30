/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers
ENTRY_POINT: 04f42b14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
               float *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  if (*(long *)(param_5 + 0x20) != 0) {
    FUN_04f3eaf4((long)&stack0x00000020 + 4,*(long *)(param_5 + 0x20),0);
    uVar3 = uStack0000000000000038;
    uVar2 = uStack0000000000000030;
    uVar1 = uStack0000000000000028;
    fVar11 = fStack0000000000000034;
    fVar5 = (float)FUN_04f430a4(param_5);
    lVar4 = *(long *)(param_5 + 0x28);
    if (lVar4 != 0) {
      fVar13 = param_6[5];
      fVar12 = param_6[6];
      fVar15 = param_6[3];
      fVar14 = param_6[4];
      fVar7 = param_3;
      fVar8 = fVar11;
      fVar6 = (float)FUN_05c9a10c(lVar4,0);
      fVar9 = (fVar13 * fVar6 + fVar12 * fVar8 + fVar14 * param_4) - fVar15 * fVar7;
      fVar10 = (fVar15 * fVar8 + fVar12 * fVar7 + fVar13 * param_4) - fVar14 * fVar6;
      FUN_05c9c22c((fVar14 * fVar7 + fVar12 * fVar6 + fVar15 * param_4) - fVar13 * fVar8,fVar9,
                   fVar10,((fVar12 * param_4 - fVar15 * fVar6) - fVar14 * fVar8) - fVar13 * fVar7,
                   lVar4,0);
      lVar4 = *(long *)(param_5 + 0x28);
      if (lVar4 != 0) {
        fVar7 = (float)FUN_05c9bf94(lVar4,0);
        fVar11 = fVar11 + fVar9;
        param_3 = param_3 + fVar10;
        fVar8 = (float)FUN_04f430a4(param_5);
        param_3 = param_3 - fVar10;
        FUN_05c9c070((fVar5 + fVar7) - fVar8,fVar11 - fVar9,param_3,lVar4,0);
        fVar11 = *param_6;
        fVar7 = param_6[1];
        fVar5 = param_6[2];
        if (DAT_066c1caa == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          DAT_066c1caa = '\x01';
        }
        lVar4 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
        fVar6 = *(float *)(lVar4 + 0x18);
        fVar9 = *(float *)(lVar4 + 0x1c);
        fVar8 = *(float *)(lVar4 + 0x20);
        if (DAT_066c298e == '\0') {
          FUN_02b3c81c(PTR_DAT_06315600);
          DAT_066c298e = '\x01';
        }
        fVar10 = fVar8 * fVar8 + fVar6 * fVar6 + fVar9 * fVar9;
        if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar10) {
          fVar7 = fVar5 * fVar8 + fVar11 * fVar6 + fVar7 * fVar9;
          param_3 = (fVar6 * fVar7) / fVar10;
          fVar11 = fVar11 - param_3;
          fVar5 = fVar5 - (fVar8 * fVar7) / fVar10;
        }
        if (*(long *)(param_5 + 0x28) != 0) {
          fVar7 = (float)FUN_05c9bf94(*(long *)(param_5 + 0x28),0);
          if (*(char *)(param_5 + 0xd5) == '\0') {
            fVar8 = 0.0;
          }
          else {
            fVar8 = *(float *)(param_5 + 0x4c);
          }
          if (*(long *)(param_5 + 0x28) != 0) {
            FUN_05c9c070(fVar11 + fVar7,fVar8 + param_1 + *(float *)(param_5 + 0x48),fVar5 + param_3
                         ,*(long *)(param_5 + 0x28),0);
            if (*(long *)(param_5 + 0x20) != 0) {
              FUN_04f3f86c(in_stack_00000020._4_4_,uVar1,uStack000000000000002c,
                           *(long *)(param_5 + 0x20),0);
              if (*(long *)(param_5 + 0x20) != 0) {
                FUN_04f3f808(uVar2,fStack0000000000000034,uVar3,uStack000000000000003c,
                             *(long *)(param_5 + 0x20),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


