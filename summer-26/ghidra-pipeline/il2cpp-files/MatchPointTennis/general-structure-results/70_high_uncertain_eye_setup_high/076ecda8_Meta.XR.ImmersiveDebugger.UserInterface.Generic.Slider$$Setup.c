/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Setup
ENTRY_POINT: 076ecda8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Setup(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  undefined4 in_s3;
  
  lVar1 = FUN_04c6c620(param_1,*(undefined8 *)PTR_DAT_09f2f528);
  plVar3 = (long *)(unaff_x19 + 0x68);
  *plVar3 = lVar1;
  thunk_FUN_044bb4b4(plVar3,lVar1);
  if (*plVar3 != 0) {
    lVar1 = *(long *)(*plVar3 + 0x68);
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f538);
    FUN_06a390a4();
    if (lVar1 != 0) {
      FUN_06a43208(lVar1,uVar2,*(undefined8 *)PTR_DAT_09f2f540);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_095389b0(*(long *)(unaff_x19 + 0x28),0);
        *(undefined4 *)(unaff_x19 + 0x78) = in_s3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


