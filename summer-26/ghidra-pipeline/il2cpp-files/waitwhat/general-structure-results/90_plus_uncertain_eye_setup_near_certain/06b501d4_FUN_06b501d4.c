/*
FUNCTION_NAME: FUN_06b501d4
ENTRY_POINT: 06b501d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06b501d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((DAT_0755fed7 & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeScratchBufferPool_ScratchBufferPool>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
                );
    FUN_03188a78(PTR_DAT_070f4960);
    FUN_03188a78(PTR_DAT_070f4978);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
                );
    DAT_0755fed7 = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f4978);
    FUN_056d3a24(uVar2,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
                 ,0);
    puVar1 = PTR_DAT_070f4960;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
                    /* try { // try from 06b502a0 to 06c502fb has its CatchHandler @ 06b502a0
                       catch() { ... } // from try @ 06b502a0 with catch @ 06b502a0
                       catch() { ... } // from try @ 06b503b4 with catch @ 06b502a0
                       catch() { ... } // from try @ 06b503e8 with catch @ 06b502a0 */
    FUN_056d3a24(uVar2,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                 ,0);
    puVar1 = 
    Method_System_Collections_Generic_List_Enumerator<ProbeVolumeScratchBufferPool_ScratchBufferPool>_MoveNext__
    ;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_056d3a24(uVar2,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                 ,0);
    puVar1 = 
    Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_056d3a24(uVar2,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                 ,0);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  return;
}


