/*
FUNCTION_NAME: FUN_0369c634
ENTRY_POINT: 0369c634
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


undefined8 FUN_0369c634(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_03ff7469 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9a8f0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a8d0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a8f8);
    thunk_FUN_01ad9084(PTR_DAT_03d7f500);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4f8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9c708);
    thunk_FUN_01ad9084(PTR_DAT_03d9c710);
    DAT_03ff7469 = 1;
  }
  if (param_2 == 1) {
    if (param_1 != 0) {
      uVar2 = FUN_0362f0b0(param_1,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_03922f24(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      lVar4 = FUN_0362f0b0(param_1,0);
      if (lVar4 != 0) {
        uVar2 = FUN_03902890(lVar4,0);
        return uVar2;
      }
    }
  }
  else if ((param_2 & 0xfffffffe) == 2) {
    if (param_1 != 0) {
      if (param_2 == 2) {
        uVar2 = 8;
      }
      else {
        uVar2 = 0x10;
      }
      uVar3 = FUN_0362d69c(param_1,uVar2,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f4f8);
      FUN_02bd8f38(uVar2,*(undefined8 *)PTR_DAT_03d7f500);
      FUN_0362d8d4(param_1,param_2,uVar2,0);
      puVar1 = PTR_DAT_03d9c710;
      lVar4 = *(long *)PTR_DAT_03d9c710;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar1;
        }
        uVar7 = **(undefined8 **)(lVar4 + 0xb8);
        lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a8f8);
        FUN_028baffc(lVar6,uVar7,*(undefined8 *)PTR_DAT_03d9c708,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar5 = lVar6;
        thunk_FUN_01b4f09c(plVar5,lVar6);
      }
      uVar2 = FUN_01ebd9cc(uVar2,lVar6,*(undefined8 *)PTR_DAT_03d9a8f0);
      uVar2 = FUN_01ec4830(uVar2,*(undefined8 *)PTR_DAT_03d9a8d0);
      return uVar2;
    }
  }
  else if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


