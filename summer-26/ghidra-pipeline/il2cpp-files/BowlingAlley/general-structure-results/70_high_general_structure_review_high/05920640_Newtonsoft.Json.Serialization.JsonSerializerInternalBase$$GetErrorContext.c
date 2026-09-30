/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 05920640
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  short *unaff_x19;
  uint unaff_w20;
  long *unaff_x24;
  long unaff_x25;
  uint uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072969e0);
    *(undefined1 *)(unaff_x25 + 0x337) = 1;
  }
  uStack000000000000000c = 0;
  *unaff_x19 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = FUN_059206d4(param_2,param_3,unaff_w20);
  if ((uVar1 & 1) == 0) {
LAB_059206b8:
    uVar2 = 0;
  }
  else {
    if ((unaff_w20 >> 9 & 1) == 0) {
      if (uStack000000000000000c != (int)(short)uStack000000000000000c) goto LAB_059206b8;
    }
    else if (uStack000000000000000c >> 0x10 != 0) goto LAB_059206b8;
    uVar2 = 1;
    *unaff_x19 = (short)uStack000000000000000c;
  }
  return uVar2;
}


