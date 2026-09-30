/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 0234489c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0234496c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint in_w9;
  ulong uVar4;
  undefined8 in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  uStack0000000000000030 = in_x10;
  do {
    if (*(uint *)(param_1 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    param_1 = param_1 + (int)in_w9 * unaff_x24;
    *(undefined8 *)(param_1 + 0x50) = uStack0000000000000030;
    *(undefined8 *)(param_1 + 0x38) = in_stack_00000018;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000010;
    *(undefined8 *)(param_1 + 0x48) = in_stack_00000028;
    *(undefined8 *)(param_1 + 0x40) = in_stack_00000020;
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000008;
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000000;
    thunk_FUN_01e10808(param_1 + 0x20,0);
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0234478c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_0234478c:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_02344914;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02344804;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02344804:
    (*(code *)*puVar1)(&stack0x00000040);
    in_stack_00000088 = in_stack_00000048;
    in_stack_00000080 = in_stack_00000040;
    in_stack_00000098 = in_stack_00000058;
    in_stack_00000090 = in_stack_00000050;
    in_stack_000000a8 = in_stack_00000068;
    in_stack_000000a0 = in_stack_00000060;
    in_stack_000000b0 = in_stack_00000070;
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_w9 = *(uint *)(unaff_x21 + 0x18);
    if (in_w9 == *(uint *)(param_1 + 0x18)) {
      FUN_02342cc0();
      param_1 = *(long *)(unaff_x21 + 0x10);
      in_w9 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = in_w9 + 1;
    in_stack_00000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    in_stack_00000070 = in_stack_000000b0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_stack_00000008 = in_stack_00000088;
    in_stack_00000000 = in_stack_00000080;
    in_stack_00000018 = in_stack_00000098;
    in_stack_00000010 = in_stack_00000090;
    in_stack_00000028 = in_stack_000000a8;
    in_stack_00000020 = in_stack_000000a0;
    uStack0000000000000030 = in_stack_000000b0;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02344930;
    }
  }
LAB_02344914:
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02344930:
  (*(code *)*puVar1)();
  return;
}


