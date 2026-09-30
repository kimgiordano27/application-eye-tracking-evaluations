/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 02342f5c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
code_r0x02342f5c:
  puVar1 = (undefined8 *)(param_1 + unaff_x24);
  uStack0000000000000030 = puVar1[6];
  uStack0000000000000018 = puVar1[3];
  uStack0000000000000010 = puVar1[2];
  uStack0000000000000028 = puVar1[5];
  uStack0000000000000020 = puVar1[4];
  uStack0000000000000008 = puVar1[1];
  uStack0000000000000000 = *puVar1;
  if (unaff_x22 != 0) {
    lVar4 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        lVar4 = lVar4 + (int)uVar2 * unaff_x25;
        *(undefined8 *)(lVar4 + 0x50) = uStack0000000000000030;
        *(undefined8 *)(lVar4 + 0x38) = uStack0000000000000018;
        *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000010;
        *(undefined8 *)(lVar4 + 0x48) = uStack0000000000000028;
        *(undefined8 *)(lVar4 + 0x40) = uStack0000000000000020;
        *(undefined8 *)(lVar4 + 0x28) = uStack0000000000000008;
        *(undefined8 *)(lVar4 + 0x20) = uStack0000000000000000;
        thunk_FUN_01e10808(lVar4 + 0x20,0);
      }
      else {
        in_stack_00000080 = uStack0000000000000000;
        in_stack_00000088 = uStack0000000000000008;
        in_stack_00000090 = uStack0000000000000010;
        in_stack_00000098 = uStack0000000000000018;
        in_stack_000000a0 = uStack0000000000000020;
        in_stack_000000a8 = uStack0000000000000028;
        in_stack_000000b0 = uStack0000000000000030;
        FUN_02342528();
      }
      do {
        unaff_x23 = unaff_x23 + 1;
        unaff_x24 = unaff_x24 + 0x38;
        if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
          return;
        }
        lVar4 = *(long *)(unaff_x21 + 0x10);
        if (lVar4 == 0) goto LAB_02343060;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_02343064;
        puVar1 = (undefined8 *)(lVar4 + unaff_x24);
        if (unaff_x20 == 0) goto LAB_02343060;
        in_stack_00000080 = *puVar1;
        in_stack_00000088 = puVar1[1];
        in_stack_00000090 = puVar1[2];
        in_stack_00000098 = puVar1[3];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000b0 = puVar1[6];
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
      } while ((uVar3 & 1) == 0);
      param_1 = *(long *)(unaff_x21 + 0x10);
      if (param_1 != 0) goto code_r0x02342f50;
    }
  }
LAB_02343060:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
code_r0x02342f50:
  if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
LAB_02343064:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  goto code_r0x02342f5c;
}


