/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$<CreateObjectUsingCreatorWithParameters>b__1
ENTRY_POINT: 0592d028
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0__<CreateObjectUsingCreatorWithParameters>b__1
          (ushort *param_1)

{
  ulong in_x9;
  ulong in_x10;
  ulong uVar1;
  ulong *unaff_x19;
  int unaff_w21;
  
  do {
    if (in_x9 < in_x10) {
      return 0;
    }
    uVar1 = in_x10 * 10;
    in_x10 = uVar1;
    if ((ulong)*param_1 != 0) {
      in_x10 = (uVar1 + *param_1) - 0x30;
      param_1 = param_1 + 1;
      if (in_x10 < uVar1) {
        return 0;
      }
    }
    unaff_w21 = unaff_w21 + -1;
  } while (-1 < unaff_w21);
  *unaff_x19 = in_x10;
  return 1;
}


