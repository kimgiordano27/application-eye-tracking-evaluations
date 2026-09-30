/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 04fc8410
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04fc86d4) */
/* WARNING: Removing unreachable block (ram,0x04fc86e8) */
/* WARNING: Removing unreachable block (ram,0x04fc86f4) */
/* WARNING: Removing unreachable block (ram,0x04fc8704) */
/* WARNING: Removing unreachable block (ram,0x04fc8708) */
/* WARNING: Removing unreachable block (ram,0x04fc8710) */
/* WARNING: Removing unreachable block (ram,0x04fc8714) */
/* WARNING: Removing unreachable block (ram,0x04fc8728) */
/* WARNING: Removing unreachable block (ram,0x04fc872c) */

long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint *unaff_x19;
  long unaff_x20;
  long *plVar8;
  uint uVar9;
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
  
                    /* catch() { ... } // from try @ 04fc7f5c with catch @ 04fc8410
                       catch() { ... } // from try @ 04fc8040 with catch @ 04fc8410 */
  uVar1 = FUN_040b1acc();
                    /* catch() { ... } // from try @ 04fc7f28 with catch @ 04fc8414 */
  lVar2 = FUN_04077674(uVar1,4);
  plVar8 = in_stack_00000088;
  in_stack_00000078 = lVar2;
  if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
        ;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar8,lVar4,0);

  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
  :
  (*(code *)*puVar3)(&stack0x00000020,plVar8,puVar3[1]);
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
      plVar8 = in_stack_00000088;
      lVar2 = *in_stack_00000088;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>
            ;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000088,*unaff_x23,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
      uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      lVar2 = in_stack_00000078;
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = uVar10;
        plVar8 = (long *)*in_stack_00000070;
        if (plVar8 == (long *)0x0)
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>;
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0)
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>
        ;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Quaternion>
        ;
      }
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (uVar10 == *(uint *)(in_stack_00000078 + 0x18)) {
        uVar9 = 0x7fefffff;
        if (0x7feffffe < (int)uVar10) {
          uVar9 = uVar10 + 1;
        }
        if (uVar10 << 1 < 0x7ff00000) {
          uVar9 = uVar10 << 1;
        }
        FUN_04da7be0(&stack0x00000078,uVar9,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
      }
      plVar8 = in_stack_00000088;
      lVar2 = in_stack_00000078;
      if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>
            ;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar8,lVar4,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
      (*(code *)*puVar3)(&stack0x00000020,plVar8,puVar3[1]);
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
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Quaternion>:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
    }
  }
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>:
  puVar3 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>:
  if (in_stack_00000068 == 0) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


