/*
FUNCTION_NAME: FUN_02fdfb28
ENTRY_POINT: 02fdfb28
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


long FUN_02fdfb28(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_03ff113b & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01ad9084(StringLiteral_2269);
    thunk_FUN_01ad9084(StringLiteral_725);
    thunk_FUN_01ad9084(StringLiteral_8048);
    thunk_FUN_01ad9084(StringLiteral_2250);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_2241);
    thunk_FUN_01ad9084(StringLiteral_2255);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_2831);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Value__);
    DAT_03ff113b = 1;
  }
  puVar6 = StringLiteral_8048;
  if (((param_1 == 0) && (param_2 < 0x13)) && ((1 << (ulong)(param_2 & 0x1f) & 0x40003U) != 0)) {
    param_1 = 0;
    goto switchD_02fdfc5c_caseD_1;
  }
  plVar4 = (long *)thunk_FUN_01afa9e0(param_1,*(undefined8 *)StringLiteral_8048);
  if (plVar4 == (long *)0x0) {
    thunk_FUN_01ad9084(StringLiteral_2849);
    uVar7 = thunk_FUN_01afaadc();
    puVar6 = StringLiteral_10323;
    goto LAB_02fe0378;
  }
  switch(param_2) {
  case 0:
    thunk_FUN_01ad9084(StringLiteral_2849);
    uVar7 = thunk_FUN_01afaadc();
    puVar6 = StringLiteral_10291;
    goto LAB_02fe0378;
  case 1:
    goto switchD_02fdfc5c_caseD_1;
  case 2:
    thunk_FUN_01ad9084(StringLiteral_2849);
    uVar7 = thunk_FUN_01afaadc();
    puVar6 = StringLiteral_10290;
LAB_02fe0378:
    uVar8 = thunk_FUN_01ad9084(puVar6);
    FUN_0303dc1c(uVar7,uVar8,0);
LAB_02fe038c:
    uVar8 = thunk_FUN_01ad9084(StringLiteral_10324);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar7,uVar8);
  case 3:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_02fe0088;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,1);
LAB_02fe0088:
    uVar2 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    local_58._0_8_ = CONCAT71(local_58._1_7_,uVar2) & 0xffffffffffffff01;
    puVar5 = (undefined8 *)Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__;
    goto LAB_02fe031c;
  case 4:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_02fe01d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,2);
LAB_02fe01d4:
    uVar3 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)
             Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
    ;
    break;
  case 5:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_02fe0200;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,3);
LAB_02fe0200:
    uVar2 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)StringLiteral_2255;
    goto LAB_02fe0218;
  case 6:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_02fe0114;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,4);
LAB_02fe0114:
    uVar2 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)
             Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__;
LAB_02fe0218:
    uVar7 = *puVar5;
    local_58[0] = uVar2;
    goto LAB_02fe0328;
  case 7:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_02fe0234;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,5);
LAB_02fe0234:
    uVar3 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)StringLiteral_2250;
    break;
  case 8:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
          goto LAB_02fe0140;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,6);
LAB_02fe0140:
    uVar3 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)StringLiteral_2831;
    break;
  case 9:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_02fe0268;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,7);
LAB_02fe0268:
    local_58._0_4_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)
             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    goto LAB_02fe02ac;
  case 10:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_02fe0294;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,8);
LAB_02fe0294:
    local_58._0_4_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)StringLiteral_2494;
LAB_02fe02ac:
    uVar7 = *puVar5;
    goto LAB_02fe0328;
  case 0xb:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_02fe00bc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,9);
LAB_02fe00bc:
    uVar7 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)StringLiteral_2241;
    goto LAB_02fe0184;
  case 0xc:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
          goto LAB_02fe016c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,10);
LAB_02fe016c:
    uVar7 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_Collections_SortedList_SortedListEnumerator_get_Value__;
    goto LAB_02fe0184;
  case 0xd:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
          goto LAB_02fe02c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,0xb);
LAB_02fe02c8:
    local_58._0_4_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)
             Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
    ;
    goto LAB_02fe02e4;
  case 0xe:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
          goto LAB_02fe0058;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,0xc);
LAB_02fe0058:
    local_58._0_8_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)StringLiteral_725;
LAB_02fe02e4:
    uVar7 = *puVar5;
    goto LAB_02fe0328;
  case 0xf:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
          goto LAB_02fe0300;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,0xd);
LAB_02fe0300:
    local_58 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)StringLiteral_2269;
LAB_02fe031c:
    uVar7 = *puVar5;
    goto LAB_02fe0328;
  case 0x10:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_02fe00e8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,0xe);
LAB_02fe00e8:
    uVar7 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__;
LAB_02fe0184:
    local_58._0_8_ = uVar7;
    uVar7 = *puVar5;
    goto LAB_02fe0328;
  default:
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                      );
    uVar7 = thunk_FUN_01afaadc();
    uVar8 = thunk_FUN_01ad9084(StringLiteral_10325);
    FUN_02fd7c54(uVar7,uVar8);
    goto LAB_02fe038c;
  case 0x12:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
          goto LAB_02fe01a0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar6,0xf);
LAB_02fe01a0:
    lVar9 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return lVar9;
    }
    goto Oculus_Interaction_FirstHoverInteractorGroup__InjectAllInteractorGroupFirstHover;
  }
  uVar7 = *puVar5;
  local_58._0_2_ = uVar3;
LAB_02fe0328:
  param_1 = thunk_FUN_01afa70c(uVar7,local_58);
switchD_02fdfc5c_caseD_1:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
Oculus_Interaction_FirstHoverInteractorGroup__InjectAllInteractorGroupFirstHover:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


