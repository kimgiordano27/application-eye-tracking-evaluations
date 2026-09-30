/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 033906b4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s__ToString(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  lVar1 = thunk_FUN_01c495e4();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,0);
  }
  if (1 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
    if (unaff_x21 != 0) {
      FUN_032108c8();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


