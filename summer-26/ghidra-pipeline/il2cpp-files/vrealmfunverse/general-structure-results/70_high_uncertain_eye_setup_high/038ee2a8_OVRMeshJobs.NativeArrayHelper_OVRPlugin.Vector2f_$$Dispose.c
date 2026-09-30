/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 038ee2a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  uint unaff_w22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 038ee2a8 to 039ee2bf has its CatchHandler @ 038ee32c */
  FUN_038ee928(param_2,unaff_w21,*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w21;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (unaff_w22 < *(uint *)(lVar1 + 0x18)) {
    uVar4 = unaff_x19[2];
    uVar3 = unaff_x19[5];
    uVar2 = unaff_x19[4];
    lVar1 = lVar1 + (long)(int)unaff_w22 * 0x30;
    uVar6 = unaff_x19[1];
    uVar5 = *unaff_x19;
    *(undefined8 *)(lVar1 + 0x38) = unaff_x19[3];
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


