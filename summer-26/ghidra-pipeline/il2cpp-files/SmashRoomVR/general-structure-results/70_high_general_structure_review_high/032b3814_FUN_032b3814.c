/*
FUNCTION_NAME: FUN_032b3814
ENTRY_POINT: 032b3814
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_8
*/


void FUN_032b3814(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_03ff587e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86c48);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff587e = 1;
  }
  uVar2 = FUN_032ee7a8(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)
                Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = FUN_03b26f4c(0);
  if (lVar3 == 0) goto LAB_032b3928;
  plVar4 = *(long **)(lVar3 + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_032b38b8:
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d86c48 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_032b38b8;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d86c48) {
      plVar4 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(plVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (plVar4 != (long *)0x0) {
    plVar4[0x13] = param_1;
    thunk_FUN_01b4f09c(plVar4 + 0x13,param_1);
    return;
  }
LAB_032b3928:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


