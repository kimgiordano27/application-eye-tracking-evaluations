/*
FUNCTION_NAME: OVRManager$$get_monoscopic
ENTRY_POINT: 019ffc04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_monoscopic(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
  thunk_FUN_00d48444(PTR_DAT_033f3c20);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<TeleportPoint>_Clear__);
  thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_EnterScope<int>__);
  *(undefined1 *)(unaff_x20 + 0x8b3) = 1;
  if (*(char *)(unaff_x19 + 0x59) == '\0') {
    return;
  }
  plVar8 = *(long **)(unaff_x19 + 0x20);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                            );
  if ((lVar3 != 0) &&
     (FUN_011c181c(), puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__,
     puVar1 = PTR_DAT_033f3c20, plVar8 != (long *)0x0)) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_033f3c20) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_019ffce0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)PTR_DAT_033f3c20,7);
LAB_019ffce0:
    (*(code *)*puVar4)(plVar8,lVar3,puVar4[1]);
    plVar8 = *(long **)(unaff_x19 + 0x20);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar3 != 0) && (FUN_016f27fc(), plVar8 != (long *)0x0)) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
            goto LAB_019ffd70;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,0xd);
LAB_019ffd70:
      (*(code *)*puVar4)(plVar8,lVar3,puVar4[1]);
      *(undefined1 *)(unaff_x19 + 0x58) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


