/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$BuildSignatureForDebugInspector
ENTRY_POINT: 063596bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__BuildSignatureForDebugInspector
               (long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  FUN_0335b6c8(param_1 + 0x7f0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb828,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb8b0,1);
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06358a4c with catch @ 063596fc */
  FUN_0335b6c8(&DAT_083eb870,1);
                    /* try { // try from 06359704 to 0645970b has its CatchHandler @ 0635970c */
  DataMemoryBarrier(2,3);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06359704 with catch @ 0635970c
                        */
  FUN_0335b6c8(&DAT_083eb770,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x8ce) = unaff_w21;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    return;
  }
  FUN_0638b6a0(*(long *)(unaff_x19 + 0x18),0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_04385f5c(*(long *)(unaff_x19 + 0x20),DAT_083eb770);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_0438867c(*(long *)(unaff_x19 + 0x28),DAT_083eb870);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_04388dd4(*(long *)(unaff_x19 + 0x30),DAT_083eb8b0);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_0438867c(*(long *)(unaff_x19 + 0x38),DAT_083eb870);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_04387484(*(long *)(unaff_x19 + 0x40),DAT_083eb828);
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              FUN_0438867c(*(long *)(unaff_x19 + 0x48),DAT_083eb870);
              if (*(long *)(unaff_x19 + 0x50) != 0) {
                FUN_04388dd4(*(long *)(unaff_x19 + 0x50),DAT_083eb8b0);
                if (*(long *)(unaff_x19 + 0x58) != 0) {
                  FUN_04386d84(*(long *)(unaff_x19 + 0x58),DAT_083eb7f0);
                  if (*(long *)(unaff_x19 + 0x60) != 0) {
                    FUN_0438867c(*(long *)(unaff_x19 + 0x60),DAT_083eb870);
                    if (*(long *)(unaff_x19 + 0x68) != 0) {
                      FUN_04388dd4(*(long *)(unaff_x19 + 0x68),DAT_083eb8b0);
                      if (*(long *)(unaff_x19 + 0x70) != 0) {
                        FUN_0638b6a0(*(long *)(unaff_x19 + 0x70),0);
                        if (*(long *)(unaff_x19 + 0x78) != 0) {
                          FUN_0438867c(*(long *)(unaff_x19 + 0x78),DAT_083eb870);
                          if (*(long *)(unaff_x19 + 0x80) != 0) {
                            FUN_04388dd4(*(long *)(unaff_x19 + 0x80),DAT_083eb8b0);
                            if (*(long *)(unaff_x19 + 0x88) != 0) {
                              FUN_04387484(*(long *)(unaff_x19 + 0x88),DAT_083eb828);
                              if (*(long *)(unaff_x19 + 0x90) != 0) {
                                FUN_0638b6a0(*(long *)(unaff_x19 + 0x90),0);
                                if (*(long *)(unaff_x19 + 0x98) != 0) {
                                  FUN_04387484(*(long *)(unaff_x19 + 0x98),DAT_083eb828);
                                  if (*(long *)(unaff_x19 + 0xa0) != 0) {
                                    FUN_04254070(*(long *)(unaff_x19 + 0xa0),DAT_083ea828);
                                    if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                      FUN_0438867c(*(long *)(unaff_x19 + 0xb0),DAT_083eb870);
                                      if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                        FUN_04388dd4(*(long *)(unaff_x19 + 0xb8),DAT_083eb8b0);
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


