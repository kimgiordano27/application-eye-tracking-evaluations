/*
FUNCTION_NAME: FUN_02e6fb58
ENTRY_POINT: 02e6fb58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


uint FUN_02e6fb58(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff044e & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff044e = 1;
  }
  lVar2 = System_Runtime_Serialization_Formatters_Binary_SerStack___ctor(param_1);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = System_Runtime_Serialization_Formatters_Binary_SerStack___ctor(param_1);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) goto LAB_02e6fc00;
      uVar1 = FUN_02ee6cf0(*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x18),0);
      uVar1 = uVar1 ^ 1;
    }
    return uVar1 & 1;
  }
LAB_02e6fc00:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


