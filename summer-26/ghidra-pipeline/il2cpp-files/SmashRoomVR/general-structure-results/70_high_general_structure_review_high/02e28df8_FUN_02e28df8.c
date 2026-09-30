/*
FUNCTION_NAME: FUN_02e28df8
ENTRY_POINT: 02e28df8
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


undefined8 FUN_02e28df8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ff01ad & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01ad = 1;
  }
  uVar2 = FUN_02e264c4(param_1);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x3c6) == '\0') {
LAB_02e28ea8:
                    /* WARNING: Could not recover jumptable at 0x02e28ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x468))(param_1,param_2,*(undefined8 *)(*param_1 + 0x470));
      return uVar3;
    }
    lVar4 = param_1[0x14];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar4,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1[0x14];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(lVar4,param_2,0);
      if ((uVar2 & 1) == 0) goto LAB_02e28ea8;
    }
  }
  return 0;
}


