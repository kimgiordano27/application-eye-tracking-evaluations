/*
FUNCTION_NAME: FUN_063b7af8
ENTRY_POINT: 063b7af8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_063b7af8(float param_1,float param_2,undefined4 param_3,long *param_4,int *param_5,
                 undefined8 *param_6,undefined4 *param_7,undefined8 *param_8,undefined4 *param_9,
                 undefined8 *param_10,undefined4 *param_11,float *param_12)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  uint local_b4;
  long local_b0 [4];
  int local_8c;
  undefined8 local_88;
  
  puVar9 = PTR_DAT_06d38278;
  if ((DAT_071cd540 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d38278);
    FUN_02f07e70(System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_ArraySegment<byte>>_TypeInfo);
    FUN_02f07e70(System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_float>_TypeInfo);
    FUN_02f07e70(System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo);
    FUN_02f07e70(System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
    FUN_02f07e70(System_Runtime_InteropServices_GuidAttribute_var);
    DAT_071cd540 = 1;
  }
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b4 = 0;
  *param_12 = 0.0;
  puVar12 = System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo;
  puVar11 = System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo;
  local_88 = 0;
  local_8c = 0;
  iVar7 = *param_5;
  lVar16 = *(long *)puVar9;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar16 = *(long *)puVar9;
  }
  puVar10 = System_Runtime_InteropServices_GuidAttribute_var;
  FUN_0421da18(local_b0 + 2,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 4),param_3,1,
               *(undefined8 *)puVar12);
  FUN_04224550(local_b0,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10),param_3,1,
               *(undefined8 *)puVar11);
  FUN_0631d21c(*param_8,param_8[1],*param_9,*param_10,param_10[1],*param_11,local_b0,&local_8c,
               param_12,&local_88,(long)&local_88 + 4,0);
  if (param_1 != 0.0) {
    lVar16 = *(long *)puVar10;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar16 = *(long *)puVar10;
    }
    fVar21 = **(float **)(lVar16 + 0xb8);
    fVar20 = (*(float **)(lVar16 + 0xb8))[1];
    if (param_1 <= fVar20 && (uint)ABS(param_1) < 0x7f800001) {
      fVar20 = param_1;
    }
    bVar14 = true;
    if (((uint)ABS(fVar20) < 0x7f800001) && (bVar14 = false, !NAN(fVar20) && !NAN(fVar21))) {
      bVar14 = fVar20 < fVar21;
    }
    param_1 = fVar21;
    if (!bVar14) {
      param_1 = fVar20;
    }
  }
  uVar15 = 1;
  uVar13 = 0;
  fVar20 = param_1 * *param_12;
  if (param_1 * *param_12 <= param_2 && (uint)ABS(param_2) < 0x7f800001) {
    fVar20 = param_2;
  }
  do {
    do {
      uVar17 = uVar13;
      if ((uVar15 & (uVar17 ^ 0xffffffff) & 1) == 0) goto LAB_063b7f44;
      if (0 < local_8c) {
        lVar16 = 0;
        lVar19 = 0x24;
        do {
          fVar21 = *(float *)(local_b0[0] + lVar19);
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (fVar20 < fVar21) goto LAB_063b7d4c;
          lVar16 = lVar16 + 1;
          lVar19 = lVar19 + 0x34;
        } while (lVar16 < local_8c);
      }
      lVar16 = 0xffffffff;
LAB_063b7d4c:
      uVar13 = 1;
    } while ((int)lVar16 == -1);
    lVar16 = local_b0[0] + (long)(int)lVar16 * 0x34;
    uVar23 = *(undefined4 *)(lVar16 + 0x18);
    uVar22 = *(undefined4 *)(lVar16 + 0x1c);
    uVar24 = *(undefined4 *)(lVar16 + 0x20);
    local_b4 = 0;
    lVar16 = *param_4;
    lVar19 = param_4[1];
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_063b76ac(uVar23,uVar22,uVar24,lVar16,lVar19);
    uVar18 = (ulong)local_b4;
    if (local_b4 == 0) {
      iVar8 = *param_5;
      *param_5 = iVar8 + 1;
      puVar2 = (undefined4 *)(*param_4 + (long)iVar8 * 8);
      *puVar2 = uVar23;
      puVar2[1] = uVar22;
    }
    else if (0 < (int)local_b4) {
      lVar16 = 0;
      do {
        puVar1 = (undefined8 *)(local_b0[2] + lVar16);
        uStack_c8 = puVar1[1];
        local_d0 = *puVar1;
        local_c0 = *(undefined4 *)(puVar1 + 2);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uStack_e8 = uStack_c8;
        local_f0 = local_d0;
        local_e0 = local_c0;
        FUN_063b7904(param_4,param_5,param_6,param_7,&local_f0);
        lVar16 = lVar16 + 0x14;
      } while (uVar18 * 0x14 - lVar16 != 0);
    }
    *param_11 = 0;
    *param_9 = 0;
    uVar15 = FUN_063b7f98(param_3,*param_4,param_4[1],*param_5,*param_6,param_6[1],*param_7,param_8,
                          param_9,param_10,param_11);
    local_8c = 0;
    if ((uVar15 & 1) != 0) {
      uVar3 = *param_8;
      uVar5 = param_8[1];
      uVar22 = *param_9;
      uVar4 = *param_10;
      uVar6 = param_10[1];
      uVar23 = *param_11;
      if (*(int *)(*(long *)PTR_DAT_06d38278 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0631d21c(uVar3,uVar5,uVar22,uVar4,uVar6,uVar23,local_b0,&local_8c,param_12,&local_88,
                   (long)&local_88 + 4,0);
    }
    lVar16 = *(long *)puVar10;
    iVar8 = *param_5;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar16 = *(long *)puVar10;
    }
    uVar13 = uVar17;
  } while (iVar8 - iVar7 <= *(int *)(*(long *)(lVar16 + 0xb8) + 8));
LAB_063b7f44:
  FUN_0422489c(local_b0,*(undefined8 *)
                         System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_float>_TypeInfo);
  FUN_0421dd3c(local_b0 + 2,
               *(undefined8 *)
                System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_ArraySegment<byte>>_TypeInfo);
  return uVar17;
}


