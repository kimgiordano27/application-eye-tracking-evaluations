/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04b149ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04b14ae4) */
/* WARNING: Removing unreachable block (ram,0x04b14af8) */
/* WARNING: Removing unreachable block (ram,0x04b14b04) */
/* WARNING: Removing unreachable block (ram,0x04b14b14) */
/* WARNING: Removing unreachable block (ram,0x04b14b18) */
/* WARNING: Removing unreachable block (ram,0x04b14b20) */
/* WARNING: Removing unreachable block (ram,0x04b14b24) */
/* WARNING: Removing unreachable block (ram,0x04b14b38) */
/* WARNING: Removing unreachable block (ram,0x04b14b3c) */
/* WARNING: Removing unreachable block (ram,0x04b14b7c) */

long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  long in_x10;
  int *piVar7;
  uint *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  uint uVar8;
  undefined1 auVar9 [16];
  long in_stack_00000018;
  long *in_stack_00000028;
  
  do {
    piVar7 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        uVar8 = unaff_w26;
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<IndirectInstanceInfo>
        ;
      }
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_0406ae20(unaff_x21,param_3,0);
      uVar8 = unaff_w26;

      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<IndirectInstanceInfo>
      :
      auVar9 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      plVar2 = in_stack_00000028;
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      *(undefined1 (*) [16])(unaff_x25 + (long)(int)unaff_w24 * 0x10 + 0x20) = auVar9;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *in_stack_00000028;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto FUN_04b14964;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x23,0);
FUN_04b14964:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      plVar2 = in_stack_00000028;
      lVar4 = in_stack_00000018;
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = uVar8;
        if (in_stack_00000028 == (long *)0x0) {
          return in_stack_00000018;
        }
        lVar5 = *in_stack_00000028;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0)
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<TransformUpdatePacket>
        ;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ResourceUnversionedData>
        ;
      }
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (uVar8 == *(uint *)(in_stack_00000018 + 0x18)) {
        uVar1 = unaff_w22;
        if ((int)unaff_w22 <= (int)uVar8) {
          uVar1 = uVar8 + 1;
        }
        if (uVar8 << 1 <= unaff_w22) {
          uVar1 = uVar8 << 1;
        }
        FUN_0495a494(&stack0x00000018,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
      }
      unaff_x21 = in_stack_00000028;
      unaff_x25 = in_stack_00000018;
      unaff_w26 = uVar8 + 1;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_0406aaec(param_3);
      }
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_w24 = uVar8;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ResourceUnversionedData>
    :
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector3>
      ;
    }
  }

  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<TransformUpdatePacket>
  :
  puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08f65868,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector3>:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return lVar4;
}


