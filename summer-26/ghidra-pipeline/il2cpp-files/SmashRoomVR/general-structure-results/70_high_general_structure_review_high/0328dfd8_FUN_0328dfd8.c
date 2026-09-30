/*
FUNCTION_NAME: FUN_0328dfd8
ENTRY_POINT: 0328dfd8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_0328dfd8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_03ff573a & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff573a = 1;
  }
  if (1 < *(int *)(param_1 + 0x24) - 1U) {
    FUN_0328cf98(param_1);
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    lVar4 = *(long *)(param_1 + 0x118);
    uVar2 = FUN_0391c2b8(*(long *)(param_1 + 0x110),0);
    if (lVar4 != 0) {
      uVar3 = FUN_03247708(lVar4,uVar2,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x110) == 0) goto LAB_0328e0e8;
        lVar4 = *(long *)(param_1 + 0x118);
        uVar2 = FUN_0391c2b8(*(long *)(param_1 + 0x110),0);
        if (lVar4 == 0) goto LAB_0328e0e8;
        FUN_03247340(lVar4,uVar2,0);
      }
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        uVar2 = FUN_0392013c(*(long *)(param_1 + 0xb8),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        FUN_03923a90(uVar2,0);
        return;
      }
    }
  }
LAB_0328e0e8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


