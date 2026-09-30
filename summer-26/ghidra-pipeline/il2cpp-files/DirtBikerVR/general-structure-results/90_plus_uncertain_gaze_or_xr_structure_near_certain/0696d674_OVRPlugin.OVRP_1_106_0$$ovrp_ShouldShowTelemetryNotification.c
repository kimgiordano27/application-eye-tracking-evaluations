/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryNotification
ENTRY_POINT: 0696d674
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryNotification(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x138));
  FUN_03a8a718(PTR_DAT_084b7140);
  FUN_03a8a718(PTR_DAT_084b7148);
  FUN_03a8a718(PTR_DAT_084b7150);
  FUN_03a8a718(PTR_DAT_084b7158);
  FUN_03a8a718(PTR_DAT_084b7160);
  FUN_03a8a718(PTR_DAT_084b7168);
  FUN_03a8a718(PTR_DAT_084b7170);
  FUN_03a8a718(PTR_DAT_084883a0);
  *(undefined1 *)(unaff_x20 + 0xe6) = 1;
  puVar1 = PTR_DAT_084883a0;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x100);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar3 != 0) {
      FUN_07cb2770(lVar3,uVar2,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x100);
        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_07cb26a0();
        if (lVar3 != 0) {
          FUN_07cb2770(lVar3,uVar2,0);
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            lVar3 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x100);
            uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
            FUN_07cb26a0();
            if (lVar3 != 0) {
              FUN_07cb2770(lVar3,uVar2,0);
              if (*(long *)(unaff_x19 + 0x58) != 0) {
                lVar3 = *(long *)(*(long *)(unaff_x19 + 0x58) + 0x100);
                uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                FUN_07cb26a0();
                if (lVar3 != 0) {
                  FUN_07cb2770(lVar3,uVar2,0);
                  if (*(long *)(unaff_x19 + 0x78) != 0) {
                    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x100);
                    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                    FUN_07cb26a0();
                    if (lVar3 != 0) {
                      FUN_07cb2770(lVar3,uVar2,0);
                      if (*(long *)(unaff_x19 + 0x70) != 0) {
                        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x100);
                        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                        FUN_07cb26a0();
                        if (lVar3 != 0) {
                          FUN_07cb2770(lVar3,uVar2,0);
                          if (*(long *)(unaff_x19 + 0x60) != 0) {
                            lVar3 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x100);
                            uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                            FUN_07cb26a0();
                            if (lVar3 != 0) {
                              FUN_07cb2770(lVar3,uVar2,0);
                              if (*(long *)(unaff_x19 + 0x68) != 0) {
                                lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x100);
                                uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                FUN_07cb26a0();
                                if (lVar3 != 0) {
                                  FUN_07cb2770(lVar3,uVar2,0);
                                  if (*(long *)(unaff_x19 + 0x88) != 0) {
                                    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x100);
                                    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                    FUN_07cb26a0();
                                    if (lVar3 != 0) {
                                      FUN_07cb2770(lVar3,uVar2,0);
                                      if (*(long *)(unaff_x19 + 0x98) != 0) {
                                        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x100);
                                        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                        FUN_07cb26a0();
                                        if (lVar3 != 0) {
                                          FUN_07cb2770(lVar3,uVar2,0);
                                          if (*(long *)(unaff_x19 + 0x90) != 0) {
                                            lVar3 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0x100);
                                            uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                            FUN_07cb26a0();
                                            if (lVar3 != 0) {
                                              FUN_07cb2770(lVar3,uVar2,0);
                                              if (*(long *)(unaff_x19 + 0x80) != 0) {
                                                lVar3 = *(long *)(*(long *)(unaff_x19 + 0x80) +
                                                                 0x100);
                                                uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                                FUN_07cb26a0();
                                                if (lVar3 != 0) {
                                                  FUN_07cb2770(lVar3,uVar2,0);
                                                  uVar2 = FUN_0447aad0();
                                                  *(undefined8 *)(unaff_x19 + 400) = uVar2;
                                                  thunk_FUN_03afed3c(unaff_x19 + 400);
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
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_03a8a9c0();
}


