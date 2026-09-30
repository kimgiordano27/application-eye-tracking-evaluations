/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGetPlayFabIDsFromKongregateIDsRequestEvent
ENTRY_POINT: 05238a94
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_Events_PlayFabEvents__add_OnGetPlayFabIDsFromKongregateIDsRequestEvent(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  char cStack0000000000000030;
  long *in_stack_00000038;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x428));
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerMoveEvent>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerMoveLinkTagEvent>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x204) = 1;
  puVar2 = UnityEngine_UIElements_EventBase<PointerMoveEvent>_TypeInfo;
  _cStack0000000000000030 = 0;
  in_stack_00000038 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  if (unaff_x21 == 0) goto LAB_05238fb0;
  uVar5 = FUN_0483dd8c();
  if ((uVar5 & 1) != 0) {
    if (in_stack_00000038 != (long *)0x0) {
      if (*in_stack_00000038 == *(long *)(PTR_DAT_066462a0 + 0x18)) {
        pcVar9 = (char *)thunk_FUN_02d8a780();
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          cVar1 = *pcVar9;
          lVar7 = System_Collections_Generic_Dictionary<object,_TrackedDeviceGraphicRaycaster_RaycastHitData>__CopyTo
                            (*(long *)(unaff_x20 + 0x38),
                             *(undefined8 *)
                              UnityEngine_UIElements_EventBase<NavigationCancelEvent>_TypeInfo);
          if (lVar7 != 0) {
            FUN_04e15360(&stack0x00000008,lVar7,
                         *(undefined8 *)
                          UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeInfo);
            puVar3 = UnityEngine_UIElements_EventBase<NavigationSubmitEvent>_TypeInfo;
            puVar2 = UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeInfo;
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000010 = &stack0x00000020;
            _cStack0000000000000030 = in_stack_00000018;
            in_stack_00000008 = 0;
            do {
              do {
                uVar5 = FUN_04a092b0(&stack0x00000020,*(undefined8 *)puVar3);
                if ((uVar5 & 1) == 0) goto LAB_05238e40;
                uVar5 = _cStack0000000000000030 & 0xff;
              } while (cStack0000000000000030 == cVar1);
              if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar7 = FUN_0479a394(*(long *)(unaff_x20 + 0x38),cStack0000000000000030,
                                   *(undefined8 *)puVar2);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              uVar10 = FUN_04cab084();
            } while ((uVar10 & 1) == 0);
            lVar7 = *(long *)(*(long *)(*(long *)
                                         UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo +
                                       0xb8) + 8);
            if (lVar7 != 0) {
              if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              FUN_0479a394(*(long *)(unaff_x20 + 0x28),uVar5,
                           *(undefined8 *)
                            UnityEngine_UIElements_EventBase<PointerDownLinkTagEvent>_TypeInfo);
              (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
            }
LAB_05238e40:
            FUN_04a092ac(&stack0x00000020,
                         *(undefined8 *)
                          UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeInfo);
            if (*(long *)(unaff_x20 + 0x28) != 0) {
              lVar7 = FUN_0479a394(*(long *)(unaff_x20 + 0x28),cVar1,
                                   *(undefined8 *)
                                    UnityEngine_UIElements_EventBase<PointerDownLinkTagEvent>_TypeInfo
                                  );
              if ((*(long *)(unaff_x20 + 0x38) != 0) &&
                 (lVar8 = FUN_0479a394(*(long *)(unaff_x20 + 0x38),cVar1,*(undefined8 *)puVar2),
                 lVar8 != 0)) {
                uVar5 = System_Array_InternalEnumerator<RichTextTagAttribute>__System_Collections_IEnumerator_get_Current
                                  ();
                if ((uVar5 & 1) != 0) {
LAB_05238f60:
                  lVar7 = **(long **)(*(long *)
                                       UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo +
                                     0xb8);
                  if (lVar7 == 0) {
                    return;
                  }
                  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
                  return;
                }
                plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
                if (plVar6 != (long *)0x0) {
                  if ((lVar7 == 0) ||
                     (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 != 0)
                     ) {
                    if ((int)plVar6[3] != 0) {
                      plVar6[4] = lVar7;
                      thunk_FUN_02dc1ef0(plVar6 + 4,lVar7);
                      if ((unaff_x19 != 0) && (lVar7 = thunk_FUN_02d8a53c(), lVar7 == 0))
                      goto LAB_05238fc0;
                      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                        plVar6[5] = unaff_x19;
                        thunk_FUN_02dc1ef0();
                        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                          thunk_FUN_02dabd98();
                        }
                        FUN_05ea3014(*(undefined8 *)
                                      UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeInfo,
                                     plVar6,0);
                        FUN_052388a4();
                        goto LAB_05238f60;
                      }
                    }
                    goto LAB_05238fbc;
                  }
                  goto LAB_05238fc0;
                }
              }
            }
          }
        }
      }
      else {
        plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,4);
        if (plVar6 != (long *)0x0) {
          lVar7 = *(long *)puVar2;
          if ((lVar7 != 0) &&
             (lVar7 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_05238fc0:
            uVar11 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar11,0);
          }
          if ((int)plVar6[3] != 0) {
            plVar6[4] = *(long *)puVar2;
            thunk_FUN_02dc1ef0();
            plVar4 = in_stack_00000038;
            if ((in_stack_00000038 != (long *)0x0) &&
               (lVar7 = thunk_FUN_02d8a53c(in_stack_00000038,*(undefined8 *)(*plVar6 + 0x40)),
               lVar7 == 0)) goto LAB_05238fc0;
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
              plVar6[5] = (long)plVar4;
              thunk_FUN_02dc1ef0(plVar6 + 5,plVar4);
              if (in_stack_00000038 == (long *)0x0) goto LAB_05238fb0;
              lVar7 = thunk_FUN_02d5dae8(in_stack_00000038,0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_05238fc0;
              if (2 < *(uint *)(plVar6 + 3)) {
                plVar6[6] = lVar7;
                thunk_FUN_02dc1ef0(plVar6 + 6,lVar7);
                if ((unaff_x19 != 0) && (lVar7 = thunk_FUN_02d8a53c(), lVar7 == 0))
                goto LAB_05238fc0;
                if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                  plVar6[7] = unaff_x19;
                  thunk_FUN_02dc1ef0();
                  if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05ea2bc0(*(undefined8 *)
                                UnityEngine_UIElements_EventBase<PointerMoveLinkTagEvent>_TypeInfo,
                               plVar6,0);
                  return;
                }
              }
            }
          }
