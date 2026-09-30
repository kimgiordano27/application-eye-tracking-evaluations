/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_SerializationBinder
ENTRY_POINT: 0170f024
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializerSettings__set_SerializationBinder(void)

{
  bool bVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    *(undefined1 *)(unaff_x21 + 0xa3f) = 1;
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x20;
  }
  if (**(char **)(lVar2 + 0xb8) == '\0') {
    bVar1 = *(char *)(unaff_x19 + 0x140) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


