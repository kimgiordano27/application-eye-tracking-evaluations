/*
FUNCTION_NAME: FUN_02e31590
ENTRY_POINT: 02e31590
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


undefined8 FUN_02e31590(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ff01e8 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01e8 = 1;
  }
  if (param_2 != 0) {
    if (((*(char *)(param_2 + 600) == '\0') || ((char)param_1[0x21] != '\0')) &&
       (uVar2 = FUN_02de04f0(param_2,0),
       puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
       (uVar2 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x1f8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar3,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_2 + 0x1f8) == 0) goto LAB_02e31768;
        uVar2 = FUN_02dfb124(*(long *)(param_2 + 0x1f8),0);
        if ((uVar2 & 1) == 0) {
          lVar4 = param_1[0x36];
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(lVar4,0);
          if ((uVar2 & 1) != 0) {
            lVar4 = param_1[0x36];
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar2 = FUN_0391f968(lVar4,param_2,0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
          }
          if ((*(char *)(param_2 + 0x1b9) == '\0') &&
             (uVar2 = (**(code **)(*param_1 + 0x518))
                                (param_1,param_2,*(undefined8 *)(*param_1 + 0x520)),
             (uVar2 & 1) != 0)) {
            lVar4 = param_1[0x30];
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar2 = FUN_03923030(lVar4,0);
            if ((uVar2 & 1) != 0) {
              lVar4 = param_1[0x30];
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar2 = FUN_03922f24(lVar4,param_2,0);
              if ((uVar2 & 1) != 0) {
                return 0;
              }
            }
            uVar2 = FUN_02e1b4d8(param_1,param_2,0);
            if ((uVar2 & 1) != 0) {
              lVar4 = param_1[0x13];
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar2 = FUN_03923030(lVar4,0);
              if ((uVar2 & 1) != 0) {
                lVar4 = param_1[0x13];
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar3 = FUN_03922f24(lVar4,param_2,0);
                return uVar3;
              }
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
LAB_02e31768:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


