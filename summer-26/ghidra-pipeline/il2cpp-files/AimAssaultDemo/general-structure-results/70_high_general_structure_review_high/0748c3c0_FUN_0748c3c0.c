/*
FUNCTION_NAME: FUN_0748c3c0
ENTRY_POINT: 0748c3c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_0748c3c0(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  
  if ((DAT_08269e1a & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95ea8);
    FUN_0373b518(System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_0373b518(System_Xml_XmlEntity_TypeInfo);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XRTrackedObject_TypeInfo);
    FUN_0373b518(Unity_Networking_Transport_NetworkPipeline_TypeInfo);
    FUN_0373b518(Unity_Networking_Transport_NetworkPipelineContext_TypeInfo);
    FUN_0373b518(Newtonsoft_Json_Utilities_NoThrowGetBinderMember_TypeInfo);
    FUN_0373b518(Newtonsoft_Json_Utilities_NoThrowSetBinderMember_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Antlr3_Runtime_NoViableAltException_TypeInfo);
    FUN_0373b518(UnityEngine_PhysicsScene2D_TypeInfo);
    FUN_0373b518(Unity_Multiplayer_Tools_Adapters_NoSubscribersException_TypeInfo);
    FUN_0373b518(System_Runtime_Serialization_NonPositiveIntegerDataContract_TypeInfo);
    DAT_08269e1a = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  UnityEngine_AI_NavMeshAgent__get_isOnOffMeshLink_Injected(param_1,param_2,0);
  puVar5 = System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo;
  if (param_2 != 0) {
    lVar14 = *(long *)(param_2 + 0x10);
    uVar9 = thunk_FUN_037788cc(*(undefined8 *)Unity_Networking_Transport_NetworkPipeline_TypeInfo);
    FUN_059b2670(uVar9,param_1,*(undefined8 *)puVar5,0);
    puVar4 = System_Xml_XmlEntity_TypeInfo;
    puVar5 = Unity_Networking_Transport_NetworkPipelineContext_TypeInfo;
    if (lVar14 != 0) {
      FUN_073c16bc(lVar14,uVar9,0);
      lVar14 = *(long *)(param_2 + 0x10);
      uVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
      FUN_059b2670(uVar9,param_1,*(undefined8 *)puVar4,0);
      if (lVar14 != 0) {
        FUN_073c181c(lVar14,uVar9,0);
        puVar5 = UnityEngine_XR_ARSubsystems_XRTrackedObject_TypeInfo;
        lVar14 = *(long *)(param_1 + 0x170);
        if (lVar14 != 0) {
          iVar1 = *(int *)(lVar14 + 0x18);
          *(undefined4 *)(lVar14 + 0x18) = 0;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_062658d0(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
          }
          lVar14 = *(long *)(param_1 + 0x30);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (lVar14 != 0) {
            FUN_073c7548(lVar14,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
            puVar8 = UnityEngine_PhysicsScene2D_TypeInfo;
            puVar7 = Newtonsoft_Json_Utilities_NoThrowSetBinderMember_TypeInfo;
            puVar6 = Newtonsoft_Json_Utilities_NoThrowGetBinderMember_TypeInfo;
            puVar4 = PTR_DAT_07d95ea8;
            lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
            if (lVar14 != 0) {
              FUN_049cf910(&local_78,lVar14,
                           *(undefined8 *)
                            System_Runtime_Serialization_NonPositiveIntegerDataContract_TypeInfo);
              uStack_58 = uStack_70;
              local_60 = local_78;
              local_50 = local_68;
              while (uVar10 = FUN_05d64e98(&local_60,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
                if (local_50 != (long *)0x0) {
                  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                  if ((bVar2 <= *(byte *)(*local_50 + 0x130)) &&
                     (*(long *)(*(long *)(*local_50 + 200) + (ulong)bVar2 * 8 + -8) ==
                      *(long *)puVar4)) {
                    lVar14 = *(long *)(param_1 + 0x170);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    lVar11 = *(long *)(lVar14 + 0x10);
                    lVar13 = *(long *)puVar8;
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    uVar3 = *(uint *)(lVar14 + 0x18);
                    if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar3 + 1;
                      puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                      *puVar12 = local_50;
                      thunk_FUN_037aeb94(puVar12);
                    }
                    else {
                      FUN_049ceef4(lVar14,local_50,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
              }
              FUN_05d64e94(&local_60,*(undefined8 *)puVar6);
              lVar14 = *(long *)puVar5;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                lVar14 = *(long *)puVar5;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
              if (lVar14 != 0) {
                iVar1 = *(int *)(lVar14 + 0x18);
                *(undefined4 *)(lVar14 + 0x18) = 0;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (0 < iVar1) {
                  FUN_062658d0(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


