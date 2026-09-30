/*
FUNCTION_NAME: FUN_06b47a10
ENTRY_POINT: 06b47a10
PROGRAM: waitwhat-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;telemetry_or_network_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 FUN_06b47a10(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_24;
  
  if ((DAT_0755fe87 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2ac0);
    FUN_03188a78(PTR_DAT_070f1830);
    FUN_03188a78(PTR_DAT_070ca410);
    FUN_03188a78(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                );
    FUN_03188a78(PTR_DAT_070c6428);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                );
    FUN_03188a78(PTR_DAT_0712d920);
    DAT_0755fe87 = 1;
  }
  if (param_1 < 9) {
    return **(undefined8 **)(&DAT_06d47348 + (ulong)param_1 * 8);
  }
  local_24 = param_1;
  uVar1 = thunk_FUN_031edd38(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__
                            );
  uVar1 = thunk_FUN_031c39fc(uVar1,&local_24);
  thunk_FUN_031edd38(PTR_DAT_070c5c08);
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  uVar3 = thunk_FUN_031edd38(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                            );
  uVar4 = thunk_FUN_031edd38(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                            );
  FUN_0589ffc8(uVar2,uVar3,uVar1,uVar4,0);
  uVar1 = thunk_FUN_031edd38(
                            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar2,uVar1);
}


