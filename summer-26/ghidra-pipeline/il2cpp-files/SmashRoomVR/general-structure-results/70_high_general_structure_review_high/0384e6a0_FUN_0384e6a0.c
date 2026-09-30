/*
FUNCTION_NAME: FUN_0384e6a0
ENTRY_POINT: 0384e6a0
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


void FUN_0384e6a0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_03ff85e3 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da71e0);
    thunk_FUN_01ad9084(PTR_DAT_03da71e8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff85e3 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0384e804;
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x38);
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar4,0,0);
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x60);
    uVar6 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar6,0,0);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) {
      if (lVar4 == 0) {
LAB_0384e804:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar2 = FUN_01ed84c4(lVar4,puVar5,*(undefined8 *)PTR_DAT_03da71e8);
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar3 == 0)) goto LAB_0384e804;
        uVar6 = FUN_0391c2b8(lVar3,0);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar3);
        }
        uVar2 = FUN_0391f968(lVar4,uVar6,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar4 == 0)) goto LAB_0384e804;
          FUN_01e8b8bc(lVar4,puVar5,*(undefined8 *)PTR_DAT_03da71e0);
        }
      }
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
  }
  return;
}


