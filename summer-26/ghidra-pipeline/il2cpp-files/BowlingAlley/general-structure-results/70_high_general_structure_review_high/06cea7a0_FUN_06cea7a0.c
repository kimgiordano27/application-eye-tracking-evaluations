/*
FUNCTION_NAME: FUN_06cea7a0
ENTRY_POINT: 06cea7a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21
*/


void FUN_06cea7a0(long param_1,long param_2,undefined4 param_3,ulong param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined2 *param_7,undefined8 *param_8,undefined1 param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  long local_178 [8];
  ulong local_138;
  undefined7 uStack_137;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  
  puVar6 = PTR_DAT_072798f8;
  param_4 = param_4 & 0xffffffff;
  if ((DAT_076e97b3 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory2__);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItems__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterLevel__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterLevelName__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterLocation__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterLocationID__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterMarketingTactic__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterMedium__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterMethod__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory3__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory4__);
    DAT_076e97b3 = 1;
  }
  local_1d0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_178[2] = 0;
  local_178[1] = 0;
  local_178[4] = 0;
  local_178[3] = 0;
  local_178[6] = 0;
  local_178[5] = 0;
  local_138 = 0;
  local_178[7] = 0;
  *(int *)(param_1 + 100) = (int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) + 1;
  local_180 = NEON_rev64(*(undefined8 *)(param_1 + 0x60),4);
  local_178[0] = param_2;
  thunk_FUN_0333a630(local_178,param_2);
  local_138 = CONCAT71(uStack_137,param_9) & 0xffffffffffffff01;
  memcpy(param_8,&local_180,0x50);
  thunk_FUN_0333a630(param_8 + 1,0);
  iVar1 = *(int *)(param_1 + 100);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06bb33bc(iVar1 != 0,0);
  if (param_2 == 0) goto LAB_06ceaf08;
  iVar1 = *(int *)(param_2 + 0x5c);
  if (iVar1 == 0) {
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    param_8[4] = *(undefined8 *)(param_2 + 0x28);
    param_8[3] = uVar12;
    param_8[2] = uVar8;
    thunk_FUN_0333a630(param_8 + 3,0);
    uVar12 = *(undefined8 *)(param_2 + 0x38);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    param_8[7] = *(undefined8 *)(param_2 + 0x40);
    param_8[6] = uVar12;
    param_8[5] = uVar8;
    thunk_FUN_0333a630(param_8 + 6,0);
    param_8[8] = *(undefined8 *)(param_2 + 0x50);
    uVar8 = thunk_FUN_0333a630();
  }
  else {
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 == 0) goto LAB_06ceaf08;
    iVar2 = *(int *)(lVar7 + 0x18);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_2 + 0x58) / iVar2;
    }
    lVar7 = FUN_041e29a8(lVar7,*(int *)(param_2 + 0x58) - iVar4 * iVar2,
                         *(undefined8 *)
                          Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterMarketingTactic__
                        );
    if (lVar7 == 0) goto LAB_06ceaf08;
    iVar1 = iVar1 + -1;
    FUN_04383508(&local_b0,lVar7,iVar1,
                 *(undefined8 *)Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterMedium__);
    uStack_1b8 = uStack_a0;
    local_1c0 = uStack_a8;
    uStack_1a8 = uStack_90;
    uStack_1b0 = local_98;
    uStack_198 = uStack_80;
    local_1a0 = local_88;
    local_190 = local_78;
    iVar2 = *(int *)(param_2 + 0x5c);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb33bc((int)local_b0 == iVar2,0);
    *(byte *)(param_8 + 9) = *(byte *)(param_8 + 9) | local_68 & 1;
    uStack_f8 = uStack_1b8;
    local_100 = local_1c0;
    local_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    local_e0 = local_1a0;
    local_d0 = local_190;
    param_8[4] = uStack_1a8;
    param_8[3] = uStack_1b0;
    param_8[2] = uStack_1b8;
    thunk_FUN_0333a630(param_8 + 3,0);
    uStack_268 = uStack_1b8;
    local_270 = local_1c0;
    uStack_258 = uStack_1a8;
    uStack_260 = uStack_1b0;
    uStack_248 = uStack_198;
    local_250 = local_1a0;
    local_240 = local_190;
    param_8[7] = local_190;
    param_8[6] = uStack_198;
    param_8[5] = local_1a0;
    thunk_FUN_0333a630(param_8 + 6,0);
    param_8[8] = local_70;
    thunk_FUN_0333a630(param_8 + 8,local_70);
    local_b0 = CONCAT44(0xffffffff,(int)local_b0);
    uStack_a0 = uStack_1b8;
    uStack_a8 = local_1c0;
    uStack_90 = uStack_1a8;
    local_98 = uStack_1b0;
    uStack_80 = uStack_198;
    local_88 = local_1a0;
    local_78 = local_190;
    FUN_0438356c(lVar7,iVar1,&local_b0,
                 *(undefined8 *)Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterMethod__);
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 == 0) goto LAB_06ceaf08;
    uVar3 = *(uint *)(lVar7 + 0x18);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = *(uint *)(param_1 + 0x60) / uVar3;
    }
    lVar7 = FUN_041e29a8(lVar7,*(uint *)(param_1 + 0x60) - uVar5 * uVar3,
                         *(undefined8 *)
                          Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterLocationID__);
    local_1d8 = 0;
    local_1d0 = 0;
    local_1e0 = *(undefined8 *)(param_2 + 0x28);
    uStack_1e8 = *(undefined8 *)(param_2 + 0x20);
    local_1f0 = *(undefined8 *)(param_2 + 0x18);
    thunk_FUN_0333a630((ulong)&local_1f0 | 8,0);
    local_1d8 = *(undefined8 *)(param_2 + 0x50);
    thunk_FUN_0333a630(&local_1d8);
    puVar6 = Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterLevel__;
    local_1d0 = CONCAT71(local_1d0._1_7_,1);
    uStack_218 = uStack_1e8;
    local_220 = local_1f0;
    uStack_208 = local_1d8;
    uStack_210 = local_1e0;
    local_200 = local_1d0;
    if (lVar7 == 0) goto LAB_06ceaf08;
    uStack_128 = uStack_1e8;
    local_130 = local_1f0;
    uStack_118 = local_1d8;
    uStack_120 = local_1e0;
    local_110 = local_1d0;
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterLevel__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_06ceaf08;
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
      lVar10 = lVar10 + (long)(int)uVar3 * 0x28;
      *(ulong *)(lVar10 + 0x40) = local_1d0;
      *(undefined8 *)(lVar10 + 0x28) = uStack_1e8;
      *(undefined8 *)(lVar10 + 0x20) = local_1f0;
      *(undefined8 *)(lVar10 + 0x38) = local_1d8;
      *(undefined8 *)(lVar10 + 0x30) = local_1e0;
      thunk_FUN_0333a630(lVar10 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_1e8;
      local_b0 = local_1f0;
      local_98 = local_1d8;
      uStack_a0 = local_1e0;
      uStack_90 = local_1d0;
      FUN_04380928(lVar7,&local_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    local_1d8 = 0;
    local_1d0 = 0;
    uStack_1e8 = *(undefined8 *)(param_2 + 0x38);
    local_1f0 = *(undefined8 *)(param_2 + 0x30);
    local_1e0 = *(undefined8 *)(param_2 + 0x40);
    thunk_FUN_0333a630((ulong)&local_1f0 | 8,0);
    local_1d8 = *(undefined8 *)(param_2 + 0x50);
    thunk_FUN_0333a630(&local_1d8);
    local_1d0 = local_1d0 & 0xffffffffffffff00;
    lVar11 = *(long *)puVar6;
    uStack_128 = uStack_1e8;
    local_130 = local_1f0;
    uStack_118 = local_1d8;
    uStack_120 = local_1e0;
    local_110 = local_1d0;
    lVar10 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_06ceaf08;
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
      lVar10 = lVar10 + (long)(int)uVar3 * 0x28;
      *(ulong *)(lVar10 + 0x40) = local_1d0;
      *(undefined8 *)(lVar10 + 0x28) = uStack_1e8;
      *(undefined8 *)(lVar10 + 0x20) = local_1f0;
      *(undefined8 *)(lVar10 + 0x38) = local_1d8;
      *(undefined8 *)(lVar10 + 0x30) = local_1e0;
      uVar8 = thunk_FUN_0333a630(lVar10 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_1e8;
      local_b0 = local_1f0;
      local_98 = local_1d8;
      uStack_a0 = local_1e0;
      uStack_90 = local_1d0;
      uVar8 = FUN_04380928(lVar7,&local_b0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar9 = FUN_06ceb21c(uVar8,*(undefined8 *)(param_2 + 0x50),param_3,param_4,
                       (undefined4 *)(param_2 + 0x18),(undefined4 *)(param_2 + 0x30),1);
  if ((uVar9 & 1) == 0) {
    FUN_06ce9f48(param_1,param_2,param_3,param_4,param_5,param_6,1);
  }
  else {
    if ((*(long *)(param_2 + 0x50) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar7 == 0)) goto LAB_06ceaf08;
    FUN_04ef0f78(lVar7,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                 *(undefined8 *)
                  Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory__);
    if ((*(long *)(param_2 + 0x50) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar7 == 0)) goto LAB_06ceaf08;
    System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>__System_Collections_Generic_IDictionary<TKey,TValue>_get_Values
              (lVar7,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
               *(undefined8 *)
                Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory2__);
  }
  *(int *)(param_2 + 0x48) = (int)(param_4 / 3);
  uVar8 = NEON_rev64(*param_8,4);
  *(undefined8 *)(param_2 + 0x58) = uVar8;
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    iVar2 = 0;
    if ((long)iVar1 != 0) {
      iVar2 = (int)((long)(ulong)*(uint *)(param_1 + 0x60) / (long)iVar1);
    }
    lVar7 = FUN_041e29a8(lVar7,*(uint *)(param_1 + 0x60) - iVar2 * iVar1,
                         *(undefined8 *)
                          Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterMarketingTactic__
                        );
    memcpy(&local_270,param_8,0x50);
    if (lVar7 != 0) {
      lVar11 = *(long *)Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItems__;
      memcpy(&local_100,&local_270,0x50);
      lVar10 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar3 * 0x50;
          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
          memcpy((void *)(lVar10 + 0x20),&local_100,0x50);
          thunk_FUN_0333a630(lVar10 + 0x28,0);
        }
        else {
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
          memcpy(&local_b0,&local_100,0x50);
          FUN_043838e8(lVar7,&local_b0,uVar8);
        }
        if ((*(long *)(param_2 + 0x50) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar7 != 0)) {
          local_b0 = 0;
          uStack_a8 = 0;
          FUN_046237b8(&local_b0,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                       *(undefined4 *)(param_2 + 0x18),param_3,
                       *(undefined8 *)
                        Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory3__);
          param_5[1] = uStack_a8;
          *param_5 = local_b0;
          if ((*(long *)(param_2 + 0x50) != 0) &&
             (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar7 != 0)) {
            local_100 = 0;
            uStack_f8 = 0;
            FUN_046217d8(&local_100,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                         *(undefined4 *)(param_2 + 0x30),param_4,
                         *(undefined8 *)
                          Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory4__);
            param_6[1] = uStack_f8;
            *param_6 = local_100;
            *param_7 = (short)*(undefined4 *)(param_2 + 0x18);
            return;
          }
        }
      }
    }
  }
LAB_06ceaf08:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


