/*
FUNCTION_NAME: FUN_02e0f810
ENTRY_POINT: 02e0f810
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


void FUN_02e0f810(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_03ff0114 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0114 = 1;
  }
  param_1[9] = param_1[7];
  *(undefined1 *)((long)param_1 + 0x99) = 0;
  *(char *)((long)param_1 + 0x9b) = (char)param_1[4];
  thunk_FUN_01b4f09c(param_1 + 9);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_1 + 0x9a) == '\0') {
    lVar4 = param_1[10];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar4,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1[10];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar4,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *param_1;
      lVar4 = param_1[10];
      goto LAB_02e0f8c8;
    }
  }
  lVar3 = *param_1;
  lVar4 = param_1[9];
LAB_02e0f8c8:
                    /* WARNING: Could not recover jumptable at 0x02e0f8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x1c8))(param_1,lVar4,*(undefined8 *)(lVar3 + 0x1d0));
  return;
}


