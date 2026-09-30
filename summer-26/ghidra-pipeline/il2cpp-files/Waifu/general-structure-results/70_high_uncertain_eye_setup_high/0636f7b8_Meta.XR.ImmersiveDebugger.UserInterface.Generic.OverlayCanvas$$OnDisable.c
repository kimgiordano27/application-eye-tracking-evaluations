/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas$$OnDisable
ENTRY_POINT: 0636f7b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas__OnDisable(long param_1)

{
  int iVar1;
  long *plVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long unaff_x25;
  int unaff_w26;
  
  if (param_1 != 0) {
                    /* try { // try from 0636f7bc to 0646f7c3 has its CatchHandler @ 0636f7c4 */
                    /* catch() { ... } // from try @ 0636f788 with catch @ 0636f7c4
                       catch() { ... } // from try @ 0636f7bc with catch @ 0636f7c4 */
    Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter
              (param_1,unaff_w23,unaff_w19 & 1,0);
    if ((*(long *)(unaff_x20 + 0x68) != 0) &&
       (plVar2 = (long *)FUN_05cb5ba0(*(long *)(unaff_x20 + 0x68),unaff_w22,DAT_083e1cb8),
       plVar2 != (long *)0x0)) {
      iVar1 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
      if ((0 < unaff_w26) && (iVar1 != 2000)) {
        do {
          FUN_0636f86c();
          unaff_w26 = unaff_w26 + -1;
        } while (unaff_w26 != 0);
      }
      if (0 < (int)unaff_x25) {
        do {
          if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0636f868;
          FUN_0636f86c();
          unaff_x25 = unaff_x25 + -1;
        } while (unaff_x25 != 0);
      }
      return;
    }
  }
LAB_0636f868:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


