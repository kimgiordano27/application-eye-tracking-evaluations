/*
FUNCTION_NAME: thunk_FUN_036c6e44
ENTRY_POINT: 036c6e40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void thunk_FUN_036c6e44(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ff7559 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff7559 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_1[0x2f] != 0) {
    return;
  }
  lVar4 = param_1[0x2a];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    FUN_036c79ec((int)param_1[0x29],0,param_1);
    uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_036c7b20((int)param_1[0x29],param_1);
      lVar4 = FUN_03920cb0(param_1,uVar3,0);
      param_1[0x2f] = lVar4;
      thunk_FUN_01b4f09c(param_1 + 0x2f,lVar4);
    }
  }
  lVar4 = param_1[0x2b];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x418))(param_1,param_1[0x2b],*(undefined8 *)(*param_1 + 0x420));
  }
  param_1[0x2b] = 0;
  thunk_FUN_01b4f09c(param_1 + 0x2b,0);
                    /* WARNING: Could not recover jumptable at 0x036c6f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
  return;
}


