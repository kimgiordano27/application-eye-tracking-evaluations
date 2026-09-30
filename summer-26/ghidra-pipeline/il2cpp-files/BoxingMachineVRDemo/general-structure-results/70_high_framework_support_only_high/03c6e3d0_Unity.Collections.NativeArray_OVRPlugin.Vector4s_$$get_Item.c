/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 03c6e3d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6e4a0) */
/* WARNING: Removing unreachable block (ram,0x03c6e450) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Item(long param_1)

{
  ulong uVar1;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000088;
  
  FUN_04b1b51c(&stack0x00000050,*(undefined8 *)(param_1 + 0xc0));
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0();
  }
  if ((unaff_w23 == 5) || (unaff_w23 == 0)) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_03a38cc8(&stack0x00000008);
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    while (uVar1 = FUN_04a68d14(&stack0x00000030,*unaff_x26), (uVar1 & 1) != 0) {
      FUN_03c6e110();
    }
    FUN_04a68d10(&stack0x00000030,*unaff_x25);
  }
  if (in_stack_00000088._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  return;
}


