/*
FUNCTION_NAME: FUN_06688c58
ENTRY_POINT: 06688c58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_12
*/


void FUN_06688c58(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined8 local_80;
  ulong uStack_78;
  undefined4 local_70;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_070f1d98;
  if ((DAT_07557e9a & 1) == 0) {
    FUN_03188a78(System_Net_HttpListenerPrefixCollection_TypeInfo);
    FUN_03188a78(PTR_DAT_0711b690);
    FUN_03188a78(System_Net_Http_HttpRequestException_TypeInfo);
    FUN_03188a78(System_Net_Http_Headers_HttpRequestHeaders_TypeInfo);
    FUN_03188a78(System_Net_HttpListenerRequest_TypeInfo);
    FUN_03188a78(System_Net_HttpListenerRequestUriBuilder_TypeInfo);
    FUN_03188a78(System_Net_HttpListenerResponse_TypeInfo);
    FUN_03188a78(System_Net_Http_HttpMethod_TypeInfo);
    FUN_03188a78(System_Net_HttpListenerException_TypeInfo);
    FUN_03188a78(System_Net_Http_HttpRequestMessage_TypeInfo);
                    /* try { // try from 06688d10 to 06788e47 has its CatchHandler @ 06688d10
                       catch() { ... } // from try @ 06688d10 with catch @ 06688d10
                       catch() { ... } // from try @ 06688e68 with catch @ 06688d10
                       catch() { ... } // from try @ 06688eb4 with catch @ 06688d10
                       catch() { ... } // from try @ 06688ed8 with catch @ 06688d10 */
    FUN_03188a78(PTR_DAT_070f1d98);
    FUN_03188a78(System_Net_Http_Headers_HttpResponseHeaders_TypeInfo);
    FUN_03188a78(System_Net_Http_HttpResponseMessage_TypeInfo);
    FUN_03188a78(System_Net_HttpStatusCode_TypeInfo);
    FUN_03188a78(Sentry_HttpStatusCodeRange_TypeInfo);
    FUN_03188a78(System_Net_HttpStreamAsyncResult_TypeInfo);
    FUN_03188a78(Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
    FUN_03188a78(Sentry_Internal_Http_HttpTransport_TypeInfo);
    FUN_03188a78(PTR_DAT_0711b6b0);
    FUN_03188a78(System_Net_HttpValidationHelpers_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2400);
    FUN_03188a78(PTR_DAT_0710c9f0);
    FUN_03188a78(System_Net_HttpRequestCreator_TypeInfo);
    DAT_07557e9a = 1;
  }
  puVar6 = System_Net_HttpValidationHelpers_TypeInfo;
  puVar5 = Sentry_Internal_Http_HttpTransport_TypeInfo;
  puVar4 = System_Net_Http_HttpRequestMessage_TypeInfo;
  puVar3 = System_Net_Http_Headers_HttpRequestHeaders_TypeInfo;
  puVar2 = System_Net_Http_HttpRequestException_TypeInfo;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_05971910(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar9 = FUN_03ac59f8(*(undefined8 *)puVar4);
  FUN_069f67e4(0);
  uVar11 = param_2[1];
  uVar10 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar11;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  FUN_066abd30(&local_94,0);
                    /* try { // try from 06688e48 to 06788e4f has its CatchHandler @ 06688e90 */
  uStack_78 = uStack_8c;
  local_80 = local_94;
  local_70 = local_84;
                    /* try { // try from 06688e58 to 06788e67 has its CatchHandler @ 06688e94 */
  local_58 = 0;
  FUN_066a3390(&local_58,param_3,param_4,0);
                    /* try { // try from 06688e68 to 06788eaf has its CatchHandler @ 06688d10 */
  local_80 = local_58;
  uStack_78 = CONCAT62((int6)(CONCAT44(*(undefined4 *)((long)param_2 + 4),(int)uStack_78) >> 0x10),
                       *(undefined2 *)((long)param_2 + 1)) & 0xffffffffffff0101;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06688e48 with catch @ 06688e90
                        */
  local_70 = CONCAT31(local_70._1_3_,1);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06688e58 with catch @ 06688e94
                        */
  uVar10 = FUN_06691ed8(0);
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
                    /* try { // try from 06688eb0 to 06788eb3 has its CatchHandler @ 06688ecc */
  FUN_06a17380(uVar11,0);
                    /* try { // try from 06688eb4 to 06788ecf has its CatchHandler @ 06688d10 */
  uVar12 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
                    /* catch() { ... } // from try @ 06688eb0 with catch @ 06688ecc */
                    /* try { // try from 06688ed0 to 06788ed7 has its CatchHandler @ 06688ee0 */
  FUN_066abf1c(uVar12,&local_80,uVar11,uVar9,0);
                    /* try { // try from 06688ed8 to 06788ee3 has its CatchHandler @ 06688d10 */
  uVar9 = *(undefined8 *)puVar3;
  uVar11 = *(undefined8 *)(param_1 + 0x30);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06688ed0 with catch @ 06688ee0
                        */
  *(undefined8 *)(param_1 + 0x38) = uVar12;
  uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
  FUN_06686968(uVar9,uVar12,uVar10,uVar11);
  uVar10 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
  FUN_069c9bd8(lVar13,0);
  *(long *)(param_1 + 0x48) = lVar13;
  if (lVar13 != 0) {
    FUN_03b4e4c8(lVar13,1,*(undefined8 *)System_Net_HttpStatusCode_TypeInfo);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_03b4e4c8(*(long *)(param_1 + 0x48),3,
                   *(undefined8 *)Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_03b4e4c8(*(long *)(param_1 + 0x48),3,*(undefined8 *)Sentry_HttpStatusCodeRange_TypeInfo)
        ;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_03b4e3e4(*(long *)(param_1 + 0x48),0,
                       *(undefined8 *)System_Net_Http_Headers_HttpResponseHeaders_TypeInfo);
          if (*(long *)(param_1 + 0x48) != 0) {
            FUN_03b4e4c8(*(long *)(param_1 + 0x48),1,
                         *(undefined8 *)System_Net_HttpStreamAsyncResult_TypeInfo);
            puVar6 = System_Net_HttpListenerRequestUriBuilder_TypeInfo;
            puVar5 = System_Net_HttpListenerPrefixCollection_TypeInfo;
            puVar4 = System_Net_HttpListenerException_TypeInfo;
            puVar3 = PTR_DAT_0711b6b0;
            puVar2 = PTR_DAT_0710c9f0;
            puVar1 = PTR_DAT_070c2400;
            if (*(long *)(param_1 + 0x48) != 0) {
              FUN_03b4e3e4(*(long *)(param_1 + 0x48),0,
                           *(undefined8 *)System_Net_Http_HttpResponseMessage_TypeInfo);
              uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar2);
              FUN_04cd4a00(uVar9,param_1,*(undefined8 *)puVar4,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              puVar8 = System_Net_HttpRequestCreator_TypeInfo;
              puVar7 = System_Net_Http_HttpMethod_TypeInfo;
              puVar4 = System_Net_HttpListenerResponse_TypeInfo;
              puVar2 = System_Net_HttpListenerRequest_TypeInfo;
              puVar1 = PTR_DAT_0711b690;
              UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker__Dispose(uVar9,0);
              uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar5);
              FUN_051e16b4(uVar9,param_1,*(undefined8 *)puVar6,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_06a0ee84(uVar9,0);
              uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar5);
              FUN_051e16b4(uVar9,param_1,*(undefined8 *)puVar7,0);
              FUN_06a0f06c(uVar9,0);
              uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar1);
              FUN_051e16b4(uVar9,param_1,*(undefined8 *)puVar2,0);
              FUN_06a0f254(uVar9,0);
              uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar1);
              FUN_051e16b4(uVar9,param_1,*(undefined8 *)puVar4,0);
              FUN_06a0f43c(uVar9,0);
              FUN_069a2520(*(undefined8 *)puVar8,0);
              FUN_0668813c(param_1);
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


