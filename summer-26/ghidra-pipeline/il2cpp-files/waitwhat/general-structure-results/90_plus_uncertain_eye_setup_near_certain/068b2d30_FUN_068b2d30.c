/*
FUNCTION_NAME: FUN_068b2d30
ENTRY_POINT: 068b2d30
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_068b2d30(long param_1)

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
  long lVar11;
  undefined8 uVar12;
  
  puVar9 = OVRPlugin_OVRP_1_99_0_TypeInfo;
  puVar8 = OVRPlugin_OVRP_1_98_0_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_96_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_93_0_TypeInfo;
  puVar2 = PTR_DAT_070f3888;
  puVar1 = PTR_DAT_070f3880;
  if ((DAT_0755916e & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03188a78(OVRPlugin_PoseStatef_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetOverlayFlag_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetOverlayDualAnalogTransform_TypeInfo);
    FUN_03188a78(OVRPlugin_Posef_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataCIExy_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataDebugView_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
                );
    FUN_03188a78(OVRPlugin_Quatf_TypeInfo);
    FUN_03188a78(OVRPlugin_Result_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03188a78(OVRPlugin_Size3f_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f3888);
    FUN_03188a78(PTR_DAT_070f3880);
    FUN_03188a78(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_03188a78(Best_HTTP_HostSetting_HostVariant_<>c_TypeInfo);
    FUN_03188a78(Best_HTTP_Hosts_Settings_HostVariantSettings_<>c_TypeInfo);
    DAT_0755916e = 1;
  }
  uVar10 = FUN_06851b60(0xffffffff,0);
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  *(undefined2 *)(param_1 + 0x58) = 0x101;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_0685229c(uVar10,0);
  uVar12 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_06852378(uVar10,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_06852464(uVar10,0);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x80) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_068525ac(uVar10,0);
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  *(undefined2 *)(param_1 + 0x98) = 0x101;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_03e39e24(uVar10,0,*(undefined8 *)puVar8);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_03e39e24(uVar10,0,*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0xb0) = uVar10;
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_042e4268(uVar10,*(undefined8 *)puVar2);
  puVar3 = 
  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
  ;
  *(undefined8 *)(param_1 + 200) = uVar10;
  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_056db42c(lVar11,*(undefined8 *)
                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
              );
  puVar4 = UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataDebugView_TypeInfo;
  puVar3 = UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataCIExy_TypeInfo;
  if (lVar11 != 0) {
    FUN_04a8cd34(lVar11,0,*(undefined8 *)Best_HTTP_HostSetting_HostVariant_<>c_TypeInfo);
    uVar10 = *(undefined8 *)puVar1;
    *(long *)(param_1 + 0xd0) = lVar11;
    uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
    FUN_042e4268(uVar10,*(undefined8 *)puVar2);
    uVar12 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0xd8) = uVar10;
    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
    FUN_056db42c(lVar11,*(undefined8 *)puVar3);
    puVar8 = OVRPlugin_Size3f_TypeInfo;
    puVar7 = OVRPlugin_Result_TypeInfo;
    puVar6 = OVRPlugin_Posef_TypeInfo;
    puVar5 = OVRPlugin_PoseStatef_TypeInfo;
    puVar4 = OVRPlugin_OverlayShape_TypeInfo;
    puVar3 = OVRPlugin_OVRP_1_9_0_TypeInfo;
    puVar2 = OVR_OpenVR_IVROverlay__SetOverlayFlag_TypeInfo;
    puVar1 = OVR_OpenVR_IVROverlay__SetOverlayDualAnalogTransform_TypeInfo;
    if (lVar11 != 0) {
      FUN_04a8cd34(lVar11,0,*(undefined8 *)Best_HTTP_Hosts_Settings_HostVariantSettings_<>c_TypeInfo
                  );
      uVar10 = *(undefined8 *)puVar4;
      *(long *)(param_1 + 0xe0) = lVar11;
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
      FUN_04b17294(0,uVar10,1,0,0,*(undefined8 *)puVar3);
      uVar12 = *(undefined8 *)puVar6;
      *(undefined8 *)(param_1 + 0xe8) = uVar10;
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
      FUN_0525119c(uVar10,*(undefined8 *)puVar5);
      uVar12 = *(undefined8 *)puVar6;
      *(undefined8 *)(param_1 + 0xf8) = uVar10;
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
      FUN_0525119c(uVar10,*(undefined8 *)puVar5);
      uVar12 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 0x100) = uVar10;
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
      FUN_03e39e24(uVar10,0,*(undefined8 *)puVar7);
      uVar12 = *(undefined8 *)puVar1;
      *(undefined8 *)(param_1 + 0x108) = uVar10;
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
      FUN_0525ae30(uVar10,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x110) = uVar10;
      thunk_FUN_069d3450(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


