/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 06af4d50
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  undefined4 *unaff_x19;
  undefined4 unaff_w20;
  undefined8 in_stack_00000008;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(in_x10 + 0xe8)) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_06af4da0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_0338f71c(param_2,*(long *)(in_x10 + 0xe8),1);
LAB_06af4da0:
  uVar1 = (*(code *)*puVar2)(param_2,unaff_w20,(long)&stack0x00000008 + 4,puVar2[1]);
  if ((uVar1 & 1) == 0) {
    in_stack_00000008._4_4_ = 0;
  }
  *unaff_x19 = in_stack_00000008._4_4_;
  return uVar1 & 1;
}


