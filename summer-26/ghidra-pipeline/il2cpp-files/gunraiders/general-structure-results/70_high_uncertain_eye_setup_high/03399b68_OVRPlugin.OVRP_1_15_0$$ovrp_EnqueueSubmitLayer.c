/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 03399b68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x20 + 0x6bb) = in_w8;
  puVar1 = PTR_DAT_0422fb28;
  if (unaff_x19 != 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar4 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032e04b8(uVar4,0);
    uVar2 = FUN_032e935c(uVar3,uVar4,0);
    if (((uVar2 & 1) == 0) && (*(int *)(unaff_x19 + 0x24) != 8)) {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar4 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar4 = FUN_032e04b8(uVar4,0);
      uVar3 = FUN_032e935c(uVar3,uVar4,0);
      return uVar3;
    }
  }
  return 1;
}


