/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar$$OnPanelVisibilityChanged
ENTRY_POINT: 063608e0
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


void Meta_XR_ImmersiveDebugger_UserInterface_DebugBar__OnPanelVisibilityChanged(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long unaff_x19;
  undefined1 auVar4 [16];
  undefined8 uStack00000000000000c0;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  
  uStack00000000000000c0 = param_1;
  lVar2 = FUN_06317848();
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) && (*(long *)(unaff_x19 + 0x10) != 0)) {
    lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x38) != 0)) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
      if (((lVar2 != 0) && (*(long *)(lVar2 + 0x40) != 0)) && (*(long *)(unaff_x19 + 0x10) != 0)) {
        lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
        if (((lVar2 != 0) && (*(long *)(lVar2 + 0xb8) != 0)) && (*(long *)(unaff_x19 + 0x10) != 0))
        {
          lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
          if (((lVar2 != 0) && (*(long *)(lVar2 + 0x50) != 0)) && (*(long *)(unaff_x19 + 0x10) != 0)
             ) {
            lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
            if (((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
               (*(long *)(unaff_x19 + 0x10) != 0)) {
              lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
              if (((lVar2 != 0) && (*(long *)(lVar2 + 0x30) != 0)) &&
                 (*(long *)(unaff_x19 + 0x10) != 0)) {
                lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
                if (lVar2 != 0) {
                  lVar1 = 0xd0;
                  if (*(int *)(lVar2 + 0xe0) != 0) {
                    lVar1 = 0xd8;
                  }
                  if ((*(long *)(lVar2 + lVar1) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
                    lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
                    if (lVar2 != 0) {
                      lVar1 = 0xe8;
                      if (*(int *)(lVar2 + 0xf8) != 0) {
                        lVar1 = 0xf0;
                      }
                      if ((*(long *)(lVar2 + lVar1) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
                        lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
                        if ((lVar2 != 0) &&
                           ((*(long *)(lVar2 + 0x48) != 0 && (*(long *)(unaff_x19 + 0x10) != 0)))) {
                          lVar2 = FUN_06317848(*(long *)(unaff_x19 + 0x10),0);
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
                            uStack00000000000000ec = 0;
                            auVar4 = FUN_04003c50(&stack0x000000e8,uVar3,0x40,
                                                  *(undefined8 *)(unaff_x19 + 0xd0),
                                                  *(undefined8 *)(unaff_x19 + 0xd8),DAT_0840ef58);
                            *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar4;
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


