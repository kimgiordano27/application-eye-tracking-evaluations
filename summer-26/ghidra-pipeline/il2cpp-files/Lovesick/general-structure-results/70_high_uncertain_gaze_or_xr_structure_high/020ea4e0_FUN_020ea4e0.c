/*
FUNCTION_NAME: FUN_020ea4e0
ENTRY_POINT: 020ea4e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_020ea4e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_00d48444(Method_System_IO_BinaryReader_Read7BitEncodedInt__);
  uVar1 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_01773d28(uVar1,0);
  uVar2 = thunk_FUN_00d48444(Method_OVRTask_FromRequest<OVRPlugin_Result>__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar1,uVar2);
}


