/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4f>
ENTRY_POINT: 04b148e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
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

long Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4f>
               (long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar8;
  long *unaff_x23;
  uint uVar9;
  undefined1 auVar10 [16];
  long in_stack_00000018;
  long *in_stack_00000028;
  
  auVar10 = (**(code **)(param_1 + 0x138))();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(int *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  *(undefined1 (*) [16])(unaff_x21 + 0x20) = auVar10;
  if (in_stack_00000028 != (long *)0x0) {
    uVar9 = 1;
    do {
      plVar1 = in_stack_00000028;
      lVar4 = *in_stack_00000028;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto FUN_04b14964;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x23,0);
FUN_04b14964:
      uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      plVar1 = in_stack_00000028;
      lVar4 = in_stack_00000018;
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = uVar9;
        if (in_stack_00000028 == (long *)0x0) {
          return in_stack_00000018;
        }
        lVar3 = *in_stack_00000028;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 == 0)
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<TransformUpdatePacket>
        ;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto 
        Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ResourceUnversionedData>
        ;
      }
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (uVar9 == *(uint *)(in_stack_00000018 + 0x18)) {
        uVar8 = 0x7fefffff;
        if (0x7feffffe < (int)uVar9) {
          uVar8 = uVar9 + 1;
        }
        if (uVar9 << 1 < 0x7ff00000) {
          uVar8 = uVar9 << 1;
        }
        FUN_0495a494(&stack0x00000018,uVar8,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
      }
      plVar1 = in_stack_00000028;
      lVar4 = in_stack_00000018;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0406aaec(lVar3);
      }
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<IndirectInstanceInfo>
            ;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar3,0);

      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<IndirectInstanceInfo>
      :
      auVar10 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      *(undefined1 (*) [16])(lVar4 + (long)(int)uVar9 * 0x10 + 0x20) = auVar10;
      uVar9 = uVar9 + 1;
    } while (in_stack_00000028 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<ResourceUnversionedData>
    :
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector3>
      ;
    }
  }

  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<TransformUpdatePacket>
  :
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08f65868,0);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector3>:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return lVar4;
}


