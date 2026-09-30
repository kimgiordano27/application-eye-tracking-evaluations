/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 056a0a84
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined2 uStack000000000000000c;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x9f8));
  *(undefined1 *)(unaff_x20 + 0x8a1) = 1;
  uStack000000000000000c = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar1 = System_Collections_Generic_Stack<DerSequenceReader>_TypeInfo;
  if (unaff_x19 != 0) {
    lVar3 = FUN_0536fcfc();
    uStack000000000000000c = *(undefined2 *)(*(long *)(*unaff_x21 + 0xb8) + 10);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_054484f0(&stack0x0000000c,0);
    uStack000000000000000c = *(undefined2 *)(*(long *)(*unaff_x21 + 0xb8) + 10);
    uVar5 = FUN_054484f0(&stack0x0000000c,0);
    uVar4 = FUN_0536d554(uVar4,*(undefined8 *)puVar1,uVar5,0);
    if (lVar3 != 0) {
      uVar2 = FUN_05372308(lVar3,uVar4,0);
      return uVar2 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


