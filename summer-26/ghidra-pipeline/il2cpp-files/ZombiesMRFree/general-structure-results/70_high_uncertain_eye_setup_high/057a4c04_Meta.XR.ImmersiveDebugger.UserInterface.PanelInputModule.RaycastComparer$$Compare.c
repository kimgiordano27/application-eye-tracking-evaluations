/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule.RaycastComparer$$Compare
ENTRY_POINT: 057a4c04
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer__Compare(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  if (unaff_w22 == 4) {
    *(code **)(unaff_x19 + 0x18) = FUN_02c62640;
  }
  else {
    if (unaff_x20 == 0) {
      uVar1 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar1,0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  *(code **)(unaff_x19 + 0x38) = FUN_02c625c8;
  return;
}


