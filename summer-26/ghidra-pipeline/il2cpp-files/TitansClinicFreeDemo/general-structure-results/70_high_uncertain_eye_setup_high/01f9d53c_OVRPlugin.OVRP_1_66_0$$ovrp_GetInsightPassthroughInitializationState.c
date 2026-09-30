/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 01f9d53c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState(void)

{
  ulong uVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 *unaff_x27;
  
  FUN_01eb1cf0();
  FUN_01f7d8a0(*unaff_x27,0);
  FUN_01ebcbe8();
  if ((*(long *)(unaff_x22 + 0x70) != 0) &&
     (uVar1 = FUN_01ebca50(*(long *)(unaff_x22 + 0x70),0), (uVar1 & 1) != 0)) {
    uVar2 = *(undefined8 *)PTR_DAT_027bbb00;
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f7d8a0(uVar2,0);
    FUN_01ebcbe8();
    if (*(long *)(unaff_x22 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    FUN_01ebca60();
  }
  return;
}


