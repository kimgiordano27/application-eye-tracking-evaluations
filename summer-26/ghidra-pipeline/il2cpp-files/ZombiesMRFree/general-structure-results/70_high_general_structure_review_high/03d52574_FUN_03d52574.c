/*
FUNCTION_NAME: FUN_03d52574
ENTRY_POINT: 03d52574
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_03d52574(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 *param_5,long param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((*(long *)(param_6 + 0x38) == 0) &&
     (FUN_02fe925c(PTR_DAT_06f9a098), *(long *)(param_6 + 0x38) == 0)) {
    FUN_02feb320(param_6);
  }
  puVar1 = PTR_DAT_06f9a098;
  local_90 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  do {
    uVar3 = FUN_06991d74(param_3,0);
    if ((uVar3 & 1) == 0) {
      FUN_03d546f8(param_1,param_2);
      return;
    }
    uVar10 = param_3[2];
    lVar6 = **(long **)(param_6 + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar4 = (long *)thunk_FUN_03010710(uVar10,lVar6);
    if (plVar4 != (long *)0x0) {
      local_100 = param_3[2];
      uStack_108 = param_3[1];
      local_110 = *param_3;
      local_80 = local_110;
      uStack_78 = uStack_108;
      local_70 = local_100;
      FUN_04f40f00(&local_148,param_1,&local_80,param_2,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x28));
      uStack_a8 = uStack_140;
      local_b0 = local_148;
      uStack_98 = uStack_130;
      uStack_a0 = local_138;
      local_90 = local_128;
      lVar6 = **(long **)(param_6 + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02feb2c4(lVar6);
      }
      lVar9 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 == 0) goto LAB_03d527fc;
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_03d527e4;
    }
    lVar6 = *(long *)(*(long *)(param_6 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar4 = (long *)thunk_FUN_03010710(uVar10,lVar6);
    if (plVar4 != (long *)0x0) {
      local_70 = param_3[2];
      uStack_78 = param_3[1];
      local_80 = *param_3;
      FUN_0398a688(&local_148,param_1,&local_80,param_2,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x60));
      uStack_e8 = uStack_140;
      local_f0 = local_148;
      uStack_d8 = uStack_130;
      local_e0 = local_138;
      uStack_c8 = uStack_120;
      local_d0 = local_128;
      local_c0 = local_118;
      uVar2 = *param_5;
      lVar6 = *(long *)(*(long *)(param_6 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02feb2c4(lVar6);
      }
      lVar9 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 == 0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<WeakAssetPrefabLoadRequest>;
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<VisibleLight>;
    }
    lVar6 = *(long *)(*(long *)(param_6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar4 = (long *)thunk_FUN_03010710(uVar10,lVar6);
    if (plVar4 != (long *)0x0) {
      local_70 = param_3[2];
      uStack_78 = param_3[1];
      local_80 = *param_3;
      FUN_04f40f00(&local_148,param_1,&local_80,param_2,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x28));
      uStack_a8 = uStack_140;
      local_b0 = local_148;
      uStack_98 = uStack_130;
      uStack_a0 = local_138;
      local_90 = local_128;
      lVar6 = *plVar4;
      lVar9 = *(long *)(*(long *)(param_6 + 0x38) + 0x98);
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 == 0)
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<BakeDependencies_GetComponentDependency>
      ;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>;
    }
    lVar6 = *(long *)(*(long *)(param_6 + 0x38) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar4 = (long *)thunk_FUN_03010710(uVar10,lVar6);
    if (plVar4 != (long *)0x0) {
      local_70 = param_3[2];
      uStack_78 = param_3[1];
      local_80 = *param_3;
      FUN_0398a688(&local_148,param_1,&local_80,param_2,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x60));
      uStack_e8 = uStack_140;
      local_f0 = local_148;
      uStack_d8 = uStack_130;
      local_e0 = local_138;
      uStack_c8 = uStack_120;
      local_d0 = local_128;
      local_c0 = local_118;
      lVar6 = *plVar4;
      uVar2 = *param_5;
      lVar9 = *(long *)(*(long *)(param_6 + 0x38) + 0xa0);
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 == 0) goto LAB_03d529dc;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_03d529c4;
    }
    plVar4 = (long *)thunk_FUN_03010710(uVar10,*(undefined8 *)puVar1);
  } while (plVar4 == (long *)0x0);
  local_70 = param_3[2];
  uStack_78 = param_3[1];
  local_80 = *param_3;
  FUN_04f40f00(&local_148,param_1,&local_80,param_2,
               *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x28));
  uStack_a8 = uStack_140;
  local_b0 = local_148;
  uStack_98 = uStack_130;
  uStack_a0 = local_138;
  local_90 = local_128;
  lVar6 = *plVar4;
  lVar9 = *(long *)(*(long *)(param_6 + 0x38) + 0xa8);
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityManager_RemapChunk>;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  lVar6 = FUN_02feb5b8(plVar4);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityManager_RemapChunk>:
  lVar6 = thunk_FUN_02fffafc(*(undefined8 *)(lVar6 + 8),lVar9);
  pcVar7 = *(code **)(lVar6 + 8);
LAB_03d52ac8:
  (*pcVar7)(plVar4,&local_b0,param_4,param_5,lVar6);
  return;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_03d527e4:
    if (*(long *)(piVar8 + -2) == lVar6) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_03d529f4;
    }
  }
LAB_03d527fc:
  puVar5 = (undefined8 *)FUN_02feb5b8(plVar4,lVar6,0);
FUN_03d529f4:
  pcVar7 = (code *)*puVar5;
  lVar6 = puVar5[1];
  goto LAB_03d52ac8;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<VisibleLight>:
    if (*(long *)(piVar8 + -2) == lVar6) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<ComponentSystemSorter_SystemElement>;
    }
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<WeakAssetPrefabLoadRequest>:
  puVar5 = (undefined8 *)FUN_02feb5b8(plVar4,lVar6,0);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<ComponentSystemSorter_SystemElement>:
  pcVar7 = (code *)*puVar5;
  lVar6 = puVar5[1];
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityDiffer_CreatedEntity>;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>:
    if (*(long *)(piVar8 + -2) == *(long *)(lVar9 + 0x20)) {
      lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<DotsSerialization_FileHeader>;
    }
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<BakeDependencies_GetComponentDependency>:
  lVar6 = FUN_02feb5b8(plVar4);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<DotsSerialization_FileHeader>:
  lVar6 = thunk_FUN_02fffafc(*(undefined8 *)(lVar6 + 8),lVar9);
  pcVar7 = *(code **)(lVar6 + 8);
  goto LAB_03d52ac8;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_03d529c4:
    if (*(long *)(piVar8 + -2) == *(long *)(lVar9 + 0x20)) {
      lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
      goto LAB_03d52a50;
    }
  }
LAB_03d529dc:
  lVar6 = FUN_02feb5b8(plVar4);
LAB_03d52a50:
  lVar6 = thunk_FUN_02fffafc(*(undefined8 *)(lVar6 + 8),lVar9);
  pcVar7 = *(code **)(lVar6 + 8);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityDiffer_CreatedEntity>:
  (*pcVar7)(plVar4,&local_f0,param_4,uVar2,lVar6);
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x208))(param_2,param_4,*(undefined8 *)(*param_2 + 0x210));
    *param_5 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


