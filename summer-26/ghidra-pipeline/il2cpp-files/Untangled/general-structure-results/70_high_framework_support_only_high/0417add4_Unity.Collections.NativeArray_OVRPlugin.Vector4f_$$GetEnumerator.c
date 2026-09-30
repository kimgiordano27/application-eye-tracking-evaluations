/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 0417add4
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0417aea4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint in_w9;
  ulong uVar4;
  int in_w10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    *(int *)(unaff_x21 + 0x18) = in_w10;
    uStack0000000000000028 = in_stack_00000048;
    uStack0000000000000020 = in_stack_00000040;
    uStack0000000000000038 = in_stack_00000058;
    uStack0000000000000030 = in_stack_00000050;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(param_1 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    param_1 = param_1 + (long)(int)in_w9 * 0x20;
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000048;
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000040;
    *(undefined8 *)(param_1 + 0x38) = in_stack_00000058;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000050;
    thunk_FUN_02f411dc(param_1 + 0x20,0);
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0417ad08;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0417ad08:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_0417ae50;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0417ad80;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0417ad80:
    (*(code *)*puVar1)(&stack0x00000020);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = uStack0000000000000020;
    in_stack_00000058 = uStack0000000000000038;
    in_stack_00000050 = uStack0000000000000030;
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    in_w9 = *(uint *)(unaff_x21 + 0x18);
    if (in_w9 == *(uint *)(param_1 + 0x18)) {
      FUN_0417944c();
      param_1 = *(long *)(unaff_x21 + 0x10);
      in_w9 = *(uint *)(unaff_x21 + 0x18);
    }
    in_w10 = in_w9 + 1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0417ae6c;
    }
  }
LAB_0417ae50:
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0417ae6c:
  (*(code *)*puVar1)();
  return;
}


