/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVSyncCount
ENTRY_POINT: 0281345c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVSyncCount(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cfe390);
  FUN_01ab69ac(PTR_DAT_03cfe398);
  FUN_01ab69ac(PTR_DAT_03cfe3a8);
  FUN_01ab69ac(PTR_DAT_03cfe3b0);
  FUN_01ab69ac(PTR_DAT_03cfe3b8);
  FUN_01ab69ac(PTR_DAT_03cfe3c0);
  FUN_01ab69ac(PTR_DAT_03cfe3c8);
  FUN_01ab69ac(PTR_DAT_03cfe3a0);
  FUN_01ab69ac(PTR_DAT_03cfe3d0);
  *(undefined1 *)(unaff_x19 + 0x35c) = 1;
  lVar2 = FUN_01ab6a94(*unaff_x21,8);
  uVar3 = FUN_01ab6a94(*unaff_x22,10);
  FUN_0267b194(uVar3,*unaff_x20,0);
  puVar1 = PTR_DAT_03cfe3a8;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar2 + 0x20),uVar3);
    uVar3 = FUN_01ab6a94(*unaff_x22,10);
    FUN_0267b194(uVar3,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_03cfe3b0;
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar2 + 0x28),uVar3);
      uVar3 = FUN_01ab6a94(*unaff_x22,10);
      FUN_0267b194(uVar3,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_03cfe3b8;
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar2 + 0x30),uVar3);
        uVar3 = FUN_01ab6a94(*unaff_x22,10);
        FUN_0267b194(uVar3,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_03cfe3c8;
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar2 + 0x38),uVar3);
          uVar3 = FUN_01ab6a94(*unaff_x22,10);
          FUN_0267b194(uVar3,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_03cfe3c0;
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = uVar3;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar2 + 0x40),uVar3);
            uVar3 = FUN_01ab6a94(*unaff_x22,10);
            FUN_0267b194(uVar3,*(undefined8 *)puVar1,0);
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = uVar3;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar2 + 0x48),uVar3);
              uVar3 = FUN_01ab6a94(*unaff_x22,10);
              FUN_0267b194(uVar3,*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_03cfe3d0;
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = uVar3;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar2 + 0x50),uVar3);
                uVar3 = FUN_01ab6a94(*unaff_x22,10);
                FUN_0267b194(uVar3,*(undefined8 *)puVar1,0);
                puVar1 = PTR_DAT_03cfdb78;
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = uVar3;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar2 + 0x58),uVar3);
                  plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar4 = lVar2;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar2);
                  uVar3 = FUN_02813164();
                  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
                  return;
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


