/*
FUNCTION_NAME: FUN_028de3f8
ENTRY_POINT: 028de3f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint FUN_028de3f8(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long local_50 [2];
  undefined4 local_40;
  undefined4 local_34;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fef5bd & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fef5bd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(param_2,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74();
    }
    if (param_2 != (long *)0x0) {
      if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar4 + 0x130)) {
        param_2 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
               lVar4) {
        param_2 = (long *)0x0;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(param_2,0,0);
    if ((uVar3 & 1) == 0) {
      if (param_2 == (long *)0x0) {
LAB_028de5a8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      local_50[0] = CONCAT44(local_50[0]._4_4_,(int)param_2[0xf]);
      plVar5 = (long *)thunk_FUN_01afa70c(*(undefined8 *)
                                           (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8),
                                          local_50);
      if (plVar5 == (long *)0x0) goto LAB_028de5a8;
      if (*(long *)(*plVar5 + 0x40) !=
          *(long *)(*(long *)
                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                   + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c();
      }
      piVar6 = (int *)thunk_FUN_01afac30();
      if (*piVar6 != 0) {
        local_34 = *(undefined4 *)(param_1 + 0x20);
        uVar7 = thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8),
                                   &local_34);
        lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ae9e74(lVar4);
        }
        local_50[1] = 0xffffffffffffffff;
        local_40 = (undefined4)param_2[0xf];
        local_50[0] = lVar4;
        uVar2 = FUN_0307561c(local_50,uVar7,0);
        goto LAB_028de590;
      }
    }
  }
  uVar2 = 0;
LAB_028de590:
  return uVar2 & 1;
}


