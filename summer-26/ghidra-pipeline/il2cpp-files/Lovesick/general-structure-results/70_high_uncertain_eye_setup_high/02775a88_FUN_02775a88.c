/*
FUNCTION_NAME: FUN_02775a88
ENTRY_POINT: 02775a88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02775a88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_System_Data_DefaultValueTypeConverter_ConvertTo__;
  if ((DAT_0378860a & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_LogLevel_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<LogEntry>_get_Current__);
    thunk_FUN_00d48444(PTR_DAT_033ee7e8);
    thunk_FUN_00d48444(PTR_DAT_033f3048);
    thunk_FUN_00d48444(Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Data_DefaultValueTypeConverter_ConvertTo__);
    thunk_FUN_00d48444(System_Collections_Generic_List<IXRActivateInteractable>_TypeInfo);
    DAT_0378860a = 1;
  }
  FUN_017b46ec(param_1,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = Method_System_Collections_Generic_List_Enumerator<LogEntry>_get_Current__;
  if (**(long **)(lVar2 + 0xb8) != 0) {
    FUN_00ce3e5c(**(long **)(lVar2 + 0xb8),param_1,
                 *(undefined8 *)
                  Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_TypeInfo);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = System_Collections_Generic_List<IXRActivateInteractable>_TypeInfo;
    if (lVar2 != 0) {
      FUN_01298de8(lVar2,0x20,*(undefined8 *)OVRPlugin_LogLevel_TypeInfo);
      *(long *)(param_1 + 0x18) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_033ee7e8;
      if (lVar2 != 0) {
        FUN_027754a0();
        *(long *)(param_1 + 0x20) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_033f3048;
        if (lVar2 != 0) {
          FUN_02775764();
          *(long *)(param_1 + 0x28) = lVar2;
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            FUN_0283a708(lVar2,0x1000,0);
            *(long *)(param_1 + 0x30) = lVar2;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


