/*
FUNCTION_NAME: FUN_0337a284
ENTRY_POINT: 0337a284
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_0337a284(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo;
  if ((DAT_0412d033 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe0d0);
    FUN_01ab69ac(System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
    FUN_01ab69ac(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_01ab69ac(System_Net_Http_HttpClient_TypeInfo);
    DAT_0412d033 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar2);
    lVar2 = *(long *)puVar1;
  }
  plVar3 = *(long **)(lVar2 + 0xb8);
  if (*plVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar2);
      plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
    }
    lVar2 = plVar3[1];
    uVar4 = *(undefined8 *)System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo;
    uVar5 = *(undefined8 *)System_Net_Http_HttpClient_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_03cbe0d0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_03107c78(lVar2,uVar4,uVar5,0);
    lVar2 = *(long *)puVar1;
    **(undefined8 **)(lVar2 + 0xb8) = uVar4;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar2);
    lVar2 = *(long *)puVar1;
  }
  *param_1 = **(undefined8 **)(lVar2 + 0xb8);
  return;
}


