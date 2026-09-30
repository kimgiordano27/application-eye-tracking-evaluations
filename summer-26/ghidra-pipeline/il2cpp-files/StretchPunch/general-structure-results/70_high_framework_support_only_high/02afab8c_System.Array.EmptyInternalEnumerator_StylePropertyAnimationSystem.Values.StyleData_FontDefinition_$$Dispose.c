/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<StylePropertyAnimationSystem.Values.StyleData<FontDefinition>>$$Dispose
ENTRY_POINT: 02afab8c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<StylePropertyAnimationSystem_Values_StyleData<FontDefinition>>__Dispose
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  if (in_w9 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    in_w9 = *(uint *)(unaff_x20 + 0x18);
  }
  uVar1 = *(uint *)(unaff_x22 + 0x20);
  if ((int)(in_w9 - unaff_w21) < (int)(uVar1 - *(int *)(unaff_x22 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar1 = *(uint *)(unaff_x22 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar4 = 0;
    puVar5 = (undefined8 *)(lVar3 + 0x38);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02afacb0:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(puVar5 + -3)) {
        in_stack_00000058 = puVar5[1];
        in_stack_00000050 = *puVar5;
        in_stack_00000068 = puVar5[3];
        in_stack_00000060 = puVar5[2];
        in_stack_00000078 = puVar5[5];
        in_stack_00000070 = puVar5[4];
        in_stack_00000088 = puVar5[7];
        in_stack_00000080 = puVar5[6];
        in_stack_000000c8 = 0;
        in_stack_000000c0 = 0;
        in_stack_000000d8 = 0;
        in_stack_000000d0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000e0 = in_stack_00000050;
        in_stack_000000e8 = in_stack_00000058;
        in_stack_000000f0 = in_stack_00000060;
        in_stack_000000f8 = in_stack_00000068;
        in_stack_00000100 = in_stack_00000070;
        in_stack_00000108 = in_stack_00000078;
        in_stack_00000110 = in_stack_00000080;
        in_stack_00000118 = in_stack_00000088;
        FUN_0306dca8(&stack0x00000090,puVar5[-2],puVar5[-1],&stack0x000000e0,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
        memcpy(&stack0x00000000,&stack0x00000090,0x50);
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_02afacb0;
        lVar2 = (long)(int)unaff_w21;
        unaff_w21 = unaff_w21 + 1;
        memcpy((void *)(unaff_x20 + lVar2 * 0x50 + 0x20),&stack0x00000000,0x50);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xb;
    } while (uVar1 != uVar4);
  }
  return;
}


