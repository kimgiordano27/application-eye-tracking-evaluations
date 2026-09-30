/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_0
ENTRY_POINT: 0592cfe0
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_0
          (void)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  ulong *unaff_x19;
  int unaff_w21;
  
  uVar1 = FUN_059321b0();
  if ((uVar1 & 1) == 0) {
    puVar2 = (ushort *)FUN_059321cc();
    uVar1 = 0;
    do {
      do {
        unaff_w21 = unaff_w21 + -1;
        if (unaff_w21 < 0) {
          *unaff_x19 = uVar1;
          return 1;
        }
        if (0x1999999999999999 < uVar1) {
          return 0;
        }
        uVar3 = uVar1 * 10;
        uVar1 = uVar3;
      } while ((ulong)*puVar2 == 0);
      uVar1 = (uVar3 + *puVar2) - 0x30;
      puVar2 = puVar2 + 1;
    } while (uVar3 <= uVar1);
  }
  return 0;
}


