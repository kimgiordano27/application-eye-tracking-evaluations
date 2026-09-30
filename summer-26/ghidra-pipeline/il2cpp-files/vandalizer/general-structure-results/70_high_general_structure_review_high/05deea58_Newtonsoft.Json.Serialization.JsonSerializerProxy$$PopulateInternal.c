/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$PopulateInternal
ENTRY_POINT: 05deea58
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__PopulateInternal(double param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint in_w8;
  double *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  double dVar3;
  double unaff_d8;
  double unaff_d9;
  
  while( true ) {
    dVar3 = unaff_d9 * (double)(int)in_w8;
    unaff_d9 = unaff_d9 * unaff_d8;
    unaff_w21 = unaff_w21 + 1;
    *unaff_x19 = dVar3 + param_1;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar2 = FUN_05df79d8();
    if ((uVar2 & 1) == 0) break;
    uVar1 = *(ushort *)(unaff_x20 + 0x14);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    in_w8 = uVar1 - 0x30;
    if (9 < in_w8) break;
    param_1 = *unaff_x19;
  }
  return 0 < unaff_w21;
}


