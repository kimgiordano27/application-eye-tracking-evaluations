/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 090ac604
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


float OVRPlugin__StopEyeTracking(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  
  fVar9 = param_2;
  fVar11 = param_3;
  fVar5 = (float)FUN_090aba08();
  fVar8 = fVar11;
  fStack0000000000000024 = fVar9;
  fVar6 = (float)FUN_090abc78(param_4);
  if (DAT_0b32d3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b32d3e5 = '\x01';
  }
  puVar3 = PTR_DAT_0ac0df00;
  puVar2 = PTR_DAT_0ac0def8;
  fVar10 = fVar8 * fVar8 + fVar6 * fVar6 + fVar9 * fVar9;
  fStack0000000000000014 = fVar11;
  fStack000000000000001c = param_2;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar10) {
    fVar11 = (param_3 - fVar11) * fVar8 +
             (param_1 - fVar5) * fVar6 + (param_2 - fStack0000000000000024) * fVar9;
    fVar12 = (fVar6 * fVar11) / fVar10;
    fVar13 = (fVar9 * fVar11) / fVar10;
    fVar11 = (fVar8 * fVar11) / fVar10;
  }
  else {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar11 = pfVar4[2];
  }
  fVar7 = (float)FUN_090abc9c(param_4);
  if (DAT_0b32d33b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32d33b = '\x01';
  }
  puVar1 = PTR_DAT_0ac0a830;
  fStack000000000000002c = fVar6;
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar6 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11);
  if (fVar7 < fVar6) {
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (fVar6 <= DAT_01df50c4) {
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar12 = *pfVar4;
      fVar13 = pfVar4[1];
      fVar11 = pfVar4[2];
    }
    else {
      fVar12 = fVar12 / fVar6;
      fVar13 = fVar13 / fVar6;
      fVar11 = fVar11 / fVar6;
    }
    fVar12 = fVar7 * fVar12;
    fVar13 = fVar7 * fVar13;
    fVar11 = fVar7 * fVar11;
  }
  fVar7 = fStack000000000000002c;
  fVar6 = fStack000000000000001c;
  if (fVar8 * fVar11 + fStack000000000000002c * fVar12 + fVar9 * fVar13 < 0.0) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar11 = pfVar4[2];
  }
  fVar13 = fStack0000000000000024 + fVar13;
  fVar5 = fVar5 + fVar12;
  fVar11 = fStack0000000000000014 + fVar11;
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar6 = fVar6 - fVar13;
  param_1 = param_1 - fVar5;
  param_3 = param_3 - fVar11;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar10) {
    fVar11 = fVar8 * param_3 + fVar7 * param_1 + fVar9 * fVar6;
    param_1 = param_1 - (fVar7 * fVar11) / fVar10;
    fVar6 = fVar6 - (fVar9 * fVar11) / fVar10;
    param_3 = param_3 - (fVar8 * fVar11) / fVar10;
  }
  fStack0000000000000024 = fVar5;
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar8 = SQRT(param_3 * param_3 + param_1 * param_1 + fVar6 * fVar6);
  if (fVar8 <= DAT_01df50c4) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    param_1 = **(float **)(*(long *)puVar2 + 0xb8);
  }
  else {
    param_1 = param_1 / fVar8;
  }
  fVar8 = (float)FUN_090ab800(param_4);
  fStack0000000000000004 = fVar9;
  fVar11 = (float)FUN_0901abf4(0);
  fVar11 = fVar11 - (float)(int)(fVar11 / 360.0) * 360.0;
  fVar9 = 360.0;
  if (fVar11 <= 360.0) {
    fVar9 = fVar11;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar11) {
    fVar5 = fVar9;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar9 = *(float *)(*(long *)(param_4 + 0x20) + 0x2c);
    if ((fVar9 < fVar5) && (param_1 = fVar8, ABS(fVar5 - fVar9) < ABS(360.0 - fVar5))) {
      param_1 = (float)FUN_090ab8ac(param_4);
    }
    fVar9 = (float)FUN_090abac0(param_4);
    return fStack0000000000000024 + param_1 * fVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


