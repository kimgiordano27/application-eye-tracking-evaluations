/*
FUNCTION_NAME: FUN_05c21178
ENTRY_POINT: 05c21178
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05c21178(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = Method_OVRPlugin_get_version__;
  if ((DAT_066d5fe1 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_get_version__);
    FUN_02b3c81c(Method_OVRResult_From<OVRAnchor_ConfigureTrackerResult>__);
    FUN_02b3c81c(PTR_DAT_063203c8);
    DAT_066d5fe1 = 1;
  }
  plVar2 = (long *)FUN_02b3c834(*(undefined8 *)puVar1);
  if (*plVar2 == 0) {
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_OVRResult_From<OVRAnchor_ConfigureTrackerResult>__);
    FUN_05c2127c();
    puVar4 = (undefined8 *)FUN_02b3c834(*(undefined8 *)puVar1);
    *puVar4 = uVar3;
    uVar5 = FUN_02b3c834(*(undefined8 *)puVar1);
    thunk_FUN_02bb0e9c(uVar5,uVar3);
  }
  plVar2 = (long *)FUN_02b3c834(*(undefined8 *)puVar1);
  lVar6 = *plVar2;
  if (*(long *)(param_1 + 8) != 0) {
    if (lVar6 == 0) goto LAB_05c21278;
    FUN_05c212e0(lVar6);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (lVar6 == 0) goto LAB_05c21278;
    FUN_05c212e0(lVar6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (lVar6 == 0) goto LAB_05c21278;
    FUN_05c212e0(lVar6);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (lVar6 != 0) {
    FUN_05c212e0(lVar6);
    return;
  }
LAB_05c21278:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


