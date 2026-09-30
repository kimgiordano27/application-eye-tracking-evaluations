/*
FUNCTION_NAME: UnityEngineInternal.WebRequestUtils$$.cctor
ENTRY_POINT: 06bc72e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void UnityEngineInternal_WebRequestUtils___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x8f0));
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Value__
              );
  FUN_03188a78(PTR_DAT_070f4948);
  FUN_03188a78(PTR_DAT_070f4950);
  FUN_03188a78(PTR_DAT_070f4958);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<TerrainTileCoord,_Terrain>_get_Key__);
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Value__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_MoveNext__
              );
  FUN_03188a78(PTR_DAT_070f4960);
  FUN_03188a78(PTR_DAT_070f4968);
  FUN_03188a78(
              Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_get_Current__
              );
  FUN_03188a78(PTR_DAT_070f4978);
  FUN_03188a78(PTR_DAT_070f4a28);
  *(undefined1 *)(unaff_x22 + 0x47d) = 1;
  lVar2 = FUN_06c56914();
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x20);
  FUN_056d3a24();
  puVar1 = PTR_DAT_070f4960;
  if (lVar2 != 0) {
    FUN_03a25490(lVar2,uVar3,0,*(undefined8 *)PTR_DAT_070f4948);
    lVar2 = FUN_06c56914();
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_056d3a24();
    puVar1 = PTR_DAT_070f4978;
    if (lVar2 != 0) {
      FUN_03a25490(lVar2,uVar3,0,*(undefined8 *)PTR_DAT_070f4950);
      lVar2 = FUN_06c56914();
      uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar1);
      FUN_056d3a24();
      puVar1 = 
      Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_get_Current__;
      if (lVar2 != 0) {
        FUN_03a25490(lVar2,uVar3,0,*(undefined8 *)PTR_DAT_070f4958);
        lVar2 = FUN_06c56914();
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)puVar1);
        FUN_056d3a24();
        puVar1 = 
        Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_MoveNext__;
        if (lVar2 != 0) {
          FUN_03a25490(lVar2,uVar3,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Key__
                      );
          lVar2 = FUN_06c56914();
          uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar1);
          FUN_056d3a24();
          puVar1 = PTR_DAT_070f4a28;
          if (lVar2 != 0) {
            FUN_03a25490(lVar2,uVar3,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Value__
                        );
            lVar2 = FUN_06c56914();
            uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)puVar1);
            FUN_056d3a24();
            if (lVar2 != 0) {
              FUN_03a25490(lVar2,uVar3,0,*(undefined8 *)PTR_DAT_070f4a18);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


