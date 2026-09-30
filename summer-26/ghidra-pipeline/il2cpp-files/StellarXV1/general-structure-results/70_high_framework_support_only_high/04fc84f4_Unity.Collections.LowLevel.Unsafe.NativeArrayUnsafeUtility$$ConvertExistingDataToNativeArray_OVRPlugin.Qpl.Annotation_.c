/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 04fc84f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
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

long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  int *piVar7;
  uint *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar8;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  long in_stack_00000078;
  long *in_stack_00000088;
  
  do {
                    /* catch() { ... } // from try @ 04fc8460 with catch @ 04fc84f4
                       catch() { ... } // from try @ 04fc84a8 with catch @ 04fc84f4 */
    if (in_x9 != 0) {
                    /* try { // try from 04fc84f8 to 050c85df has its CatchHandler @ 04fc84f8
                       catch() { ... } // from try @ 04fc84f8 with catch @ 04fc84f8
                       catch() { ... } // from try @ 04fc88f4 with catch @ 04fc84f8
                       catch() { ... } // from try @ 04fc89fc with catch @ 04fc84f8
                       catch() { ... } // from try @ 04fc8a54 with catch @ 04fc84f8
                       catch() { ... } // from try @ 04fc8abc with catch @ 04fc84f8
                       catch() { ... } // from try @ 04fc8b14 with catch @ 04fc84f8
                       catch() { ... } // from try @ 04fc8b68 with catch @ 04fc84f8
                       catch() { ... } // from try @ 04fc8b94 with catch @ 04fc84f8 */
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(unaff_x21,param_3,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
    uVar4 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    lVar1 = in_stack_00000078;
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = unaff_w24;
      plVar8 = (long *)*in_stack_00000070;
      if (plVar8 == (long *)0x0)
      goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>;
      lVar5 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 == 0)
      goto 
      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (unaff_w24 == *(uint *)(in_stack_00000078 + 0x18)) {
      uVar2 = unaff_w22;
      if ((int)unaff_w22 <= (int)unaff_w24) {
        uVar2 = unaff_w24 + 1;
      }
      if (unaff_w24 << 1 <= unaff_w22) {
        uVar2 = unaff_w24 << 1;
      }
      FUN_04da7be0(&stack0x00000078,uVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
    }
    plVar8 = in_stack_00000088;
    lVar1 = in_stack_00000078;
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>
          ;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar8,lVar5,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
    (*(code *)*puVar3)(&stack0x00000020,plVar8,puVar3[1]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar1 = lVar1 + (long)(int)unaff_w24 * 0x20;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000020;
    *(undefined8 *)(lVar1 + 0x38) = in_stack_00000038;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000030;
    thunk_FUN_040ec700(lVar1 + 0x28,0);
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    param_1 = *in_stack_00000088;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000088;
    unaff_w24 = unaff_w24 + 1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
    }
  }
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>:
  puVar3 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>:
  if (in_stack_00000068 == 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


