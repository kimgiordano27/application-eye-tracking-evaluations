/*
FUNCTION_NAME: FUN_02f849ac
ENTRY_POINT: 02f849ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02f84d0c) */

undefined8 FUN_02f849ac(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint local_38;
  char local_34 [4];
  
  if ((DAT_03ff0dea & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    DAT_03ff0dea = 1;
  }
  iVar2 = FUN_02f84578(param_1,param_2);
  local_34[0] = '\0';
  FUN_030a2d7c(param_1,local_34,0);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  (**(code **)(*plVar4 + 0x308))
            (plVar4,*(long *)(param_1 + 0x20) + (long)iVar2,0,*(undefined8 *)(*plVar4 + 0x310));
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar3 = FUN_02fb270c(*(long *)(param_1 + 0x10),0);
  uVar8 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
    uVar7 = thunk_FUN_01ad9084(StringLiteral_9015);
    uVar7 = FUN_0308198c(uVar7,0);
    thunk_FUN_01ad9084(StringLiteral_8793);
    uVar9 = thunk_FUN_01afaadc();
    FUN_02fd9a00(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01ad9084(StringLiteral_9023);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar9,uVar7);
  }
  plVar4 = *(long **)(param_1 + 0x70);
  local_38 = param_2;
  if (plVar4 == (long *)0x0) {
    uVar9 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,uVar8);
    plVar4 = *(long **)(param_1 + 0x10);
    uVar10 = uVar8;
    uVar1 = uVar3;
    while (0 < (int)uVar1) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar2 = (**(code **)(*plVar4 + 0x2b8))
                        (plVar4,uVar9,uVar3 - (int)uVar10,uVar10,*(undefined8 *)(*plVar4 + 0x2c0));
      if (iVar2 == 0) {
        uVar7 = thunk_FUN_01ad9084(
                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                  );
        plVar4 = (long *)FUN_01b47fd0(uVar7,1);
        uVar7 = thunk_FUN_01ad9084(
                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                  );
        lVar5 = thunk_FUN_01afa70c(uVar7,&local_38);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar7,0);
        }
        if ((int)plVar4[3] != 0) {
          plVar4[4] = lVar5;
          thunk_FUN_01b4f09c(plVar4 + 4,lVar5);
          uVar7 = thunk_FUN_01ad9084(StringLiteral_9024);
          uVar7 = FUN_030838c8(uVar7,plVar4,0);
          thunk_FUN_01ad9084(StringLiteral_8758);
          uVar9 = thunk_FUN_01afaadc();
          FUN_02f9db90(uVar9,uVar7,0);
          uVar7 = thunk_FUN_01ad9084(StringLiteral_9023);
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar9,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar4 = *(long **)(param_1 + 0x10);
      uVar1 = (int)uVar10 - iVar2;
      uVar10 = (ulong)uVar1;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    *param_3 = uVar3;
    if (-1 < (int)uVar3) {
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if ((long)(ulong)uVar3 < lVar5 - *(long *)(param_1 + 0x28)) {
        uVar7 = 0;
        iVar2 = 0x1e;
LAB_02f84c2c:
        if (local_34[0] != '\0') {
          thunk_FUN_01b18c7c(param_1,0);
        }
        if ((iVar2 == 0x1e) || (iVar2 == 0)) {
          plVar4 = (long *)FUN_02efff5c(0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar7 = (**(code **)(*plVar4 + 0x358))
                            (plVar4,uVar9,0,uVar8,*(undefined8 *)(*plVar4 + 0x360));
        }
        return uVar7;
      }
    }
    uVar7 = thunk_FUN_01ad9084(
                              Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                              );
    plVar4 = (long *)FUN_01b47fd0(uVar7,1);
    local_38 = *param_3;
    uVar7 = thunk_FUN_01ad9084(
                              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                              );
    lVar5 = thunk_FUN_01afa70c(uVar7,&local_38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      thunk_FUN_01b4f09c(plVar4 + 4,lVar5);
      uVar7 = thunk_FUN_01ad9084(StringLiteral_8981);
      uVar7 = FUN_030838c8(uVar7,plVar4,0);
      thunk_FUN_01ad9084(StringLiteral_6595);
      uVar9 = thunk_FUN_01afaadc();
      FUN_03029ab8(uVar9,uVar7,0);
      uVar7 = thunk_FUN_01ad9084(StringLiteral_9023);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
  if ((long)(lVar6 - uVar8) < lVar5) {
    uVar7 = thunk_FUN_01ad9084(
                              Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                              );
    plVar4 = (long *)FUN_01b47fd0(uVar7,1);
    uVar7 = thunk_FUN_01ad9084(
                              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                              );
    lVar5 = thunk_FUN_01afa70c(uVar7,&local_38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      thunk_FUN_01b4f09c(plVar4 + 4,lVar5);
      uVar7 = thunk_FUN_01ad9084(StringLiteral_9025);
      uVar7 = FUN_030838c8(uVar7,plVar4,0);
      thunk_FUN_01ad9084(StringLiteral_8793);
      uVar9 = thunk_FUN_01afaadc();
      FUN_02fd9a00(uVar9,uVar7,0);
      uVar7 = thunk_FUN_01ad9084(StringLiteral_9023);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = FUN_02fa67ac(*(long *)(param_1 + 0x70),0);
  uVar7 = FUN_02eeda88(0,uVar7,0,uVar3 >> 1,0);
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  (**(code **)(*plVar4 + 0x208))(plVar4,lVar5 + uVar8,*(undefined8 *)(*plVar4 + 0x210));
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
  *param_3 = uVar3;
  if (-1 < (int)uVar3) {
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
    if ((long)(ulong)uVar3 < lVar5 - *(long *)(param_1 + 0x28)) {
      uVar9 = 0;
      iVar2 = 0x14;
      goto LAB_02f84c2c;
    }
  }
  uVar7 = thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                            );
  plVar4 = (long *)FUN_01b47fd0(uVar7,1);
  local_38 = *param_3;
  uVar7 = thunk_FUN_01ad9084(
                            Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                            );
  lVar5 = thunk_FUN_01afa70c(uVar7,&local_38);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    thunk_FUN_01b4f09c(plVar4 + 4,lVar5);
    uVar7 = thunk_FUN_01ad9084(StringLiteral_8981);
    uVar7 = FUN_030838c8(uVar7,plVar4,0);
    thunk_FUN_01ad9084(StringLiteral_6595);
    uVar9 = thunk_FUN_01afaadc();
    FUN_03029ab8(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01ad9084(StringLiteral_9023);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar9,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


