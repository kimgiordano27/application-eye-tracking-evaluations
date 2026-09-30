/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryStatus
ENTRY_POINT: 02813528
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar2 = FUN_01ab6a94(*unaff_x22,10);
  FUN_0267b194(uVar2,*unaff_x23,0);
  puVar1 = PTR_DAT_03cfe3b0;
  if (1 < *(uint *)(unaff_x21 + -8)) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x28),uVar2);
    uVar2 = FUN_01ab6a94(*unaff_x22,10);
    FUN_0267b194(uVar2,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_03cfe3b8;
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x30),uVar2);
      uVar2 = FUN_01ab6a94(*unaff_x22,10);
      FUN_0267b194(uVar2,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_03cfe3c8;
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x19 + 0x38),uVar2);
        uVar2 = FUN_01ab6a94(*unaff_x22,10);
        FUN_0267b194(uVar2,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_03cfe3c0;
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(unaff_x19 + 0x40),uVar2);
          uVar2 = FUN_01ab6a94(*unaff_x22,10);
          FUN_0267b194(uVar2,*(undefined8 *)puVar1,0);
          if (5 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(unaff_x19 + 0x48),uVar2);
            uVar2 = FUN_01ab6a94(*unaff_x22,10);
            FUN_0267b194(uVar2,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_03cfe3d0;
            if (6 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(unaff_x19 + 0x50),uVar2);
              uVar2 = FUN_01ab6a94(*unaff_x22,10);
              FUN_0267b194(uVar2,*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_03cfdb78;
              if (7 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(unaff_x19 + 0x58),uVar2);
                *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = unaff_x19;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                uVar2 = FUN_02813164();
                **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar2);
                return;
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


