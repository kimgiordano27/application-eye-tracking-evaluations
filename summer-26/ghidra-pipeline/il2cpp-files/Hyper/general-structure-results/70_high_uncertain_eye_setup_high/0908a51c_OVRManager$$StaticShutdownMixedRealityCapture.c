/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 0908a51c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__StaticShutdownMixedRealityCapture
               (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  *(undefined1 *)(unaff_x22 + 0x17d) = 1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_0a17cd28(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (DAT_0b31f57b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0f100);
      DAT_0b31f57b = '\x01';
    }
    puVar2 = *(undefined4 **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
    uVar11 = *puVar2;
    fVar8 = (float)puVar2[1];
    fVar9 = (float)puVar2[2];
    fVar10 = (float)puVar2[3];
OVRManager__ShutdownInsightPassthrough:
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
    FUN_0a188128(unaff_s8,unaff_s10,unaff_s9,uVar11,fVar8,fVar9,fVar10);
    return;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    fVar4 = (float)FUN_0a18a624(*(long *)(unaff_x20 + 0x30),0);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      fVar7 = param_2;
      fVar10 = param_3;
      fVar5 = (float)FUN_0a18a6a0(*(long *)(unaff_x20 + 0x30),0);
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        fVar8 = fVar7;
        fVar9 = fVar10;
        fVar6 = (float)FUN_0a18a7a0(*(long *)(unaff_x20 + 0x30),0);
        if (*(long *)(unaff_x20 + 0x30) != 0) {
          fVar5 = unaff_s10 * fVar5;
          fVar9 = unaff_s9 * fVar9;
          fVar8 = unaff_s9 * fVar8;
          fVar10 = unaff_s8 * param_3 + unaff_s10 * fVar10;
          fVar6 = unaff_s9 * fVar6;
          unaff_s9 = fVar10 + fVar9;
          unaff_s10 = unaff_s8 * param_2 + unaff_s10 * fVar7 + fVar8;
          unaff_s8 = unaff_s8 * fVar4 + fVar5 + fVar6;
          uVar11 = FUN_0a1884ac(*(long *)(unaff_x20 + 0x30),0);
          goto OVRManager__ShutdownInsightPassthrough;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


