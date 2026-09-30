/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.NetworkBootstrapperUtils$$SetUpAndStartAutomaticColocation
ENTRY_POINT: 0637f240
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperUtils__SetUpAndStartAutomaticColocation
          (undefined8 param_1)

{
  long lVar1;
  long unaff_x21;
  undefined8 unaff_x29;
  undefined1 auVar2 [16];
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  lVar1 = FUN_06317920(param_1,0);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x60) != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)) {
    lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x68) != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)) {
      lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
      if (((lVar1 != 0) && (*(long *)(lVar1 + 0x90) != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)) {
        lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
        if (((lVar1 != 0) && (*(long *)(lVar1 + 0x30) != 0)) && (*(long *)(unaff_x21 + 0x10) != 0))
        {
          lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
          if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)
             ) {
            lVar1 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0);
            if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
               (*(long *)(unaff_x21 + 0x10) != 0)) {
              lVar1 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0);
              if (((lVar1 != 0) && (*(long *)(lVar1 + 0x30) != 0)) &&
                 (*(long *)(unaff_x21 + 0x10) != 0)) {
                lVar1 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0);
                if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
                   (*(long *)(unaff_x21 + 0x10) != 0)) {
                  lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) &&
                     (*(long *)(unaff_x21 + 0x10) != 0)) {
                    lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x88) != 0)) &&
                       (*(long *)(unaff_x21 + 0x10) != 0)) {
                      lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                      if (lVar1 != 0) {
                        if ((*(long *)(lVar1 + 0x78) != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          lVar1 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                          if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) {
                            auVar2 = FUN_0400511c(&stack0x00000090,
                                                  *(undefined4 *)(*(long *)(lVar1 + 0x80) + 0x30),
                                                  0x40,unaff_x29);
                    /* try { // try from 0637f48c to 0647f713 has its CatchHandler @ 0637f48c
                       catch() { ... } // from try @ 0637f48c with catch @ 0637f48c
                       catch() { ... } // from try @ 0637fabc with catch @ 0637f48c
                       catch() { ... } // from try @ 0637fd74 with catch @ 0637f48c
                       catch() { ... } // from try @ 0637fe64 with catch @ 0637f48c
                       catch() { ... } // from try @ 0637ff6c with catch @ 0637f48c
                       catch() { ... } // from try @ 06380080 with catch @ 0637f48c
                       catch() { ... } // from try @ 063800bc with catch @ 0637f48c
                       catch() { ... } // from try @ 0638010c with catch @ 0637f48c
                       catch() { ... } // from try @ 06380144 with catch @ 0637f48c
                       catch() { ... } // from try @ 063801f0 with catch @ 0637f48c
                       catch() { ... } // from try @ 0638027c with catch @ 0637f48c
                       catch() { ... } // from try @ 0638029c with catch @ 0637f48c
                       catch() { ... } // from try @ 06380310 with catch @ 0637f48c
                       catch() { ... } // from try @ 06380344 with catch @ 0637f48c */
                            return auVar2;
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


