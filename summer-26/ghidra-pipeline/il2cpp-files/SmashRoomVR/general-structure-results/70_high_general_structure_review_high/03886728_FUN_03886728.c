/*
FUNCTION_NAME: FUN_03886728
ENTRY_POINT: 03886728
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_03886728(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff8832 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da8508);
    DAT_03ff8832 = 1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_03da8508;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar4 = (*(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
          )[1];
  uVar3 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = uVar4;
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  param_1[6] = (*(undefined8 **)(lVar2 + 0xb8))[1];
  param_1[5] = uVar3;
  thunk_FUN_01b4f09c(param_1 + 5,0);
  return;
}


