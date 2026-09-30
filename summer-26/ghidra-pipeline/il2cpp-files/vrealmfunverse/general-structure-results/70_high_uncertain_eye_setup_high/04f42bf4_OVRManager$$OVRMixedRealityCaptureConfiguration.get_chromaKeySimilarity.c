/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity
ENTRY_POINT: 04f42bf4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               float param_6,float param_7,float param_8)

{
  long unaff_x19;
  float *unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  param_2 = (param_8 + param_7) - param_2;
  fVar5 = (in_s17 + in_s16) - in_s19;
  FUN_05c9c22c((param_6 + param_5) - param_1,param_2,fVar5,(param_4 - in_s18) - in_s20);
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_05c9bf94(lVar1,0);
    fVar6 = unaff_s9 + param_2;
    fVar7 = unaff_s10 + fVar5;
    fVar3 = (float)FUN_04f430a4();
    fVar7 = fVar7 - fVar5;
    FUN_05c9c070((unaff_s8 + fVar2) - fVar3,fVar6 - param_2,fVar7,lVar1,0);
    fVar5 = *unaff_x20;
    fVar3 = unaff_x20[1];
    fVar2 = unaff_x20[2];
    if (DAT_066c1caa == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1caa = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    fVar8 = *(float *)(lVar1 + 0x18);
    fVar9 = *(float *)(lVar1 + 0x1c);
    fVar6 = *(float *)(lVar1 + 0x20);
    if (DAT_066c298e == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c298e = '\x01';
    }
    fVar4 = fVar6 * fVar6 + fVar8 * fVar8 + fVar9 * fVar9;
    if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar4) {
      fVar3 = fVar2 * fVar6 + fVar5 * fVar8 + fVar3 * fVar9;
      fVar7 = (fVar8 * fVar3) / fVar4;
      fVar5 = fVar5 - fVar7;
      fVar2 = fVar2 - (fVar6 * fVar3) / fVar4;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar3 = (float)FUN_05c9bf94(*(long *)(unaff_x19 + 0x28),0);
      if (*(char *)(unaff_x19 + 0xd5) == '\0') {
        fVar6 = 0.0;
      }
      else {
        fVar6 = *(float *)(unaff_x19 + 0x4c);
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_05c9c070(fVar5 + fVar3,fVar6 + unaff_s15 + *(float *)(unaff_x19 + 0x48),fVar2 + fVar7,
                     *(long *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_04f3f86c(in_stack_00000020,uStack000000000000001c,uStack0000000000000018,
                       *(long *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_04f3f808(uStack0000000000000014,uStack0000000000000010,uStack000000000000000c,
                         uStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


