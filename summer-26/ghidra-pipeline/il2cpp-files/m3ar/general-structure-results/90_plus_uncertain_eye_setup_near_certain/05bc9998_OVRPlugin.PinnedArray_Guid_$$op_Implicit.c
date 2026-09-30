/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 05bc9998
PROGRAM: m3ar-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__op_Implicit(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  lVar3 = **(long **)(param_3 + 0xb8);
  uStack0000000000000068 = *(undefined8 *)(unaff_x22 + 0x28);
  uStack0000000000000060 = *(undefined8 *)(unaff_x22 + 0x20);
  uStack0000000000000078 = *(undefined8 *)(unaff_x22 + 0x38);
  uStack0000000000000070 = *(undefined8 *)(unaff_x22 + 0x30);
  uStack0000000000000040 = param_1;
  uStack0000000000000050 = param_2;
  uVar1 = thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0));
  uVar2 = thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0));
  if (lVar3 != 0) {
    FUN_0747f5b4(lVar3,uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


