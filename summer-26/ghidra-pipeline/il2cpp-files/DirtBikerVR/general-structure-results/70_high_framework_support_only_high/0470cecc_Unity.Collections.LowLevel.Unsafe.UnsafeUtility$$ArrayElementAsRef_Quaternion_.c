/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ArrayElementAsRef<Quaternion>
ENTRY_POINT: 0470cecc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<Quaternion>(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  
  if (*(char *)(param_1 + 0xb) == '\0') {
LAB_0470d1f4:
    uVar4 = 0;
    uVar7 = 2;
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
    ;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar9 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_044459e0(*(undefined8 *)(lVar9 + 0x18));
    if (plVar2 == (long *)0x0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_Vector3f>;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x20,(int)unaff_x20[1],0,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar7 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
    lVar9 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar9 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar1 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_0675ff58(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090(lVar1);
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000008 = lVar1;
    uVar5 = thunk_FUN_03a9a6e8(&stack0x00000008,0);
    uVar3 = FUN_06769d78(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_0470d200;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar1;
    uVar4 = thunk_FUN_03a9a6e8(&stack0x00000008,0);
    uVar3 = FUN_07d456b4(uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_0470d1f4;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar1;
    uVar4 = thunk_FUN_03a9a6e8(&stack0x00000008,0);
    if (*(int *)(*(long *)PTR_DAT_08492f60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08492f60);
    }
    plVar2 = (long *)FUN_07d36dfc(uVar4,0);
    if (plVar2 != (long *)0x0) {
      in_stack_00000008 = *unaff_x20;
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x20[1]);
      in_stack_00000028 =
           (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38),
                                      &stack0x00000008);
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08492fc8) {
            puVar6 = (undefined8 *)(lVar1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto FUN_0470d274;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)PTR_DAT_08492fc8,1);
FUN_0470d274:
      (*(code *)*puVar6)(plVar2);
      plVar2 = in_stack_00000028;
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090(lVar1);
      }
      if (plVar2 == (long *)0x0) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_Vector3f>:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(*plVar2 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar2);
      }
      plVar2 = (long *)thunk_FUN_03ac7604();
      uVar7 = 0;
      uVar4 = 1;
      lVar1 = plVar2[1];
      *unaff_x20 = *plVar2;
      *(int *)(unaff_x20 + 1) = (int)lVar1;
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
    lVar1 = FUN_046ee2c8(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 != 0) {
      FUN_046d4374();
      uVar7 = 0;
      uVar4 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
  }
  uVar4 = 0;
  uVar7 = 3;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>:
  *unaff_x19 = uVar7;
  return uVar4;
}


