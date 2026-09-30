/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 05133a04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnqueueSubmitLayer(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  puVar1 = PTR_DAT_06781428;
  if ((*(byte *)(unaff_x21 + 0xc82) & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06781428);
    *(undefined1 *)(unaff_x21 + 0xc82) = 1;
  }
  FUN_050f136c(param_2,*(undefined8 *)puVar1,0);
  lVar2 = FUN_0512fbac(param_1,param_2,4);
  uVar3 = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x58) + 0x10);
  }
  return uVar3;
}


