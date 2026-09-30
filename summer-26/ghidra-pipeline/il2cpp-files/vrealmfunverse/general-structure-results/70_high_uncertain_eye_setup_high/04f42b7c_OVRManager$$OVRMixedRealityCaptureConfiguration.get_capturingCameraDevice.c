/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice
ENTRY_POINT: 04f42b7c
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
               (float param_1,float param_2,float param_3,float param_4)

{
  long unaff_x19;
  float *unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s15;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  fVar8 = unaff_x20[5];
  fVar7 = unaff_x20[6];
  fVar10 = unaff_x20[3];
  fVar9 = unaff_x20[4];
  fVar3 = param_3;
  fVar4 = param_2;
  fVar2 = (float)FUN_05c9a10c();
  fVar5 = (fVar8 * fVar2 + fVar7 * fVar4 + fVar9 * param_4) - fVar10 * fVar3;
  fVar6 = (fVar10 * fVar4 + fVar7 * fVar3 + fVar8 * param_4) - fVar9 * fVar2;
  FUN_05c9c22c((fVar9 * fVar3 + fVar7 * fVar2 + fVar10 * param_4) - fVar8 * fVar4,fVar5,fVar6,
               ((fVar7 * param_4 - fVar10 * fVar2) - fVar9 * fVar4) - fVar8 * fVar3);
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar3 = (float)FUN_05c9bf94(lVar1,0);
    param_2 = param_2 + fVar5;
    param_3 = param_3 + fVar6;
    fVar4 = (float)FUN_04f430a4();
    param_3 = param_3 - fVar6;
    FUN_05c9c070((param_1 + fVar3) - fVar4,param_2 - fVar5,param_3,lVar1,0);
    fVar3 = *unaff_x20;
    fVar2 = unaff_x20[1];
    fVar4 = unaff_x20[2];
    if (DAT_066c1caa == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1caa = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    fVar6 = *(float *)(lVar1 + 0x18);
    fVar7 = *(float *)(lVar1 + 0x1c);
    fVar5 = *(float *)(lVar1 + 0x20);
    if (DAT_066c298e == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c298e = '\x01';
    }
    fVar8 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar8) {
      fVar2 = fVar4 * fVar5 + fVar3 * fVar6 + fVar2 * fVar7;
      param_3 = (fVar6 * fVar2) / fVar8;
      fVar3 = fVar3 - param_3;
      fVar4 = fVar4 - (fVar5 * fVar2) / fVar8;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar2 = (float)FUN_05c9bf94(*(long *)(unaff_x19 + 0x28),0);
      if (*(char *)(unaff_x19 + 0xd5) == '\0') {
        fVar5 = 0.0;
      }
      else {
        fVar5 = *(float *)(unaff_x19 + 0x4c);
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_05c9c070(fVar3 + fVar2,fVar5 + unaff_s15 + *(float *)(unaff_x19 + 0x48),fVar4 + param_3,
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


