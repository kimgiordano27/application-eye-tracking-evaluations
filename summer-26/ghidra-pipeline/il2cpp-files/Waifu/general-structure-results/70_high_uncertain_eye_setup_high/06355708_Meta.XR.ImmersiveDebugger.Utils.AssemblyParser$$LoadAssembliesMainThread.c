/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$LoadAssembliesMainThread
ENTRY_POINT: 06355708
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__LoadAssembliesMainThread(void)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long unaff_x20;
  undefined4 unaff_s8;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  
                    /* catch() { ... } // from try @ 063556a4 with catch @ 06355708
                       catch() { ... } // from try @ 063556f8 with catch @ 06355708 */
  lVar2 = FUN_06317848();
                    /* try { // try from 0635570c to 0645570f has its CatchHandler @ 06355718 */
                    /* try { // try from 06355710 to 0645571b has its CatchHandler @ 063553d0 */
                    /* catch() { ... } // from try @ 0635570c with catch @ 06355718 */
  if ((((lVar2 != 0) && (*(long *)(lVar2 + 0x58) != 0)) && (*(long *)(unaff_x20 + 0x38) != 0)) &&
     (*(long *)(unaff_x20 + 0x20) != 0)) {
    in_stack_00000058 = unaff_s8;
    auVar4 = FUN_04004940(&stack0x00000058,*(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x30),0x40,
                          in_stack_00000050);
    if (((*(long *)(unaff_x20 + 0x40) != 0) && (*(long *)(unaff_x20 + 0x30) != 0)) &&
       ((*(long *)(unaff_x20 + 0x38) != 0 && (*(long *)(unaff_x20 + 0x18) != 0)))) {
      lVar2 = FUN_0631798c(*(long *)(unaff_x20 + 0x18),0);
      if (((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) && (*(long *)(unaff_x20 + 0x18) != 0)) {
        lVar2 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
        if (((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) && (*(long *)(unaff_x20 + 0x18) != 0))
        {
          lVar2 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
          if (((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) && (*(long *)(unaff_x20 + 0x18) != 0)
             ) {
            lVar2 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
            if (lVar2 != 0) {
              plVar1 = (long *)(lVar2 + 0xd0);
              if (*(int *)(lVar2 + 0xe0) != 0) {
                plVar1 = (long *)(lVar2 + 0xd8);
              }
              if ((*plVar1 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
                lVar2 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                if (lVar2 != 0) {
                  if (*(long *)(lVar2 + 0x28) != 0) {
                    if (*(long *)(unaff_x20 + 0x18) != 0) {
                      lVar2 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                      if (lVar2 != 0) {
                        if ((DAT_086de93e & 1) == 0) {
                          FUN_0335b6c8(&DAT_083eb4b0,1);
                          DataMemoryBarrier(2,3);
                          DAT_086de93e = 1;
                        }
                        if (*(long *)(lVar2 + 0x18) == 0) {
                          uVar3 = 0;
                        }
                        else {
                          uVar3 = *(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x30);
                        }
                        uStack000000000000005c = 0;
                        auVar4 = FUN_040049d0(&stack0x00000058,uVar3,0x40,auVar4._0_8_,auVar4._8_8_,
                                              DAT_0840f018);
                        return auVar4;
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


