/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03d50a80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long lVar8;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
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
  
  FUN_02fe925c();
  if (*(long *)(unaff_x22 + 0x38) == 0) {
    FUN_02feb320();
  }
  puVar1 = PTR_DAT_06f9a098;
  in_stack_00000130 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  do {
    uVar2 = FUN_06991d74();
    if ((uVar2 & 1) == 0) {
      FUN_03d54540();
      return;
    }
    uVar9 = unaff_x24[2];
    lVar5 = **(long **)(unaff_x22 + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    plVar3 = (long *)thunk_FUN_03010710(uVar9,lVar5);
    if (plVar3 != (long *)0x0) {
      in_stack_000000c0 = unaff_x24[2];
      in_stack_000000b8 = unaff_x24[1];
      in_stack_000000b0 = *unaff_x24;
      in_stack_00000140 = in_stack_000000b0;
      in_stack_00000148 = in_stack_000000b8;
      in_stack_00000150 = in_stack_000000c0;
      FUN_04f40aa0(&stack0x00000078);
      in_stack_00000118 = in_stack_00000080;
      in_stack_00000110 = in_stack_00000078;
      in_stack_00000128 = in_stack_00000090;
      in_stack_00000120 = in_stack_00000088;
      in_stack_00000130 = in_stack_00000098;
      lVar5 = **(long **)(unaff_x22 + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4(lVar5);
      }
      lVar8 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 == 0) goto LAB_03d50cc4;
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_03d50cac;
    }
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    plVar3 = (long *)thunk_FUN_03010710(uVar9,lVar5);
    if (plVar3 != (long *)0x0) {
      in_stack_00000150 = unaff_x24[2];
      in_stack_00000148 = unaff_x24[1];
      in_stack_00000140 = *unaff_x24;
      FUN_03989418(&stack0x00000078);
      in_stack_000000d8 = in_stack_00000080;
      in_stack_000000d0 = in_stack_00000078;
      in_stack_000000e8 = in_stack_00000090;
      in_stack_000000e0 = in_stack_00000088;
      in_stack_000000f8 = in_stack_000000a0;
      in_stack_000000f0 = in_stack_00000098;
      in_stack_00000100 = in_stack_000000a8;
      uVar10 = *unaff_x19;
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4(lVar5);
      }
      lVar8 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 == 0)
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<ConvertMeshJobData>
      ;
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_03d50d58;
    }
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    plVar3 = (long *)thunk_FUN_03010710(uVar9,lVar5);
    if (plVar3 != (long *)0x0) {
      in_stack_00000150 = unaff_x24[2];
      in_stack_00000148 = unaff_x24[1];
      in_stack_00000140 = *unaff_x24;
      FUN_04f40aa0(&stack0x00000078);
      in_stack_00000118 = in_stack_00000080;
      in_stack_00000110 = in_stack_00000078;
      in_stack_00000128 = in_stack_00000090;
      in_stack_00000120 = in_stack_00000088;
      in_stack_00000130 = in_stack_00000098;
      lVar5 = *plVar3;
      lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x98);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 == 0) goto LAB_03d50e08;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<float>;
    }
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    plVar3 = (long *)thunk_FUN_03010710(uVar9,lVar5);
    if (plVar3 != (long *)0x0) {
      in_stack_00000150 = unaff_x24[2];
      in_stack_00000148 = unaff_x24[1];
      in_stack_00000140 = *unaff_x24;
      FUN_03989418(&stack0x00000078);
      in_stack_000000d8 = in_stack_00000080;
      in_stack_000000d0 = in_stack_00000078;
      in_stack_000000e8 = in_stack_00000090;
      in_stack_000000e0 = in_stack_00000088;
      in_stack_000000f8 = in_stack_000000a0;
      in_stack_000000f0 = in_stack_00000098;
      in_stack_00000100 = in_stack_000000a8;
      lVar5 = *plVar3;
      uVar10 = *unaff_x19;
      lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0xa0);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 == 0) goto LAB_03d50ea4;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_03d50e8c;
    }
    plVar3 = (long *)thunk_FUN_03010710(uVar9,*(undefined8 *)puVar1);
  } while (plVar3 == (long *)0x0);
  in_stack_00000150 = unaff_x24[2];
  in_stack_00000148 = unaff_x24[1];
  in_stack_00000140 = *unaff_x24;
  FUN_04f40aa0(&stack0x00000078);
  in_stack_00000118 = in_stack_00000080;
  in_stack_00000110 = in_stack_00000078;
  in_stack_00000128 = in_stack_00000090;
  in_stack_00000120 = in_stack_00000088;
  in_stack_00000130 = in_stack_00000098;
  lVar5 = *plVar3;
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0xa8);
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_03d50f74;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  lVar5 = FUN_02feb5b8(plVar3);
LAB_03d50f74:
  lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
  pcVar6 = *(code **)(lVar5 + 8);

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<HashMapHelper<ulong>>>
  :
  (*pcVar6)(plVar3,&stack0x00000110);
  return;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_03d50cac:
    if (*(long *)(piVar7 + -2) == lVar5) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_03d50ebc;
    }
  }
LAB_03d50cc4:
  puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,lVar5,0);
FUN_03d50ebc:
  pcVar6 = (code *)*puVar4;
  goto 
  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<HashMapHelper<ulong>>>
  ;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_03d50d58:
    if (*(long *)(piVar7 + -2) == lVar5) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03d50ed0;
    }
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<ConvertMeshJobData>:
  puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,lVar5,0);
LAB_03d50ed0:
  pcVar6 = (code *)*puVar4;
  goto LAB_03d50f2c;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<float>:
    if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
      lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
      goto LAB_03d50ee8;
    }
  }
LAB_03d50e08:
  lVar5 = FUN_02feb5b8(plVar3);
LAB_03d50ee8:
  lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
  pcVar6 = *(code **)(lVar5 + 8);
  goto 
  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<HashMapHelper<ulong>>>
  ;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_03d50e8c:
    if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
      lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
      goto LAB_03d50f18;
    }
  }
LAB_03d50ea4:
  lVar5 = FUN_02feb5b8(plVar3);
LAB_03d50f18:
  lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
  pcVar6 = *(code **)(lVar5 + 8);
LAB_03d50f2c:
  (*pcVar6)(uVar10,plVar3,&stack0x000000d0);
  if (unaff_x21 != (long *)0x0) {
    uVar10 = (**(code **)(*unaff_x21 + 0x208))();
    *unaff_x19 = uVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


