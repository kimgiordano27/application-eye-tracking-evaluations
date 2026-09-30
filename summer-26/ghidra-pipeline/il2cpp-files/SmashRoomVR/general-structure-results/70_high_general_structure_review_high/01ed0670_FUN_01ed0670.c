/*
FUNCTION_NAME: FUN_01ed0670
ENTRY_POINT: 01ed0670
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


undefined8 FUN_01ed0670(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01ae9ed0(param_2);
    }
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
LAB_01ed079c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = FUN_0391fab4(param_1,0);
    puVar2 = StringLiteral_362;
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(lVar4,0,0);
      if ((uVar3 & 1) == 0) break;
      if (lVar4 == 0) goto LAB_01ed079c;
      uVar5 = FUN_0391c2b8(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar3 = FUN_01ecf9a8(uVar5,**(undefined8 **)(param_2 + 0x38));
      if ((uVar3 & 1) != 0) {
        uVar5 = FUN_0391c2b8(lVar4,0);
        return uVar5;
      }
      lVar4 = FUN_03928c2c(lVar4,0);
    }
  }
  return 0;
}


