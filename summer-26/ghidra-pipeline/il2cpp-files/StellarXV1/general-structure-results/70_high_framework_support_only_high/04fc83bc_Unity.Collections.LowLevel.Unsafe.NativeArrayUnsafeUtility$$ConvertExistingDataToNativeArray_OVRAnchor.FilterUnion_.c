/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRAnchor.FilterUnion>
ENTRY_POINT: 04fc83bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRAnchor_FilterUnion>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
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
  
                    /* catch() { ... } // from try @ 04fc8388 with catch @ 04fc83bc */
                    /* catch() { ... } // from try @ 04fc7fb4 with catch @ 04fc83c0 */
  while (in_x11 != param_3) {
                    /* catch() { ... } // from try @ 04fc81b4 with catch @ 04fc83c4 */
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_040b1e00();
      goto 
      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
      ;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);

  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
  :
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = FUN_04077674(lVar3,4);
    plVar7 = in_stack_00000088;
    in_stack_00000078 = lVar3;
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
          ;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar7,lVar4,0);

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
    :
    (*(code *)*puVar1)(&stack0x00000020,plVar7,puVar1[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000038;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
    thunk_FUN_040ec700(lVar3 + 0x28,0);
    if (in_stack_00000088 != (long *)0x0) {
      uVar10 = 1;
      do {
        plVar7 = in_stack_00000088;
        lVar3 = *in_stack_00000088;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_040b1e00(in_stack_00000088,*unaff_x23,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
        uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        if ((uVar2 & 1) == 0) {
          *unaff_x19 = uVar10;
          iVar9 = 0xb;
          lVar3 = in_stack_00000078;
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
        lVar3 = in_stack_00000078;
        if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_040b1acc(lVar4);
        }
        lVar5 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar4) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>
              ;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_040b1e00(plVar7,lVar4,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
        (*(code *)*puVar1)(&stack0x00000020,plVar7,puVar1[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar3 = lVar3 + (long)(int)uVar10 * 0x20;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000038;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
        thunk_FUN_040ec700(lVar3 + 0x28,0);
        uVar10 = uVar10 + 1;
      } while (in_stack_00000088 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = 0;
  iVar9 = 3;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<NativePassData>:
  plVar7 = (long *)*in_stack_00000070;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
    (*(code *)*puVar1)(plVar7,puVar1[1]);
  }
  if (in_stack_00000068 == 0) {
    if ((iVar9 == 3) || (iVar9 == 0)) {
      *unaff_x19 = 0;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
      lVar3 = *(long *)(lVar4 + 0x38);
      if (lVar3 == 0) {
        FUN_040b1b28(lVar4);
        lVar3 = *(long *)(lVar4 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


