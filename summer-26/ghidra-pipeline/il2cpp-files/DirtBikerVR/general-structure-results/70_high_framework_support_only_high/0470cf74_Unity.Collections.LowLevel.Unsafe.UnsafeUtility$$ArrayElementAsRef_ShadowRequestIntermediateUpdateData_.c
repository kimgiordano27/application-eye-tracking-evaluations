/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ArrayElementAsRef<ShadowRequestIntermediateUpdateData>
ENTRY_POINT: 0470cf74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<ShadowRequestIntermediateUpdateData>
          (long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined4 in_stack_00000020;
  long *in_stack_00000028;
  
  plVar1 = (long *)FUN_044459e0(*(undefined8 *)(param_1 + 0x18));
  if (plVar1 == (long *)0x0) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_Vector3f>:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))
                    (plVar1,*unaff_x20,(int)unaff_x20[1],0,0,*(undefined8 *)(*plVar1 + 0x1c0));
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    uVar7 = 1;
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
    ;
  }
  lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar4 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090();
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_0675ff58(uVar3,0);
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000008 = lVar4;
    uVar5 = thunk_FUN_03a9a6e8(&stack0x00000008,0);
    uVar2 = FUN_06769d78(uVar3,uVar5,0);
    if ((uVar2 & 1) == 0) goto LAB_0470d200;
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar4;
    uVar3 = thunk_FUN_03a9a6e8(&stack0x00000008,0);
    uVar2 = FUN_07d456b4(uVar3,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      uVar7 = 2;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar4;
    uVar3 = thunk_FUN_03a9a6e8(&stack0x00000008,0);
    if (*(int *)(*(long *)PTR_DAT_08492f60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08492f60);
    }
    plVar1 = (long *)FUN_07d36dfc(uVar3,0);
    if (plVar1 != (long *)0x0) {
      in_stack_00000008 = *unaff_x20;
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x20[1]);
      in_stack_00000028 =
           (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38),
                                      &stack0x00000008);
      lVar4 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08492fc8) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto FUN_0470d274;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar1,*(long *)PTR_DAT_08492fc8,1);
FUN_0470d274:
      (*(code *)*puVar6)(plVar1);
      plVar1 = in_stack_00000028;
      lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090(lVar4);
      }
      if (plVar1 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_Vector3f>;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar1);
      }
      plVar1 = (long *)thunk_FUN_03ac7604();
      uVar7 = 0;
      uVar3 = 1;
      lVar4 = plVar1[1];
      *unaff_x20 = *plVar1;
      *(int *)(unaff_x20 + 1) = (int)lVar4;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
  }
  else {
LAB_0470d200:
    if (*(int *)(*(long *)PTR_DAT_08492f60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar4 = FUN_046ee2c8(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar4 != 0) {
      FUN_046d4374();
      uVar7 = 0;
      uVar3 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
  }
  uVar3 = 0;
  uVar7 = 3;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>:
  *unaff_x19 = uVar7;
  return uVar3;
}


