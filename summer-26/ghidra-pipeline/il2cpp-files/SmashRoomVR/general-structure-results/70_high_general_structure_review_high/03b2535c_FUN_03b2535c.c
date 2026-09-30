/*
FUNCTION_NAME: FUN_03b2535c
ENTRY_POINT: 03b2535c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_12
*/


void FUN_03b2535c(long param_1,long param_2,long param_3)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1b0 [80];
  undefined8 local_160;
  long lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  
  if ((DAT_03ffdb71 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da7b40);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86bd8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2351);
    thunk_FUN_01ad9084(StringLiteral_2346);
    thunk_FUN_01ad9084(StringLiteral_2318);
    DAT_03ffdb71 = 1;
  }
  puVar4 = PTR_DAT_03da7b40;
  local_110 = 0;
  local_108 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_158 = 0;
  local_160 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_03b258d4;
  uVar16 = *(undefined4 *)(param_2 + 0x104);
  fVar17 = *(float *)(param_2 + 0x108);
  if (*(int *)(*(long *)PTR_DAT_03da7b40 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar18 = 0.0;
  uVar15 = FUN_038fa0a0(uVar16,0);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_03b258d4;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + 0x1d8);
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  pfVar10 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar14 = (float)uVar15 - *pfVar10;
  if ((fVar18 - pfVar10[2]) * (fVar18 - pfVar10[2]) +
      fVar14 * fVar14 + (fVar17 - pfVar10[1]) * (fVar17 - pfVar10[1]) < DAT_00b55084) {
    uVar15 = (ulong)*(uint *)(param_2 + 0x104);
    fVar17 = *(float *)(param_2 + 0x108);
  }
  else {
    uVar1 = 0x80000000;
    if (fVar18 != INFINITY) {
      uVar1 = (int)fVar18;
    }
    if (uVar1 != uVar2) {
      return;
    }
  }
  uVar16 = *(undefined4 *)(param_2 + 0x10c);
  fVar18 = *(float *)(param_2 + 0x110);
  iVar5 = FUN_038fa788(0);
  if (0 < (int)uVar2) {
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *(long *)puVar4;
    }
    lVar11 = **(long **)(lVar8 + 0xb8);
    if (lVar11 == 0) goto LAB_03b258d4;
    if ((int)uVar2 < *(int *)(lVar11 + 0x18)) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
        if (lVar11 == 0) goto LAB_03b258d4;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar8 = *(long *)(lVar11 + (ulong)uVar2 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_03b258d4;
      iVar5 = FUN_038fa00c(lVar8,0);
    }
  }
  puVar4 = StringLiteral_2346;
  if (*(int *)(*(long *)StringLiteral_2346 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ffd750 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_2346);
    DAT_03ffd750 = '\x01';
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar8 = *(long *)puVar4;
  }
  puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  plVar12 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x38);
  if (plVar12 == (long *)0x0) {
LAB_03b255ec:
    plVar12 = (long *)0x0;
  }
  else {
    bVar3 = *(byte *)(*(long *)
                       Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                     + 0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar3) goto LAB_03b255ec;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
       ) {
      plVar12 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(plVar12,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (plVar12 == (long *)0x0) goto LAB_03b258d4;
  lVar8 = plVar12[5];
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(lVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  plVar12 = (long *)plVar12[5];
  if (plVar12 == (long *)0x0) goto LAB_03b258d4;
  uVar6 = (**(code **)(*plVar12 + 0x2d8))(plVar12,param_2,*(undefined8 *)(*plVar12 + 0x2e0));
  plVar12 = (long *)FUN_03a93a3c(*(undefined8 *)(param_1 + 0x28),uVar6,0);
  if (plVar12 != (long *)0x0) {
    bVar3 = *(byte *)(*(long *)StringLiteral_2318 + 0x130);
    if (((bVar3 <= *(byte *)(*plVar12 + 0x130)) &&
        (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)StringLiteral_2318
        )) && (lVar8 = FUN_03ac0ca0(plVar12,0), lVar8 != *(long *)(param_1 + 0x28))) {
      return;
    }
  }
  puVar4 = StringLiteral_2351;
  if (*(int *)(*(long *)StringLiteral_2351 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar7 = FUN_03a7df84(uVar6,0);
  if (iVar7 == 0) {
LAB_03b25728:
    if (plVar12 == (long *)0x0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_03b258d4;
      uVar9 = FUN_03a933e4(uVar15,(float)iVar5 - fVar17,uVar16,-fVar18,*(long *)(param_1 + 0x28),
                           &local_108,&local_110,0,0);
      if ((uVar9 & 1) == 0) {
        return;
      }
      plVar12 = *(long **)(param_1 + 0x28);
      if (plVar12 == (long *)0x0) goto LAB_03b258d4;
      lVar8 = (**(code **)(*plVar12 + 0x418))
                        (local_108 & 0xffffffff,local_108._4_4_,plVar12,
                         *(undefined8 *)(*plVar12 + 0x420));
      if (lVar8 == 0) {
        return;
      }
    }
    lVar8 = *(long *)(param_1 + 0x28);
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar8 = FUN_03a7e148(uVar6,0);
    if (lVar8 == 0) goto LAB_03b25728;
    if (lVar8 != *(long *)(param_1 + 0x28)) {
      return;
    }
  }
  local_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  lStack_158 = 0;
  if (lVar8 == 0) {
    local_160 = 0;
  }
  else {
    local_160 = *(undefined8 *)(lVar8 + 0x160);
  }
  thunk_FUN_01b4f09c(&local_160);
  lStack_158 = param_1;
  thunk_FUN_01b4f09c((ulong)&local_160 | 8,param_1);
  uStack_120 = CONCAT44((int)uVar15,(undefined4)uStack_120);
  local_118 = CONCAT44(local_118._4_4_,fVar17);
  if (*(long *)(param_1 + 0x28) != 0) {
    local_118 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1d8),fVar17);
    memcpy(auStack_1b0,&local_160,0x50);
    if (param_3 != 0) {
      lVar11 = *(long *)PTR_DAT_03d86bd8;
      memcpy(auStack_100,auStack_1b0,0x50);
      lVar8 = *(long *)(param_3 + 0x10);
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(param_3 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar2 + 1;
          __dest = (void *)(lVar8 + (long)(int)uVar2 * 0x50 + 0x20);
          memcpy(__dest,auStack_100,0x50);
          thunk_FUN_01b4f09c(__dest,0);
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_b0,auStack_100,0x50);
          FUN_02b941a4(param_3,auStack_b0,uVar13);
        }
        return;
      }
    }
  }
LAB_03b258d4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


