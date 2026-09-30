/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Equality
ENTRY_POINT: 03200b14
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

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Equality
               (long param_1,undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint in_w9;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  uStack0000000000000028 = param_2._8_8_;
  uStack0000000000000020 = param_2._0_8_;
  do {
    uStack0000000000000030 = in_stack_00000050;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(param_1 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    param_1 = param_1 + (long)(int)in_w9 * (long)unaff_w24;
    *(undefined4 *)(param_1 + 0x30) = in_stack_00000050;
    *(undefined8 *)(param_1 + 0x28) = uStack0000000000000028;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000020;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03200a38;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03200a38:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_03200b94;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03200ab0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03200ab0:
    (*(code *)*puVar1)(&stack0x00000020);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = uStack0000000000000020;
    in_stack_00000050 = uStack0000000000000030;
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    in_w9 = *(uint *)(unaff_x21 + 0x18);
    if (in_w9 == *(uint *)(param_1 + 0x18)) {
      Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__CopySafe();
      param_1 = *(long *)(unaff_x21 + 0x10);
      in_w9 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = in_w9 + 1;
    uStack0000000000000020 = in_stack_00000040;
    uStack0000000000000028 = in_stack_00000048;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03200bb0;
    }
  }
LAB_03200b94:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03200bb0:
  (*(code *)*puVar1)();
  return;
}


