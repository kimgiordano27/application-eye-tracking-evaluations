/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.BuddyAllocator$$Dispose
ENTRY_POINT: 065ecf98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_Rendering_Universal_BuddyAllocator__Dispose(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar16;
  long unaff_x23;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_x26;
  undefined8 *puVar21;
  long *unaff_x27;
  undefined8 *unaff_x29;
  
  lVar18 = param_1[4];
  puVar21 = *(undefined8 **)(unaff_x26 + 0x860);
  if (lVar18 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar19 = *param_1;
    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar18,uVar19,*(undefined8 *)System_Security_Cryptography_AsnEncodedData_TypeInfo,0
                );
    *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x20) = lVar18;
  }
  *(long *)(unaff_x23 + 0x60) = lVar18;
  if (unaff_x22 == 0) goto LAB_065ef488;
  FUN_04782880();
  lVar18 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  puVar3 = UnityEngine_Android_AndroidOrientation_TypeInfo;
  if (lVar18 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar18 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
  }
  else {
    FUN_042e4a64();
  }
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_065ded9c(uVar19,0);
  lVar18 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar18 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar18 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) = uVar19;
  }
  else {
    FUN_042e4a64();
  }
  lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar18,0);
  if (lVar18 == 0) goto LAB_065ef488;
  uVar19 = *(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  lVar16 = *(long *)(lVar18 + 0x48);
  *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)UnityEngine_UIElements_AttachToPanelEvent_TypeInfo
  ;
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_065dd9c8(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)System_AsyncCallback_TypeInfo;
  uVar19 = *puVar21;
  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)System_Attribute_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar3 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_0510cecc();
  puVar3 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_051dec74();
  *(undefined8 *)(lVar8 + 0x58) = uVar19;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*unaff_x29);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar8,0);
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar21);
  FUN_0570e268();
  puVar3 = string_____TypeInfo;
  if (lVar8 == 0) goto LAB_065ef488;
  lVar17 = *(long *)(lVar8 + 0x48);
  *(undefined8 *)(lVar8 + 0x40) = uVar19;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_065d0ec8(lVar16,0);
  puVar7 = UnityEngine_AndroidReflection_TypeInfo;
  puVar6 = PTR_DAT_07114388;
  puVar3 = PTR_DAT_07113968;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo;
  uVar19 = *(undefined8 *)PTR_DAT_07113968;
  *(undefined8 *)(lVar16 + 0x28) =
       *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e7e4();
  uVar14 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
  FUN_0510eaf4();
  puVar2 = PTR_DAT_070c1958;
  uVar14 = *(undefined8 *)puVar7;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar19 = FUN_0593e698(uVar14,0);
  FUN_065de584(lVar16,uVar19,0);
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_0570e7e4();
  uVar14 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar16 + 0x80) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
  FUN_0510eaf4();
  *(undefined8 *)(lVar16 + 0x88) = uVar19;
  puVar3 = PTR_DAT_070f5f08;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)PTR_DAT_070f5f08);
  lVar17 = *(long *)(lVar8 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
  FUN_065ddc4c(lVar16,0);
  puVar7 = AlarmClockController_TypeInfo;
  puVar6 = PTR_DAT_07112a08;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar19 = *(undefined8 *)System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar6);
  FUN_0570f240();
  puVar6 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar6);
  FUN_05112628();
  lVar9 = *(long *)puVar7;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  puVar6 = PTR_DAT_07113968;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar9 + 0xb8);
  lVar20 = puVar21[5];
  if (lVar20 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar20,uVar19,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_ArrayByRefUpdater_TypeInfo,0);
    lVar9 = *(long *)puVar7;
    *(long *)(*(long *)(lVar9 + 0xb8) + 0x28) = lVar20;
  }
  iVar13 = *(int *)(lVar9 + 0xe4);
  *(long *)(lVar16 + 0x60) = lVar20;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar9 + 0xb8);
  lVar20 = puVar21[6];
  if (lVar20 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar20,uVar19,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_ArrayLengthInstruction_TypeInfo,
                 0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x30) = lVar20;
  }
  *(long *)(lVar16 + 0x68) = lVar20;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
  FUN_065ddc4c(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)
            System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo;
  uVar19 = *(undefined8 *)PTR_DAT_07112a08;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)Fusion_AssertException_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_05112628();
  puVar2 = PTR_DAT_070ca860;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570e268();
  lVar17 = *(long *)(lVar8 + 0x48);
  *(undefined8 *)(lVar16 + 0x40) = uVar19;
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
  lVar17 = *(long *)(lVar8 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddae0(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)Sentry_Internal_ScopeStack_AsyncLocalScopeStackContainer_TypeInfo;
  uVar19 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar16 + 0x28) =
       *(undefined8 *)Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e7e4();
  puVar2 = PTR_DAT_07114388;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0510eaf4();
  lVar9 = *(long *)puVar7;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar9 + 0xb8);
  lVar20 = puVar21[7];
  if (lVar20 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar6);
    FUN_0570e7e4(lVar20,uVar19,*(undefined8 *)System_Buffers_ArrayPoolEventSource_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x38) = lVar20;
  }
  uVar19 = *(undefined8 *)puVar6;
  *(long *)(lVar16 + 0x60) = lVar20;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e7e4();
  *(undefined8 *)(lVar16 + 0x68) = uVar19;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
  lVar17 = *(long *)(lVar8 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo);
  FUN_065ddae0(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskCache_TypeInfo;
  uVar19 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncReadRequest_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e7e4();
  puVar2 = PTR_DAT_07114388;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0510eaf4();
  lVar9 = *(long *)puVar7;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar9 + 0xb8);
  lVar20 = puVar21[8];
  if (lVar20 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar6);
    FUN_0570e7e4(lVar20,uVar19,*(undefined8 *)System_Buffers_ArrayPoolEventSource_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x40) = lVar20;
  }
  puVar2 = PTR_DAT_070ca860;
  uVar19 = *(undefined8 *)puVar6;
  *(long *)(lVar16 + 0x60) = lVar20;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e7e4();
  *(undefined8 *)(lVar16 + 0x68) = uVar19;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
  puVar5 = Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  puVar6 = ExitGames_Client_Photon_Hashtable___TypeInfo;
  if (*(long *)(lVar18 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar18 + 0x48),lVar8,*(undefined8 *)puVar3);
  lVar16 = *(long *)(lVar18 + 0x48);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar5);
  FUN_065dd9c8(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo;
  uVar19 = *(undefined8 *)puVar2;
  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)UnityEngine_AssemblyFullName_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar4 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar4);
  FUN_0510cecc();
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar8,0);
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo;
  if (lVar8 == 0) goto LAB_065ef488;
  lVar17 = *(long *)(lVar8 + 0x48);
  *(undefined8 *)(lVar8 + 0x40) = uVar19;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddc4c(lVar16,0);
  puVar2 = PTR_DAT_07112a08;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar19 = *(undefined8 *)UnityEngine_Assertions_Assert_TypeInfo;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar9 = *(long *)puVar7;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar9 + 0xb8);
  lVar20 = puVar21[9];
  if (lVar20 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar20,uVar19,*(undefined8 *)System_ArraySpec_TypeInfo,0);
    lVar9 = *(long *)puVar7;
    *(long *)(*(long *)(lVar9 + 0xb8) + 0x48) = lVar20;
  }
  iVar13 = *(int *)(lVar9 + 0xe4);
  *(long *)(lVar16 + 0x60) = lVar20;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar9 + 0xb8);
  lVar20 = puVar21[10];
  if (lVar20 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar20,uVar19,*(undefined8 *)System_ArrayTypeMismatchException_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x50) = lVar20;
  }
  *(long *)(lVar16 + 0x68) = lVar20;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
  lVar17 = *(long *)(lVar8 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar5);
  FUN_065dd9c8(lVar16,0);
  puVar2 = PTR_DAT_070ca860;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar19 = *(undefined8 *)Oculus_Platform_Models_AssetDetailsList_TypeInfo;
  *(undefined8 *)(lVar16 + 0x28) =
       *(undefined8 *)UnityEngine_Rendering_AttachmentIndexArray_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar16 + 0x58) = uVar19;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
  if (*(long *)(lVar18 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar18 + 0x48),lVar8,*(undefined8 *)puVar3);
  lVar16 = *(long *)(lVar18 + 0x48);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar5);
  FUN_065dd9c8(lVar8,0);
  puVar2 = PTR_DAT_070ca860;
  if (lVar8 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)UnityEngine_AsyncOperation_TypeInfo;
  uVar19 = *(undefined8 *)PTR_DAT_070ca860;
  *(undefined8 *)(lVar8 + 0x28) =
       *(undefined8 *)UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar5 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar5);
  FUN_0510cecc();
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar8,0);
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo;
  if (lVar8 == 0) goto LAB_065ef488;
  *(undefined8 *)(lVar8 + 0x40) = uVar19;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddc4c(lVar16,0);
  puVar2 = PTR_DAT_07112a08;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar19 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar16 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar17 = *(long *)puVar7;
  *(undefined8 *)(lVar16 + 0x50) = uVar19;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar17 + 0xb8);
  lVar9 = puVar21[0xb];
  if (lVar9 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar9,uVar19,
                 *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_Arrays_TypeInfo,
                 0);
    lVar17 = *(long *)puVar7;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x58) = lVar9;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar16 + 0x60) = lVar9;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar21 = *(undefined8 **)(lVar17 + 0xb8);
  lVar9 = puVar21[0xc];
  if (lVar9 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar21;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar9,uVar19,
                 *(undefined8 *)System_Runtime_Serialization_AsmxCharDataContract_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x60) = lVar9;
  }
  puVar2 = PTR_DAT_070ca860;
  *(long *)(lVar16 + 0x68) = lVar9;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570e268();
  lVar17 = *(long *)(lVar8 + 0x48);
  *(undefined8 *)(lVar16 + 0x40) = uVar19;
  if (lVar17 == 0) goto LAB_065ef488;
  FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
  if (*(long *)(lVar18 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar18 + 0x48),lVar8,*(undefined8 *)puVar3);
  lVar16 = *(long *)(lVar18 + 0x48);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)
                      UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
  FUN_065ddc4c(lVar8,0);
  puVar2 = PTR_DAT_07112a08;
  puVar21 = (undefined8 *)PTR_DAT_070ca860;
  if (lVar8 == 0) goto LAB_065ef488;
  uVar19 = *(undefined8 *)System_Reflection_AssemblyName_TypeInfo;
  *(undefined8 *)(lVar8 + 0x28) =
       *(undefined8 *)
        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricKeyParameter_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar17 = *(long *)puVar7;
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar9 = puVar12[0xd];
  if (lVar9 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar9,uVar19,
                 *(undefined8 *)System_Runtime_Serialization_AsmxGuidDataContract_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x68) = lVar9;
  }
  *(long *)(lVar8 + 0x60) = lVar9;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar16 = *(long *)puVar6;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
  }
  else {
    FUN_042e4a64(unaff_x20,lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                );
  }
  lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar18,0);
  if (lVar18 == 0) goto LAB_065ef488;
  lVar16 = *(long *)(lVar18 + 0x48);
  uVar19 = *(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncProtocolResult_TypeInfo;
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_065dd9c8(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)Oculus_Platform_Models_AssetDetails_TypeInfo;
  uVar19 = *puVar21;
  *(undefined8 *)(lVar8 + 0x28) =
       *(undefined8 *)
        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricCipherKeyPair_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar8 + 0x58) = uVar19;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar16 = *(long *)(lVar18 + 0x48);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)System_AssemblyLoadEventArgs_TypeInfo;
  uVar19 = *puVar21;
  *(undefined8 *)(lVar8 + 0x28) =
       *(undefined8 *)System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar8 + 0x58) = uVar19;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar16 = *(long *)puVar6;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
  }
  else {
    FUN_042e4a64(unaff_x20,lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                );
  }
  lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar18,0);
  if (lVar18 == 0) goto LAB_065ef488;
  uVar19 = *puVar21;
  *(undefined8 *)(lVar18 + 0x28) =
       *(undefined8 *)System_Linq_Expressions_AssignBinaryExpression_TypeInfo;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar2 = Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  lVar16 = *(long *)(lVar18 + 0x48);
  *(undefined8 *)(lVar18 + 0x40) = uVar19;
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_065dd9c8(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo;
  uVar19 = *puVar21;
  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)AttachablesAuthoringSceneManager_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar14;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0510cecc();
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar16 = *(long *)(lVar18 + 0x48);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  uVar19 = *puVar21;
  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)UnityEditor_Analytics_AssetExportAnalytic_TypeInfo;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar8 + 0x48) = uVar19;
  uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_0510cecc();
  *(undefined8 *)(lVar8 + 0x50) = uVar19;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar16 = *(long *)(lVar18 + 0x48);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  lVar17 = *(long *)puVar7;
  uVar19 = *(undefined8 *)System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo;
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)UnityEngine_AsyncInstantiateOperation_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar19;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar9 = puVar12[0xe];
  if (lVar9 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar21);
    FUN_0570e268(lVar9,uVar19,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1BitStringParser_TypeInfo,0);
    lVar17 = *(long *)puVar7;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x70) = lVar9;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar8 + 0x48) = lVar9;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar9 = puVar12[0xf];
  if (lVar9 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f5010);
    FUN_0510cecc(lVar9,uVar19,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1EncodableVector_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78) = lVar9;
  }
  *(long *)(lVar8 + 0x50) = lVar9;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar8,0);
  lVar16 = *(long *)puVar7;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar16 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
  lVar17 = puVar12[0x10];
  if (lVar17 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar21);
    FUN_0570e268(lVar17,uVar19,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Exception_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x80) = lVar17;
  }
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
  if (lVar8 == 0) goto LAB_065ef488;
  lVar9 = *(long *)(lVar8 + 0x48);
  *(long *)(lVar8 + 0x40) = lVar17;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddae0(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  lVar17 = *(long *)puVar7;
  uVar19 = *(undefined8 *)System_Xml_Schema_Asttree_TypeInfo;
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)UnityEngine_InputSystem_AttitudeSensor_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar19;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar20 = puVar12[0x11];
  if (lVar20 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar20,uVar19,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1GeneralizedTime_TypeInfo,0);
    lVar17 = *(long *)puVar7;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x88) = lVar20;
    puVar21 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar16 + 0x48) = lVar20;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar20 = puVar12[0x12];
  if (lVar20 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07114388);
    FUN_0510eaf4(lVar20,uVar19,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1InputStream_TypeInfo,0);
    lVar17 = *(long *)puVar7;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x90) = lVar20;
    puVar21 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar16 + 0x50) = lVar20;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar20 = puVar12[0x13];
  if (lVar20 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar20,uVar19,
                 *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Object_TypeInfo,0
                );
    lVar17 = *(long *)puVar7;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x98) = lVar20;
    puVar21 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar16 + 0x60) = lVar20;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *(long *)puVar7;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar20 = puVar12[0x14];
  if (lVar20 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar20,uVar19,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1ObjectDescriptor_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xa0) = lVar20;
    puVar21 = (undefined8 *)PTR_DAT_070ca860;
  }
  *(long *)(lVar16 + 0x68) = lVar20;
  if (lVar9 == 0) goto LAB_065ef488;
  FUN_04782880(lVar9,lVar16,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_070c2418;
  if (*(long *)(lVar18 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar18 + 0x48),lVar8,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar10 = FUN_0698fe24(0);
  if ((uVar10 & 1) != 0) {
    lVar16 = *(long *)(lVar18 + 0x48);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar8,0);
    if (lVar8 == 0) goto LAB_065ef488;
    uVar19 = *puVar21;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncWriteRequest_TypeInfo;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar8 + 0x48) = uVar19;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar8 + 0x50) = uVar19;
    if (lVar16 == 0) goto LAB_065ef488;
    FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_065dc6cc(lVar8,0);
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar21);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5f38;
    if (lVar8 == 0) goto LAB_065ef488;
    lVar17 = *(long *)(lVar8 + 0x48);
    *(undefined8 *)(lVar8 + 0x40) = uVar19;
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    FUN_065d11a0(lVar16,0);
    if (lVar16 == 0) goto LAB_065ef488;
    lVar9 = *(long *)puVar7;
    iVar13 = *(int *)(lVar9 + 0xe4);
    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)UnityEngine_AssemblyVersion_TypeInfo;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar9 = *(long *)puVar7;
    }
    puVar12 = *(undefined8 **)(lVar9 + 0xb8);
    lVar20 = puVar12[0x15];
    if (lVar20 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar12;
      lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_070f5f30);
      FUN_0570ec28(lVar20,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetString_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xa8) = lVar20;
      puVar21 = (undefined8 *)PTR_DAT_070ca860;
    }
    *(long *)(lVar16 + 0x48) = lVar20;
    if (lVar17 == 0) goto LAB_065ef488;
    FUN_04782880(lVar17,lVar16,*(undefined8 *)puVar3);
    if (*(long *)(lVar18 + 0x48) == 0) goto LAB_065ef488;
    FUN_04782880(*(long *)(lVar18 + 0x48),lVar8,*(undefined8 *)puVar3);
    lVar16 = *(long *)(lVar18 + 0x48);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar8,0);
    if (lVar8 == 0) goto LAB_065ef488;
    uVar19 = *puVar21;
    *(undefined8 *)(lVar8 + 0x28) =
         *(undefined8 *)System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar8 + 0x48) = uVar19;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar8 + 0x50) = uVar19;
    if (lVar16 == 0) goto LAB_065ef488;
    FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
    lVar16 = *(long *)(lVar18 + 0x48);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar8,0);
    if (lVar8 == 0) goto LAB_065ef488;
    uVar19 = *puVar21;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)UnityEngine_Rendering_AtlasAllocator_TypeInfo;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar8 + 0x48) = uVar19;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar8 + 0x50) = uVar19;
    if (lVar16 == 0) goto LAB_065ef488;
    FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
  }
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar16 = *(long *)puVar6;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
  }
  else {
    FUN_042e4a64(unaff_x20,lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                );
  }
  if (*(char *)(unaff_x19 + 0x1a) == '\0') {
LAB_065ef394:
    iVar13 = *(int *)(unaff_x20 + 0x18);
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_069d69b8(uVar19,0,0);
    if ((uVar10 & 1) == 0) goto LAB_065ef394;
    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_065dc6cc(lVar18,0);
    if (lVar18 == 0) goto LAB_065ef488;
    lVar16 = *(long *)(lVar18 + 0x48);
    uVar19 = *(undefined8 *)UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
    *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)System_Reflection_AssemblyNameFlags_TypeInfo;
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar19);
    FUN_065ddae0(lVar8,0);
    if (lVar8 == 0) goto LAB_065ef488;
    lVar17 = *(long *)puVar7;
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(undefined8 *)(lVar8 + 0x28) =
         *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x16];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07113968);
      FUN_0570e7e4(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo,0)
      ;
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xb0) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x48) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x17];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07114388);
      FUN_0510eaf4(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OutputStream_TypeInfo,0);
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xb8) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x50) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x18];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07113968);
      FUN_0570e7e4(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1ParsingException_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xc0) = lVar9;
    }
    *(long *)(lVar8 + 0x60) = lVar9;
    if (lVar16 == 0) goto LAB_065ef488;
    FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
    lVar16 = *(long *)(lVar18 + 0x48);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)
                        UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo)
    ;
    FUN_065ddc4c(lVar8,0);
    if (lVar8 == 0) goto LAB_065ef488;
    lVar17 = *(long *)puVar7;
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(undefined8 *)(lVar8 + 0x28) =
         *(undefined8 *)UnityEditor_Analytics_AssetImportAnalytic_TypeInfo;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x19];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1RelativeOid_TypeInfo,0);
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 200) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x48) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x1a];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_071161b8);
      FUN_05112628(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Sequence_TypeInfo,0);
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xd0) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x50) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x1b];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar9,uVar19,
                   *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Set_TypeInfo,0)
      ;
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xd8) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x60) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x1c];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe0) = lVar9;
    }
    *(long *)(lVar8 + 0x68) = lVar9;
    if (lVar16 == 0) goto LAB_065ef488;
    FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)string_____TypeInfo);
    FUN_065d0ec8(lVar8,0);
    puVar5 = sbyte_____TypeInfo;
    puVar2 = PTR_DAT_07114388;
    if (lVar8 == 0) goto LAB_065ef488;
    uVar15 = *(undefined8 *)Best_HTTP_Hosts_Settings_AsteriskStringComparer_TypeInfo;
    *(undefined8 *)(lVar8 + 0x28) =
         *(undefined8 *)UnityEngine_Rendering_AttachmentDescriptor_TypeInfo;
    uVar19 = *(undefined8 *)(unaff_x19 + 0x1e8);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x1f0);
    uVar11 = *(undefined8 *)puVar5;
    *(undefined8 *)(lVar8 + 0x30) = uVar15;
    *(undefined8 *)(lVar8 + 0x60) = uVar19;
    FUN_053dcac8(lVar8,uVar14,uVar11);
    puVar5 = PTR_DAT_07113968;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4();
    uVar14 = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar8 + 0x80) = uVar19;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
    FUN_0510eaf4();
    uVar14 = *(undefined8 *)puVar5;
    *(undefined8 *)(lVar8 + 0x88) = uVar19;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
    FUN_0570e7e4();
    uVar14 = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar8 + 0x48) = uVar19;
    uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
    FUN_0510eaf4();
    lVar16 = *(long *)(lVar18 + 0x48);
    *(undefined8 *)(lVar8 + 0x50) = uVar19;
    *(long *)(unaff_x19 + 0x208) = lVar8;
    if (lVar16 == 0) goto LAB_065ef488;
    FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
    lVar16 = *(long *)(lVar18 + 0x48);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)
                        UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo)
    ;
    FUN_065ddc4c(lVar8,0);
    if (lVar8 == 0) goto LAB_065ef488;
    lVar17 = *(long *)puVar7;
    uVar19 = *(undefined8 *)Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo;
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(undefined8 *)(lVar8 + 0x28) =
         *(undefined8 *)UnityEngine_Assertions_AssertionException_TypeInfo;
    *(undefined8 *)(lVar8 + 0x30) = uVar19;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x1d];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar9,uVar19,
                   *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Tag_TypeInfo,0)
      ;
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xe8) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x48) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x1e];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_071161b8);
      FUN_05112628(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObject_TypeInfo,0);
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xf0) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x50) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x1f];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar9,uVar19,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1UtcTime_TypeInfo,0);
      lVar17 = *(long *)puVar7;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xf8) = lVar9;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar8 + 0x60) = lVar9;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
    puVar21 = *(undefined8 **)(lVar17 + 0xb8);
    lVar9 = puVar21[0x20];
    if (lVar9 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar21 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar19 = *puVar21;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar9,uVar19,*(undefined8 *)System_Reflection_Assembly_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x100) = lVar9;
    }
    *(long *)(lVar8 + 0x68) = lVar9;
    if (lVar16 == 0) goto LAB_065ef488;
    FUN_04782880(lVar16,lVar8,*(undefined8 *)puVar3);
    lVar8 = *(long *)(unaff_x20 + 0x10);
    lVar16 = *(long *)puVar6;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_065ef488;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(lVar8 + 0x18) <= uVar1) {
      FUN_042e4a64(unaff_x20,lVar18,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      goto LAB_065ef394;
    }
    iVar13 = uVar1 + 1;
    *(int *)(unaff_x20 + 0x18) = iVar13;
    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
  }
  puVar6 = Oculus_Platform_Models_AchievementProgress_TypeInfo;
  puVar3 = UnityEngine_Rendering_RenderTargetIdentifier_____TypeInfo;
  if (0 < iVar13) {
    uVar19 = FUN_042e652c(unaff_x20,*(undefined8 *)UnityEngine_Hash128___TypeInfo);
    lVar18 = *(long *)puVar3;
    *(undefined8 *)(unaff_x19 + 0x198) = uVar19;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar18);
    }
    lVar18 = FUN_065cf918(0);
    lVar8 = *(long *)puVar6;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar8);
    }
    if (((lVar18 == 0) ||
        (lVar18 = FUN_065cfa50(lVar18,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),1,0,
                               0,0), lVar18 == 0)) || (*(long *)(lVar18 + 0x28) == 0))
    goto LAB_065ef488;
    FUN_047829dc(*(long *)(lVar18 + 0x28),*(undefined8 *)(unaff_x19 + 0x198),
                 *(undefined8 *)System_Runtime_CompilerServices_IStrongBox___TypeInfo);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar18 = FUN_065cf918(0);
  if (lVar18 != 0) {
    FUN_065cf9a4(lVar18,*(undefined8 *)(unaff_x19 + 0x180),0);
    return;
  }
LAB_065ef488:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


