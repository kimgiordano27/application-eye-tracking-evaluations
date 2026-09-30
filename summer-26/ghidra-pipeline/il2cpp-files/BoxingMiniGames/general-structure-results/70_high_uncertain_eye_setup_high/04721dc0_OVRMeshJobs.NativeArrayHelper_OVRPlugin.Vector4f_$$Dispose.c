/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 04721dc0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  FUN_05e39590(param_1,param_2,0);
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_05e390e4(0x17,0);
  }
  if (0 < unaff_w20) {
    iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
    *(int *)(unaff_x19 + 0x18) = iVar1;
    if (iVar1 - unaff_w21 != 0 && unaff_w21 <= iVar1) {
      FUN_05e3b3a4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + unaff_w21,
                   *(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    FUN_05e3b0f4(*(undefined8 *)(unaff_x19 + 0x10),iVar1,unaff_w20,0);
    return;
  }
  return;
}


