/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGetPlayFabIDsFromPSNAccountIDsRequestEvent
ENTRY_POINT: 05239384
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnGetPlayFabIDsFromPSNAccountIDsRequestEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerOverEvent>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerOverLinkTagEvent>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerUpEvent>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerDownEvent>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerUpLinkTagEvent>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<PropertyChangedEvent>_TypeInfo);
  FUN_02d4dc40(PTR_DAT_066463a0);
  FUN_02d4dc40(UnityEngine_UIElements_EventBase<TooltipEvent>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x206) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  lVar3 = FUN_05239250();
  puVar1 = UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeInfo;
  if (lVar3 == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
     (lVar4 = FUN_0479a394(*(long *)(unaff_x19 + 0x38),*(undefined1 *)(lVar3 + 0x18),
                           *(undefined8 *)UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeInfo),
     lVar4 != 0)) {
    uVar5 = FUN_04caaeb4();
    if ((uVar5 & 1) != 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar4 = System_Collections_Generic_Dictionary<object,_TrackedDeviceGraphicRaycaster_RaycastHitData>__CopyTo
                          (*(long *)(unaff_x19 + 0x28),
                           *(undefined8 *)
                            UnityEngine_UIElements_EventBase<PointerOutLinkTagEvent>_TypeInfo),
       lVar4 != 0)) {
      FUN_04e15360(&stack0x00000008,lVar4,
                   *(undefined8 *)UnityEngine_UIElements_EventBase<PropertyChangedEvent>_TypeInfo);
      puVar2 = UnityEngine_UIElements_EventBase<PointerOverLinkTagEvent>_TypeInfo;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      do {
        uVar5 = FUN_04a092b0(&stack0x00000020,*(undefined8 *)puVar2);
        if ((uVar5 & 1) == 0) break;
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar4 = FUN_0479a394(*(long *)(unaff_x19 + 0x38),in_stack_00000030 & 0xff,
                             *(undefined8 *)puVar1);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar5 = FUN_04cab084();
      } while ((uVar5 & 1) == 0);
      FUN_04a092ac(&stack0x00000020,
                   *(undefined8 *)UnityEngine_UIElements_EventBase<PointerOverEvent>_TypeInfo);
      if ((*(long *)(unaff_x19 + 0x38) != 0) &&
         (lVar4 = FUN_0479a394(*(long *)(unaff_x19 + 0x38),*(undefined1 *)(lVar3 + 0x18),
                               *(undefined8 *)puVar1), lVar4 != 0)) {
        uVar5 = System_Array_InternalEnumerator<RichTextTagAttribute>__System_Collections_IEnumerator_get_Current
                          ();
        if ((uVar5 & 1) != 0) {
          return;
        }
        plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
        if (plVar6 != (long *)0x0) {
          if ((unaff_x20 != 0) && (lVar4 = thunk_FUN_02d8a53c(), lVar4 == 0)) {
LAB_052395f8:
            uVar7 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar7,0);
          }
          if ((int)plVar6[3] != 0) {
            plVar6[4] = unaff_x20;
            thunk_FUN_02dc1ef0();
            lVar4 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar4 == 0) goto LAB_052395f8;
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
              plVar6[5] = lVar3;
              thunk_FUN_02dc1ef0(plVar6 + 5,lVar3);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05ea3014(*(undefined8 *)UnityEngine_UIElements_EventBase<TooltipEvent>_TypeInfo,
                           plVar6,0);
              FUN_052388a4();
              return;
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


