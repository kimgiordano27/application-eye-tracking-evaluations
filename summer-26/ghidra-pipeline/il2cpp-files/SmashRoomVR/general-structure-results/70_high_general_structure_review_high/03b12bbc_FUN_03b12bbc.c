/*
FUNCTION_NAME: FUN_03b12bbc
ENTRY_POINT: 03b12bbc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_12
*/


void FUN_03b12bbc(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ffdaf2 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdaf2 = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x148) != 0) {
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
    puVar1 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
    if (((uVar2 & 1) != 0) && ((int)param_1[5] != 0)) {
      if (*(int *)(*(long *)
                    Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03b26f4c(0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar2 = FUN_0391f968(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar4 = FUN_03b26f4c(0);
        uVar3 = FUN_0391c2b8(param_1,0);
        if (lVar4 == 0) goto LAB_03b12ce8;
        FUN_03b25a30(lVar4,uVar3,param_2,0);
      }
    }
    *(undefined1 *)((long)param_1 + 0xf1) = 1;
    FUN_03b18aa0(param_1);
    return;
  }
LAB_03b12ce8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


