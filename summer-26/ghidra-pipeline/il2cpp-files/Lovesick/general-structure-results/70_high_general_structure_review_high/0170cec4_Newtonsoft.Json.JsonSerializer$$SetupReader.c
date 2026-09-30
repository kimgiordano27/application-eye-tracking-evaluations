/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 0170cec4
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


void Newtonsoft_Json_JsonSerializer__SetupReader(void)

{
  long lVar1;
  int in_w8;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03778a3f == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    DAT_03778a3f = '\x01';
  }
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar1 = *unaff_x22;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    if ((unaff_x20 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0170cf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x158))();
      return;
    }
    if (*(int *)(*(long *)System_Func<Spectrum_Point,_float>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0170c9d8();
    return;
  }
  FUN_0170d00c();
  return;
}


