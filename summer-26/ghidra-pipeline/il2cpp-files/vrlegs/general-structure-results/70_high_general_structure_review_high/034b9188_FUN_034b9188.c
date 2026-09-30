/*
FUNCTION_NAME: FUN_034b9188
ENTRY_POINT: 034b9188
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_14
*/


void FUN_034b9188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = Hdg_rdtSerializerQuaternion_TypeInfo;
  if ((DAT_0412dab1 & 1) == 0) {
    FUN_01ab69ac(Hdg_rdtSerializerRect_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(Hdg_rdtSerializerRegistry_TypeInfo);
    FUN_01ab69ac(Hdg_rdtSerializerQuaternion_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    FUN_01ab69ac(Hdg_rdtSerializerSlider_TypeInfo);
    FUN_01ab69ac(Hdg_rdtSerializerVector2_TypeInfo);
    FUN_01ab69ac(Hdg_rdtSerializerVector3_TypeInfo);
    FUN_01ab69ac(Hdg_rdtSerializerVector4_TypeInfo);
    FUN_01ab69ac(Hdg_rdtTcpMessage_TypeInfo);
    DAT_0412dab1 = 1;
  }
  lVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar3,0);
  puVar1 = PTR_DAT_03cbfcb0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(lVar3 + 0x10),param_1);
    lVar4 = FUN_01ab6a94(*(undefined8 *)puVar1,9);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)Hdg_rdtTcpMessage_TypeInfo;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar4 + 0x20));
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = param_2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar4 + 0x28),param_2);
          puVar1 = PTR_DAT_03cbede8;
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)Hdg_rdtSerializerVector3_TypeInfo;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar5 = FUN_02eaa8e8(param_4,0);
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x38) = uVar5;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar4 + 0x38),uVar5);
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)Hdg_rdtSerializerVector4_TypeInfo;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if (*(long *)(param_1 + 0x80) == 0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = FUN_034b8a94();
                }
                if (5 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x48) = uVar5;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar4 + 0x48));
                  if (6 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)Hdg_rdtSerializerVector2_TypeInfo
                    ;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar4 + 0x50));
                    if (7 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x58) = param_3;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar4 + 0x58),param_3);
                      puVar2 = Hdg_rdtSerializerRegistry_TypeInfo;
                      puVar1 = Hdg_rdtSerializerRect_TypeInfo;
                      if (8 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x60) =
                             *(undefined8 *)Hdg_rdtSerializerSlider_TypeInfo;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        uVar5 = FUN_025be564(lVar4,0);
                        *(undefined8 *)(lVar3 + 0x18) = uVar5;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                        FUN_021dd4e8(uVar5,lVar3,*(undefined8 *)puVar2,0);
                        FUN_034b9464(param_1,uVar5);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


