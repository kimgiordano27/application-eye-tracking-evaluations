/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.BuddyAllocator$$AlignForward
ENTRY_POINT: 065ed000
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


void UnityEngine_Rendering_Universal_BuddyAllocator__AlignForward(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *unaff_x26;
  undefined8 *unaff_x29;
  
  FUN_04782880();
  lVar13 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  puVar3 = UnityEngine_Android_AndroidOrientation_TypeInfo;
  if (lVar13 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
  }
  else {
    FUN_042e4a64();
  }
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_065ded9c(uVar8,0);
  lVar13 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar13 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
  }
  else {
    FUN_042e4a64();
  }
  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar13,0);
  if (lVar13 == 0) goto LAB_065ef488;
  uVar8 = *(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  lVar19 = *(long *)(lVar13 + 0x48);
  *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)UnityEngine_UIElements_AttachToPanelEvent_TypeInfo
  ;
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_065dd9c8(lVar9,0);
  if (lVar9 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)System_AsyncCallback_TypeInfo;
  uVar8 = *unaff_x26;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)System_Attribute_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar3 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_0510cecc();
  puVar3 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_051dec74();
  *(undefined8 *)(lVar9 + 0x58) = uVar8;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*unaff_x29);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar9,0);
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x26);
  FUN_0570e268();
  puVar3 = string_____TypeInfo;
  if (lVar9 == 0) goto LAB_065ef488;
  lVar20 = *(long *)(lVar9 + 0x48);
  *(undefined8 *)(lVar9 + 0x40) = uVar8;
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_065d0ec8(lVar19,0);
  puVar7 = UnityEngine_AndroidReflection_TypeInfo;
  puVar6 = PTR_DAT_07114388;
  puVar3 = PTR_DAT_07113968;
  if (lVar19 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo;
  uVar8 = *(undefined8 *)PTR_DAT_07113968;
  *(undefined8 *)(lVar19 + 0x28) =
       *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e7e4();
  uVar17 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar17);
  FUN_0510eaf4();
  puVar2 = PTR_DAT_070c1958;
  uVar17 = *(undefined8 *)puVar7;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_0593e698(uVar17,0);
  FUN_065de584(lVar19,uVar8,0);
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_0570e7e4();
  uVar17 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar19 + 0x80) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar17);
  FUN_0510eaf4();
  *(undefined8 *)(lVar19 + 0x88) = uVar8;
  puVar3 = PTR_DAT_070f5f08;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)PTR_DAT_070f5f08);
  lVar20 = *(long *)(lVar9 + 0x48);
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
  FUN_065ddc4c(lVar19,0);
  puVar7 = AlarmClockController_TypeInfo;
  puVar6 = PTR_DAT_07112a08;
  if (lVar19 == 0) goto LAB_065ef488;
  uVar8 = *(undefined8 *)System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar6);
  FUN_0570f240();
  puVar6 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar6);
  FUN_05112628();
  lVar10 = *(long *)puVar7;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  puVar6 = PTR_DAT_07113968;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar10 + 0xb8);
  lVar21 = puVar14[5];
  if (lVar21 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar21,uVar8,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_ArrayByRefUpdater_TypeInfo,0);
    lVar10 = *(long *)puVar7;
    *(long *)(*(long *)(lVar10 + 0xb8) + 0x28) = lVar21;
  }
  iVar16 = *(int *)(lVar10 + 0xe4);
  *(long *)(lVar19 + 0x60) = lVar21;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar10 + 0xb8);
  lVar21 = puVar14[6];
  if (lVar21 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar21,uVar8,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_ArrayLengthInstruction_TypeInfo,
                 0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x30) = lVar21;
  }
  *(long *)(lVar19 + 0x68) = lVar21;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
  FUN_065ddc4c(lVar19,0);
  if (lVar19 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)
            System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo;
  uVar8 = *(undefined8 *)PTR_DAT_07112a08;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)Fusion_AssertException_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  puVar2 = PTR_DAT_070ca860;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  lVar20 = *(long *)(lVar9 + 0x48);
  *(undefined8 *)(lVar19 + 0x40) = uVar8;
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
  lVar20 = *(long *)(lVar9 + 0x48);
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddae0(lVar19,0);
  if (lVar19 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)Sentry_Internal_ScopeStack_AsyncLocalScopeStackContainer_TypeInfo;
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar19 + 0x28) =
       *(undefined8 *)Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e7e4();
  puVar2 = PTR_DAT_07114388;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510eaf4();
  lVar10 = *(long *)puVar7;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar10 + 0xb8);
  lVar21 = puVar14[7];
  if (lVar21 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar6);
    FUN_0570e7e4(lVar21,uVar8,*(undefined8 *)System_Buffers_ArrayPoolEventSource_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x38) = lVar21;
  }
  uVar8 = *(undefined8 *)puVar6;
  *(long *)(lVar19 + 0x60) = lVar21;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e7e4();
  *(undefined8 *)(lVar19 + 0x68) = uVar8;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
  lVar20 = *(long *)(lVar9 + 0x48);
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo);
  FUN_065ddae0(lVar19,0);
  if (lVar19 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskCache_TypeInfo;
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncReadRequest_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e7e4();
  puVar2 = PTR_DAT_07114388;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510eaf4();
  lVar10 = *(long *)puVar7;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar10 + 0xb8);
  lVar21 = puVar14[8];
  if (lVar21 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar6);
    FUN_0570e7e4(lVar21,uVar8,*(undefined8 *)System_Buffers_ArrayPoolEventSource_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x40) = lVar21;
  }
  puVar2 = PTR_DAT_070ca860;
  uVar8 = *(undefined8 *)puVar6;
  *(long *)(lVar19 + 0x60) = lVar21;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e7e4();
  *(undefined8 *)(lVar19 + 0x68) = uVar8;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
  puVar5 = Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  puVar6 = ExitGames_Client_Photon_Hashtable___TypeInfo;
  if (*(long *)(lVar13 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar13 + 0x48),lVar9,*(undefined8 *)puVar3);
  lVar19 = *(long *)(lVar13 + 0x48);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar5);
  FUN_065dd9c8(lVar9,0);
  if (lVar9 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo;
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)UnityEngine_AssemblyFullName_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar4 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar4);
  FUN_0510cecc();
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar9,0);
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo;
  if (lVar9 == 0) goto LAB_065ef488;
  lVar20 = *(long *)(lVar9 + 0x48);
  *(undefined8 *)(lVar9 + 0x40) = uVar8;
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddc4c(lVar19,0);
  puVar2 = PTR_DAT_07112a08;
  if (lVar19 == 0) goto LAB_065ef488;
  uVar8 = *(undefined8 *)UnityEngine_Assertions_Assert_TypeInfo;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar10 = *(long *)puVar7;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar10 + 0xb8);
  lVar21 = puVar14[9];
  if (lVar21 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar21,uVar8,*(undefined8 *)System_ArraySpec_TypeInfo,0);
    lVar10 = *(long *)puVar7;
    *(long *)(*(long *)(lVar10 + 0xb8) + 0x48) = lVar21;
  }
  iVar16 = *(int *)(lVar10 + 0xe4);
  *(long *)(lVar19 + 0x60) = lVar21;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar10 + 0xb8);
  lVar21 = puVar14[10];
  if (lVar21 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar21,uVar8,*(undefined8 *)System_ArrayTypeMismatchException_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x50) = lVar21;
  }
  *(long *)(lVar19 + 0x68) = lVar21;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
  lVar20 = *(long *)(lVar9 + 0x48);
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar5);
  FUN_065dd9c8(lVar19,0);
  puVar2 = PTR_DAT_070ca860;
  if (lVar19 == 0) goto LAB_065ef488;
  uVar8 = *(undefined8 *)Oculus_Platform_Models_AssetDetailsList_TypeInfo;
  *(undefined8 *)(lVar19 + 0x28) =
       *(undefined8 *)UnityEngine_Rendering_AttachmentIndexArray_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar19 + 0x58) = uVar8;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
  if (*(long *)(lVar13 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar13 + 0x48),lVar9,*(undefined8 *)puVar3);
  lVar19 = *(long *)(lVar13 + 0x48);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar5);
  FUN_065dd9c8(lVar9,0);
  puVar2 = PTR_DAT_070ca860;
  if (lVar9 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)UnityEngine_AsyncOperation_TypeInfo;
  uVar8 = *(undefined8 *)PTR_DAT_070ca860;
  *(undefined8 *)(lVar9 + 0x28) =
       *(undefined8 *)UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar5 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar5);
  FUN_0510cecc();
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar9,0);
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo;
  if (lVar9 == 0) goto LAB_065ef488;
  *(undefined8 *)(lVar9 + 0x40) = uVar8;
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddc4c(lVar19,0);
  puVar2 = PTR_DAT_07112a08;
  if (lVar19 == 0) goto LAB_065ef488;
  uVar8 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar19 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar20 = *(long *)puVar7;
  *(undefined8 *)(lVar19 + 0x50) = uVar8;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar20 + 0xb8);
  lVar10 = puVar14[0xb];
  if (lVar10 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar10,uVar8,
                 *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_Arrays_TypeInfo,
                 0);
    lVar20 = *(long *)puVar7;
    *(long *)(*(long *)(lVar20 + 0xb8) + 0x58) = lVar10;
  }
  iVar16 = *(int *)(lVar20 + 0xe4);
  *(long *)(lVar19 + 0x60) = lVar10;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar14 = *(undefined8 **)(lVar20 + 0xb8);
  lVar10 = puVar14[0xc];
  if (lVar10 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar14;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar10,uVar8,
                 *(undefined8 *)System_Runtime_Serialization_AsmxCharDataContract_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x60) = lVar10;
  }
  puVar2 = PTR_DAT_070ca860;
  *(long *)(lVar19 + 0x68) = lVar10;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  lVar20 = *(long *)(lVar9 + 0x48);
  *(undefined8 *)(lVar19 + 0x40) = uVar8;
  if (lVar20 == 0) goto LAB_065ef488;
  FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
  if (*(long *)(lVar13 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar13 + 0x48),lVar9,*(undefined8 *)puVar3);
  lVar19 = *(long *)(lVar13 + 0x48);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)
                      UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
  FUN_065ddc4c(lVar9,0);
  puVar2 = PTR_DAT_07112a08;
  puVar14 = (undefined8 *)PTR_DAT_070ca860;
  if (lVar9 == 0) goto LAB_065ef488;
  uVar8 = *(undefined8 *)System_Reflection_AssemblyName_TypeInfo;
  *(undefined8 *)(lVar9 + 0x28) =
       *(undefined8 *)
        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricKeyParameter_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar20 = *(long *)puVar7;
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar20 + 0xb8);
  lVar10 = puVar15[0xd];
  if (lVar10 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar10,uVar8,
                 *(undefined8 *)System_Runtime_Serialization_AsmxGuidDataContract_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x68) = lVar10;
  }
  *(long *)(lVar9 + 0x60) = lVar10;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar19 = *(long *)puVar6;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
  }
  else {
    FUN_042e4a64(unaff_x20,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                );
  }
  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar13,0);
  if (lVar13 == 0) goto LAB_065ef488;
  lVar19 = *(long *)(lVar13 + 0x48);
  uVar8 = *(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncProtocolResult_TypeInfo;
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_065dd9c8(lVar9,0);
  if (lVar9 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)Oculus_Platform_Models_AssetDetails_TypeInfo;
  uVar8 = *puVar14;
  *(undefined8 *)(lVar9 + 0x28) =
       *(undefined8 *)
        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricCipherKeyPair_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar9 + 0x58) = uVar8;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar19 = *(long *)(lVar13 + 0x48);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar9,0);
  if (lVar9 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)System_AssemblyLoadEventArgs_TypeInfo;
  uVar8 = *puVar14;
  *(undefined8 *)(lVar9 + 0x28) =
       *(undefined8 *)System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar9 + 0x58) = uVar8;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar19 = *(long *)puVar6;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
  }
  else {
    FUN_042e4a64(unaff_x20,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                );
  }
  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar13,0);
  if (lVar13 == 0) goto LAB_065ef488;
  uVar8 = *puVar14;
  *(undefined8 *)(lVar13 + 0x28) =
       *(undefined8 *)System_Linq_Expressions_AssignBinaryExpression_TypeInfo;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar2 = Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  lVar19 = *(long *)(lVar13 + 0x48);
  *(undefined8 *)(lVar13 + 0x40) = uVar8;
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_065dd9c8(lVar9,0);
  if (lVar9 == 0) goto LAB_065ef488;
  uVar17 = *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo;
  uVar8 = *puVar14;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)AttachablesAuthoringSceneManager_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar17;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar19 = *(long *)(lVar13 + 0x48);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar9,0);
  if (lVar9 == 0) goto LAB_065ef488;
  uVar8 = *puVar14;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)UnityEditor_Analytics_AssetExportAnalytic_TypeInfo;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar19 = *(long *)(lVar13 + 0x48);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar9,0);
  if (lVar9 == 0) goto LAB_065ef488;
  lVar20 = *(long *)puVar7;
  uVar8 = *(undefined8 *)System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo;
  iVar16 = *(int *)(lVar20 + 0xe4);
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)UnityEngine_AsyncInstantiateOperation_TypeInfo;
  *(undefined8 *)(lVar9 + 0x30) = uVar8;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar20 + 0xb8);
  lVar10 = puVar15[0xe];
  if (lVar10 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar14);
    FUN_0570e268(lVar10,uVar8,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1BitStringParser_TypeInfo,0);
    lVar20 = *(long *)puVar7;
    *(long *)(*(long *)(lVar20 + 0xb8) + 0x70) = lVar10;
  }
  iVar16 = *(int *)(lVar20 + 0xe4);
  *(long *)(lVar9 + 0x48) = lVar10;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar20 + 0xb8);
  lVar10 = puVar15[0xf];
  if (lVar10 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_070f5010);
    FUN_0510cecc(lVar10,uVar8,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1EncodableVector_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78) = lVar10;
  }
  *(long *)(lVar9 + 0x50) = lVar10;
  if (lVar19 == 0) goto LAB_065ef488;
  FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar9,0);
  lVar19 = *(long *)puVar7;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar19 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar19 + 0xb8);
  lVar20 = puVar15[0x10];
  if (lVar20 == 0) {
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar14);
    FUN_0570e268(lVar20,uVar8,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Exception_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x80) = lVar20;
  }
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
  if (lVar9 == 0) goto LAB_065ef488;
  lVar10 = *(long *)(lVar9 + 0x48);
  *(long *)(lVar9 + 0x40) = lVar20;
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddae0(lVar19,0);
  if (lVar19 == 0) goto LAB_065ef488;
  lVar20 = *(long *)puVar7;
  uVar8 = *(undefined8 *)System_Xml_Schema_Asttree_TypeInfo;
  iVar16 = *(int *)(lVar20 + 0xe4);
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)UnityEngine_InputSystem_AttitudeSensor_TypeInfo;
  *(undefined8 *)(lVar19 + 0x30) = uVar8;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar15[0x11];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar21,uVar8,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1GeneralizedTime_TypeInfo,0);
    lVar20 = *(long *)puVar7;
    *(long *)(*(long *)(lVar20 + 0xb8) + 0x88) = lVar21;
    puVar14 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar16 = *(int *)(lVar20 + 0xe4);
  *(long *)(lVar19 + 0x48) = lVar21;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar15[0x12];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07114388);
    FUN_0510eaf4(lVar21,uVar8,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1InputStream_TypeInfo,0);
    lVar20 = *(long *)puVar7;
    *(long *)(*(long *)(lVar20 + 0xb8) + 0x90) = lVar21;
    puVar14 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar16 = *(int *)(lVar20 + 0xe4);
  *(long *)(lVar19 + 0x50) = lVar21;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar15[0x13];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar21,uVar8,
                 *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Object_TypeInfo,0
                );
    lVar20 = *(long *)puVar7;
    *(long *)(*(long *)(lVar20 + 0xb8) + 0x98) = lVar21;
    puVar14 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar16 = *(int *)(lVar20 + 0xe4);
  *(long *)(lVar19 + 0x60) = lVar21;
  if (iVar16 == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar7;
  }
  puVar15 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar15[0x14];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar8 = *puVar15;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar21,uVar8,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1ObjectDescriptor_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xa0) = lVar21;
    puVar14 = (undefined8 *)PTR_DAT_070ca860;
  }
  *(long *)(lVar19 + 0x68) = lVar21;
  if (lVar10 == 0) goto LAB_065ef488;
  FUN_04782880(lVar10,lVar19,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_070c2418;
  if (*(long *)(lVar13 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar13 + 0x48),lVar9,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar11 = FUN_0698fe24(0);
  if ((uVar11 & 1) != 0) {
    lVar19 = *(long *)(lVar13 + 0x48);
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar9,0);
    if (lVar9 == 0) goto LAB_065ef488;
    uVar8 = *puVar14;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncWriteRequest_TypeInfo;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar9 + 0x48) = uVar8;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar9 + 0x50) = uVar8;
    if (lVar19 == 0) goto LAB_065ef488;
    FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_065dc6cc(lVar9,0);
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar14);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5f38;
    if (lVar9 == 0) goto LAB_065ef488;
    lVar20 = *(long *)(lVar9 + 0x48);
    *(undefined8 *)(lVar9 + 0x40) = uVar8;
    lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    FUN_065d11a0(lVar19,0);
    if (lVar19 == 0) goto LAB_065ef488;
    lVar10 = *(long *)puVar7;
    iVar16 = *(int *)(lVar10 + 0xe4);
    *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)UnityEngine_AssemblyVersion_TypeInfo;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar10 = *(long *)puVar7;
    }
    puVar15 = *(undefined8 **)(lVar10 + 0xb8);
    lVar21 = puVar15[0x15];
    if (lVar21 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar15;
      lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_070f5f30);
      FUN_0570ec28(lVar21,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetString_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xa8) = lVar21;
      puVar14 = (undefined8 *)PTR_DAT_070ca860;
    }
    *(long *)(lVar19 + 0x48) = lVar21;
    if (lVar20 == 0) goto LAB_065ef488;
    FUN_04782880(lVar20,lVar19,*(undefined8 *)puVar3);
    if (*(long *)(lVar13 + 0x48) == 0) goto LAB_065ef488;
    FUN_04782880(*(long *)(lVar13 + 0x48),lVar9,*(undefined8 *)puVar3);
    lVar19 = *(long *)(lVar13 + 0x48);
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar9,0);
    if (lVar9 == 0) goto LAB_065ef488;
    uVar8 = *puVar14;
    *(undefined8 *)(lVar9 + 0x28) =
         *(undefined8 *)System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar9 + 0x48) = uVar8;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar9 + 0x50) = uVar8;
    if (lVar19 == 0) goto LAB_065ef488;
    FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
    lVar19 = *(long *)(lVar13 + 0x48);
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar9,0);
    if (lVar9 == 0) goto LAB_065ef488;
    uVar8 = *puVar14;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)UnityEngine_Rendering_AtlasAllocator_TypeInfo;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar9 + 0x48) = uVar8;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar9 + 0x50) = uVar8;
    if (lVar19 == 0) goto LAB_065ef488;
    FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
  }
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar19 = *(long *)puVar6;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
  }
  else {
    FUN_042e4a64(unaff_x20,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70)
                );
  }
  if (*(char *)(unaff_x19 + 0x1a) == '\0') {
LAB_065ef394:
    iVar16 = *(int *)(unaff_x20 + 0x18);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar11 = FUN_069d69b8(uVar8,0,0);
    if ((uVar11 & 1) == 0) goto LAB_065ef394;
    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_065dc6cc(lVar13,0);
    if (lVar13 == 0) goto LAB_065ef488;
    lVar19 = *(long *)(lVar13 + 0x48);
    uVar8 = *(undefined8 *)UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
    *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)System_Reflection_AssemblyNameFlags_TypeInfo;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
    FUN_065ddae0(lVar9,0);
    if (lVar9 == 0) goto LAB_065ef488;
    lVar20 = *(long *)puVar7;
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(undefined8 *)(lVar9 + 0x28) =
         *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x16];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07113968);
      FUN_0570e7e4(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo,0)
      ;
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 0xb0) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x48) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x17];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07114388);
      FUN_0510eaf4(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OutputStream_TypeInfo,0);
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 0xb8) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x50) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x18];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07113968);
      FUN_0570e7e4(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1ParsingException_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xc0) = lVar10;
    }
    *(long *)(lVar9 + 0x60) = lVar10;
    if (lVar19 == 0) goto LAB_065ef488;
    FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
    lVar19 = *(long *)(lVar13 + 0x48);
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)
                        UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo)
    ;
    FUN_065ddc4c(lVar9,0);
    if (lVar9 == 0) goto LAB_065ef488;
    lVar20 = *(long *)puVar7;
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(undefined8 *)(lVar9 + 0x28) =
         *(undefined8 *)UnityEditor_Analytics_AssetImportAnalytic_TypeInfo;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x19];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1RelativeOid_TypeInfo,0);
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 200) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x48) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x1a];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_071161b8);
      FUN_05112628(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Sequence_TypeInfo,0);
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 0xd0) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x50) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x1b];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar10,uVar8,
                   *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Set_TypeInfo,0)
      ;
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 0xd8) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x60) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x1c];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe0) = lVar10;
    }
    *(long *)(lVar9 + 0x68) = lVar10;
    if (lVar19 == 0) goto LAB_065ef488;
    FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)string_____TypeInfo);
    FUN_065d0ec8(lVar9,0);
    puVar5 = sbyte_____TypeInfo;
    puVar2 = PTR_DAT_07114388;
    if (lVar9 == 0) goto LAB_065ef488;
    uVar18 = *(undefined8 *)Best_HTTP_Hosts_Settings_AsteriskStringComparer_TypeInfo;
    *(undefined8 *)(lVar9 + 0x28) =
         *(undefined8 *)UnityEngine_Rendering_AttachmentDescriptor_TypeInfo;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x1e8);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x1f0);
    uVar12 = *(undefined8 *)puVar5;
    *(undefined8 *)(lVar9 + 0x30) = uVar18;
    *(undefined8 *)(lVar9 + 0x60) = uVar8;
    FUN_053dcac8(lVar9,uVar17,uVar12);
    puVar5 = PTR_DAT_07113968;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4();
    uVar17 = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar9 + 0x80) = uVar8;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar17);
    FUN_0510eaf4();
    uVar17 = *(undefined8 *)puVar5;
    *(undefined8 *)(lVar9 + 0x88) = uVar8;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar17);
    FUN_0570e7e4();
    uVar17 = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar9 + 0x48) = uVar8;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar17);
    FUN_0510eaf4();
    lVar19 = *(long *)(lVar13 + 0x48);
    *(undefined8 *)(lVar9 + 0x50) = uVar8;
    *(long *)(unaff_x19 + 0x208) = lVar9;
    if (lVar19 == 0) goto LAB_065ef488;
    FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
    lVar19 = *(long *)(lVar13 + 0x48);
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)
                        UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo)
    ;
    FUN_065ddc4c(lVar9,0);
    if (lVar9 == 0) goto LAB_065ef488;
    lVar20 = *(long *)puVar7;
    uVar8 = *(undefined8 *)Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo;
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(undefined8 *)(lVar9 + 0x28) =
         *(undefined8 *)UnityEngine_Assertions_AssertionException_TypeInfo;
    *(undefined8 *)(lVar9 + 0x30) = uVar8;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x1d];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar10,uVar8,
                   *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Tag_TypeInfo,0)
      ;
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 0xe8) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x48) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x1e];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_071161b8);
      FUN_05112628(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObject_TypeInfo,0);
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 0xf0) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x50) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x1f];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar10,uVar8,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1UtcTime_TypeInfo,0);
      lVar20 = *(long *)puVar7;
      *(long *)(*(long *)(lVar20 + 0xb8) + 0xf8) = lVar10;
    }
    iVar16 = *(int *)(lVar20 + 0xe4);
    *(long *)(lVar9 + 0x60) = lVar10;
    if (iVar16 == 0) {
      thunk_FUN_031e5338();
      lVar20 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar20 + 0xb8);
    lVar10 = puVar14[0x20];
    if (lVar10 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar8 = *puVar14;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar10,uVar8,*(undefined8 *)System_Reflection_Assembly_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x100) = lVar10;
    }
    *(long *)(lVar9 + 0x68) = lVar10;
    if (lVar19 == 0) goto LAB_065ef488;
    FUN_04782880(lVar19,lVar9,*(undefined8 *)puVar3);
    lVar9 = *(long *)(unaff_x20 + 0x10);
    lVar19 = *(long *)puVar6;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_065ef488;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
      FUN_042e4a64(unaff_x20,lVar13,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      goto LAB_065ef394;
    }
    iVar16 = uVar1 + 1;
    *(int *)(unaff_x20 + 0x18) = iVar16;
    *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
  }
  puVar6 = Oculus_Platform_Models_AchievementProgress_TypeInfo;
  puVar3 = UnityEngine_Rendering_RenderTargetIdentifier_____TypeInfo;
  if (0 < iVar16) {
    uVar8 = FUN_042e652c(unaff_x20,*(undefined8 *)UnityEngine_Hash128___TypeInfo);
    lVar13 = *(long *)puVar3;
    *(undefined8 *)(unaff_x19 + 0x198) = uVar8;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar13);
    }
    lVar13 = FUN_065cf918(0);
    lVar9 = *(long *)puVar6;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar9);
    }
    if (((lVar13 == 0) ||
        (lVar13 = FUN_065cfa50(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),1,0,
                               0,0), lVar13 == 0)) || (*(long *)(lVar13 + 0x28) == 0))
    goto LAB_065ef488;
    FUN_047829dc(*(long *)(lVar13 + 0x28),*(undefined8 *)(unaff_x19 + 0x198),
                 *(undefined8 *)System_Runtime_CompilerServices_IStrongBox___TypeInfo);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar13 = FUN_065cf918(0);
  if (lVar13 != 0) {
    FUN_065cf9a4(lVar13,*(undefined8 *)(unaff_x19 + 0x180),0);
    return;
  }
LAB_065ef488:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


