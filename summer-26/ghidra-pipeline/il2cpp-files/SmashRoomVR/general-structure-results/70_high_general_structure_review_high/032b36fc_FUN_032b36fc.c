/*
FUNCTION_NAME: FUN_032b36fc
ENTRY_POINT: 032b36fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_9
*/


undefined8 FUN_032b36fc(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((DAT_03ff587d & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86c48);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff587d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = FUN_03b26f4c(0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar3 == 0) goto LAB_032b3810;
  plVar6 = *(long **)(lVar3 + 0x28);
  if (plVar6 == (long *)0x0) {
LAB_032b3794:
    plVar6 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d86c48 + 0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_032b3794;
    if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d86c48) {
      plVar6 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(plVar6,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (plVar6 != (long *)0x0) {
    lVar3 = plVar6[0x13];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(lVar3,param_1,0);
    return uVar5;
  }
LAB_032b3810:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


