/*
FUNCTION_NAME: FUN_05e6359c
ENTRY_POINT: 05e6359c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e6359c(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,undefined8 param_9,float *param_10,
                 long *param_11)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined1 auStack_488 [312];
  undefined1 auStack_350 [16];
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 auStack_218 [64];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  fVar9 = param_4;
  fVar10 = param_2;
  fVar13 = param_3;
  if ((DAT_066dc657 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_9__);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066dc657 = 1;
  }
  fVar5 = DAT_010328d0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if ((DAT_010328d0 <= param_3) && (DAT_010328d0 <= param_4)) {
    if (((int)param_10[0x3d] < 1) &&
       ((((int)param_10[0x3e] < 1 && ((int)param_10[0x3f] < 1)) && ((int)param_10[0x40] < 1)))) {
      param_3 = param_3 / fStack0000000000000008;
      param_4 = param_4 / fStack000000000000000c;
      fVar14 = param_3 * param_10[0xe];
      fVar6 = (param_1 - fStack0000000000000000 * param_3) + param_3 * param_10[0xc];
      fVar16 = param_4 * param_10[0xf];
      fVar11 = (param_2 - param_4 * ((1.0 - fStack0000000000000004) - fStack000000000000000c)) +
               param_4 * param_10[0xd];
      fVar9 = fVar16;
      fVar10 = fVar14;
      fVar13 = fVar11;
      fVar7 = (float)FUN_05e6399c();
      if (fVar10 < fVar5) {
        return;
      }
      if (fVar9 < fVar5) {
        return;
      }
      fVar5 = fVar9;
      fVar12 = DAT_01031cf4;
      fVar15 = fVar10;
      if (DAT_01031cf4 <=
          (fVar10 - fVar14) * (fVar10 - fVar14) + (fVar9 - fVar16) * (fVar9 - fVar16)) {
        fVar5 = param_10[6];
        fVar12 = param_10[7];
        fVar8 = (fVar10 / fVar14) * fVar5;
        if (fVar6 < fVar7) {
          param_10[4] = ((fVar5 - fVar8) - (((fVar6 + fVar14) - (fVar10 + fVar7)) / fVar14) * fVar5)
                        + param_10[4];
        }
        fVar5 = fVar9 + fVar13;
        fVar15 = (fVar9 / fVar16) * fVar12;
        if (fVar5 < fVar11 + fVar16) {
          fVar5 = param_10[5];
          fVar12 = ((fVar12 - fVar15) - ((fVar13 - fVar11) / fVar16) * fVar12) + fVar5;
          param_10[5] = fVar12;
        }
        param_10[6] = fVar8;
        param_10[7] = fVar15;
      }
      uVar4 = *(undefined8 *)(param_10 + 0x2a);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar2 = FUN_05c8c45c(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        if (((param_5 == fVar7) && (param_6 == fVar13)) &&
           ((param_7 == fVar10 && (param_8 == fVar9)))) {
          fVar9 = (float)FUN_05c49e74(0);
          param_10[0x10] = fVar9;
          param_10[0x11] = fVar12;
          param_10[0x12] = fVar15;
          param_10[0x13] = fVar5;
        }
        else {
          param_10[0x10] = fVar7;
          param_10[0x11] = fVar13;
          param_10[0x12] = fVar10;
          param_10[0x13] = fVar9;
        }
      }
      else {
        fVar6 = (float)FUN_05c49e74(0);
        param_10[0x10] = fVar6;
        param_10[0x11] = fVar12;
        param_10[0x12] = fVar15;
        param_10[0x13] = fVar5;
        param_8 = fVar9;
        param_7 = fVar10;
        param_5 = fVar7;
        param_6 = fVar13;
      }
    }
    else {
      fVar5 = (float)FUN_05c49e74(0);
      param_10[0x10] = fVar5;
      param_10[0x11] = fVar10;
      param_10[0x12] = fVar13;
      param_10[0x13] = fVar9;
      param_8 = param_4;
      param_7 = param_3;
      param_5 = param_1;
      param_6 = param_2;
    }
    puVar1 = PTR_DAT_06312520;
    *param_10 = param_5;
    param_10[1] = param_6;
    uVar4 = *(undefined8 *)(param_10 + 0x2a);
    param_10[2] = param_7;
    param_10[3] = param_8;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_05c8e378(uVar4,0,0);
    if (((uVar2 & 1) == 0) || (lVar3 = *param_11, lVar3 == 0)) {
      memcpy(auStack_488,param_10,0x138);
      FUN_05e618b0(param_9,auStack_488);
    }
    else {
      uStack_d8 = *(undefined8 *)(param_10 + 2);
      local_e0 = *(undefined8 *)param_10;
      memcpy(auStack_218,param_10,0x138);
      uStack_c8 = uStack_1d0;
      local_d0 = local_1d8;
      memcpy(auStack_350,param_10,0x138);
      uStack_b8 = uStack_338;
      local_c0 = local_340;
      uStack_a8 = uStack_d8;
      uStack_b0 = local_e0;
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
      uStack_88 = uStack_338;
      uStack_90 = local_340;
      FUN_03abe7e0(lVar3,&uStack_b0,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_9__);
    }
  }
  return;
}


