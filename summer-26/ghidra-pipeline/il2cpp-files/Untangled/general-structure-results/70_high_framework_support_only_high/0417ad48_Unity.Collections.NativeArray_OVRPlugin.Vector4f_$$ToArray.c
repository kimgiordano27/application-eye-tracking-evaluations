/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 0417ad48
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0417aea4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_x9;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0417ad80;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0417ad80:
      (*(code *)*puVar1)(&stack0x00000020);
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      if (uVar3 == *(uint *)(lVar2 + 0x18)) {
        FUN_0417944c();
        lVar2 = *(long *)(unaff_x21 + 0x10);
        uVar3 = *(uint *)(unaff_x21 + 0x18);
      }
      *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar2 = lVar2 + (long)(int)uVar3 * 0x20;
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
      *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
      *(undefined8 *)(lVar2 + 0x38) = in_stack_00000058;
      *(undefined8 *)(lVar2 + 0x30) = in_stack_00000050;
      thunk_FUN_02f411dc(lVar2 + 0x20,0);
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
        goto LAB_0417ae38;
      }
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_02eea768(param_3);
      }
      param_1 = *unaff_x19;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_0417ae38:
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


