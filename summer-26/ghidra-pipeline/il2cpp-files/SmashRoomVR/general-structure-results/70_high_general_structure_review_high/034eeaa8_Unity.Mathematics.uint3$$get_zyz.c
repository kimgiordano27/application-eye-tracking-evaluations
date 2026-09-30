/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_zyz
ENTRY_POINT: 034eeaa8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void Unity_Mathematics_uint3__get_zyz(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  if ((DAT_03ff6ccb & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d94ed8);
    DAT_03ff6ccb = 1;
  }
  uVar1 = Unity_Mathematics_uint3__get_zxyy(param_1,0xffffffff);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_03442384(&local_30,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_03d94ed8 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)PTR_DAT_03d94ed8);
    }
    uVar3 = FUN_034e9334(uVar4);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar1 = FUN_0391f968(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      FUN_034ee9ec(param_1,0xffffffff,0xffffffff,0,uVar4);
    }
  }
  return;
}


