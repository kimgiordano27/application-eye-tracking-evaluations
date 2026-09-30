/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGetPlayFabIDsFromNintendoServiceAccountIdsRequestEvent
ENTRY_POINT: 05238d54
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_Events_PlayFabEvents__add_OnGetPlayFabIDsFromNintendoServiceAccountIdsRequestEvent
               (undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  char cStack0000000000000030;
  
  cVar1 = *param_2;
  lVar4 = System_Collections_Generic_Dictionary<object,_TrackedDeviceGraphicRaycaster_RaycastHitData>__CopyTo
                    (param_1,**(undefined8 **)(in_x9 + 0x3e0));
  if (lVar4 != 0) {
    FUN_04e15360(&stack0x00000008,lVar4,
                 *(undefined8 *)UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeInfo);
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
      lVar4 = FUN_0479a394(*(long *)(unaff_x20 + 0x38),cStack0000000000000030,*(undefined8 *)puVar2)
      ;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar6 = FUN_04cab084();
    } while ((uVar6 & 1) == 0);
    lVar4 = *(long *)(*(long *)(*(long *)UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo +
                               0xb8) + 8);
    if (lVar4 != 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a394(*(long *)(unaff_x20 + 0x28),uVar5,
                   *(undefined8 *)UnityEngine_UIElements_EventBase<PointerDownLinkTagEvent>_TypeInfo
                  );
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
    }
LAB_05238e40:
    FUN_04a092ac(&stack0x00000020,
                 *(undefined8 *)UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeInfo);
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      lVar4 = FUN_0479a394(*(long *)(unaff_x20 + 0x28),cVar1,
                           *(undefined8 *)
                            UnityEngine_UIElements_EventBase<PointerDownLinkTagEvent>_TypeInfo);
      if ((*(long *)(unaff_x20 + 0x38) != 0) &&
         (lVar7 = FUN_0479a394(*(long *)(unaff_x20 + 0x38),cVar1,*(undefined8 *)puVar2), lVar7 != 0)
         ) {
        uVar5 = System_Array_InternalEnumerator<RichTextTagAttribute>__System_Collections_IEnumerator_get_Current
                          ();
        if ((uVar5 & 1) != 0) {
LAB_05238f60:
          lVar4 = **(long **)(*(long *)UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo +
                             0xb8);
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
          }
          return;
        }
        plVar8 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
        if (plVar8 != (long *)0x0) {
          if ((lVar4 != 0) &&
             (lVar7 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_05238fc0:
            uVar9 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar9,0);
          }
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar4;
            thunk_FUN_02dc1ef0(plVar8 + 4,lVar4);
            if ((unaff_x19 != 0) && (lVar4 = thunk_FUN_02d8a53c(), lVar4 == 0)) goto LAB_05238fc0;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
              plVar8[5] = unaff_x19;
              thunk_FUN_02dc1ef0();
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05ea3014(*(undefined8 *)
                            UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeInfo,plVar8,0);
              FUN_052388a4();
              goto LAB_05238f60;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


