/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 06dd2760
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  while( true ) {
    uStack0000000000000010 = param_1[2];
    uStack0000000000000020 = uStack0000000000000000;
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000030 = uStack0000000000000010;
    uVar1 = (*in_x9)(param_3,&stack0x00000020,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x22 = unaff_x22 + -1;
    unaff_x23 = unaff_x23 + 0x18;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x22 == 0) {
      return 0xffffffff;
    }
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x20 == 0) break;
    param_1 = (undefined8 *)(lVar2 + unaff_x23);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_3 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack0000000000000008 = param_1[1];
    uStack0000000000000000 = *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


