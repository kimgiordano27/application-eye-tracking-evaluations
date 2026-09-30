/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.MotionVectorsPersistentData$$get_previousWorldSpaceCameraPos
ENTRY_POINT: 065ed540
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void UnityEngine_Rendering_Universal_MotionVectorsPersistentData__get_previousWorldSpaceCameraPos
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  FUN_065ddc4c();
  if (param_1 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)
            System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo;
  uVar6 = *(undefined8 *)PTR_DAT_07112a08;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)Fusion_AssertException_TypeInfo;
  *(undefined8 *)(param_1 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  puVar2 = PTR_DAT_070ca860;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  lVar7 = *(long *)(unaff_x22 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
  if (lVar7 == 0) goto LAB_065ef488;
  FUN_04782880(lVar7,param_1,*unaff_x29);
  lVar16 = *(long *)(unaff_x22 + 0x48);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_065ddae0(lVar7,0);
  if (lVar7 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)Sentry_Internal_ScopeStack_AsyncLocalScopeStackContainer_TypeInfo;
  uVar6 = *unaff_x21;
  *(undefined8 *)(lVar7 + 0x28) =
       *(undefined8 *)Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo;
  *(undefined8 *)(lVar7 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e7e4();
  puVar2 = PTR_DAT_07114388;
  *(undefined8 *)(lVar7 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510eaf4();
  lVar8 = *unaff_x28;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x28;
  }
  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
  lVar17 = puVar11[7];
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar11;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*unaff_x21);
    FUN_0570e7e4(lVar17,uVar6,*(undefined8 *)System_Buffers_ArrayPoolEventSource_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x38) = lVar17;
  }
  uVar6 = *unaff_x21;
  *(long *)(lVar7 + 0x60) = lVar17;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e7e4();
  *(undefined8 *)(lVar7 + 0x68) = uVar6;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar7,*unaff_x29);
  lVar16 = *(long *)(unaff_x22 + 0x48);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)
                      UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo);
  FUN_065ddae0(lVar7,0);
  if (lVar7 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskCache_TypeInfo;
  uVar6 = *unaff_x21;
  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncReadRequest_TypeInfo;
  *(undefined8 *)(lVar7 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e7e4();
  puVar2 = PTR_DAT_07114388;
  *(undefined8 *)(lVar7 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510eaf4();
  lVar8 = *unaff_x28;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x28;
  }
  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
  lVar17 = puVar11[8];
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar11;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*unaff_x21);
    FUN_0570e7e4(lVar17,uVar6,*(undefined8 *)System_Buffers_ArrayPoolEventSource_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x40) = lVar17;
  }
  puVar2 = PTR_DAT_070ca860;
  uVar6 = *unaff_x21;
  *(long *)(lVar7 + 0x60) = lVar17;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e7e4();
  *(undefined8 *)(lVar7 + 0x68) = uVar6;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar7,*unaff_x29);
  puVar4 = Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  puVar5 = ExitGames_Client_Photon_Hashtable___TypeInfo;
  if (*(long *)(in_stack_00000008 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880();
  lVar16 = *(long *)(in_stack_00000008 + 0x48);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar4);
  FUN_065dd9c8(lVar7,0);
  if (lVar7 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo;
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)UnityEngine_AssemblyFullName_TypeInfo;
  *(undefined8 *)(lVar7 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e268();
  puVar3 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar7 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_0510cecc();
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar7,*unaff_x29);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar7,0);
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo;
  if (lVar7 == 0) goto LAB_065ef488;
  lVar8 = *(long *)(lVar7 + 0x48);
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddc4c(lVar16,0);
  puVar2 = PTR_DAT_07112a08;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar6 = *(undefined8 *)UnityEngine_Assertions_Assert_TypeInfo;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar16 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar17 = *unaff_x28;
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar11 = *(undefined8 **)(lVar17 + 0xb8);
  lVar18 = puVar11[9];
  if (lVar18 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar11;
    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar18,uVar6,*(undefined8 *)System_ArraySpec_TypeInfo,0);
    lVar17 = *unaff_x28;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x48) = lVar18;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar16 + 0x60) = lVar18;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar11 = *(undefined8 **)(lVar17 + 0xb8);
  lVar18 = puVar11[10];
  if (lVar18 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar11;
    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar18,uVar6,*(undefined8 *)System_ArrayTypeMismatchException_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x50) = lVar18;
  }
  *(long *)(lVar16 + 0x68) = lVar18;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  lVar8 = *(long *)(lVar7 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar4);
  FUN_065dd9c8(lVar16,0);
  puVar2 = PTR_DAT_070ca860;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar6 = *(undefined8 *)Oculus_Platform_Models_AssetDetailsList_TypeInfo;
  *(undefined8 *)(lVar16 + 0x28) =
       *(undefined8 *)UnityEngine_Rendering_AttachmentIndexArray_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar16 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar16 + 0x58) = uVar6;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  if (*(long *)(in_stack_00000008 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(in_stack_00000008 + 0x48),lVar7,*unaff_x29);
  lVar16 = *(long *)(in_stack_00000008 + 0x48);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar4);
  FUN_065dd9c8(lVar7,0);
  puVar2 = PTR_DAT_070ca860;
  if (lVar7 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)UnityEngine_AsyncOperation_TypeInfo;
  uVar6 = *(undefined8 *)PTR_DAT_070ca860;
  *(undefined8 *)(lVar7 + 0x28) =
       *(undefined8 *)UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo;
  *(undefined8 *)(lVar7 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e268();
  puVar4 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar7 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar4);
  FUN_0510cecc();
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar7,*unaff_x29);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar7,0);
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo;
  if (lVar7 == 0) goto LAB_065ef488;
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065ddc4c(lVar16,0);
  puVar2 = PTR_DAT_07112a08;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar6 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar16 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar8 = *unaff_x28;
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x28;
  }
  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
  lVar17 = puVar11[0xb];
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar11;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar17,uVar6,
                 *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_Arrays_TypeInfo,
                 0);
    lVar8 = *unaff_x28;
    *(long *)(*(long *)(lVar8 + 0xb8) + 0x58) = lVar17;
  }
  iVar13 = *(int *)(lVar8 + 0xe4);
  *(long *)(lVar16 + 0x60) = lVar17;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x28;
  }
  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
  lVar17 = puVar11[0xc];
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar11;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar17,uVar6,
                 *(undefined8 *)System_Runtime_Serialization_AsmxCharDataContract_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x60) = lVar17;
  }
  puVar2 = PTR_DAT_070ca860;
  *(long *)(lVar16 + 0x68) = lVar17;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570e268();
  lVar8 = *(long *)(lVar7 + 0x48);
  *(undefined8 *)(lVar16 + 0x40) = uVar6;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  if (*(long *)(in_stack_00000008 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(in_stack_00000008 + 0x48),lVar7,*unaff_x29);
  lVar16 = *(long *)(in_stack_00000008 + 0x48);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)
                      UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
  FUN_065ddc4c(lVar7,0);
  puVar2 = PTR_DAT_07112a08;
  puVar11 = (undefined8 *)PTR_DAT_070ca860;
  if (lVar7 == 0) goto LAB_065ef488;
  uVar6 = *(undefined8 *)System_Reflection_AssemblyName_TypeInfo;
  *(undefined8 *)(lVar7 + 0x28) =
       *(undefined8 *)
        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricKeyParameter_TypeInfo;
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0570f240();
  puVar2 = PTR_DAT_071161b8;
  *(undefined8 *)(lVar7 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_05112628();
  lVar8 = *unaff_x28;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar8 + 0xb8);
  lVar17 = puVar12[0xd];
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07112a08);
    FUN_0570f240(lVar17,uVar6,
                 *(undefined8 *)System_Runtime_Serialization_AsmxGuidDataContract_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x68) = lVar17;
  }
  *(long *)(lVar7 + 0x60) = lVar17;
  if (lVar16 == 0) goto LAB_065ef488;
  FUN_04782880(lVar16,lVar7,*unaff_x29);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar7 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
  }
  else {
    FUN_042e4a64();
  }
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar7,0);
  if (lVar7 == 0) goto LAB_065ef488;
  lVar8 = *(long *)(lVar7 + 0x48);
  uVar6 = *(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncProtocolResult_TypeInfo;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_065dd9c8(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)Oculus_Platform_Models_AssetDetails_TypeInfo;
  uVar6 = *puVar11;
  *(undefined8 *)(lVar16 + 0x28) =
       *(undefined8 *)
        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricCipherKeyPair_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar16 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar16 + 0x58) = uVar6;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  lVar8 = *(long *)(lVar7 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)System_AssemblyLoadEventArgs_TypeInfo;
  uVar6 = *puVar11;
  *(undefined8 *)(lVar16 + 0x28) =
       *(undefined8 *)System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar16 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  puVar2 = Oculus_Platform_AndroidPlatform_TypeInfo;
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_051dec74();
  *(undefined8 *)(lVar16 + 0x58) = uVar6;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  lVar16 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
  }
  else {
    FUN_042e4a64();
  }
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar7,0);
  if (lVar7 == 0) goto LAB_065ef488;
  uVar6 = *puVar11;
  *(undefined8 *)(lVar7 + 0x28) =
       *(undefined8 *)System_Linq_Expressions_AssignBinaryExpression_TypeInfo;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e268();
  puVar2 = Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
  lVar8 = *(long *)(lVar7 + 0x48);
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_065dd9c8(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  uVar14 = *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo;
  uVar6 = *puVar11;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)AttachablesAuthoringSceneManager_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar14;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar16 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  lVar8 = *(long *)(lVar7 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  uVar6 = *puVar11;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)UnityEditor_Analytics_AssetExportAnalytic_TypeInfo
  ;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_0570e268();
  puVar2 = PTR_DAT_070f5010;
  *(undefined8 *)(lVar16 + 0x48) = uVar6;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_0510cecc();
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  lVar8 = *(long *)(lVar7 + 0x48);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
  FUN_065dd9c8(lVar16,0);
  if (lVar16 == 0) goto LAB_065ef488;
  lVar17 = *unaff_x28;
  uVar6 = *(undefined8 *)System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo;
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)UnityEngine_AsyncInstantiateOperation_TypeInfo;
  *(undefined8 *)(lVar16 + 0x30) = uVar6;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar18 = puVar12[0xe];
  if (lVar18 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar11);
    FUN_0570e268(lVar18,uVar6,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1BitStringParser_TypeInfo,0);
    lVar17 = *unaff_x28;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x70) = lVar18;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar16 + 0x48) = lVar18;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar18 = puVar12[0xf];
  if (lVar18 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_070f5010);
    FUN_0510cecc(lVar18,uVar6,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1EncodableVector_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x78) = lVar18;
  }
  *(long *)(lVar16 + 0x50) = lVar18;
  if (lVar8 == 0) goto LAB_065ef488;
  FUN_04782880(lVar8,lVar16,*unaff_x29);
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
  FUN_065dc6cc(lVar16,0);
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar8 + 0xb8);
  lVar17 = puVar12[0x10];
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar11);
    FUN_0570e268(lVar17,uVar6,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Exception_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x80) = lVar17;
  }
  puVar2 = UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
  if (lVar16 == 0) goto LAB_065ef488;
  lVar18 = *(long *)(lVar16 + 0x48);
  *(long *)(lVar16 + 0x40) = lVar17;
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_065ddae0(lVar8,0);
  if (lVar8 == 0) goto LAB_065ef488;
  lVar17 = *unaff_x28;
  uVar6 = *(undefined8 *)System_Xml_Schema_Asttree_TypeInfo;
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)UnityEngine_InputSystem_AttitudeSensor_TypeInfo;
  *(undefined8 *)(lVar8 + 0x30) = uVar6;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar19 = puVar12[0x11];
  if (lVar19 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar19,uVar6,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1GeneralizedTime_TypeInfo,0);
    lVar17 = *unaff_x28;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x88) = lVar19;
    puVar11 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar8 + 0x48) = lVar19;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar19 = puVar12[0x12];
  if (lVar19 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07114388);
    FUN_0510eaf4(lVar19,uVar6,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1InputStream_TypeInfo,0);
    lVar17 = *unaff_x28;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x90) = lVar19;
    puVar11 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar8 + 0x50) = lVar19;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar19 = puVar12[0x13];
  if (lVar19 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar19,uVar6,
                 *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Object_TypeInfo,0
                );
    lVar17 = *unaff_x28;
    *(long *)(*(long *)(lVar17 + 0xb8) + 0x98) = lVar19;
    puVar11 = (undefined8 *)PTR_DAT_070ca860;
  }
  iVar13 = *(int *)(lVar17 + 0xe4);
  *(long *)(lVar8 + 0x60) = lVar19;
  if (iVar13 == 0) {
    thunk_FUN_031e5338();
    lVar17 = *unaff_x28;
  }
  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
  lVar19 = puVar12[0x14];
  if (lVar19 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar6 = *puVar12;
    lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4(lVar19,uVar6,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1ObjectDescriptor_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0xa0) = lVar19;
    puVar11 = (undefined8 *)PTR_DAT_070ca860;
  }
  *(long *)(lVar8 + 0x68) = lVar19;
  if (lVar18 == 0) goto LAB_065ef488;
  FUN_04782880(lVar18,lVar8,*unaff_x29);
  puVar2 = PTR_DAT_070c2418;
  if (*(long *)(lVar7 + 0x48) == 0) goto LAB_065ef488;
  FUN_04782880(*(long *)(lVar7 + 0x48),lVar16,*unaff_x29);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar9 = FUN_0698fe24(0);
  if ((uVar9 & 1) != 0) {
    lVar8 = *(long *)(lVar7 + 0x48);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar16,0);
    if (lVar16 == 0) goto LAB_065ef488;
    uVar6 = *puVar11;
    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)Mono_Net_Security_AsyncWriteRequest_TypeInfo;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar16 + 0x48) = uVar6;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar16 + 0x50) = uVar6;
    if (lVar8 == 0) goto LAB_065ef488;
    FUN_04782880(lVar8,lVar16,*unaff_x29);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_065dc6cc(lVar16,0);
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar11);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5f38;
    if (lVar16 == 0) goto LAB_065ef488;
    lVar17 = *(long *)(lVar16 + 0x48);
    *(undefined8 *)(lVar16 + 0x40) = uVar6;
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_065d11a0(lVar8,0);
    if (lVar8 == 0) goto LAB_065ef488;
    lVar18 = *unaff_x28;
    iVar13 = *(int *)(lVar18 + 0xe4);
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)UnityEngine_AssemblyVersion_TypeInfo;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar18 = *unaff_x28;
    }
    puVar12 = *(undefined8 **)(lVar18 + 0xb8);
    lVar19 = puVar12[0x15];
    if (lVar19 == 0) {
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar12 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar12;
      lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_070f5f30);
      FUN_0570ec28(lVar19,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetString_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0xa8) = lVar19;
      puVar11 = (undefined8 *)PTR_DAT_070ca860;
    }
    *(long *)(lVar8 + 0x48) = lVar19;
    if (lVar17 == 0) goto LAB_065ef488;
    FUN_04782880(lVar17,lVar8,*unaff_x29);
    if (*(long *)(lVar7 + 0x48) == 0) goto LAB_065ef488;
    FUN_04782880(*(long *)(lVar7 + 0x48),lVar16,*unaff_x29);
    lVar8 = *(long *)(lVar7 + 0x48);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar16,0);
    if (lVar16 == 0) goto LAB_065ef488;
    uVar6 = *puVar11;
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar16 + 0x48) = uVar6;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar16 + 0x50) = uVar6;
    if (lVar8 == 0) goto LAB_065ef488;
    FUN_04782880(lVar8,lVar16,*unaff_x29);
    lVar8 = *(long *)(lVar7 + 0x48);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_065dd9c8(lVar16,0);
    if (lVar16 == 0) goto LAB_065ef488;
    uVar6 = *puVar11;
    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)UnityEngine_Rendering_AtlasAllocator_TypeInfo;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
    FUN_0570e268();
    puVar2 = PTR_DAT_070f5010;
    *(undefined8 *)(lVar16 + 0x48) = uVar6;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_0510cecc();
    *(undefined8 *)(lVar16 + 0x50) = uVar6;
    if (lVar8 == 0) goto LAB_065ef488;
    FUN_04782880(lVar8,lVar16,*unaff_x29);
  }
  lVar16 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar16 == 0) goto LAB_065ef488;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
  }
  else {
    FUN_042e4a64();
  }
  if (*(char *)(unaff_x19 + 0x1a) == '\0') {
LAB_065ef394:
    iVar13 = *(int *)(unaff_x20 + 0x18);
    in_stack_00000000 = unaff_x20;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar9 = FUN_069d69b8(uVar6,0,0);
    if ((uVar9 & 1) == 0) goto LAB_065ef394;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_065dc6cc(lVar7,0);
    if (lVar7 == 0) goto LAB_065ef488;
    lVar8 = *(long *)(lVar7 + 0x48);
    uVar6 = *(undefined8 *)UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)System_Reflection_AssemblyNameFlags_TypeInfo;
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
    FUN_065ddae0(lVar16,0);
    if (lVar16 == 0) goto LAB_065ef488;
    lVar17 = *unaff_x28;
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x16];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07113968);
      FUN_0570e7e4(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo,0)
      ;
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xb0) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x48) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x17];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07114388);
      FUN_0510eaf4(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OutputStream_TypeInfo,0);
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xb8) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x50) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x18];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07113968);
      FUN_0570e7e4(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1ParsingException_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0xc0) = lVar18;
    }
    *(long *)(lVar16 + 0x60) = lVar18;
    if (lVar8 == 0) goto LAB_065ef488;
    FUN_04782880(lVar8,lVar16,*unaff_x29);
    lVar8 = *(long *)(lVar7 + 0x48);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)
                         UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo
                       );
    FUN_065ddc4c(lVar16,0);
    if (lVar16 == 0) goto LAB_065ef488;
    lVar17 = *unaff_x28;
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)UnityEditor_Analytics_AssetImportAnalytic_TypeInfo;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x19];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1RelativeOid_TypeInfo,0);
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 200) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x48) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x1a];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_071161b8);
      FUN_05112628(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Sequence_TypeInfo,0);
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xd0) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x50) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x1b];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar18,uVar6,
                   *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Set_TypeInfo,0)
      ;
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xd8) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x60) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x1c];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0xe0) = lVar18;
    }
    *(long *)(lVar16 + 0x68) = lVar18;
    if (lVar8 == 0) goto LAB_065ef488;
    FUN_04782880(lVar8,lVar16,*unaff_x29);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)string_____TypeInfo);
    FUN_065d0ec8(lVar16,0);
    puVar4 = sbyte_____TypeInfo;
    puVar2 = PTR_DAT_07114388;
    if (lVar16 == 0) goto LAB_065ef488;
    uVar15 = *(undefined8 *)Best_HTTP_Hosts_Settings_AsteriskStringComparer_TypeInfo;
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)UnityEngine_Rendering_AttachmentDescriptor_TypeInfo;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x1e8);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x1f0);
    uVar10 = *(undefined8 *)puVar4;
    *(undefined8 *)(lVar16 + 0x30) = uVar15;
    *(undefined8 *)(lVar16 + 0x60) = uVar6;
    FUN_053dcac8(lVar16,uVar14,uVar10);
    puVar4 = PTR_DAT_07113968;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07113968);
    FUN_0570e7e4();
    uVar14 = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar16 + 0x80) = uVar6;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
    FUN_0510eaf4();
    uVar14 = *(undefined8 *)puVar4;
    *(undefined8 *)(lVar16 + 0x88) = uVar6;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
    FUN_0570e7e4();
    uVar14 = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar16 + 0x48) = uVar6;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
    FUN_0510eaf4();
    lVar8 = *(long *)(lVar7 + 0x48);
    *(undefined8 *)(lVar16 + 0x50) = uVar6;
    *(long *)(unaff_x19 + 0x208) = lVar16;
    if (lVar8 == 0) goto LAB_065ef488;
    FUN_04782880(lVar8,lVar16,*unaff_x29);
    lVar8 = *(long *)(lVar7 + 0x48);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)
                         UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo
                       );
    FUN_065ddc4c(lVar16,0);
    if (lVar16 == 0) goto LAB_065ef488;
    lVar17 = *unaff_x28;
    uVar6 = *(undefined8 *)Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_TypeInfo;
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)UnityEngine_Assertions_AssertionException_TypeInfo;
    *(undefined8 *)(lVar16 + 0x30) = uVar6;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x1d];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar18,uVar6,
                   *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Tag_TypeInfo,0)
      ;
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xe8) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x48) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x1e];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_071161b8);
      FUN_05112628(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObject_TypeInfo,0);
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xf0) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x50) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x1f];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar18,uVar6,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1UtcTime_TypeInfo,0);
      lVar17 = *unaff_x28;
      *(long *)(*(long *)(lVar17 + 0xb8) + 0xf8) = lVar18;
    }
    iVar13 = *(int *)(lVar17 + 0xe4);
    *(long *)(lVar16 + 0x60) = lVar18;
    if (iVar13 == 0) {
      thunk_FUN_031e5338();
      lVar17 = *unaff_x28;
    }
    puVar11 = *(undefined8 **)(lVar17 + 0xb8);
    lVar18 = puVar11[0x20];
    if (lVar18 == 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar11 = *(undefined8 **)(*unaff_x28 + 0xb8);
      }
      uVar6 = *puVar11;
      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_07112a08);
      FUN_0570f240(lVar18,uVar6,*(undefined8 *)System_Reflection_Assembly_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x100) = lVar18;
    }
    *(long *)(lVar16 + 0x68) = lVar18;
    if (lVar8 == 0) goto LAB_065ef488;
    FUN_04782880(lVar8,lVar16,*unaff_x29);
    lVar16 = *(long *)(in_stack_00000000 + 0x10);
    lVar8 = *(long *)puVar5;
    *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_065ef488;
    uVar1 = *(uint *)(in_stack_00000000 + 0x18);
    if (*(uint *)(lVar16 + 0x18) <= uVar1) {
      FUN_042e4a64(in_stack_00000000,lVar7,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      unaff_x20 = in_stack_00000000;
      goto LAB_065ef394;
    }
    iVar13 = uVar1 + 1;
    *(int *)(in_stack_00000000 + 0x18) = iVar13;
    *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
  }
  puVar5 = Oculus_Platform_Models_AchievementProgress_TypeInfo;
  puVar2 = UnityEngine_Rendering_RenderTargetIdentifier_____TypeInfo;
  if (0 < iVar13) {
    uVar6 = FUN_042e652c(in_stack_00000000,*(undefined8 *)UnityEngine_Hash128___TypeInfo);
    lVar7 = *(long *)puVar2;
    *(undefined8 *)(unaff_x19 + 0x198) = uVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar7);
    }
    lVar7 = FUN_065cf918(0);
    lVar16 = *(long *)puVar5;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar16);
    }
    if (((lVar7 == 0) ||
        (lVar7 = FUN_065cfa50(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),1,0,0,
                              0), lVar7 == 0)) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_065ef488;
    FUN_047829dc(*(long *)(lVar7 + 0x28),*(undefined8 *)(unaff_x19 + 0x198),
                 *(undefined8 *)System_Runtime_CompilerServices_IStrongBox___TypeInfo);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = FUN_065cf918(0);
  if (lVar7 != 0) {
    FUN_065cf9a4(lVar7,*(undefined8 *)(unaff_x19 + 0x180),0);
    return;
  }
LAB_065ef488:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


