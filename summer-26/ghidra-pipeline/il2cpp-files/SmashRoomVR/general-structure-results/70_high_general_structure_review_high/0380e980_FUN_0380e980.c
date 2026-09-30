/*
FUNCTION_NAME: FUN_0380e980
ENTRY_POINT: 0380e980
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_0380e980(long *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if ((DAT_03ff8392 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5b10);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8392 = 1;
  }
  if (param_2 == 1) {
    FUN_0380ebfc();
    FUN_0380e918(param_1);
  }
  else {
    FUN_0380e918(param_1);
    if (param_2 != 3) {
      if (param_2 == 2) {
        if ((char)param_1[0x58] != '\0') {
          uVar1 = FUN_03809bb4(param_1);
          if ((uVar1 & 1) == 0) {
            (**(code **)(*param_1 + 0x8d8))(param_1,*(undefined8 *)(*param_1 + 0x8e0));
          }
          *(undefined1 *)(param_1 + 0x58) = 0;
        }
        if (*(char *)((long)param_1 + 0x335) == '\0') {
          return;
        }
        if (*(char *)((long)param_1 + 0x334) != '\0') {
          lVar3 = param_1[0x67];
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar1 = FUN_0391f968(lVar3,0,0);
          if ((uVar1 & 1) != 0) {
            FUN_0380f620(param_1,param_1[0x67]);
            param_1[0x67] = 0;
            thunk_FUN_01b4f09c(param_1 + 0x67,0);
          }
        }
        *(undefined1 *)((long)param_1 + 0x335) = 0;
        return;
      }
      if (param_2 != 0) {
        return;
      }
      uVar1 = FUN_03809bb4(param_1);
      if (((((uVar1 & 1) != 0) || (*(char *)((long)param_1 + 0x2b4) != '\0')) ||
          (*(char *)((long)param_1 + 0x2b5) != '\0')) &&
         (uVar2 = *(uint *)((long)param_1 + 700), uVar2 < 2)) {
        if ((*(char *)((long)param_1 + 0x2b5) != '\0') && (*(char *)((long)param_1 + 0x2b4) == '\0')
           ) {
          uVar1 = FUN_03809bb4(param_1);
          if ((uVar1 & 1) == 0) {
            FUN_0380ecd0(param_1);
            goto LAB_0380eb84;
          }
          uVar2 = *(uint *)((long)param_1 + 700);
        }
        if (uVar2 == 0) {
          FUN_03925cf4(0);
          FUN_0380ede0(param_1,0);
        }
        else if (uVar2 == 1) {
          FUN_0380ed14(param_1,0);
        }
      }
LAB_0380eb84:
      if (*(char *)((long)param_1 + 0x334) == '\0') {
        return;
      }
      if (*(char *)((long)param_1 + 0x335) != '\0') {
        return;
      }
      if (param_1[0x68] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(int *)(param_1[0x68] + 0x20) != 0) {
        return;
      }
      lVar3 = param_1[0x67];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar1 = FUN_0391f968(lVar3,0,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      uVar1 = FUN_0380f0ec(param_1,param_1[0x67]);
      if ((uVar1 & 1) == 0) {
        return;
      }
      *(undefined1 *)((long)param_1 + 0x335) = 1;
      return;
    }
  }
  if (*(char *)((long)param_1 + 0x2b4) == '\0') {
    if (*(char *)((long)param_1 + 0x2b5) != '\0') {
      FUN_0380ecd0(param_1);
    }
  }
  else {
    FUN_0380f364(param_1,param_2);
  }
  uVar1 = FUN_03809bb4(param_1);
  if (((uVar1 & 1) != 0) || (((char)param_1[0x4f] != '\0' && (0 < (int)param_1[0x51])))) {
    FUN_03925cf4(0);
    FUN_0380f41c(param_1,param_2);
    if (*(int *)((long)param_1 + 700) == 2) {
      FUN_0380f364(param_1,param_2);
      return;
    }
  }
  return;
}


