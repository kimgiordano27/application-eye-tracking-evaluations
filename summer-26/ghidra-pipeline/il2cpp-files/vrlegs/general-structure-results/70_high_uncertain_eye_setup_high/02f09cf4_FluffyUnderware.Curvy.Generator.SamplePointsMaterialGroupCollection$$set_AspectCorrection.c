/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsMaterialGroupCollection$$set_AspectCorrection
ENTRY_POINT: 02f09cf4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroupCollection__set_AspectCorrection(void)

{
  long *plVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x20 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar2);
}


