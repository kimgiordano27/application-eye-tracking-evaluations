/*
FUNCTION_NAME: FUN_02e2dc84
ENTRY_POINT: 02e2dc84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_02e2dc84(long *param_1,long param_2,int param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ff01cf & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(StringLiteral_3966);
    thunk_FUN_01ad9084(StringLiteral_4725);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01cf = 1;
  }
  if (param_2 != 0) {
    uVar2 = FUN_02ddfc74(param_2,0);
    if ((uVar2 & 1) != 0) {
      FUN_02de31b4(param_2,0);
    }
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(param_4,0);
    if ((uVar2 & 1) == 0) {
      param_4 = FUN_02de1c7c(param_2,param_1,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(param_4,0);
    if ((uVar2 & 1) != 0) {
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = FUN_0391c27c(param_4,0);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x250));
      *(undefined1 *)(param_1 + 0x7a) = 1;
      FUN_02e24f44(param_1,param_2,param_4,1,1);
      (**(code **)(*param_1 + 0x3c8))(param_1,param_1,param_2,1,*(undefined8 *)(*param_1 + 0x3d0));
      if (param_3 == 1) {
        *(undefined1 *)((long)param_1 + 0x1e9) = 1;
      }
      else if (param_3 == 2) {
        *(undefined1 *)((long)param_1 + 0x2f1) = 0;
      }
      lVar4 = param_1[0x29];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar4,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__
                                  );
        FUN_02fd7524(uVar3,param_1,*(undefined8 *)StringLiteral_4725,0);
        if (*(int *)(*(long *)StringLiteral_3966 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_02dcd994(param_1,uVar3,0);
      }
    }
    *(undefined1 *)(param_1 + 0x7a) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


