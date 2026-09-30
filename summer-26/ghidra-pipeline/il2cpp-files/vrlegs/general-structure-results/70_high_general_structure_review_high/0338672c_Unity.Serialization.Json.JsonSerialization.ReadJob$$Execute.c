/*
FUNCTION_NAME: Unity.Serialization.Json.JsonSerialization.ReadJob$$Execute
ENTRY_POINT: 0338672c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Unity_Serialization_Json_JsonSerialization_ReadJob__Execute(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  uVar2 = thunk_FUN_01a89e68();
  FUN_027b3d9c(uVar2,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x58),uVar2);
  uVar2 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceced8,2);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar2 = FUN_01ab6a94(*(undefined8 *)System_ComponentModel_IContainer_TypeInfo,2);
  puVar9 = (undefined8 *)(unaff_x19 + 0x78);
  *puVar9 = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9);
  uVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Runtime_Remoting_Contexts_IContributeClientContextSink_TypeInfo
                            );
  FUN_021a2168(uVar2,*(undefined8 *)System_Runtime_Remoting_Contexts_IContextProperty_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x80),uVar2);
  uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe560);
  FUN_02092510(uVar2,*(undefined8 *)PTR_DAT_03cbe550);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x88),uVar2);
  uVar2 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Properties_IConstructor_TypeInfo);
  FUN_0219a4f0(uVar2,*(undefined8 *)
                      System_Runtime_Remoting_Activation_IConstructionCallMessage_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0xb0),uVar2);
  puVar10 = (undefined8 *)(unaff_x19 + 0xb8);
  *puVar10 = *(undefined8 *)System_Net_ICredentials_TypeInfo;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10);
  FUN_027b3d9c();
  *puVar10 = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10);
  uVar6 = *unaff_x21;
  uVar7 = *unaff_x22;
  uVar2 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Services_Analytics_ICoreStatsHelper_TypeInfo);
  FUN_03386c90(uVar2,uVar6,uVar7);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x10),uVar2);
  uVar8 = 0;
  bVar1 = true;
  do {
    bVar5 = bVar1;
    plVar11 = (long *)*puVar9;
    lVar3 = thunk_FUN_01a89e68(*unaff_x28);
    FUN_021a2168(lVar3,*unaff_x25);
    if (plVar11 == (long *)0x0) goto LAB_03386998;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar11 + 0x40)), lVar4 == 0)) {
      uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,0);
    }
    if (*(uint *)(plVar11 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar11[uVar8 + 4] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + uVar8 + 4,lVar3);
    uVar8 = 1;
    bVar1 = false;
  } while (bVar5);
  lVar3 = *unaff_x27;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *unaff_x27;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) != 0) {
    FUN_01b5f01c();
    lVar3 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03386978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      return;
    }
    return;
  }
LAB_03386998:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


