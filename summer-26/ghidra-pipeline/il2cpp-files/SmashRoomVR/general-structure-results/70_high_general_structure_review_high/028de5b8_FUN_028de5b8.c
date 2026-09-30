/*
FUNCTION_NAME: FUN_028de5b8
ENTRY_POINT: 028de5b8
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


void FUN_028de5b8(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong __n;
  undefined1 *__dest;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  char local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_03fef5be & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fef5be = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
  uVar11 = *(uint *)(lVar4 + 0xfc);
  __n = (ulong)uVar11;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ae9e74();
    uVar11 = *(uint *)(lVar4 + 0xfc);
  }
  __dest = auStack_70 + -((ulong)(uVar11 + 0x10) + 0xf & 0x1fffffff0) + -(__n + 0xf & 0x1fffffff0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03923030(param_2,0);
  if ((uVar5 & 1) != 0) {
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
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(param_2,0,0);
    if ((uVar5 & 1) == 0) {
      pvVar6 = (void *)thunk_FUN_01ac78a4(param_2,*(undefined8 *)
                                                   (**(long **)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                   0x80));
      memcpy(__dest,pvVar6,__n);
      plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)
                                           (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8),__dest)
      ;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(long *)(*plVar7 + 0x40) !=
          *(long *)(*(long *)
                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                   + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c();
      }
      piVar8 = (int *)thunk_FUN_01afac30();
      if (*piVar8 != 0) {
        pvVar6 = (void *)thunk_FUN_01ac78a4(param_1,*(undefined8 *)
                                                     (*(long *)(*(long *)(*(long *)(param_3 + 0x20)
                                                                         + 0xc0) + 0x10) + 0x80));
        memcpy(__dest,pvVar6,__n);
        uVar9 = thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8),
                                   __dest);
        plVar7 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
        lVar4 = plVar7[1];
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ae9e74(lVar4);
          plVar7 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
        }
        lVar12 = plVar7[3];
        uVar10 = thunk_FUN_01ac78a4(param_2,*(undefined8 *)(*plVar7 + 0x80));
        local_68 = uVar9;
        FUN_01b48960(lVar4,lVar12,auStack_70 + -((ulong)(uVar11 + 0x10) + 0xf & 0x1fffffff0),uVar10,
                     &local_68,local_5c);
        bVar3 = local_5c[0] != '\0';
        goto LAB_028de81c;
      }
    }
  }
  bVar3 = false;
LAB_028de81c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


