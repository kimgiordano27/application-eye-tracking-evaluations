/*
FUNCTION_NAME: FUN_031a9124
ENTRY_POINT: 031a9124
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


void FUN_031a9124(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff2475 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d81700);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d81708);
    DAT_03ff2475 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_031a925c;
    uVar4 = FUN_038ea7cc(*(long *)(param_1 + 0x20),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar3 = FUN_038ea7cc(*(long *)(param_1 + 0x20),0), lVar3 == 0)) goto LAB_031a925c;
      uVar4 = FUN_039230bc(lVar3,0);
      uVar2 = thunk_FUN_02ee6388(uVar4,*(undefined8 *)PTR_DAT_03d81708,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_031a925c;
        FUN_038eaa84(*(long *)(param_1 + 0x20),0);
      }
    }
  }
  lVar3 = FUN_01e8a9f8(param_1,*(undefined8 *)PTR_DAT_03d81700);
  if (lVar3 != 0) {
    FUN_031a8020();
    FUN_038eb688(*(undefined8 *)(param_1 + 0x40),0);
    return;
  }
LAB_031a925c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


