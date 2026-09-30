/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4f>
ENTRY_POINT: 04fc8404
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

long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4f>
               (long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint *unaff_x19;
  long unaff_x20;
  long *plVar7;
  uint uVar8;
  long *unaff_x23;
  uint uVar9;
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
  
                    /* try { // try from 04fc8404 to 050c840b has its CatchHandler @ 04fc84f0 */
                    /* try { // try from 04fc840c to 050c844b has its CatchHandler @ 04fc7e38 */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_040b1acc();
  }
  lVar1 = FUN_04077674(param_1,4);
  plVar7 = in_stack_00000088;
  in_stack_00000078 = lVar1;
  if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
        ;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(plVar7,lVar3,0);

  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>
  :
  (*(code *)*puVar2)(&stack0x00000020,plVar7,puVar2[1]);
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000058 = in_stack_00000038;
  in_stack_00000050 = in_stack_00000030;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(undefined8 *)(lVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(lVar1 + 0x20) = in_stack_00000020;
  *(undefined8 *)(lVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(lVar1 + 0x30) = in_stack_00000030;
  thunk_FUN_040ec700(lVar1 + 0x28,0);
  if (in_stack_00000088 != (long *)0x0) {
    uVar9 = 1;
    do {
      plVar7 = in_stack_00000088;
      lVar1 = *in_stack_00000088;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>
            ;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000088,*unaff_x23,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
      uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      lVar1 = in_stack_00000078;
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = uVar9;
        plVar7 = (long *)*in_stack_00000070;
        if (plVar7 == (long *)0x0)
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>;
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0)
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>
        ;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Quaternion>
        ;
      }
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (uVar9 == *(uint *)(in_stack_00000078 + 0x18)) {
        uVar8 = 0x7fefffff;
        if (0x7feffffe < (int)uVar9) {
          uVar8 = uVar9 + 1;
        }
        if (uVar9 << 1 < 0x7ff00000) {
          uVar8 = uVar9 << 1;
        }
        FUN_04da7be0(&stack0x00000078,uVar8,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
      }
      plVar7 = in_stack_00000088;
      lVar1 = in_stack_00000078;
      if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>
            ;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar7,lVar3,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
      (*(code *)*puVar2)(&stack0x00000020,plVar7,puVar2[1]);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar1 = lVar1 + (long)(int)uVar9 * 0x20;
      *(undefined8 *)(lVar1 + 0x28) = in_stack_00000028;
      *(undefined8 *)(lVar1 + 0x20) = in_stack_00000020;
      *(undefined8 *)(lVar1 + 0x38) = in_stack_00000038;
      *(undefined8 *)(lVar1 + 0x30) = in_stack_00000030;
      thunk_FUN_040ec700(lVar1 + 0x28,0);
      uVar9 = uVar9 + 1;
    } while (in_stack_00000088 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Quaternion>:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
    }
  }
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>:
  puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>:
  if (in_stack_00000068 == 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


