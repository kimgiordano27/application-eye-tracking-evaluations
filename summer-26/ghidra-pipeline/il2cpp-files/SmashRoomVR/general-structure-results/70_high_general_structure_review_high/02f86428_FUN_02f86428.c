/*
FUNCTION_NAME: FUN_02f86428
ENTRY_POINT: 02f86428
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_02f86428(long param_1,int param_2,int *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_03ff0dee & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01ad9084(StringLiteral_2269);
    thunk_FUN_01ad9084(StringLiteral_725);
    thunk_FUN_01ad9084(StringLiteral_2250);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_2241);
    thunk_FUN_01ad9084(StringLiteral_9034);
    thunk_FUN_01ad9084(StringLiteral_2255);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_675);
    thunk_FUN_01ad9084(StringLiteral_2831);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Value__);
    thunk_FUN_01ad9084(StringLiteral_8973);
    DAT_03ff0dee = 1;
  }
  plVar14 = (long *)(param_1 + 0x10);
  plVar7 = (long *)*plVar14;
  if ((plVar7 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
     plVar7 == (long *)0x0)) {
LAB_02f86a7c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  (**(code **)(*plVar7 + 0x308))
            (plVar7,*(long *)(param_1 + 0x28) + (long)param_2,0,*(undefined8 *)(*plVar7 + 0x310));
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02f86a7c;
  iVar5 = FUN_02fb270c(*(long *)(param_1 + 0x10),0);
  *param_3 = iVar5;
  uVar13 = 0;
  switch(iVar5) {
  case 0:
    goto switchD_02f865ac_caseD_0;
  case 1:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar13 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
    goto LAB_02f86a20;
  case 2:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar3 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar3) & 0xffffffffffffff01;
    puVar11 = (undefined8 *)Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__;
    goto LAB_02f8688c;
  case 3:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar4 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    puVar11 = (undefined8 *)
              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
    ;
    break;
  case 4:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar3 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    puVar11 = (undefined8 *)
              Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__;
    goto LAB_02f86808;
  case 5:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar3 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
    puVar11 = (undefined8 *)StringLiteral_2255;
LAB_02f86808:
    uVar13 = *puVar11;
    local_48[0] = uVar3;
    goto LAB_02f868e8;
  case 6:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar4 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
    puVar11 = (undefined8 *)StringLiteral_2250;
    break;
  case 7:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar4 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    puVar11 = (undefined8 *)StringLiteral_2831;
    break;
  case 8:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar15 = (**(code **)(*plVar14 + 0x228))(plVar14,*(undefined8 *)(*plVar14 + 0x230));
    puVar11 = (undefined8 *)
              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    goto LAB_02f86834;
  case 9:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar15 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
    puVar11 = (undefined8 *)StringLiteral_2494;
LAB_02f86834:
    uVar13 = *puVar11;
    local_48._0_4_ = uVar15;
    goto LAB_02f868e8;
  case 10:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar13 = (**(code **)(*plVar14 + 0x248))(plVar14,*(undefined8 *)(*plVar14 + 0x250));
    puVar11 = (undefined8 *)StringLiteral_2241;
    goto LAB_02f86860;
  case 0xb:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar13 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    puVar11 = (undefined8 *)Method_System_Collections_SortedList_SortedListEnumerator_get_Value__;
    goto LAB_02f86860;
  case 0xc:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar15 = (**(code **)(*plVar14 + 0x268))(plVar14,*(undefined8 *)(*plVar14 + 0x270));
    local_48._0_4_ = uVar15;
    puVar11 = (undefined8 *)
              Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
    ;
    goto LAB_02f867e0;
  case 0xd:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    local_48._0_8_ = (**(code **)(*plVar14 + 0x278))(plVar14,*(undefined8 *)(*plVar14 + 0x280));
    puVar11 = (undefined8 *)StringLiteral_725;
LAB_02f867e0:
    uVar13 = *puVar11;
    goto LAB_02f868e8;
  case 0xe:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    local_48 = (**(code **)(*plVar14 + 0x288))(plVar14,*(undefined8 *)(*plVar14 + 0x290));
    puVar11 = (undefined8 *)StringLiteral_2269;
LAB_02f8688c:
    uVar13 = *puVar11;
    goto LAB_02f868e8;
  case 0xf:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar13 = (**(code **)(*plVar14 + 0x248))(plVar14,*(undefined8 *)(*plVar14 + 0x250));
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__ + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__);
    }
    uVar13 = FUN_03023988(uVar13,0);
    local_48._0_8_ = uVar13;
    uVar13 = *(undefined8 *)puVar2;
    goto LAB_02f868e8;
  case 0x10:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
    uVar13 = (**(code **)(*plVar14 + 0x248))(plVar14,*(undefined8 *)(*plVar14 + 0x250));
    puVar11 = (undefined8 *)StringLiteral_675;
LAB_02f86860:
    local_48._0_8_ = uVar13;
    uVar13 = *puVar11;
    goto LAB_02f868e8;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
switchD_02f865ac_caseD_11:
    uVar13 = thunk_FUN_01ad9084(StringLiteral_9027);
    uVar13 = FUN_0308198c(uVar13,0);
LAB_02f86a94:
    thunk_FUN_01ad9084(StringLiteral_8793);
    uVar10 = thunk_FUN_01afaadc();
    FUN_02fd9a00(uVar10,uVar13,0);
    uVar13 = thunk_FUN_01ad9084(StringLiteral_9035);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar10,uVar13);
  case 0x20:
    plVar7 = (long *)*plVar14;
    if (plVar7 == (long *)0x0) goto LAB_02f86a7c;
    uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    uVar12 = (ulong)uVar6;
    if (-1 < (int)uVar6) {
      plVar7 = *(long **)(param_1 + 0x70);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)*plVar14;
        if ((plVar7 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
           plVar7 == (long *)0x0)) goto LAB_02f86a7c;
        lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        if ((long)uVar12 <= lVar8) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
          uVar13 = (**(code **)(*plVar14 + 0x2c8))(plVar14,uVar12,*(undefined8 *)(*plVar14 + 0x2d0))
          ;
          goto LAB_02f86a20;
        }
      }
      else {
        lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        plVar7 = *(long **)(param_1 + 0x70);
        if (plVar7 == (long *)0x0) goto LAB_02f86a7c;
        lVar9 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
        if ((long)uVar12 <= lVar8 - lVar9) {
          uVar13 = FUN_01b47fd0(*(undefined8 *)
                                 Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                                ,uVar12);
          plVar7 = *(long **)(param_1 + 0x70);
          if (plVar7 == (long *)0x0) goto LAB_02f86a7c;
          (**(code **)(*plVar7 + 0x318))(plVar7,uVar13,0,uVar12,*(undefined8 *)(*plVar7 + 800));
          goto switchD_02f865ac_caseD_0;
        }
      }
    }
LAB_02f86ad0:
    uVar13 = thunk_FUN_01ad9084(
                               Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                               );
    uVar13 = FUN_01b47fd0(uVar13,1);
    local_48._0_4_ = uVar6;
    uVar10 = thunk_FUN_01ad9084(
                               Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               );
    uVar10 = thunk_FUN_01afa70c(uVar10,local_48);
    FUN_01852fbc(uVar13);
    FUN_01855950(uVar13,uVar10);
    FUN_01855748(uVar13,0,uVar10);
    uVar10 = thunk_FUN_01ad9084(StringLiteral_9036);
    uVar13 = FUN_030838c8(uVar10,uVar13,0);
    goto LAB_02f86a94;
  case 0x21:
    plVar7 = (long *)*plVar14;
    if (plVar7 == (long *)0x0) goto LAB_02f86a7c;
    uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    uVar12 = (ulong)uVar6;
    if ((int)uVar6 < 0) goto LAB_02f86ad0;
    plVar7 = *(long **)(param_1 + 0x70);
    if (plVar7 == (long *)0x0) {
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_02f86a7c;
      uVar10 = (**(code **)(*plVar14 + 0x2c8))(plVar14,uVar12,*(undefined8 *)(*plVar14 + 0x2d0));
      uVar13 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_9034);
      System_Threading_WaitHandleCannotBeOpenedException___ctor(uVar13,uVar10,0);
    }
    else {
      lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      plVar7 = *(long **)(param_1 + 0x70);
      if (plVar7 == (long *)0x0) goto LAB_02f86a7c;
      lVar9 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
      if (lVar8 - lVar9 < (long)uVar12) goto LAB_02f86ad0;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_02f86a7c;
      uVar10 = FUN_02fa67ac(*(long *)(param_1 + 0x70),0);
      uVar13 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_8973);
      FUN_02fa6520(uVar13,uVar10,uVar12,uVar12,1,0);
    }
    goto switchD_02f865ac_caseD_0;
  default:
    if (iVar5 < 0x40) goto switchD_02f865ac_caseD_11;
    uVar13 = FUN_02f86258(param_1,iVar5 + -0x40);
LAB_02f86a20:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar13;
    }
    goto LAB_02f86a30;
  }
  uVar13 = *puVar11;
  local_48._0_2_ = uVar4;
LAB_02f868e8:
  uVar13 = thunk_FUN_01afa70c(uVar13,local_48);
switchD_02f865ac_caseD_0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar13;
  }
LAB_02f86a30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


