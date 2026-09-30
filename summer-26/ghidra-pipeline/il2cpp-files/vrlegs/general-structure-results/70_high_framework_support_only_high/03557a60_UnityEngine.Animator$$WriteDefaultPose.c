/*
FUNCTION_NAME: UnityEngine.Animator$$WriteDefaultPose
ENTRY_POINT: 03557a60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Animator__WriteDefaultPose(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined4 in_stack_00000018;
  
  if (param_1 != 0) {
    uVar1 = FUN_0219c130(param_1,&stack0x0000000c,*(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (((*(long *)(unaff_x21 + 0x20) != 0) &&
        (in_stack_00000018 = unaff_w20, FUN_0219b9a4(*(long *)(unaff_x21 + 0x20),&stack0x00000018),
        unaff_x19 != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)) {
      FUN_0219b9a4(*(long *)(unaff_x21 + 0x10),&stack0x0000001c,*(undefined8 *)(unaff_x19 + 0x20),
                   *(undefined8 *)PTR_DAT_03d02a20);
      if (*(int *)(unaff_x19 + 0x1c) != 0) {
        return;
      }
      *(undefined4 *)(unaff_x19 + 0x1c) = unaff_w20;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


