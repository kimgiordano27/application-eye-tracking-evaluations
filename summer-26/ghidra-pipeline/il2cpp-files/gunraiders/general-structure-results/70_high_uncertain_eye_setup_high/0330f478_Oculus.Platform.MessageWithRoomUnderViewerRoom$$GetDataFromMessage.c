/*
FUNCTION_NAME: Oculus.Platform.MessageWithRoomUnderViewerRoom$$GetDataFromMessage
ENTRY_POINT: 0330f478
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Oculus_Platform_MessageWithRoomUnderViewerRoom__GetDataFromMessage(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  
  do {
    unaff_x21[unaff_x26] = (long)unaff_x23;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= unaff_x26 + -3) {
      FUN_0330f1e4();
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x24);
      }
      FUN_0330a1e4();
      uVar3 = FUN_01bf6f38();
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x25);
      }
      uVar4 = FUN_032e935c(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        return uVar3;
      }
      thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
      uVar3 = thunk_FUN_01c496e0();
      FUN_03314458(uVar3,0);
      goto LAB_0330f664;
    }
    uVar4 = unaff_x26 - 3;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar4) break;
    plVar7 = *(long **)(unaff_x20 + (unaff_x26 + 1) * 8);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar1 = FUN_032e935c(plVar7,0,0);
    if ((uVar1 & 1) != 0) {
      thunk_FUN_01c273e8(PTR_DAT_0422fa20);
      uVar3 = thunk_FUN_01c496e0();
      FUN_03247d0c(uVar3,0);
      goto LAB_0330f664;
    }
    lVar2 = *unaff_x24;
    if (plVar7 == (long *)0x0) {
LAB_0330f428:
      unaff_x23 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar2 + 0x130)) goto LAB_0330f428;
      unaff_x23 = plVar7;
      if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2) {
        unaff_x23 = (long *)0x0;
      }
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (unaff_x23 == (long *)0x0) {
      if (plVar7 == (long *)0x0) goto LAB_0330f638;
      uVar4 = (**(code **)(*plVar7 + 0x5f8))(plVar7,*(undefined8 *)(*plVar7 + 0x600));
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar3 = FUN_032ec3e8();
        return uVar3;
      }
      plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,
                                    *(undefined4 *)(unaff_x20 + 0x18));
      if ((int)*(ulong *)(unaff_x20 + 0x18) < 1)
      goto Oculus_Platform_MessageWithRoomInviteNotification__GetRoomInviteNotification;
      uVar4 = 0;
      uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      goto LAB_0330f594;
    }
    if (unaff_x21 == (long *)0x0) goto LAB_0330f638;
    lVar2 = thunk_FUN_01c495e4(unaff_x23,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar2 == 0) goto LAB_0330f63c;
    unaff_x26 = unaff_x26 + 1;
  } while (uVar4 < *(uint *)(unaff_x21 + 3));
LAB_0330f634:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
LAB_0330f594:
  if (uVar1 <= uVar4) goto LAB_0330f634;
  if (plVar7 == (long *)0x0) goto LAB_0330f638;
  lVar2 = *(long *)(unaff_x20 + 0x20 + uVar4 * 8);
  if ((lVar2 != 0) &&
     (lVar5 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
LAB_0330f63c:
    uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar3,0);
  }
  if (*(uint *)(plVar7 + 3) <= uVar4) goto LAB_0330f634;
  plVar7[uVar4 + 4] = lVar2;
  uVar1 = (ulong)*(uint *)(unaff_x20 + 0x18);
  uVar4 = uVar4 + 1;
  if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)uVar4) {
Oculus_Platform_MessageWithRoomInviteNotification__GetRoomInviteNotification:
    uVar4 = FUN_0320105c(0);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_01c273e8(UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_TypeInfo);
      uVar3 = thunk_FUN_01c496e0();
      FUN_032e21a0(uVar3,0);
LAB_0330f664:
      uVar6 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<Transform,_DamageDirectionIndicator>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar3,uVar6);
    }
    lVar2 = *unaff_x24;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar2 = *unaff_x24;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0330f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
      return uVar3;
    }
LAB_0330f638:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  goto LAB_0330f594;
}


