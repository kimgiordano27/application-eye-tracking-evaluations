/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 076832a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1
          (ulong param_1,ushort *param_2)

{
  ushort uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  ulong unaff_x21;
  int unaff_w22;
  
  while (unaff_w22 = unaff_w22 + -1, -1 < unaff_w22) {
    if (param_1 < unaff_x21) {
      return 0;
    }
    uVar1 = *param_2;
    unaff_x21 = unaff_x21 * 10;
    if ((ulong)uVar1 != 0) {
      param_2 = param_2 + 1;
      unaff_x21 = (unaff_x21 + uVar1) - 0x30;
    }
  }
  uVar2 = FUN_0768865c();
  if ((uVar2 & 1) == 0) {
    if (-1 < (long)unaff_x21) goto LAB_076832d0;
  }
  else {
    unaff_x21 = -unaff_x21;
    if ((long)unaff_x21 < 1) {
LAB_076832d0:
      *unaff_x19 = unaff_x21;
      return 1;
    }
  }
  return 0;
}


