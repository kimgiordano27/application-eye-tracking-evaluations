/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 05d44adc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  puVar1 = PTR_DAT_06fb78c8;
  if (*(long *)(unaff_x20 + 0x70) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06fb78c8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (DAT_073986a8 == '\0') {
      FUN_02fe925c(PTR_DAT_06fb78c8);
      DAT_073986a8 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar3 = *(long *)puVar1;
    }
    *unaff_x19 = **(undefined8 **)(lVar3 + 0xb8);
    thunk_FUN_03048534();
    return 0;
  }
  FUN_05d440b4();
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    uVar2 = FUN_05d44b78();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


