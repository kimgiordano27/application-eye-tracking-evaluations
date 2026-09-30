/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$Invoke
ENTRY_POINT: 0636cf00
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__Invoke
               (void)

{
  long unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 0636cf00 to 0646cf07 has its CatchHandler @ 0636d2ac */
                    /* try { // try from 0636cf08 to 0646cf7b has its CatchHandler @ 0636ca7c */
  FUN_0335b6c8(&DAT_083e1c98,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb6e8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcc0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb7c0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebd08,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebd30,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x948) = 1;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_0438044c(*(long *)(unaff_x19 + 0x60),DAT_083eb6e8);
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      FUN_0438044c(*(long *)(unaff_x19 + 0x58),DAT_083eb6e8);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_04386660(*(long *)(unaff_x19 + 0x20),DAT_083eb7c0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_04386660(*(long *)(unaff_x19 + 0x28),DAT_083eb7c0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_04386660(*(long *)(unaff_x19 + 0x30),DAT_083eb7c0);
            if (*(long *)(unaff_x19 + 0x38) != 0) {
              FUN_04386660(*(long *)(unaff_x19 + 0x38),DAT_083eb7c0);
              if (*(long *)(unaff_x19 + 0x40) != 0) {
                FUN_04386660(*(long *)(unaff_x19 + 0x40),DAT_083eb7c0);
                if (*(long *)(unaff_x19 + 0x48) != 0) {
                  FUN_043922b0(*(long *)(unaff_x19 + 0x48),DAT_083ebd30);
                  if (*(long *)(unaff_x19 + 0x50) != 0) {
                    FUN_04391b04(*(long *)(unaff_x19 + 0x50),DAT_083ebd08);
                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                      FUN_043907e0(*(long *)(unaff_x19 + 0x18),DAT_083ebcc0);
                      if (*(long *)(unaff_x19 + 0x68) != 0) {
                        FUN_05cb5dc0(*(long *)(unaff_x19 + 0x68),DAT_083e1c98);
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


