/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 076832a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0
          (ulong param_1,ushort *param_2)

{
  ulong uVar1;
  long in_x9;
  ulong *unaff_x19;
  ulong uVar2;
  int unaff_w22;
  
  do {
    param_2 = param_2 + 1;
    uVar2 = in_x9 - 0x30;
    do {
      unaff_w22 = unaff_w22 + -1;
      if (unaff_w22 < 0) {
        uVar1 = FUN_0768865c();
        if ((uVar1 & 1) == 0) {
          if (-1 < (long)uVar2) goto LAB_076832d0;
        }
        else {
          uVar2 = -uVar2;
          if ((long)uVar2 < 1) {
LAB_076832d0:
            *unaff_x19 = uVar2;
            return 1;
          }
        }
        return 0;
      }
      if (param_1 < uVar2) {
        return 0;
      }
      uVar2 = uVar2 * 10;
    } while ((ulong)*param_2 == 0);
    in_x9 = uVar2 + *param_2;
  } while( true );
}


