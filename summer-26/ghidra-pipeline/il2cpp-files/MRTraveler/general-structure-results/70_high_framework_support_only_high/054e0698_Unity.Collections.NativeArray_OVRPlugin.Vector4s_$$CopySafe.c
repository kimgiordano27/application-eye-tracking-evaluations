/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 054e0698
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  uStack0000000000000060 = param_1;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  in_stack_000000c8 = in_stack_00000088;
  in_stack_000000c0 = in_stack_00000080;
  in_stack_000000d0 = in_stack_00000090;
  in_stack_000000b0 = in_stack_00000070;
  in_stack_000000a0 = param_1;
  iVar1 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x000000c0,&stack0x000000a0,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
    in_stack_000000d0 = *(undefined8 *)(unaff_x25 + 0x30);
    in_stack_000000c8 = *(undefined8 *)(unaff_x25 + 0x28);
    in_stack_000000c0 = *(undefined8 *)(unaff_x25 + 0x20);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      uVar3 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar2 = *(undefined8 *)(unaff_x26 + 0x20);
      *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)(unaff_x26 + 0x30);
      *(undefined8 *)(unaff_x25 + 0x28) = uVar3;
      *(undefined8 *)(unaff_x25 + 0x20) = uVar2;
      thunk_FUN_03d233cc(unaff_x19 + unaff_x24 * 0x18 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x26 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(unaff_x26 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(unaff_x26 + 0x20) = in_stack_000000c0;
        thunk_FUN_03d233cc(unaff_x19 + unaff_x23 * 0x18 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