LAB_05238fbc:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
      }
LAB_05238fb0:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if ((*(long *)(unaff_x20 + 0x38) == 0) ||
       (lVar7 = System_Collections_Generic_Dictionary<object,_TrackedDeviceGraphicRaycaster_RaycastHitData>__CopyTo
                          (*(long *)(unaff_x20 + 0x38),
                           *(undefined8 *)
                            UnityEngine_UIElements_EventBase<NavigationCancelEvent>_TypeInfo),
       lVar7 == 0)) goto LAB_05238fb0;
    FUN_04e15360(&stack0x00000008,lVar7,
                 *(undefined8 *)UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeInfo);
    puVar3 = UnityEngine_UIElements_EventBase<NavigationSubmitEvent>_TypeInfo;
    puVar2 = UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeInfo;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000010 = &stack0x00000020;
    _cStack0000000000000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    do {
      uVar5 = FUN_04a092b0(&stack0x00000020,*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) goto LAB_05238d2c;
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar5 = _cStack0000000000000030 & 0xff;
      lVar7 = FUN_0479a394(*(long *)(unaff_x20 + 0x38),uVar5,*(undefined8 *)puVar2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar10 = FUN_04cab084();
    } while ((uVar10 & 1) == 0);
    lVar7 = *(long *)(*(long *)(*(long *)UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo +
                               0xb8) + 8);
    if (lVar7 != 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a394(*(long *)(unaff_x20 + 0x28),uVar5,
                   *(undefined8 *)UnityEngine_UIElements_EventBase<PointerDownLinkTagEvent>_TypeInfo
                  );
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
    }
LAB_05238d2c:
    FUN_04a092ac(&stack0x00000020,
                 *(undefined8 *)UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeInfo);
  }
  return;
}


