/*
FUNCTION_NAME: FUN_01c1d9a4
ENTRY_POINT: 01c1d9a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


undefined8 FUN_01c1d9a4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_03fed460 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_ct_<>c_a__);
    DAT_03fed460 = 1;
  }
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 == 0) goto LAB_01c1dbc8;
    puVar5 = (undefined8 *)(lVar4 + 0x70);
    uVar6 = *puVar5;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x78);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar6,0);
      if ((uVar2 & 1) != 0) {
        FUN_01c1d280(lVar4,0);
        goto LAB_01c1da5c;
      }
    }
    uVar6 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_01c1ca3c(lVar4,0);
      if ((lVar3 == 0) || (lVar3 = FUN_0391c27c(lVar3,0), lVar3 == 0)) goto LAB_01c1dbc8;
      lVar3 = FUN_0392a75c(lVar3,*(undefined8 *)Method_ct_<>c_a__,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar2 = FUN_03923030(lVar3,0);
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) goto LAB_01c1dbc8;
        uVar6 = FUN_0391c2b8(lVar3,0);
        *puVar5 = uVar6;
        thunk_FUN_01b4f09c(puVar5,uVar6);
      }
    }
    puVar5 = (undefined8 *)(lVar4 + 0x78);
    uVar6 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_01c1c76c(lVar4,0);
      if ((lVar4 == 0) || (lVar4 = FUN_0391c27c(lVar4,0), lVar4 == 0)) {
LAB_01c1dbc8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = FUN_0392a75c(lVar4,*(undefined8 *)Method_ct_<>c_a__,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar2 = FUN_03923030(lVar4,0);
      if ((uVar2 & 1) != 0) {
        if (lVar4 == 0) goto LAB_01c1dbc8;
        uVar6 = FUN_0391c2b8(lVar4,0);
        *puVar5 = uVar6;
        thunk_FUN_01b4f09c(puVar5,uVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
LAB_01c1da5c:
    uVar6 = 0;
  }
  return uVar6;
}


