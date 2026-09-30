/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 02c51440
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w25;
  
  puVar1 = PTR_DAT_03800580;
  if (-1 < unaff_w25) {
    puVar1 = *(undefined **)(param_1 + 0x318);
  }
  uVar2 = thunk_FUN_01851c08(puVar1);
  thunk_FUN_01851c08(PTR_DAT_037f86c0);
  uVar3 = thunk_FUN_01861bbc();
  uVar4 = thunk_FUN_01851c08(PTR_DAT_037f8998);
  FUN_02b40444(uVar3,uVar2,uVar4,0);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380cb20);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,uVar2);
}


