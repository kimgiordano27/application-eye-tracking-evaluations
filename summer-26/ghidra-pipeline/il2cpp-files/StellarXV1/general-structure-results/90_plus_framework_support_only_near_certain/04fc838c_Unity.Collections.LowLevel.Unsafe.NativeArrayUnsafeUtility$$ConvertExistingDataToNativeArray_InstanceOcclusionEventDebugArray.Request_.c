/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<InstanceOcclusionEventDebugArray.Request>
ENTRY_POINT: 04fc838c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<InstanceOcclusionEventDebugArray_Request>
               (undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint *unaff_x19;
  long unaff_x20;
  long *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long lStack0000000000000068;
  undefined8 *puStack0000000000000070;
  long in_stack_00000078;
  long *in_stack_00000088;
  
  puVar1 = PTR_DAT_092860c8;
                    /* try { // try from 04fc838c to 050c838f has its CatchHandler @ 04fc83d0 */
  lStack0000000000000068 = 0;
                    /* try { // try from 04fc8390 to 050c8393 has its CatchHandler @ 04fc83b4 */
  puStack0000000000000070 = param_1;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
                    /* catch() { ... } // from try @ 04fc8370 with catch @ 04fc8394 */
  lVar4 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c8) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
        ;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092860c8,0);

  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
  :
  uVar6 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if ((uVar6 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = FUN_04077674(lVar4,4);
    plVar8 = in_stack_00000088;
    in_stack_00000078 = lVar4;
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
          ;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar8,lVar3,0);

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
    :
    (*(code *)*puVar2)(&stack0x00000020,plVar8,puVar2[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000020;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000038;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000030;
    thunk_FUN_040ec700(lVar4 + 0x28,0);
    if (in_stack_00000088 != (long *)0x0) {
      uVar11 = 1;
      do {
        plVar8 = in_stack_00000088;
        lVar4 = *in_stack_00000088;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000088,*(long *)puVar1,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
        uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = uVar11;
          iVar10 = 0xb;
          lVar4 = in_stack_00000078;
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<NativePassData>
          ;
        }
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (uVar11 == *(uint *)(in_stack_00000078 + 0x18)) {
          uVar9 = 0x7fefffff;
          if (0x7feffffe < (int)uVar11) {
            uVar9 = uVar11 + 1;
          }
          if (uVar11 << 1 < 0x7ff00000) {
            uVar9 = uVar11 << 1;
          }
          FUN_04da7be0(&stack0x00000078,uVar9,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
        }
        plVar8 = in_stack_00000088;
        lVar4 = in_stack_00000078;
        if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_040b1acc(lVar3);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>
              ;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(plVar8,lVar3,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
        (*(code *)*puVar2)(&stack0x00000020,plVar8,puVar2[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar4 = lVar4 + (long)(int)uVar11 * 0x20;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar4 + 0x38) = in_stack_00000038;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_00000030;
        thunk_FUN_040ec700(lVar4 + 0x28,0);
        uVar11 = uVar11 + 1;
      } while (in_stack_00000088 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = 0;
  iVar10 = 3;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<NativePassData>:
  plVar8 = (long *)*puStack0000000000000070;
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
  if (lStack0000000000000068 == 0) {
    if ((iVar10 == 3) || (iVar10 == 0)) {
      *unaff_x19 = 0;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
      lVar4 = *(long *)(lVar3 + 0x38);
      if (lVar4 == 0) {
        FUN_040b1b28(lVar3);
        lVar4 = *(long *)(lVar3 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


