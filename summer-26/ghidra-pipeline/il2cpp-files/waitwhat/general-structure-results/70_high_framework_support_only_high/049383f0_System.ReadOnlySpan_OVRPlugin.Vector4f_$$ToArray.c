/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 049383f0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_Vector4f>__ToArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  puVar2 = PTR_DAT_070f4638;
  puVar1 = PTR_DAT_070f4630;
  FUN_06b243cc();
  if (unaff_x21 == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0
       ) {
      FUN_031c09d4();
    }
    FUN_06b243cc();
  }
  else {
    FUN_04937e50();
  }
  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
            (*(undefined8 *)puVar1);
  FUN_056d3a24();
  FUN_03a25490();
  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
            (*(undefined8 *)puVar2);
  FUN_056d3a24();
  FUN_03a25490();
  *(undefined8 *)(unaff_x19 + 0x4c8) = 0;
  return;
}


