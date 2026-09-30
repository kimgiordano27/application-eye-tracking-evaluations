/*
FUNCTION_NAME: UnityEngine.Mesh$$GetVertexAttributesArray
ENTRY_POINT: 035a2034
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Mesh__GetVertexAttributesArray(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = OVRPlugin_OVRP_1_82_0_TypeInfo;
  if ((*(byte *)(unaff_x20 + 0x110) & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_82_0_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x110) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = FUN_035a1afc();
  if (lVar2 != 0) {
    FUN_035a2088(lVar2,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


