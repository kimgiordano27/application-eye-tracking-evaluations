/*
FUNCTION_NAME: FUN_039e82dc
ENTRY_POINT: 039e82dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_039e82dc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (DAT_03ffcbfc == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffcbfc = '\x01';
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar3 = *param_3;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_2,uVar3,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *param_3 = param_2;
  thunk_FUN_01b4f09c(param_3,param_2);
  uVar3 = *param_3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    *param_4 = 0;
    *param_5 = 0;
  }
  uVar3 = *param_3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) goto LAB_039e8428;
  }
  else {
    FUN_039e5ad4(0,0,0x3f800000,0x3f800000,param_1);
    if (param_1 == 0) {
LAB_039e8428:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = FUN_03acc5a4(param_1,0);
    FUN_039e661c(param_1,uVar3);
  }
  FUN_03ab9b48(param_1,0x808,0);
  return;
}


