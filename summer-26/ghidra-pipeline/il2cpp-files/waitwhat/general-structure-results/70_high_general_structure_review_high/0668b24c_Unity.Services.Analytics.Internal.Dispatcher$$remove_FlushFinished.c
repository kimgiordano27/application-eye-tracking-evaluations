/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$remove_FlushFinished
ENTRY_POINT: 0668b24c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_Internal_Dispatcher__remove_FlushFinished(void)

{
  undefined *puVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_stack_00000058;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0x328);
  if (unaff_x19 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)Photon_Voice_IAudioDesc_TypeInfo + 0x20) + 0x135) & 1) == 0)
    {
      FUN_031c09d4();
    }
    puVar1 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    if (*(int *)(unaff_x19 + 8) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135)
          & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220();
      auVar4 = FUN_0460e8d4(&stack0x00000058,
                            *(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
      auVar5 = FUN_0460e8d4();
      auVar6 = FUN_0460e8d4();
      auVar7 = FUN_0460b114();
      if (*(int *)(*(long *)System_Net_Http_HttpRequestException_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06a18064(auVar4._0_8_,auVar4._8_8_,auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_,
                   auVar7._0_8_,auVar7._8_8_);
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      lVar2 = *unaff_x27;
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(unaff_x28,*(undefined4 *)(lVar2 + 8),1,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
      puVar3 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
    }
  }
  FUN_0460e7ac(&stack0x00000058,*puVar3);
  return;
}


