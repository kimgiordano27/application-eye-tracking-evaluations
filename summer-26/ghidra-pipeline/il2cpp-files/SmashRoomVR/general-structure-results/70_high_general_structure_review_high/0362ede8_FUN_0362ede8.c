/*
FUNCTION_NAME: FUN_0362ede8
ENTRY_POINT: 0362ede8
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


undefined8 FUN_0362ede8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  long local_18;
  
  if ((DAT_03ff724f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff724f = 1;
  }
  local_18 = 0;
  local_28 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_01e8b8bc(param_1,&local_18,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
                        );
    if ((uVar1 & 1) != 0) {
      if (local_18 == 0) goto LAB_0362eed8;
      local_28 = FUN_039522f8(local_18,0);
      uVar2 = FUN_039527d8(&local_28,0);
      uVar3 = FUN_0362eedc(param_1);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar1 = FUN_03922f24(uVar2,uVar3,0);
      if ((uVar1 & 1) != 0) {
        FUN_03952850(&local_28,0,0);
        return 1;
      }
    }
    return 0;
  }
LAB_0362eed8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


