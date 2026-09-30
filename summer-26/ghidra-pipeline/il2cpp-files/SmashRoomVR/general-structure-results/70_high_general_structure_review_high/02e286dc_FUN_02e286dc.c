/*
FUNCTION_NAME: FUN_02e286dc
ENTRY_POINT: 02e286dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_16;telemetry_or_network_hits_4
*/


void FUN_02e286dc(long *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_03ff01a6 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01a6 = 1;
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_1 + 0x2c1) == '\0') {
    lVar6 = param_1[0x50];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar6,0);
    if ((uVar2 & 1) == 0) {
      plVar4 = param_1 + 0x2f;
    }
    else {
      if (param_1[0x50] == 0) goto LAB_02e28934;
      plVar4 = (long *)(param_1[0x50] + 0x68);
    }
    lVar6 = *plVar4;
    if ((param_2 & 1) != 0) {
      uVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      FUN_02e28938(param_1,uVar3);
    }
    if ((char)param_1[0x1e] != '\0') {
      lVar5 = param_1[0x65];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar5,0);
      if ((uVar2 & 1) != 0) {
        if (param_1[0x65] == 0) goto LAB_02e28934;
        FUN_02e10fd0(param_1[0x65],lVar6,0,0);
      }
    }
    lVar5 = param_1[0x23];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar5,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (param_1[0x23] != 0) {
      FUN_02e10fd0(param_1[0x23],lVar6,0,0);
      return;
    }
  }
  else {
    FUN_02e1bb14(param_1,0);
    if (param_1[0x23] != 0) {
      FUN_02e10ed0(param_1[0x23],param_1[0x70],0);
      if ((char)param_1[0x1e] != '\0') {
        lVar6 = param_1[0x65];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(lVar6,0);
        if ((uVar2 & 1) != 0) {
          if (param_1[0x65] == 0) goto LAB_02e28934;
          FUN_02e10ed0(param_1[0x65],param_1[0x70],0);
        }
      }
      if ((param_2 & 1) == 0) {
        FUN_02e22f34(param_1,param_1[0x30]);
        return;
      }
      lVar6 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      if (lVar6 != 0) {
        uVar3 = FUN_0391c27c(lVar6,0);
        FUN_02e28938(param_1,uVar3);
        if ((param_1[0x30] != 0) && (lVar6 = FUN_0391c27c(param_1[0x30],0), lVar6 != 0)) {
          FUN_039282dc((int)param_1[0x55],*(undefined4 *)((long)param_1 + 0x2ac),(int)param_1[0x56],
                       lVar6,0);
          if ((param_1[0x30] != 0) && (lVar6 = FUN_0391c27c(param_1[0x30],0), lVar6 != 0)) {
            FUN_03929060((int)param_1[0x53],*(undefined4 *)((long)param_1 + 0x29c),
                         (int)param_1[0x54],*(undefined4 *)((long)param_1 + 0x2a4),lVar6,0);
            return;
          }
        }
      }
    }
  }
LAB_02e28934:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


