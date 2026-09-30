/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 03200afc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03200bec) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  do {
    Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__CopySafe();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    do {
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000030 = in_stack_00000050;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar3 = lVar3 + (long)(int)uVar4 * (long)unaff_w24;
      *(undefined4 *)(lVar3 + 0x30) = in_stack_00000050;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_00000048;
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000040;
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03200a38;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03200a38:
      uVar5 = (*(code *)*puVar1)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_03200b94;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03200b7c;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar2 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03200ab0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03200ab0:
      (*(code *)*puVar1)(&stack0x00000020);
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000030;
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = *(uint *)(unaff_x21 + 0x18);
    } while (uVar4 != *(uint *)(lVar3 + 0x18));
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03200b7c:
    if (*(long *)(piVar6 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03200bb0;
    }
  }
LAB_03200b94:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03200bb0:
  (*(code *)*puVar1)();
  return;
}


