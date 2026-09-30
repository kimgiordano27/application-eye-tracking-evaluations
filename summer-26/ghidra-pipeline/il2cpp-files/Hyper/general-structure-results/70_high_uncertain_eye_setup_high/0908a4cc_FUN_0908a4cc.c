/*
FUNCTION_NAME: FUN_0908a4cc
ENTRY_POINT: 0908a4cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0908a4cc(undefined8 *param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  
  puVar1 = PTR_DAT_0ac09788;
  fVar8 = param_3;
  fVar13 = param_4;
  if ((DAT_0b33017d & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09788);
    DAT_0b33017d = 1;
  }
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar2 = FUN_0a17cd28(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (DAT_0b31f57b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0f100);
      DAT_0b31f57b = '\x01';
    }
    puVar3 = *(undefined4 **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
    uVar14 = *puVar3;
    fVar11 = (float)puVar3[1];
    fVar12 = (float)puVar3[2];
    fVar13 = (float)puVar3[3];
OVRManager__ShutdownInsightPassthrough:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_0a188128(param_2,param_3,param_4,uVar14,fVar11,fVar12,fVar13,param_1,0);
    return;
  }
  if (*(long *)(param_5 + 0x30) != 0) {
    fVar5 = (float)FUN_0a18a624(*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x30) != 0) {
      fVar9 = fVar8;
      fVar10 = fVar13;
      fVar6 = (float)FUN_0a18a6a0(*(long *)(param_5 + 0x30),0);
      if (*(long *)(param_5 + 0x30) != 0) {
        fVar11 = fVar9;
        fVar12 = fVar10;
        fVar7 = (float)FUN_0a18a7a0(*(long *)(param_5 + 0x30),0);
        if (*(long *)(param_5 + 0x30) != 0) {
          fVar6 = param_3 * fVar6;
          fVar12 = param_4 * fVar12;
          fVar11 = param_4 * fVar11;
          fVar13 = param_2 * fVar13 + param_3 * fVar10;
          fVar7 = param_4 * fVar7;
          param_4 = fVar13 + fVar12;
          param_3 = param_2 * fVar8 + param_3 * fVar9 + fVar11;
          param_2 = param_2 * fVar5 + fVar6 + fVar7;
          uVar14 = FUN_0a1884ac(*(long *)(param_5 + 0x30),0);
          goto OVRManager__ShutdownInsightPassthrough;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


