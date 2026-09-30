/*
FUNCTION_NAME: FUN_01c65038
ENTRY_POINT: 01c65038
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


void FUN_01c65038(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_03fed6cb & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed6cb = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_5 + 0x3c) != '\0') {
    uVar5 = *(undefined8 *)(param_5 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        lVar6 = *(long *)(param_5 + 0x20);
        if (lVar6 == 0) goto LAB_01c653b4;
        if (*(char *)(lVar6 + 0x20) != '\0') {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_0391f968(lVar6,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(param_5 + 0x20) != 0) {
              if (*(char *)(*(long *)(param_5 + 0x20) + 0x20) == '\0') {
                return;
              }
              if (*(char *)(param_5 + 0xcc) == '\0') {
                if (*(long *)(param_5 + 0x40) != 0) {
                  lVar6 = FUN_0391c27c(*(long *)(param_5 + 0x40),0);
                  if ((*(long *)(param_5 + 0x40) != 0) &&
                     (lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x40),0), lVar3 != 0)) {
                    uVar5 = FUN_03928fd8(lVar3,0);
                    if (DAT_03fed256 == '\0') {
                      thunk_FUN_01ad9084(
                                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                        );
                      DAT_03fed256 = '\x01';
                    }
                    puVar4 = *(undefined4 **)
                              (*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              + 0xb8);
                    uVar7 = *puVar4;
                    uVar8 = puVar4[1];
                    uVar9 = puVar4[2];
                    uVar10 = puVar4[3];
                    FUN_03925cf4(0);
                    FUN_039142e8(uVar5,param_2,param_3,param_4,uVar7,uVar8,uVar9,uVar10,0);
                    if (lVar6 != 0) {
                      FUN_03929060(lVar6,0);
                      return;
                    }
                  }
                }
              }
              else {
                uVar5 = *(undefined8 *)(param_5 + 0x80);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar2 = FUN_0391f968(uVar5,0,0);
                if (*(long *)(param_5 + 0x40) != 0) {
                  lVar6 = FUN_0391c27c(*(long *)(param_5 + 0x40),0);
                  if ((uVar2 & 1) == 0) {
                    if ((*(long *)(param_5 + 0x40) == 0) ||
                       (lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x40),0), lVar3 == 0))
                    goto LAB_01c653b4;
                    uVar5 = FUN_03928fd8(lVar3,0);
                    if (DAT_03fed256 == '\0') {
                      thunk_FUN_01ad9084(
                                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                        );
                      DAT_03fed256 = '\x01';
                    }
                    puVar4 = *(undefined4 **)
                              (*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              + 0xb8);
                    uVar7 = *puVar4;
                    uVar8 = puVar4[1];
                    uVar9 = puVar4[2];
                    uVar10 = puVar4[3];
                    FUN_03925cf4(0);
                    FUN_039142e8(uVar5,param_2,param_3,param_4,uVar7,uVar8,uVar9,uVar10,0);
                    if (lVar6 == 0) goto LAB_01c653b4;
                    FUN_03929060(lVar6,0);
                  }
                  else {
                    if (((*(long *)(param_5 + 0x80) == 0) ||
                        (lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x80),0), lVar3 == 0)) ||
                       (FUN_039274a0(lVar3,0), lVar6 == 0)) goto LAB_01c653b4;
                    FUN_03928f54(lVar6,0);
                  }
                  if ((*(long *)(param_5 + 0x40) != 0) &&
                     (lVar6 = FUN_0391c27c(*(long *)(param_5 + 0x40),0), lVar6 != 0)) {
                    uVar5 = FUN_03928fa8(lVar6,0);
                    if ((*(long *)(param_5 + 0x40) != 0) &&
                       (lVar6 = FUN_0391c27c(*(long *)(param_5 + 0x40),0), lVar6 != 0)) {
                      FUN_03929030(uVar5,param_2,0,lVar6,0);
                      return;
                    }
                  }
                }
              }
            }
LAB_01c653b4:
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
        }
      }
    }
  }
  return;
}


