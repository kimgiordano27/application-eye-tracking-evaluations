/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.IList.get_IsReadOnly
ENTRY_POINT: 04c85d98
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_ObjectModel_ReadOnlyCollection<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IList_get_IsReadOnly
               (void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_05e5ae34();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(7,0);
  }
  *(long *)(unaff_x20 + 0x10) = unaff_x19;
  thunk_FUN_036b7ad0((long *)(unaff_x20 + 0x10));
  return;
}


