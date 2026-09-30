/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 033960e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01c273e8(*(undefined8 *)(param_1 + 0xfb0));
  FUN_0336f2b8();
  uVar1 = FUN_0335cdc4();
  uVar2 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPassUniversal>_Release__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


