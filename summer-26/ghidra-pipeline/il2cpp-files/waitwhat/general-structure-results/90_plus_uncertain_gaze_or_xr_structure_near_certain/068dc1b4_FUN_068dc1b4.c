/*
FUNCTION_NAME: FUN_068dc1b4
ENTRY_POINT: 068dc1b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_12;functionality_data_collection_or_telemetry_hits_12
*/


void FUN_068dc1b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar9 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_RenderGraphResourcesData_TypeInfo
  ;
  puVar8 = UnityEngine_Rendering_RenderGraphGraphicsAutomatedTests_<>c_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_96_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_93_0_TypeInfo;
  puVar3 = PTR_DAT_07125a98;
  puVar2 = PTR_DAT_07125a90;
  puVar1 = PTR_DAT_070f3880;
  if ((DAT_075592b5 & 1) == 0) {
    FUN_03188a78(
                UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCallback_TypeInfo
                );
    FUN_03188a78(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03188a78(
                UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_<>c_TypeInfo);
    FUN_03188a78(
                UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_Universal_RenderGraphUtils_<>c_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_RenderObjects_CustomCameraSettings_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_RenderObjects_FilterSettings_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataCIExy_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataDebugView_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_Universal_RenderObjectsPass_PassData_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_RenderGraphGraphicsAutomatedTests_<>c_TypeInfo);
    FUN_03188a78(
                UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_RenderGraphResourcesData_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_RenderPipeline_StandardRequest_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_RenderersParameters_ParamNames_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo);
    FUN_03188a78(Oisoi_Networking_Requests_Report_reportableType_TypeInfo);
    FUN_03188a78(Oisoi_Networking_Requests_RequestOTL_RequestOTL_RequestData_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignItemsProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignSelfProperty_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_03188a78(PTR_DAT_07125a98);
    FUN_03188a78(PTR_DAT_070f3888);
    FUN_03188a78(PTR_DAT_07125a90);
    FUN_03188a78(PTR_DAT_070f3880);
    FUN_03188a78(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty_TypeInfo);
    FUN_03188a78(Best_HTTP_HostSetting_HostVariant_<>c_TypeInfo);
    FUN_03188a78(Best_HTTP_Hosts_Settings_HostVariantSettings_<>c_TypeInfo);
    DAT_075592b5 = 1;
  }
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_042e4268(uVar10,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  uVar10 = FUN_06851b60(1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  uVar10 = *(undefined8 *)puVar4;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0x40400000;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
  FUN_0685229c(uVar10,0);
  uVar11 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852378(uVar10,0);
  uVar11 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_0685229c(uVar10,0);
  uVar11 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852378(uVar10,0);
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852464(uVar10,0);
  uVar11 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068525ac(uVar10,0);
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852464(uVar10,0);
  uVar11 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0xb0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068525ac(uVar10,0);
  uVar11 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0xb8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852704(uVar10,0);
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0xc0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068527e8(uVar10,0);
  uVar11 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 200) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852704(uVar10,0);
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0xd0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068527e8(uVar10,0);
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCallback_TypeInfo;
  *(undefined8 *)(param_1 + 0xd8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_068528dc(uVar10,0);
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0xe0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_068529fc(uVar10,0);
  puVar2 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignSelfProperty_TypeInfo;
  *(undefined8 *)(param_1 + 0xe8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_03e39e24(uVar10,0,*(undefined8 *)Oisoi_Networking_Requests_Report_reportableType_TypeInfo);
  puVar2 = Oisoi_Networking_Requests_RequestOTL_RequestOTL_RequestData_TypeInfo;
  *(undefined8 *)(param_1 + 0xf0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_03e39e24(uVar10,0,*(undefined8 *)UnityEngine_Rendering_RenderersParameters_ParamNames_TypeInfo
              );
  puVar2 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignItemsProperty_TypeInfo;
  *(undefined8 *)(param_1 + 0x100) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_03e39e24(uVar10,0,*(undefined8 *)UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo);
  uVar11 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x118) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  puVar2 = PTR_DAT_070f3888;
  FUN_042e4268(uVar10,*(undefined8 *)PTR_DAT_070f3888);
  puVar3 = 
  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x130) = uVar10;
  lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_056db42c(lVar12,*(undefined8 *)
                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
              );
  puVar4 = UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataDebugView_TypeInfo;
  puVar3 = UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataCIExy_TypeInfo;
  if (lVar12 != 0) {
    FUN_04a8cd34(lVar12,0,*(undefined8 *)Best_HTTP_HostSetting_HostVariant_<>c_TypeInfo);
    uVar10 = *(undefined8 *)puVar1;
    *(long *)(param_1 + 0x138) = lVar12;
    uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
    FUN_042e4268(uVar10,*(undefined8 *)puVar2);
    uVar11 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x140) = uVar10;
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
    FUN_056db42c(lVar12,*(undefined8 *)puVar3);
    puVar4 = UnityEngine_Rendering_Universal_RenderObjectsPass_PassData_TypeInfo;
    puVar3 = UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_TypeInfo;
    if (lVar12 != 0) {
      FUN_04a8cd34(lVar12,0,*(undefined8 *)Best_HTTP_Hosts_Settings_HostVariantSettings_<>c_TypeInfo
                  );
      uVar10 = *(undefined8 *)puVar1;
      *(long *)(param_1 + 0x148) = lVar12;
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
      FUN_042e4268(uVar10,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)puVar4;
      *(undefined8 *)(param_1 + 0x150) = uVar10;
      lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
      FUN_056db42c(lVar12,*(undefined8 *)puVar3);
      puVar9 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo;
      puVar8 = UnityEngine_Rendering_RenderPipeline_StandardRequest_TypeInfo;
      puVar7 = UnityEngine_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo;
      puVar6 = UnityEngine_Rendering_Universal_RenderObjects_FilterSettings_TypeInfo;
      puVar5 = UnityEngine_Rendering_Universal_RenderObjects_CustomCameraSettings_TypeInfo;
      puVar4 = UnityEngine_Rendering_Universal_RenderGraphUtils_<>c_TypeInfo;
      puVar3 = 
      UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_TypeInfo;
      puVar2 = OVRPlugin_OverlayShape_TypeInfo;
      puVar1 = OVRPlugin_OVRP_1_9_0_TypeInfo;
      if (lVar12 != 0) {
        FUN_04a8cd34(lVar12,0,*(undefined8 *)
                               UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty_TypeInfo
                    );
        uVar10 = *(undefined8 *)puVar2;
        *(long *)(param_1 + 0x158) = lVar12;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar10);
        FUN_04b17294(0,uVar10,1,0,0,*(undefined8 *)puVar1);
        uVar11 = *(undefined8 *)puVar7;
        *(undefined8 *)(param_1 + 0x160) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0525119c(uVar10,*(undefined8 *)puVar3);
        uVar11 = *(undefined8 *)puVar7;
        *(undefined8 *)(param_1 + 0x170) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0525119c(uVar10,*(undefined8 *)puVar3);
        uVar11 = *(undefined8 *)puVar6;
        *(undefined8 *)(param_1 + 0x178) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0524a930(uVar10,*(undefined8 *)puVar4);
        uVar11 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 0x180) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_03e39e24(uVar10,0,*(undefined8 *)puVar8);
        uVar11 = *(undefined8 *)puVar5;
        *(undefined8 *)(param_1 + 0x188) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0525ae30(uVar10,*(undefined8 *)
                             UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_<>c_TypeInfo
                    );
        *(undefined8 *)(param_1 + 400) = uVar10;
        thunk_FUN_069d3450(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


