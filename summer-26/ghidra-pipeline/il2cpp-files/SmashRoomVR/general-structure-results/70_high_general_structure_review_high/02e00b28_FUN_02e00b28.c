/*
FUNCTION_NAME: FUN_02e00b28
ENTRY_POINT: 02e00b28
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


void FUN_02e00b28(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff00a9 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(StringLiteral_3966);
    thunk_FUN_01ad9084(StringLiteral_4494);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff00a9 = 1;
  }
  iVar1 = FUN_02e00a90(param_1);
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_02e00ce4;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x148);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__
                                );
      FUN_02fd7524(uVar4,param_1,*(undefined8 *)StringLiteral_4494,0);
      if (*(int *)(*(long *)StringLiteral_3966 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_02dcdc80(param_1,uVar4,0);
      return;
    }
  }
  else if (iVar1 == 1) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_02e00ce4;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x98);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0xa0);
      if (plVar3 == (long *)0x0) goto LAB_02e00ce4;
      (**(code **)(*plVar3 + 0x328))(plVar3,*(undefined8 *)(*plVar3 + 0x330));
    }
  }
  else if (iVar1 == 0) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_02e00ce4;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x98);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0392e738(*(long *)(param_1 + 0x78),0);
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN_0395a82c(*(long *)(param_1 + 0x90),0,0);
      return;
    }
  }
LAB_02e00ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


