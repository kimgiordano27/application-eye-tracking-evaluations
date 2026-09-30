/*
FUNCTION_NAME: UnityEngine.Material$$GetVector
ENTRY_POINT: 068a72a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Material__GetVector(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0xbf) = 1;
  lVar1 = **(long **)(*unaff_x21 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_<>c_TypeInfo);
    FUN_068a7008(uVar2,0,*(undefined8 *)OVRPlugin_BodyJointLocation_TypeInfo);
    if (*(int *)(*(long *)PTR_DAT_070c9c68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar1 = FUN_03a21ea8(uVar2,*(undefined8 *)
                                UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    **(long **)(*unaff_x21 + 0xb8) = lVar1;
  }
  *unaff_x19 = lVar1;
  return;
}


