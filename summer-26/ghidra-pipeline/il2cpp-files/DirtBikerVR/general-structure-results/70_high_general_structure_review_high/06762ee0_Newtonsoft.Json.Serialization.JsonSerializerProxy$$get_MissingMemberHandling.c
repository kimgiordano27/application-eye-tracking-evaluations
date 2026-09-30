/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MissingMemberHandling
ENTRY_POINT: 06762ee0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MissingMemberHandling(void)

{
  ulong uVar1;
  char *unaff_x19;
  uint unaff_w20;
  long *unaff_x24;
  long unaff_x25;
  uint uStack000000000000000c;
  
  FUN_03a8a718(PTR_DAT_084a5b08);
  *(undefined1 *)(unaff_x25 + 0xb79) = 1;
  *unaff_x19 = '\0';
  uStack000000000000000c = 0;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0674da68();
  if ((uVar1 & 1) != 0) {
    if ((unaff_w20 >> 9 & 1) == 0) {
      if (uStack000000000000000c == (int)(char)uStack000000000000000c) {
LAB_06762f4c:
        *unaff_x19 = (char)uStack000000000000000c;
        return 1;
      }
    }
    else if (uStack000000000000000c < 0x100) goto LAB_06762f4c;
  }
  return 0;
}


