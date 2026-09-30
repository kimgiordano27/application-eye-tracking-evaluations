/*
FUNCTION_NAME: FUN_0657ae58
ENTRY_POINT: 0657ae58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0657ae58(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_07557466 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f6268);
    FUN_03188a78(System_Nullable<uint>_TypeInfo);
    FUN_03188a78(System_Nullable<ulong>_TypeInfo);
    FUN_03188a78(System_Nullable<Vector3>_TypeInfo);
    FUN_03188a78(System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
    FUN_03188a78(System_Nullable<PeekableHTTP1Response_PeekableReadState>_TypeInfo);
    FUN_03188a78(System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo);
    FUN_03188a78(OVRResult<Int32Enum>_TypeInfo);
    FUN_03188a78(OVRResult<OVRAnchor_SaveResult>_TypeInfo);
    FUN_03188a78(OVRResult<Guid,_Int32Enum>_TypeInfo);
    DAT_07557466 = 1;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,
                 *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,*(undefined8 *)System_Nullable<uint>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,
                 *(undefined8 *)System_Nullable<PeekableHTTP1Response_PeekableReadState>_TypeInfo,0)
    ;
    *(undefined8 *)(param_1 + 0x100) = uVar1;
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,*(undefined8 *)System_Nullable<ulong>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x108) = uVar1;
  }
  if (*(long *)(param_1 + 0x110) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,
                 *(undefined8 *)System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x110) = uVar1;
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,*(undefined8 *)System_Nullable<Vector3>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xe8) = uVar1;
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,*(undefined8 *)OVRResult<Int32Enum>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0xf0) = uVar1;
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x120) = uVar1;
  }
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f6268);
    FUN_05115744(uVar1,param_1,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x118) = uVar1;
  }
  FUN_0657d46c(param_1,1);
  return;
}


