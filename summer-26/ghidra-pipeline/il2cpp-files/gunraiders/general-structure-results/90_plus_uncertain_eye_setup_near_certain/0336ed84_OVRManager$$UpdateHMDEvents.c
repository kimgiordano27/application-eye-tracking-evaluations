/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 0336ed84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UpdateHMDEvents(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xdb8));
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_MoveNext__
              );
  *(undefined1 *)(unaff_x19 + 0x583) = 1;
  lVar1 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_03313b6c(lVar1,0);
  lVar2 = FUN_01c5d2fc(*unaff_x23,1);
  if (lVar2 == 0) goto LAB_0336ef2c;
  if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_01c495e4(), lVar3 == 0)) {
LAB_0336ef34:
    uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,0);
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0336ef30:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(long *)(lVar2 + 0x20) = unaff_x21;
  if (unaff_x20 != 0) {
    lVar2 = FUN_032eb9dc();
    if (lVar2 == 0) {
      lVar2 = FUN_01c5d2fc(*unaff_x23,1);
      if (lVar2 == 0) goto LAB_0336ef2c;
      if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_01c495e4(), lVar3 == 0)) goto LAB_0336ef34;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0336ef30;
      *(long *)(lVar2 + 0x20) = unaff_x21;
      lVar2 = FUN_032eb9dc();
    }
    uVar4 = FUN_0321094c(lVar2,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar5 = (long *)FUN_033a78fc(0);
    if (plVar5 != (long *)0x0) {
      lVar3 = thunk_FUN_01bedf90(*(undefined8 *)
                                  (*plVar5 + (ulong)*(ushort *)
                                                     (*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
      uVar6 = (**(code **)(lVar3 + 8))(plVar5,lVar2,lVar3);
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x10) = uVar6;
        uVar6 = thunk_FUN_01c496e0(*(undefined8 *)System_ComponentModel_MaskedTextProvider_TypeInfo)
        ;
        FUN_02b6841c(uVar6,lVar1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__
                     ,0);
        return uVar6;
      }
    }
  }
LAB_0336ef2c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


