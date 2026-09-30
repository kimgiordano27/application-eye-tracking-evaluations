/*
FUNCTION_NAME: FUN_02e28ecc
ENTRY_POINT: 02e28ecc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


undefined8 FUN_02e28ecc(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_03ff01af & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01af = 1;
  }
  uVar3 = FUN_02e1b4d8(param_1,param_2);
  if ((uVar3 & 1) != 0) {
    if (param_2 == (long *)0x0) {
LAB_02e29124:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = (**(code **)(*param_2 + 0x238))(param_2,param_1,*(undefined8 *)(*param_2 + 0x240));
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)((long)param_1 + 0xd5) != '\0' || (*(char *)((long)param_2 + 0xdb) != '\0')) ||
         (*(int *)((long)param_2 + 0x2c) == 3)) ||
        (uVar3 = FUN_02de30f0(param_2,0), (uVar3 & 1) == 0)))) {
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      lVar6 = param_2[0x3d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(lVar6,0);
      if ((uVar3 & 1) != 0) {
        plVar4 = (long *)param_2[0x3d];
        if (plVar4 == (long *)0x0) goto LAB_02e29124;
        uVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        if ((uVar3 & 1) == 0) {
          iVar2 = *(int *)((long)param_2 + 0x2c);
          if (iVar2 == 2) {
            iVar2 = FUN_02ddfc1c(param_2,0);
            if (1 < iVar2) {
              return 0;
            }
            iVar2 = *(int *)((long)param_2 + 0x2c);
          }
          if (((iVar2 == 0) && ((char)param_1[0x69] == '\0')) &&
             (iVar2 = FUN_02ddfc1c(param_2,0), 0 < iVar2)) {
            return 0;
          }
        }
      }
      lVar6 = param_1[0x13];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(lVar6,0);
      if ((uVar3 & 1) != 0) {
        lVar6 = param_1[0x13];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(lVar6,param_2,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
      }
      if ((char)param_2[0x37] == '\0') {
        if (((*(char *)((long)param_2 + 0x3c) != '\0') && (*(char *)((long)param_2 + 0x1b9) == '\0')
            ) && ((uVar3 = FUN_02de04f0(param_2,0), (uVar3 & 1) == 0 &&
                  (((char)param_2[0x4b] == '\0' &&
                   (uVar3 = (**(code **)(*param_1 + 0x628))
                                      (param_1,param_2,*(undefined8 *)(*param_1 + 0x630)),
                   (uVar3 & 1) == 0)))))) {
          return 0;
        }
      }
      else {
        if (param_2[0x41] == 0) goto LAB_02e29124;
        if (*(int *)(param_2[0x41] + 0xc4) == 1) {
          return 0;
        }
      }
      uVar3 = FUN_02de0060(param_2,0);
      if ((uVar3 & 1) == 0) {
        return 1;
      }
      lVar6 = FUN_02ddffe4(param_2,0);
      if (lVar6 == 0) goto LAB_02e29124;
      uVar5 = *(undefined8 *)(lVar6 + 0x1e8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar3 = FUN_03923030(uVar5,0);
      if ((uVar3 & 1) != 0) {
        lVar6 = FUN_02ddffe4(param_2,0);
        if ((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0x1e8), plVar4 == (long *)0x0))
        goto LAB_02e29124;
        uVar3 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


