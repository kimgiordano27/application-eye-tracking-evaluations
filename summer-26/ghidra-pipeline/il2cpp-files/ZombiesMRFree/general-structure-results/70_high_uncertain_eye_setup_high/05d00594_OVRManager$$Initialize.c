/*
FUNCTION_NAME: OVRManager$$Initialize
ENTRY_POINT: 05d00594
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRManager__Initialize(undefined1 param_1 [16],undefined8 param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  auVar1 = (*(code *)*param_3)();
                    /* try { // try from 05d005a4 to 05e006ef has its CatchHandler @ 05d00280 */
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    auVar1 = FUN_068b63c8(auVar1._0_8_,*(long *)(unaff_x19 + 0x40),0);
  }
  uVar3 = auVar1._8_8_;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_068b63c8(param_2,*(long *)(unaff_x19 + 0x38),0);
  }
  auVar2._8_8_ = uVar3;
  auVar2._0_8_ = auVar1._0_8_;
  return auVar2;
}


