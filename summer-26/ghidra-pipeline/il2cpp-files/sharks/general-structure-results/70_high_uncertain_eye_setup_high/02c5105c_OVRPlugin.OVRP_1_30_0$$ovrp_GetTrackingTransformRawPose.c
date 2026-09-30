/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 02c5105c
PROGRAM: sharks-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x9;
  long unaff_x25;
  
  if (unaff_x25 != 0) {
    in_x9 = param_1;
  }
  uVar1 = thunk_FUN_01851c08(in_x9);
  thunk_FUN_01851c08(PTR_DAT_037f66a8);
  uVar2 = thunk_FUN_01861bbc();
  uVar3 = thunk_FUN_01851c08(PTR_DAT_03800558);
  FUN_02b44d94(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380cb10);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar1);
}


