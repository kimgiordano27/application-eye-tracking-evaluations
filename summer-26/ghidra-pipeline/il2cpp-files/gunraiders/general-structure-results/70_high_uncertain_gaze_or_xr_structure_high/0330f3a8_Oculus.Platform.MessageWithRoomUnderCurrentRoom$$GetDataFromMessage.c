/*
FUNCTION_NAME: Oculus.Platform.MessageWithRoomUnderCurrentRoom$$GetDataFromMessage
ENTRY_POINT: 0330f3a8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Platform_MessageWithRoomUnderCurrentRoom__GetDataFromMessage(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  puVar2 = UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo;
  puVar1 = PTR_DAT_0422fb28;
  iVar7 = (int)*(ulong *)(param_1 + 0x18);
  if (iVar7 != *(int *)(unaff_x20 + 0x18)) {
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<Transform,_DamageDirectionIndicator>_Remove__
                              );
    uVar4 = FUN_03313b64(uVar4,0);
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar5 = thunk_FUN_01c496e0();
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<Transform,_DamageDirectionIndicator>_Add__
                              );
    FUN_0323fce4(uVar5,uVar4,uVar6,0);
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<Transform,_DamageDirectionIndicator>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar4);
  }
  if (0 < iVar7) {
    uVar8 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    lVar12 = 4;
    do {
      if (uVar8 <= lVar12 - 4U) goto LAB_0330f634;
      plVar10 = *(long **)(unaff_x20 + lVar12 * 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_032e935c(plVar10,0,0);
      if ((uVar8 & 1) != 0) {
        thunk_FUN_01c273e8(PTR_DAT_0422fa20);
        uVar4 = thunk_FUN_01c496e0();
        FUN_03247d0c(uVar4,0);
        goto LAB_0330f664;
      }
      lVar3 = *(long *)puVar2;
      if (plVar10 == (long *)0x0) {
LAB_0330f428:
        plVar11 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar3 + 0x130)) goto LAB_0330f428;
        plVar11 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3
           ) {
          plVar11 = (long *)0x0;
        }
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (plVar11 == (long *)0x0) {
        if (plVar10 == (long *)0x0) goto LAB_0330f638;
        uVar8 = (**(code **)(*plVar10 + 0x5f8))(plVar10,*(undefined8 *)(*plVar10 + 0x600));
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar4 = FUN_032ec3e8();
          return uVar4;
        }
        plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,
                                       *(undefined4 *)(unaff_x20 + 0x18));
        if ((int)*(ulong *)(unaff_x20 + 0x18) < 1)
        goto Oculus_Platform_MessageWithRoomInviteNotification__GetRoomInviteNotification;
        uVar8 = 0;
        uVar9 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
        goto LAB_0330f594;
      }
      if (unaff_x21 == (long *)0x0) goto LAB_0330f638;
      lVar3 = thunk_FUN_01c495e4(plVar11,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar3 == 0) goto LAB_0330f63c;
      if ((ulong)*(uint *)(unaff_x21 + 3) <= lVar12 - 4U) goto LAB_0330f634;
      unaff_x21[lVar12] = (long)plVar11;
      uVar8 = (ulong)*(uint *)(unaff_x20 + 0x18);
      lVar3 = lVar12 + -3;
      lVar12 = lVar12 + 1;
    } while (lVar3 < (int)*(uint *)(unaff_x20 + 0x18));
  }
  FUN_0330f1e4();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  FUN_0330a1e4();
  uVar4 = FUN_01bf6f38();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar1);
  }
  uVar8 = FUN_032e935c(uVar4,0,0);
  if ((uVar8 & 1) == 0) {
    return uVar4;
  }
  thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
  uVar4 = thunk_FUN_01c496e0();
  FUN_03314458(uVar4,0);
  goto LAB_0330f664;
LAB_0330f594:
  do {
    if (uVar9 <= uVar8) {
LAB_0330f634:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (plVar10 == (long *)0x0) goto LAB_0330f638;
    lVar12 = *(long *)(unaff_x20 + 0x20 + uVar8 * 8);
    if ((lVar12 != 0) &&
       (lVar3 = thunk_FUN_01c495e4(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar3 == 0)) {
LAB_0330f63c:
      uVar4 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,0);
    }
    if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_0330f634;
    plVar10[uVar8 + 4] = lVar12;
    uVar9 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar8 = uVar8 + 1;
  } while ((long)uVar8 < (long)(int)*(uint *)(unaff_x20 + 0x18));
Oculus_Platform_MessageWithRoomInviteNotification__GetRoomInviteNotification:
  uVar8 = FUN_0320105c(0);
  if ((uVar8 & 1) != 0) {
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar12 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x30);
    if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0330f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40));
      return uVar4;
    }
LAB_0330f638:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  thunk_FUN_01c273e8(UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_TypeInfo);
  uVar4 = thunk_FUN_01c496e0();
  FUN_032e21a0(uVar4,0);
LAB_0330f664:
  uVar5 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<Transform,_DamageDirectionIndicator>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar5);
}


