/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XProcessingInstructionWrapper$$set_Value
ENTRY_POINT: 017d8aec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Newtonsoft_Json_Converters_XProcessingInstructionWrapper__set_Value(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x478));
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                    );
  *(undefined1 *)(unaff_x22 + 0x17c) = 1;
  puVar1 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__;
  thunk_FUN_00d8e500();
  *(undefined4 *)(unaff_x19 + 0x20) = 1;
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x21;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017e654c(lVar2,uVar3);
    thunk_FUN_00d8e500();
    *(long *)(unaff_x19 + 0x38) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


