/*
FUNCTION_NAME: FUN_03b1b8f8
ENTRY_POINT: 03b1b8f8
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


undefined8 FUN_03b1b8f8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03ffdb0f & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdb0f = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0xd8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar3 == 0)) goto LAB_03b1ba0c;
      uVar4 = FUN_039a16a4(lVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar2 = FUN_0391f968(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (((*(long *)(param_1 + 0xd8) == 0) ||
            (lVar3 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar3 == 0)) ||
           (lVar3 = FUN_039a16a4(lVar3,0), lVar3 == 0)) goto LAB_03b1ba0c;
        uVar4 = FUN_038ff4d4(lVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar2 = FUN_0391f968(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (((*(long *)(param_1 + 0xd8) == 0) ||
              (lVar3 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar3 == 0)) ||
             (lVar3 = FUN_039a16a4(lVar3,0), lVar3 == 0)) goto LAB_03b1ba0c;
          goto LAB_03b1ba40;
        }
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (DAT_03ffdb4b == '\0') {
        thunk_FUN_01ad9084(PTR_DAT_03d9d588);
        DAT_03ffdb4b = '\x01';
      }
      puVar1 = PTR_DAT_03d9d588;
      lVar3 = *(long *)PTR_DAT_03d9d588;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar3 = *(long *)puVar1;
      }
      return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
LAB_03b1ba40:
      uVar4 = FUN_038ff4d4(lVar3,0);
      return uVar4;
    }
  }
LAB_03b1ba0c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


