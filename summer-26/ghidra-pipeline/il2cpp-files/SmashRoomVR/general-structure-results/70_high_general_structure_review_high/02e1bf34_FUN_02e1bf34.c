/*
FUNCTION_NAME: FUN_02e1bf34
ENTRY_POINT: 02e1bf34
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


void FUN_02e1bf34(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff0158 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0158 = 1;
  }
  FUN_02e1c078(param_1,param_2);
  (**(code **)(*param_1 + 0x4d8))(param_1,*(undefined8 *)(*param_1 + 0x4e0));
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 == 0) goto LAB_02e1c074;
  if (*(char *)(param_2 + 0x6a) != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = param_1[0x1a];
    }
    else {
      lVar4 = *(long *)(param_2 + 0x60);
    }
    param_1[0x2c] = lVar4;
    thunk_FUN_01b4f09c(param_1 + 0x2c);
    lVar4 = param_1[0x2c];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar4,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)param_1[0x2c];
      if (plVar3 == (long *)0x0) goto LAB_02e1c074;
      (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      plVar3 = (long *)param_1[0x2c];
      if (plVar3 == (long *)0x0) goto LAB_02e1c074;
      (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    }
  }
  lVar4 = param_1[0x1c];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1[0x19] != 0) {
    FUN_02e1bb14(param_1[0x19],param_1[0x1c]);
    return;
  }
LAB_02e1c074:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


