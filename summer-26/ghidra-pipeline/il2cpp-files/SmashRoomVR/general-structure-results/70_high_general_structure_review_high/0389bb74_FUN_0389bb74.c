/*
FUNCTION_NAME: FUN_0389bb74
ENTRY_POINT: 0389bb74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


undefined8 FUN_0389bb74(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_28;
  long local_18;
  
  local_18 = param_1;
  if ((DAT_03ff8908 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da8bc0);
    thunk_FUN_01ad9084(PTR_DAT_03da8bc8);
    thunk_FUN_01ad9084(PTR_DAT_03da8bd0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da8bd8);
    DAT_03ff8908 = 1;
  }
  local_28 = &local_18;
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_0391f968(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f336c(*(undefined8 *)PTR_DAT_03da8bd8,0);
      return 0;
    }
    if (*(long *)(lVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_02b5a400(&local_68,*(long *)(lVar2 + 0x20),*(undefined8 *)PTR_DAT_03da8bd0);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    *(undefined8 *)(local_18 + 0x38) = local_58;
    *(undefined8 *)(local_18 + 0x30) = uStack_60;
    *(undefined8 *)(local_18 + 0x28) = local_68;
    thunk_FUN_01b4f09c(local_18 + 0x28,0);
    param_1 = local_18;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  uVar1 = FUN_02739b98(param_1 + 0x28,*(undefined8 *)PTR_DAT_03da8bc0);
  if ((uVar1 & 1) == 0) {
    FUN_0389be60();
    *(undefined8 *)(local_18 + 0x28) = 0;
    *(undefined8 *)(local_18 + 0x30) = 0;
    *(undefined8 *)(local_18 + 0x38) = 0;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x30) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(lVar2 + 0x30),0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar4 = *(long **)(local_18 + 0x38);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar1 = FUN_0391f968(plVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar1 = FUN_0389b27c(uVar1,plVar4);
    if ((uVar1 & 1) != 0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar1 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
      if ((uVar1 & 1) != 0) {
        *(undefined8 *)(lVar2 + 0x30) = plVar4;
        thunk_FUN_01b4f09c((undefined8 *)(lVar2 + 0x30),plVar4);
        *(undefined1 *)(lVar2 + 0x18) = 1;
        FUN_0389be60(local_18);
        return 0;
      }
    }
  }
  *(undefined8 *)(local_18 + 0x18) = 0;
  thunk_FUN_01b4f09c((undefined8 *)(local_18 + 0x18),0);
  *(undefined4 *)(local_18 + 0x10) = 1;
  return 1;
}


