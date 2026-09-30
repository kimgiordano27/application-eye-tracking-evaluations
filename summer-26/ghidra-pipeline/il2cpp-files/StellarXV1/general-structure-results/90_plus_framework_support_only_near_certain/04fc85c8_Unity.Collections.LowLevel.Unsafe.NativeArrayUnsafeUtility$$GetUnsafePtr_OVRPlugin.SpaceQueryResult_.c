/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04fc85c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
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

long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  uint *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  uint uVar8;
  long unaff_x26;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  long in_stack_00000078;
  long *in_stack_00000088;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      uVar8 = unaff_w25;
      goto 
      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_040b1e00(unaff_x21,param_3,0);
        uVar8 = unaff_w25;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<DrawBatch>:
        (*(code *)*puVar2)(&stack0x00000020,unaff_x21,puVar2[1]);
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar3 = unaff_x26 + (long)(int)unaff_w24 * 0x20;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000038;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
        thunk_FUN_040ec700(lVar3 + 0x28,0);
        plVar7 = in_stack_00000088;
        if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar3 = *in_stack_00000088;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000088,*unaff_x23,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<Int32Enum>:
        uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        lVar3 = in_stack_00000078;
        if ((uVar5 & 1) == 0) {
          *unaff_x19 = uVar8;
          plVar7 = (long *)*in_stack_00000070;
          if (plVar7 == (long *)0x0)
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>;
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0)
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>
          ;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto 
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Quaternion>
          ;
        }
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (uVar8 == *(uint *)(in_stack_00000078 + 0x18)) {
          uVar1 = unaff_w22;
          if ((int)unaff_w22 <= (int)uVar8) {
            uVar1 = uVar8 + 1;
          }
          if (uVar8 << 1 <= unaff_w22) {
            uVar1 = uVar8 << 1;
          }
          FUN_04da7be0(&stack0x00000078,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
        }
        unaff_x21 = in_stack_00000088;
        unaff_x26 = in_stack_00000078;
        unaff_w25 = uVar8 + 1;
        if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
        if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_040b1acc(param_3);
        }
        param_1 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_w24 = uVar8;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Quaternion>:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>;
    }
  }
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ShaderTagId>:
  puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092860c0,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<uint>:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<VBones>:
  if (in_stack_00000068 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  return lVar3;
}


