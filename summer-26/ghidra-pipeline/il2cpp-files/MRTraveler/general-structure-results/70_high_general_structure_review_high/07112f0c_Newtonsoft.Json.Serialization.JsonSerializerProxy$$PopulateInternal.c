/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$PopulateInternal
ENTRY_POINT: 07112f0c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__PopulateInternal(void)

{
  ulong uVar1;
  undefined8 uVar2;
  char *unaff_x19;
  uint unaff_w20;
  long *unaff_x24;
  long unaff_x25;
  uint uStack000000000000000c;
  
  FUN_03c8f898(PTR_DAT_08ea1b30);
  *(undefined1 *)(unaff_x25 + 0x24a) = 1;
  uStack000000000000000c = 0;
  *unaff_x19 = '\0';
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_070fd5a8();
  if ((uVar1 & 1) == 0) {
LAB_07112f7c:
    uVar2 = 0;
  }
  else {
    if ((unaff_w20 >> 9 & 1) == 0) {
      if (uStack000000000000000c != (int)(char)uStack000000000000000c) goto LAB_07112f7c;
    }
    else if (0xff < uStack000000000000000c) goto LAB_07112f7c;
    uVar2 = 1;
    *unaff_x19 = (char)uStack000000000000000c;
  }
  return uVar2;
}


