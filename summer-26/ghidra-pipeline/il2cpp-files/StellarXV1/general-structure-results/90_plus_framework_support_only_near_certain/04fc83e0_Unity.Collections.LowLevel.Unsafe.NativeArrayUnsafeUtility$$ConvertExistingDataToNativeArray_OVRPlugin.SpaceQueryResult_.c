/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04fc83e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *in_x10;
  int *piVar6;
  uint *unaff_x19;
  long unaff_x20;
  long *plVar7;
  uint uVar8;
  int iVar9;
  long *unaff_x23;
  uint uVar10;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  long in_stack_00000078;
  long *in_stack_00000088;
  
  uVar1 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = FUN_04077674(lVar2,4);
    plVar7 = in_stack_00000088;
    in_stack_00000078 = lVar2;
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    lVar5 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
          ;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,lVar4,0);

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
    :
    (*(code *)*puVar3)(&stack0x00000020,plVar7,puVar3[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000020;
    *(undefined8 *)(lVar2 + 0x38) = in_stack_00000038;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000030;
    thunk_FUN_040ec700(lVar2 + 0x28,0);
    if (in_stack_00000088 != (long *)0x0) {
      uVar10 = 1;
      do {
        plVar7 = in_stack_00000088;
        lVar2 = *in_stack_00000088;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000088,*unaff_x23,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
        uVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
        if ((uVar1 & 1) == 0) {
          *unaff_x19 = uVar10;
          iVar9 = 0xb;
          lVar2 = in_stack_00000078;
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<NativePassData>
          ;
        }
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (uVar10 == *(uint *)(in_stack_00000078 + 0x18)) {
          uVar8 = 0x7fefffff;
          if (0x7feffffe < (int)uVar10) {
            uVar8 = uVar10 + 1;
          }
          if (uVar10 << 1 < 0x7ff00000) {
            uVar8 = uVar10 << 1;
          }
          FUN_04da7be0(&stack0x00000078,uVar8,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
        }
        plVar7 = in_stack_00000088;
        lVar2 = in_stack_00000078;
        if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_040b1acc(lVar4);
        }
        lVar5 = *plVar7;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>
              ;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(plVar7,lVar4,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
        (*(code *)*puVar3)(&stack0x00000020,plVar7,puVar3[1]);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar2 = lVar2 + (long)(int)uVar10 * 0x20;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar2 + 0x38) = in_stack_00000038;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000030;
        thunk_FUN_040ec700(lVar2 + 0x28,0);
        uVar10 = uVar10 + 1;
      } while (in_stack_00000088 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = 0;
  iVar9 = 3;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<NativePassData>:
  plVar7 = (long *)*in_stack_00000070;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  if (in_stack_00000068 == 0) {
    if ((iVar9 == 3) || (iVar9 == 0)) {
      *unaff_x19 = 0;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
      lVar2 = *(long *)(lVar4 + 0x38);
      if (lVar2 == 0) {
        FUN_040b1b28(lVar4);
        lVar2 = *(long *)(lVar4 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      lVar2 = **(long **)(lVar2 + 0xb8);
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


