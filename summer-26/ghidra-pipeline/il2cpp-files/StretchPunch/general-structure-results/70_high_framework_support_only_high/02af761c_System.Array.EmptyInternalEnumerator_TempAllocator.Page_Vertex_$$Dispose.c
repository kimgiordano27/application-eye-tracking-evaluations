/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<TempAllocator.Page<Vertex>>$$Dispose
ENTRY_POINT: 02af761c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<TempAllocator_Page<Vertex>>__Dispose
               (long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  if (uVar2 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    uVar2 = *(uint *)(param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar2 - param_3) < (int)(uVar1 - *(int *)(param_1 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = 0;
    puVar6 = (undefined8 *)(lVar4 + 0x38);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_02af7754:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(puVar6 + -3)) {
        in_stack_00000088 = puVar6[1];
        in_stack_00000080 = *puVar6;
        in_stack_00000090 = puVar6[2];
        in_stack_00000070 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        FUN_0306db30(&stack0x00000050,puVar6[-2],puVar6[-1],&stack0x00000080,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_02af7754;
        lVar3 = param_2 + (long)(int)param_3 * 0x28;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar3 + 0x40) = in_stack_00000070;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000058;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000050;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000068;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000060;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar1 != uVar5);
  }
  return;
}


