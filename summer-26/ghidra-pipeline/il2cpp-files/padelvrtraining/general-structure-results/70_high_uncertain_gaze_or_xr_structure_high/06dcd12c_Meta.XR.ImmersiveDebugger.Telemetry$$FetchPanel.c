/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 06dcd12c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 0x24)) {
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
    *(undefined8 *)(param_2 + 0x10) = 0;
    return;
  }
  thunk_FUN_03d1e194(PTR_DAT_091aa550);
  uVar1 = thunk_FUN_03d2ef40();
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_091fbde0);
  Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar1,param_3);
}


