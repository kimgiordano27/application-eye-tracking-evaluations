/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<RequestSceneHeader>
ENTRY_POINT: 03d526b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<RequestSceneHeader>(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long lVar8;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 uVar9;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  
  while (param_1 == (long *)0x0) {
    uVar6 = FUN_06991d74();
    if ((uVar6 & 1) == 0) {
      FUN_03d546f8();
      return;
    }
    uVar9 = unaff_x24[2];
    lVar4 = **(long **)(unaff_x22 + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    param_1 = (long *)thunk_FUN_03010710(uVar9,lVar4);
    if (param_1 != (long *)0x0) {
      in_stack_000000c0 = unaff_x24[2];
      in_stack_000000b8 = unaff_x24[1];
      in_stack_000000b0 = *unaff_x24;
      in_stack_00000140 = in_stack_000000b0;
      in_stack_00000148 = in_stack_000000b8;
      in_stack_00000150 = in_stack_000000c0;
      FUN_04f40f00(&stack0x00000078);
      in_stack_00000128 = *(undefined8 *)(unaff_x27 + 0x18);
      in_stack_00000120 = *(undefined8 *)(unaff_x27 + 0x10);
      in_stack_00000118 = in_stack_00000080;
      in_stack_00000110 = in_stack_00000078;
      in_stack_00000130 = in_stack_00000098;
      lVar4 = **(long **)(unaff_x22 + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4(lVar4);
      }
      lVar8 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 == 0) goto LAB_03d527fc;
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_03d527e4;
    }
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    plVar2 = (long *)thunk_FUN_03010710(uVar9,lVar4);
    if (plVar2 != (long *)0x0) {
      in_stack_00000150 = unaff_x24[2];
      in_stack_00000148 = unaff_x24[1];
      in_stack_00000140 = *unaff_x24;
      FUN_0398a688(&stack0x00000078);
      in_stack_000000e8 = *(undefined8 *)(unaff_x27 + 0x18);
      in_stack_000000e0 = *(undefined8 *)(unaff_x27 + 0x10);
      in_stack_000000f8 = *(undefined8 *)(unaff_x27 + 0x28);
      in_stack_000000f0 = *(undefined8 *)(unaff_x27 + 0x20);
      in_stack_000000d8 = in_stack_00000080;
      in_stack_000000d0 = in_stack_00000078;
      in_stack_00000100 = in_stack_000000a8;
      lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4(lVar4);
      }
      lVar8 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 == 0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<WeakAssetPrefabLoadRequest>;
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<VisibleLight>;
    }
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    param_1 = (long *)thunk_FUN_03010710(uVar9,lVar4);
    if (param_1 != (long *)0x0) {
      in_stack_00000150 = unaff_x24[2];
      in_stack_00000148 = unaff_x24[1];
      in_stack_00000140 = *unaff_x24;
      FUN_04f40f00(&stack0x00000078);
      in_stack_00000128 = *(undefined8 *)(unaff_x27 + 0x18);
      in_stack_00000120 = *(undefined8 *)(unaff_x27 + 0x10);
      in_stack_00000118 = in_stack_00000080;
      in_stack_00000110 = in_stack_00000078;
      in_stack_00000130 = in_stack_00000098;
      lVar4 = *param_1;
      lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x98);
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0)
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<BakeDependencies_GetComponentDependency>
      ;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>;
    }
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    plVar2 = (long *)thunk_FUN_03010710(uVar9,lVar4);
    if (plVar2 != (long *)0x0) {
      in_stack_00000150 = unaff_x24[2];
      in_stack_00000148 = unaff_x24[1];
      in_stack_00000140 = *unaff_x24;
      FUN_0398a688(&stack0x00000078);
      in_stack_000000e8 = *(undefined8 *)(unaff_x27 + 0x18);
      in_stack_000000e0 = *(undefined8 *)(unaff_x27 + 0x10);
      in_stack_000000f8 = *(undefined8 *)(unaff_x27 + 0x28);
      in_stack_000000f0 = *(undefined8 *)(unaff_x27 + 0x20);
      in_stack_000000d8 = in_stack_00000080;
      in_stack_000000d0 = in_stack_00000078;
      in_stack_00000100 = in_stack_000000a8;
      lVar4 = *plVar2;
      lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0xa0);
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03d529dc;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_03d529c4;
    }
    param_1 = (long *)thunk_FUN_03010710(uVar9,*unaff_x28);
  }
  in_stack_00000150 = unaff_x24[2];
  in_stack_00000148 = unaff_x24[1];
  in_stack_00000140 = *unaff_x24;
  FUN_04f40f00(&stack0x00000078);
  in_stack_00000128 = *(undefined8 *)(unaff_x27 + 0x18);
  in_stack_00000120 = *(undefined8 *)(unaff_x27 + 0x10);
  in_stack_00000118 = in_stack_00000080;
  in_stack_00000110 = in_stack_00000078;
  in_stack_00000130 = in_stack_00000098;
  lVar4 = *param_1;
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0xa8);
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityManager_RemapChunk>;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar4 = FUN_02feb5b8(param_1);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityManager_RemapChunk>:
  lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar8);
  pcVar5 = *(code **)(lVar4 + 8);
LAB_03d52ac8:
  (*pcVar5)(param_1,&stack0x00000110);
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03d527e4:
    if (*(long *)(piVar7 + -2) == lVar4) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_03d529f4;
    }
  }
LAB_03d527fc:
  puVar3 = (undefined8 *)FUN_02feb5b8(param_1,lVar4,0);
FUN_03d529f4:
  pcVar5 = (code *)*puVar3;
  goto LAB_03d52ac8;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<VisibleLight>:
    if (*(long *)(piVar7 + -2) == lVar4) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<ComponentSystemSorter_SystemElement>;
    }
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<WeakAssetPrefabLoadRequest>:
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,lVar4,0);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<ComponentSystemSorter_SystemElement>:
  pcVar5 = (code *)*puVar3;
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityDiffer_CreatedEntity>;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>:
    if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
      lVar4 = lVar4 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<DotsSerialization_FileHeader>;
    }
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<BakeDependencies_GetComponentDependency>:
  lVar4 = FUN_02feb5b8(param_1);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<DotsSerialization_FileHeader>:
  lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar8);
  pcVar5 = *(code **)(lVar4 + 8);
  goto LAB_03d52ac8;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03d529c4:
    if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
      lVar4 = lVar4 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
      goto LAB_03d52a50;
    }
  }
LAB_03d529dc:
  lVar4 = FUN_02feb5b8(plVar2);
LAB_03d52a50:
  lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar8);
  pcVar5 = *(code **)(lVar4 + 8);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<EntityDiffer_CreatedEntity>:
  (*pcVar5)(plVar2,&stack0x000000d0);
  if (unaff_x21 != (long *)0x0) {
    uVar1 = (**(code **)(*unaff_x21 + 0x208))();
    *unaff_x19 = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


