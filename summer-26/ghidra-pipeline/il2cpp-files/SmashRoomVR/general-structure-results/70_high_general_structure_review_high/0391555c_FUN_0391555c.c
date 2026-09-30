/*
FUNCTION_NAME: FUN_0391555c
ENTRY_POINT: 0391555c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0391555c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  if ((DAT_03ffa914 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03ffa914 = 1;
  }
  uVar1 = _DAT_00b58170;
  puVar3 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar3[1] = _UNK_00b58178;
  *puVar3 = uVar1;
  return;
}


