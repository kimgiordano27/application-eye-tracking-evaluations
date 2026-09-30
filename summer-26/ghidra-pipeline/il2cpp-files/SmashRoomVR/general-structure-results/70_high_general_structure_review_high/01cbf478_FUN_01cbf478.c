/*
FUNCTION_NAME: FUN_01cbf478
ENTRY_POINT: 01cbf478
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


void FUN_01cbf478(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_03feda6c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda6c = 1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_01cb8664(param_2);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_01cbf544;
      uVar2 = FUN_0391c2b8(*(long *)(param_2 + 0x10),0);
      uVar3 = FUN_0391c2b8(param_1,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar1 = FUN_03922f24(uVar2,uVar3,0);
      if ((uVar1 & 1) != 0) {
        FUN_01cbf548(param_1,param_2);
        FUN_01cbfd04(param_1,param_2);
        return;
      }
    }
    return;
  }
LAB_01cbf544:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


