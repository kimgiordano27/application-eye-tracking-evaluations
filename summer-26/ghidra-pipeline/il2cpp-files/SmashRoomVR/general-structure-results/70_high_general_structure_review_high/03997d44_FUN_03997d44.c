/*
FUNCTION_NAME: FUN_03997d44
ENTRY_POINT: 03997d44
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


void FUN_03997d44(ulong param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = param_1;
  if ((DAT_03ffc641 & 1) == 0) {
    uVar2 = thunk_FUN_01ad9084(
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
    DAT_03ffc641 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == 0) goto LAB_03997e24;
      lVar4 = FUN_039986c0(lVar4,param_2);
      uVar2 = 0;
      if (lVar4 != 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x68) + 0x68);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(lVar4,0,0);
      uVar2 = 0;
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (lVar4 != 0) {
        FUN_039986c0(lVar4,param_2);
        return;
      }
    }
  }
LAB_03997e24:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178(uVar2);
}


