/*
FUNCTION_NAME: UnityEngine.Object$$Instantiate
ENTRY_POINT: 068dc450
PROGRAM: waitwhat-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


void UnityEngine_Object__Instantiate(undefined8 param_1)

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
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_06852378();
  uVar10 = *unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x88) = param_1;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
  FUN_0685229c(uVar10,0);
  uVar11 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852378(uVar10,0);
  uVar11 = *unaff_x29;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852464(uVar10,0);
  uVar11 = *unaff_x28;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068525ac(uVar10,0);
  uVar11 = *unaff_x29;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852464(uVar10,0);
  uVar11 = *unaff_x28;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068525ac(uVar10,0);
  uVar11 = *unaff_x27;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852704(uVar10,0);
  uVar11 = *unaff_x26;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068527e8(uVar10,0);
  uVar11 = *unaff_x27;
  *(undefined8 *)(unaff_x19 + 200) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_06852704(uVar10,0);
  uVar11 = *unaff_x26;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_068527e8(uVar10,0);
  puVar1 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCallback_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_068528dc(uVar10,0);
  puVar1 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_TypeInfo
  ;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_068529fc(uVar10,0);
  puVar1 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignSelfProperty_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_03e39e24(uVar10,0,*(undefined8 *)Oisoi_Networking_Requests_Report_reportableType_TypeInfo);
  puVar1 = Oisoi_Networking_Requests_RequestOTL_RequestOTL_RequestData_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_03e39e24(uVar10,0,*(undefined8 *)UnityEngine_Rendering_RenderersParameters_ParamNames_TypeInfo
              );
  puVar1 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignItemsProperty_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar1);
  FUN_03e39e24(uVar10,0,*(undefined8 *)UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo);
  uVar11 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x118) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  puVar1 = PTR_DAT_070f3888;
  FUN_042e4268(uVar10,*(undefined8 *)PTR_DAT_070f3888);
  puVar2 = 
  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
  ;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar10;
  lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_056db42c(lVar12,*(undefined8 *)
                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
              );
  puVar3 = UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataDebugView_TypeInfo;
  puVar2 = UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataCIExy_TypeInfo;
  if (lVar12 != 0) {
    FUN_04a8cd34(lVar12,0,*(undefined8 *)Best_HTTP_HostSetting_HostVariant_<>c_TypeInfo);
    uVar10 = *unaff_x22;
    *(long *)(unaff_x19 + 0x138) = lVar12;
    uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
    FUN_042e4268(uVar10,*(undefined8 *)puVar1);
    uVar11 = *(undefined8 *)puVar3;
    *(undefined8 *)(unaff_x19 + 0x140) = uVar10;
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
    FUN_056db42c(lVar12,*(undefined8 *)puVar2);
    puVar3 = UnityEngine_Rendering_Universal_RenderObjectsPass_PassData_TypeInfo;
    puVar2 = UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_TypeInfo;
    if (lVar12 != 0) {
      FUN_04a8cd34(lVar12,0,*(undefined8 *)Best_HTTP_Hosts_Settings_HostVariantSettings_<>c_TypeInfo
                  );
      uVar10 = *unaff_x22;
      *(long *)(unaff_x19 + 0x148) = lVar12;
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
      FUN_042e4268(uVar10,*(undefined8 *)puVar1);
      uVar11 = *(undefined8 *)puVar3;
      *(undefined8 *)(unaff_x19 + 0x150) = uVar10;
      lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
      FUN_056db42c(lVar12,*(undefined8 *)puVar2);
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
        *(long *)(unaff_x19 + 0x158) = lVar12;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar10);
        FUN_04b17294(0,uVar10,1,0,0,*(undefined8 *)puVar1);
        uVar11 = *(undefined8 *)puVar7;
        *(undefined8 *)(unaff_x19 + 0x160) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0525119c(uVar10,*(undefined8 *)puVar3);
        uVar11 = *(undefined8 *)puVar7;
        *(undefined8 *)(unaff_x19 + 0x170) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0525119c(uVar10,*(undefined8 *)puVar3);
        uVar11 = *(undefined8 *)puVar6;
        *(undefined8 *)(unaff_x19 + 0x178) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0524a930(uVar10,*(undefined8 *)puVar4);
        uVar11 = *(undefined8 *)puVar9;
        *(undefined8 *)(unaff_x19 + 0x180) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_03e39e24(uVar10,0,*(undefined8 *)puVar8);
        uVar11 = *(undefined8 *)puVar5;
        *(undefined8 *)(unaff_x19 + 0x188) = uVar10;
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar11);
        FUN_0525ae30(uVar10,*(undefined8 *)
                             UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_<>c_TypeInfo
                    );
        *(undefined8 *)(unaff_x19 + 400) = uVar10;
        thunk_FUN_069d3450();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


