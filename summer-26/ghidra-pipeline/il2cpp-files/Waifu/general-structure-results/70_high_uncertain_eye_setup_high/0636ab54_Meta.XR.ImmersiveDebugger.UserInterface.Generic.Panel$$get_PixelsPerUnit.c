/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$get_PixelsPerUnit
ENTRY_POINT: 0636ab54
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__get_PixelsPerUnit(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_042a52a4(param_1,*(undefined8 *)(unaff_x21 + 0x140));
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_042a52a4(*(long *)(unaff_x19 + 0x58),*(undefined8 *)(unaff_x21 + 0x140));
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      FUN_042a7d3c(*(long *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x20 + 0x1f8));
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        FUN_042a52a4(*(long *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x21 + 0x140));
        if (*(long *)(unaff_x19 + 0x70) != 0) {
          FUN_042a7d3c(*(long *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x20 + 0x1f8));
          if (*(long *)(unaff_x19 + 0x78) != 0) {
            FUN_042a52a4(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x21 + 0x140));
            if (*(long *)(unaff_x19 + 0x80) != 0) {
              FUN_042a7d3c(*(long *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x20 + 0x1f8));
              if (*(long *)(unaff_x19 + 0x88) != 0) {
                FUN_0429fc00(*(long *)(unaff_x19 + 0x88),DAT_083eb068);
                if (*(long *)(unaff_x19 + 0x90) != 0) {
                  FUN_042a52a4(*(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x21 + 0x140));
                  if (*(long *)(unaff_x19 + 0x98) != 0) {
                    FUN_0429e068(*(long *)(unaff_x19 + 0x98),*(undefined8 *)(unaff_x22 + 0xfe8));
                    if (*(long *)(unaff_x19 + 0xa0) != 0) {
                      FUN_0429e068(*(long *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x22 + 0xfe8));
                      if (*(long *)(unaff_x19 + 0xa8) != 0) {
                        FUN_0429fc00(*(long *)(unaff_x19 + 0xa8),DAT_083eb068);
                        if (*(long *)(unaff_x19 + 0xb0) != 0) {
                          FUN_0429fc00(*(long *)(unaff_x19 + 0xb0),DAT_083eb068);
                          if (*(long *)(unaff_x19 + 0xb8) != 0) {
                            FUN_042a52a4(*(long *)(unaff_x19 + 0xb8),
                                         *(undefined8 *)(unaff_x21 + 0x140));
                            if (*(long *)(unaff_x19 + 0xc0) != 0) {
                              FUN_0429e068(*(long *)(unaff_x19 + 0xc0),
                                           *(undefined8 *)(unaff_x22 + 0xfe8));
                              if (*(long *)(unaff_x19 + 200) != 0) {
                                FUN_042a52a4(*(long *)(unaff_x19 + 200),
                                             *(undefined8 *)(unaff_x21 + 0x140));
                                if (*(long *)(unaff_x19 + 0xd0) != 0) {
                                  FUN_042a52a4(*(long *)(unaff_x19 + 0xd0),
                                               *(undefined8 *)(unaff_x21 + 0x140));
                                  if (*(long *)(unaff_x19 + 0xd8) != 0) {
                                    FUN_042a52a4(*(long *)(unaff_x19 + 0xd8),
                                                 *(undefined8 *)(unaff_x21 + 0x140));
                                    if (*(long *)(unaff_x19 + 0xe8) != 0) {
                                      FUN_042a7d3c(*(long *)(unaff_x19 + 0xe8),
                                                   *(undefined8 *)(unaff_x20 + 0x1f8));
                                      if (*(long *)(unaff_x19 + 0xf0) != 0) {
                                        FUN_042a7d3c(*(long *)(unaff_x19 + 0xf0),
                                                     *(undefined8 *)(unaff_x20 + 0x1f8));
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


