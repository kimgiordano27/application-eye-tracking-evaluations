/*
FUNCTION_NAME: Unity.Serialization.Json.JsonObject$$RegisterPropertyBag
ENTRY_POINT: 03386488
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Serialization_Json_JsonObject__RegisterPropertyBag(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  long unaff_x21;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x23;
  undefined8 *puVar14;
  long unaff_x24;
  undefined8 *puVar15;
  long *plVar16;
  long unaff_x25;
  long unaff_x26;
  undefined8 *puVar17;
  long unaff_x29;
  undefined8 *puVar18;
  
  puVar2 = Unity_Services_Analytics_Internal_IConsentTracker_TypeInfo;
  puVar11 = *(undefined8 **)(unaff_x21 + 0xbd0);
  puVar14 = *(undefined8 **)(unaff_x23 + 0xbd8);
  puVar17 = *(undefined8 **)(unaff_x26 + 0xbe0);
  puVar15 = *(undefined8 **)(unaff_x24 + 0xbe8);
  puVar18 = *(undefined8 **)(unaff_x29 + 0xbf0);
  if ((*(byte *)(unaff_x25 + 0xbc) & 1) == 0) {
    FUN_01ab69ac(System_IConsoleDriver_TypeInfo);
    FUN_01ab69ac(System_Runtime_Remoting_Activation_IConstructionCallMessage_TypeInfo);
    FUN_01ab69ac(System_Runtime_Remoting_Activation_IConstructionReturnMessage_TypeInfo);
    FUN_01ab69ac(Unity_Properties_IConstructor_TypeInfo);
    FUN_01ab69ac(System_ComponentModel_IContainer_TypeInfo);
    FUN_01ab69ac(System_Runtime_Remoting_Contexts_IContextAttribute_TypeInfo);
    FUN_01ab69ac(System_Runtime_Remoting_Contexts_IContextProperty_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Serialization_IContractResolver_TypeInfo);
    FUN_01ab69ac(System_Runtime_Remoting_Contexts_IContributeClientContextSink_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ceced8);
    FUN_01ab69ac(System_Runtime_Remoting_Contexts_IContributeEnvoySink_TypeInfo);
    FUN_01ab69ac(Photon_Realtime_IConnectionCallbacks_TypeInfo);
    FUN_01ab69ac(_Common_ScriptableObjects_Scripts_Mobile_IConnectToRemotePlayer_TypeInfo);
    FUN_01ab69ac(Unity_Services_Core_Configuration_IConfigurationLoader_TypeInfo);
    FUN_01ab69ac(Fusion_Photon_Realtime_IConnectionCallbacks_TypeInfo);
    FUN_01ab69ac(System_Runtime_Remoting_Contexts_IContributeObjectSink_TypeInfo);
    FUN_01ab69ac(Unity_Services_Analytics_Internal_IConsentTracker_TypeInfo);
    FUN_01ab69ac(System_Runtime_Remoting_Contexts_IContributeServerContextSink_TypeInfo);
    FUN_01ab69ac(System_IConvertible_TypeInfo);
    FUN_01ab69ac(Unity_Services_Core_Internal_IComponentRegistry_TypeInfo);
    FUN_01ab69ac(Unity_Services_Analytics_ICoreStatsHelper_TypeInfo);
    FUN_01ab69ac(System_ComponentModel_Design_IComponentChangeService_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe550);
    FUN_01ab69ac(PTR_DAT_03cbe560);
    FUN_01ab69ac(System_Net_ICredentials_TypeInfo);
    *(undefined1 *)(unaff_x25 + 0xbc) = 1;
  }
  puVar4 = Newtonsoft_Json_Serialization_IContractResolver_TypeInfo;
  puVar3 = System_Runtime_Remoting_Contexts_IContextAttribute_TypeInfo;
  puVar1 = System_ComponentModel_Design_IComponentChangeService_TypeInfo;
  uVar6 = thunk_FUN_01a89e68(*puVar11);
  FUN_033869ac();
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x18),uVar6);
  uVar6 = thunk_FUN_01a89e68(*puVar14);
  FUN_02215594(uVar6,0x40,*puVar17);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x20),uVar6);
  uVar6 = thunk_FUN_01a89e68(*puVar15);
  FUN_02215594(uVar6,0x20,*puVar18);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x28),uVar6);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_027b3d9c(uVar6,0);
  puVar11 = (undefined8 *)(param_1 + 0x30);
  *puVar11 = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,uVar6);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)System_IConvertible_TypeInfo);
  FUN_03386adc();
  puVar14 = (undefined8 *)(param_1 + 0x38);
  *puVar14 = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14,uVar6);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Contexts_IContributeServerContextSink_TypeInfo
                            );
  FUN_03386b64();
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x40),uVar6);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Activation_IConstructionReturnMessage_TypeInfo
                            );
  FUN_0219a4f0(uVar6,*(undefined8 *)System_IConsoleDriver_TypeInfo);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x48),uVar6);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Contexts_IContributeObjectSink_TypeInfo);
  FUN_027b3d9c(uVar6,0);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x58),uVar6);
  uVar6 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceced8,2);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar6 = FUN_01ab6a94(*(undefined8 *)System_ComponentModel_IContainer_TypeInfo,2);
  puVar15 = (undefined8 *)(param_1 + 0x78);
  *puVar15 = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Contexts_IContributeClientContextSink_TypeInfo
                            );
  FUN_021a2168(uVar6,*(undefined8 *)System_Runtime_Remoting_Contexts_IContextProperty_TypeInfo);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x80),uVar6);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe560);
  FUN_02092510(uVar6,*(undefined8 *)PTR_DAT_03cbe550);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x88),uVar6);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Properties_IConstructor_TypeInfo);
  FUN_0219a4f0(uVar6,*(undefined8 *)
                      System_Runtime_Remoting_Activation_IConstructionCallMessage_TypeInfo);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0xb0),uVar6);
  puVar17 = (undefined8 *)(param_1 + 0xb8);
  *puVar17 = *(undefined8 *)System_Net_ICredentials_TypeInfo;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17);
  FUN_027b3d9c(param_1,0);
  *puVar17 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,param_2);
  uVar10 = *puVar11;
  uVar12 = *puVar14;
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Services_Analytics_ICoreStatsHelper_TypeInfo);
  FUN_03386c90(uVar6,uVar10,uVar12);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x10),uVar6);
  uVar13 = 0;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    plVar16 = (long *)*puVar15;
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
    FUN_021a2168(lVar7,*(undefined8 *)puVar3);
    if (plVar16 == (long *)0x0) goto LAB_03386998;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
      uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,0);
    }
    if (*(uint *)(plVar16 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar16[uVar13 + 4] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + uVar13 + 4,lVar7);
    uVar13 = 1;
    bVar5 = false;
  } while (bVar9);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    FUN_01b5f01c(lVar7,param_1,
                 *(undefined8 *)System_Runtime_Remoting_Contexts_IContributeEnvoySink_TypeInfo);
    lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03386978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),param_1,*(undefined8 *)(lVar7 + 0x28));
      return;
    }
    return;
  }
LAB_03386998:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


