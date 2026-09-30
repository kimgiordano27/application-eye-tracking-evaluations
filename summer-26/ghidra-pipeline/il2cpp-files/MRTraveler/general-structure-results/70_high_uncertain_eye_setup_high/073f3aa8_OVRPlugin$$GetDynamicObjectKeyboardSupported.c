/*
FUNCTION_NAME: OVRPlugin$$GetDynamicObjectKeyboardSupported
ENTRY_POINT: 073f3aa8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDynamicObjectKeyboardSupported(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0x8ec) = in_w8;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69e98);
    FUN_07064478(lVar4,uVar5,*(undefined8 *)PTR_DAT_08eb5fc8,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_03d233cc(plVar3,lVar4);
  }
  puVar1 = PTR_DAT_08eb5fc0;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x70) = lVar4;
    thunk_FUN_03d233cc((long *)(unaff_x19 + 0x70),lVar4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_067d536c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


