/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 04f84314
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  
  FUN_02b3c81c(PTR_DAT_06312db8);
  FUN_02b3c81c(System_Func<GradientRemap>_TypeInfo);
  FUN_02b3c81c(System_Func<HandGrabInteractable>_TypeInfo);
  FUN_02b3c81c(System_Func<HoverEnterEventArgs>_TypeInfo);
  FUN_02b3c81c(System_Func<GrabInteractable>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xd08) = 1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *unaff_x22;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312db8);
    FUN_04cf4310(lVar5,uVar6,*(undefined8 *)System_Func<HoverEnterEventArgs>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_02bb0e9c(plVar3,lVar5);
  }
  puVar1 = System_Func<HandGrabInteractable>_TypeInfo;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x70) = lVar5;
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x70),lVar5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04329a00();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


