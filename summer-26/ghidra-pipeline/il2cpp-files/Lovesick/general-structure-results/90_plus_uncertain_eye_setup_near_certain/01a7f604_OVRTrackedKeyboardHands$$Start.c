/*
FUNCTION_NAME: OVRTrackedKeyboardHands$$Start
ENTRY_POINT: 01a7f604
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRTrackedKeyboardHands__Start(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x23;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  uVar3 = FUN_01a565c0();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  uVar3 = FUN_01a566a8();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  uVar2 = OVRPlugin_<>c__<_cctor>b__796_68();
  *(undefined4 *)(unaff_x19 + 0x28) = uVar2;
  uVar3 = FUN_01a567a0();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  uVar3 = FUN_01a5681c();
  lVar4 = thunk_FUN_00d62348(*unaff_x21);
  puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if (lVar4 != 0) {
    FUN_01a7f71c(lVar4,uVar3);
    *(long *)(unaff_x19 + 0x40) = lVar4;
    uVar5 = FUN_017b4f64(uVar3,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x19 + 0x40);
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
    }
    puVar1 = GoogleSheetsToUnity_GoogleAuthrisationHelper_TypeInfo;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_01a56898();
    *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
    uVar3 = FUN_01a5696c();
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      FUN_01a7dbcc(lVar4,uVar3);
      *(long *)(unaff_x19 + 0x50) = lVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


