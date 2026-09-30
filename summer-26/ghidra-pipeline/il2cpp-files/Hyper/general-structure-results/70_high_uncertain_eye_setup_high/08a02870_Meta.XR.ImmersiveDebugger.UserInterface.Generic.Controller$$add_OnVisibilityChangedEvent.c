/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$add_OnVisibilityChangedEvent
ENTRY_POINT: 08a02870
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__add_OnVisibilityChangedEvent(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04947ee4(PTR_DAT_0ac51530);
  *(undefined1 *)(unaff_x21 + 0xec) = 1;
  FUN_08a027cc();
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0897329c(*(long *)(unaff_x20 + 0x18),0);
    }
    if (unaff_x19 != 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
      thunk_FUN_049ee3d8();
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        uVar1 = FUN_075061b4(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_0ac51530);
        *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
        thunk_FUN_049ee3d8();
        uVar1 = FUN_088edb28(*(undefined8 *)(unaff_x20 + 0x10),0);
        *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x10),uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


