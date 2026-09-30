/*
FUNCTION_NAME: FUN_02e0f908
ENTRY_POINT: 02e0f908
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_02e0f908(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  
  if ((DAT_03ff010c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff010c = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x99) == '\0') {
    cVar6 = *(char *)(param_1 + 0x9b);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar5,0);
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x9a) == '\0')) {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      cVar6 = *(char *)(param_1 + 0x9c);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar2,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    FUN_02e0feb8(param_1,uVar2);
    FUN_02e0ff68(param_1,uVar2);
    if (cVar6 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(uVar2,0);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x58);
        if ((lVar3 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
          FUN_039282dc(*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),
                       *(undefined4 *)(lVar3 + 0x18),*(long *)(param_1 + 0x40),0);
          lVar3 = *(long *)(param_1 + 0x58);
          if ((lVar3 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
            FUN_03929060(*(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),
                         *(undefined4 *)(lVar3 + 0x24),*(undefined4 *)(lVar3 + 0x28),
                         *(long *)(param_1 + 0x40),0);
            return;
          }
        }
        goto LAB_02e0faa0;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_02e0faa0;
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar5 = 1;
      goto LAB_02e0f980;
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_02e0faa0;
    uVar2 = FUN_02e194f4(*(long *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_02e0faa0;
    System_Security_Cryptography_DES__IsWeakKey
              (*(undefined4 *)(param_1 + 0x24),uVar2,*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48));
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
LAB_02e0faa0:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = 0;
LAB_02e0f980:
  FUN_02e0fe10(lVar3,uVar2,uVar5);
  return;
}


