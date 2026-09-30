/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 0369a1f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(ulong param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0x198);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_<GetGrabRigidbody>b__19_0__
                      );
    *(undefined1 *)(unaff_x20 + 0xf1d) = 1;
  }
  FUN_02f46f48(param_2,*puVar1);
  FUN_0369a12c(param_2);
  return;
}


