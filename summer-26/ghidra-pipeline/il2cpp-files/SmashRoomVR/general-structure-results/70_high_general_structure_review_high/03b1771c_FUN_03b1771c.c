/*
FUNCTION_NAME: FUN_03b1771c
ENTRY_POINT: 03b1771c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_10;telemetry_or_network_hits_13
*/


void FUN_03b1771c(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_03dadd00;
  if ((DAT_03ffdae3 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03dadd00);
    DAT_03ffdae3 = 1;
  }
  uVar3 = FUN_01f3feec((char *)(param_1 + 0xd8),param_2 & 1,*(undefined8 *)puVar2);
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd8) == '\0') {
    if (*(int *)(*(long *)
                  Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03b26f4c(0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = FUN_03b26f4c(0);
      if (lVar5 == 0) {
LAB_03b17888:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x40);
      uVar4 = FUN_0391c2b8(param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar3 = FUN_03922f24(uVar6,uVar4,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_03b26f4c(0);
        if (lVar5 == 0) goto LAB_03b17888;
        FUN_03b22be0(lVar5,0,0);
      }
    }
  }
  FUN_03b1740c(param_1);
  return;
}


