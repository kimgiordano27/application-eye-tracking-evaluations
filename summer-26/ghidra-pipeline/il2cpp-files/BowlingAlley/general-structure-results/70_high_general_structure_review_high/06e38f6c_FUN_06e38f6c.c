/*
FUNCTION_NAME: FUN_06e38f6c
ENTRY_POINT: 06e38f6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06e38f6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_OVRPermissionsRequester_GetPermissionId__;
  puVar1 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  if ((DAT_076ead4f & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRPermissionsRequester_GetPermissionId__);
    thunk_FUN_032e1da0(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    DAT_076ead4f = 1;
  }
  uVar3 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_0515d51c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x38),uVar3);
  thunk_FUN_06be6094(param_1,0);
  return;
}


