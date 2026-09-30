/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 04f2dd38
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken(void)

{
  ulong uVar1;
  undefined8 uVar2;
  short *unaff_x19;
  uint unaff_w20;
  long *unaff_x24;
  long unaff_x25;
  uint uStack000000000000000c;
  
  *(undefined1 *)(unaff_x25 + 0x615) = 1;
  uStack000000000000000c = 0;
  *unaff_x19 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar1 = FUN_04f2ddb4();
  if ((uVar1 & 1) == 0) {
LAB_04f2dd98:
    uVar2 = 0;
  }
  else {
    if ((unaff_w20 >> 9 & 1) == 0) {
      if (uStack000000000000000c != (int)(short)uStack000000000000000c) goto LAB_04f2dd98;
    }
    else if (uStack000000000000000c >> 0x10 != 0) goto LAB_04f2dd98;
    uVar2 = 1;
    *unaff_x19 = (short)uStack000000000000000c;
  }
  return uVar2;
}


