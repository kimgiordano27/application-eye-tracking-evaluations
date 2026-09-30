/*
FUNCTION_NAME: FUN_02e4e994
ENTRY_POINT: 02e4e994
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


void FUN_02e4e994(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_03ff030d & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff030d = 1;
  }
  if ((*(char *)(param_3 + 0x78) != '\0') &&
     (uVar2 = FUN_0394f7a8(0,0),
     puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
     (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_0394fadc(0);
        if (*(long *)(param_3 + 0x40) == 0) {
LAB_02e4eab4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar2 = FUN_02e4eab8(*(undefined8 *)(*(long *)(param_3 + 0x40) + 0x40));
        if ((uVar2 & 1) == 0) {
          if (*(long *)(param_3 + 0x20) == 0) goto LAB_02e4eab4;
          FUN_01e8a9f8(*(long *)(param_3 + 0x20),
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__);
          uVar2 = FUN_02e4eab8(uVar3,param_2);
          if ((uVar2 & 1) == 0) {
            FUN_02e4df68(param_3,0);
            return;
          }
        }
      }
    }
  }
  return;
}


