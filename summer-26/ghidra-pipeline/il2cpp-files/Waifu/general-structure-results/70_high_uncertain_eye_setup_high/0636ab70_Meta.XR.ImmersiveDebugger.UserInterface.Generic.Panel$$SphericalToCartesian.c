/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SphericalToCartesian
ENTRY_POINT: 0636ab70
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SphericalToCartesian(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  if (param_1 != 0) {
                    /* try { // try from 0636ab78 to 0646ab7f has its CatchHandler @ 0636abac */
    FUN_042a7d3c(param_1,*(undefined8 *)(unaff_x20 + 0x1f8));
    if (*(long *)(unaff_x19 + 0x68) != 0) {
                    /* try { // try from 0636ab84 to 0646ab8f has its CatchHandler @ 0636abb8 */
      FUN_042a52a4(*(long *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x21 + 0x140));
      if (*(long *)(unaff_x19 + 0x70) != 0) {
                    /* try { // try from 0636ab94 to 0646ab97 has its CatchHandler @ 0636abb0 */
        FUN_042a7d3c(*(long *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x20 + 0x1f8));
                    /* try { // try from 0636ab9c to 0646ab9f has its CatchHandler @ 0636aba8 */
                    /* try { // try from 0636aba0 to 0646abc7 has its CatchHandler @ 06369dec */
        if (*(long *)(unaff_x19 + 0x78) != 0) {
                    /* catch() { ... } // from try @ 0636aac4 with catch @ 0636aba4 */
                    /* catch() { ... } // from try @ 0636ab9c with catch @ 0636aba8 */
          FUN_042a52a4(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x21 + 0x140));
                    /* catch() { ... } // from try @ 0636ab78 with catch @ 0636abac */
                    /* catch() { ... } // from try @ 0636ab94 with catch @ 0636abb0 */
          if (*(long *)(unaff_x19 + 0x80) != 0) {
                    /* catch() { ... } // from try @ 0636aa84 with catch @ 0636abb4 */
                    /* catch() { ... } // from try @ 0636ab84 with catch @ 0636abb8 */
            FUN_042a7d3c(*(long *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x20 + 0x1f8));
            if (*(long *)(unaff_x19 + 0x88) != 0) {
                    /* try { // try from 0636abc8 to 0646abcb has its CatchHandler @ 0636aeec */
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


