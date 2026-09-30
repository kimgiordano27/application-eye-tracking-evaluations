/*
FUNCTION_NAME: Unity.Serialization.Json.JsonArray$$RegisterPropertyBag
ENTRY_POINT: 03386540
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Serialization_Json_JsonArray__RegisterPropertyBag(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 *unaff_x21;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *unaff_x22;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *unaff_x23;
  undefined8 *puVar14;
  undefined8 *unaff_x24;
  undefined8 *puVar15;
  long *plVar16;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x29;
  
  FUN_01ab69ac();
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
  puVar3 = Newtonsoft_Json_Serialization_IContractResolver_TypeInfo;
  puVar2 = System_Runtime_Remoting_Contexts_IContextAttribute_TypeInfo;
  puVar1 = System_ComponentModel_Design_IComponentChangeService_TypeInfo;
  uVar5 = thunk_FUN_01a89e68(*unaff_x21);
  FUN_033869ac();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x18),uVar5);
  uVar5 = thunk_FUN_01a89e68(*unaff_x23);
  FUN_02215594(uVar5,0x40,*unaff_x26);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x20),uVar5);
  uVar5 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_02215594(uVar5,0x20,*unaff_x29);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x28),uVar5);
  uVar5 = thunk_FUN_01a89e68(*unaff_x22);
  FUN_027b3d9c(uVar5,0);
  puVar10 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar10 = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar5);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)System_IConvertible_TypeInfo);
  FUN_03386adc();
  puVar12 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar12 = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar5);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Contexts_IContributeServerContextSink_TypeInfo
                            );
  FUN_03386b64();
  *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x40),uVar5);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Activation_IConstructionReturnMessage_TypeInfo
                            );
  FUN_0219a4f0(uVar5,*(undefined8 *)System_IConsoleDriver_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x48),uVar5);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Contexts_IContributeObjectSink_TypeInfo);
  FUN_027b3d9c(uVar5,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x58),uVar5);
  uVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceced8,2);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar5 = FUN_01ab6a94(*(undefined8 *)System_ComponentModel_IContainer_TypeInfo,2);
  puVar14 = (undefined8 *)(unaff_x19 + 0x78);
  *puVar14 = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Contexts_IContributeClientContextSink_TypeInfo
                            );
  FUN_021a2168(uVar5,*(undefined8 *)System_Runtime_Remoting_Contexts_IContextProperty_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x80),uVar5);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe560);
  FUN_02092510(uVar5,*(undefined8 *)PTR_DAT_03cbe550);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x88),uVar5);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Properties_IConstructor_TypeInfo);
  FUN_0219a4f0(uVar5,*(undefined8 *)
                      System_Runtime_Remoting_Activation_IConstructionCallMessage_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0xb0),uVar5);
  puVar15 = (undefined8 *)(unaff_x19 + 0xb8);
  *puVar15 = *(undefined8 *)System_Net_ICredentials_TypeInfo;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15);
  FUN_027b3d9c();
  *puVar15 = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15);
  uVar9 = *puVar10;
  uVar11 = *puVar12;
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Services_Analytics_ICoreStatsHelper_TypeInfo);
  FUN_03386c90(uVar5,uVar9,uVar11);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x10),uVar5);
  uVar13 = 0;
  bVar4 = true;
  do {
    bVar8 = bVar4;
    plVar16 = (long *)*puVar14;
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_021a2168(lVar6,*(undefined8 *)puVar2);
    if (plVar16 == (long *)0x0) goto LAB_03386998;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar16 + 0x40)), lVar7 == 0)) {
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if (*(uint *)(plVar16 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar16[uVar13 + 4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + uVar13 + 4,lVar6);
    uVar13 = 1;
    bVar4 = false;
  } while (bVar8);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) != 0) {
    FUN_01b5f01c();
    lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03386978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
      return;
    }
    return;
  }
LAB_03386998:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


