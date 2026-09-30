/*
FUNCTION_NAME: FUN_0313498c
ENTRY_POINT: 0313498c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_11;telemetry_or_network_hits_3;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_0313498c(undefined8 param_1,long param_2,ulong param_3,ulong param_4,byte param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_03ff1ead & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f738);
    thunk_FUN_01ad9084(PTR_DAT_03d7f688);
    DAT_03ff1ead = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
OVRManager__add_SpaceSetComponentStatusComplete:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  cVar1 = *(char *)(*(long *)(param_2 + 0x10) + 0x145);
  if ((param_3 & 1) == 0) {
    if (((param_4 & 1) != 0) && (*(char *)(param_2 + 0x18) == '\0')) {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0391f968(uVar5,0,0);
      uVar5 = 0;
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_2 + 0x10) == 0) goto OVRManager__add_SpaceSetComponentStatusComplete;
        uVar3 = *(undefined8 *)(param_2 + 0x38);
        uVar5 = FUN_03b259f8(*(long *)(param_2 + 0x10),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar4 = FUN_03922f24(uVar3,uVar5,0);
        uVar5 = 0;
        if ((uVar4 & 1) != 0) {
          uVar5 = *(undefined8 *)(param_2 + 0x38);
        }
      }
      lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_03d7f688 + 0xb8) + 8);
      if (lVar7 != 0) {
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f738);
        goto LAB_03134a40;
      }
    }
  }
  else {
    lVar7 = **(long **)(*(long *)PTR_DAT_03d7f688 + 0xb8);
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f738);
LAB_03134a40:
      FUN_031320a4(uVar3,uVar6,uVar5,cVar1 != '\0' | param_5 & 1);
                    /* WARNING: Could not recover jumptable at 0x03134a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar3,*(undefined8 *)(lVar7 + 0x28))
      ;
      return;
    }
  }
  return;
}


