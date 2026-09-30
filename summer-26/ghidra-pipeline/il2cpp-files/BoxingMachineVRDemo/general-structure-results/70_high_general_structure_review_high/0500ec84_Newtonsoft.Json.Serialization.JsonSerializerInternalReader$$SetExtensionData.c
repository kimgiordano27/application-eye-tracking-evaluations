/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 0500ec84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData
               (short *param_1,ulong param_2,short param_3)

{
  uint uVar1;
  short sVar2;
  short in_w8;
  int in_w10;
  
  while( true ) {
                    /* try { // try from 0500ec88 to 0510ecaf has its CatchHandler @ 0500ecc4 */
    if ((in_w10 < 0) && ((uint)param_2 == 0)) break;
    uVar1 = (uint)param_2 & 0xf;
    sVar2 = in_w8;
    if (9 < uVar1) {
      sVar2 = param_3;
    }
    param_2 = param_2 >> 4 & 0xfffffff;
    param_1 = param_1 + -1;
    *param_1 = sVar2 + (short)uVar1;
    in_w10 = in_w10 + -1;
  }
  return;
}


