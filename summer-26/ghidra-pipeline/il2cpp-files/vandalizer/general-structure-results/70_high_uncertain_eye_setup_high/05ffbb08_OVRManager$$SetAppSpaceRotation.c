/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 05ffbb08
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x21;
  long unaff_x22;
  long *plVar4;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  plVar4 = *(long **)(unaff_x22 + 0x2a8);
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(PTR_DAT_075f6ef8);
    *(undefined1 *)(unaff_x21 + 0x8d5) = 1;
  }
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar1 = PTR_DAT_075f6ef8;
  uVar2 = FUN_06e587d8(param_3,0,0);
  if ((uVar2 & 1) != 0) {
    FUN_05fffce0(&stack0x00000020,param_2,0);
    *(ulong *)(param_2 + 0x1b4) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(param_2 + 0x1ac) = in_stack_00000020;
    *(undefined8 *)(param_2 + 0x1c0) = uStack0000000000000034;
    *(ulong *)(param_2 + 0x1b8) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    uVar3 = FUN_05fff2c0(param_2,param_3,0);
    *(undefined8 *)(param_2 + 0x180) = uVar3;
    thunk_FUN_0329bf60(param_2 + 0x180);
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_2 + 0x1a4) = uVar3;
  }
  FUN_04d119b0(param_2,param_3,*(undefined8 *)puVar1);
  return;
}


