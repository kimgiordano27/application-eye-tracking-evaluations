/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SetNotificationShown
ENTRY_POINT: 0696d7b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_SetNotificationShown(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x22;
  
  FUN_07cb2770(param_1,param_2,0);
  if (*(long *)(unaff_x19 + 0x58) != 0) {
                    /* try { // try from 0696d7c4 to 06a6d96b has its CatchHandler @ 0696d7c4
                       catch() { ... } // from try @ 0696d7c4 with catch @ 0696d7c4
                       catch() { ... } // from try @ 0696da78 with catch @ 0696d7c4
                       catch() { ... } // from try @ 0696db14 with catch @ 0696d7c4
                       catch() { ... } // from try @ 0696dc28 with catch @ 0696d7c4 */
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x58) + 0x100);
    uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
    FUN_07cb26a0();
    if (lVar2 != 0) {
      FUN_07cb2770(lVar2,uVar1,0);
      if (*(long *)(unaff_x19 + 0x78) != 0) {
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x100);
        uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
        FUN_07cb26a0();
        if (lVar2 != 0) {
          FUN_07cb2770(lVar2,uVar1,0);
          if (*(long *)(unaff_x19 + 0x70) != 0) {
            lVar2 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x100);
            uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
            FUN_07cb26a0();
            if (lVar2 != 0) {
              FUN_07cb2770(lVar2,uVar1,0);
              if (*(long *)(unaff_x19 + 0x60) != 0) {
                lVar2 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x100);
                uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                FUN_07cb26a0();
                if (lVar2 != 0) {
                  FUN_07cb2770(lVar2,uVar1,0);
                  if (*(long *)(unaff_x19 + 0x68) != 0) {
                    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x100);
                    uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                    FUN_07cb26a0();
                    if (lVar2 != 0) {
                      FUN_07cb2770(lVar2,uVar1,0);
                      if (*(long *)(unaff_x19 + 0x88) != 0) {
                        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x100);
                        uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                        FUN_07cb26a0();
                        if (lVar2 != 0) {
                          FUN_07cb2770(lVar2,uVar1,0);
                          if (*(long *)(unaff_x19 + 0x98) != 0) {
                            lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x100);
                            uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                            FUN_07cb26a0();
                            if (lVar2 != 0) {
                              FUN_07cb2770(lVar2,uVar1,0);
                              if (*(long *)(unaff_x19 + 0x90) != 0) {
                                lVar2 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0x100);
                                uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                                FUN_07cb26a0();
                                if (lVar2 != 0) {
                                  FUN_07cb2770(lVar2,uVar1,0);
                                  if (*(long *)(unaff_x19 + 0x80) != 0) {
                                    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x100);
                                    uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                                    FUN_07cb26a0();
                                    if (lVar2 != 0) {
                                      FUN_07cb2770(lVar2,uVar1,0);
                                      uVar1 = FUN_0447aad0();
                                      *(undefined8 *)(unaff_x19 + 400) = uVar1;
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


