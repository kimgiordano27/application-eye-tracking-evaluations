/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 0708e0f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898(PTR_DAT_08e69d78);
  *(undefined1 *)(unaff_x20 + 0xd92) = 1;
  puVar1 = PTR_DAT_08e69920;
  if (unaff_x19 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08e69920 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar2 = FUN_06f7915c();
    if (iVar2 != -1) {
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar3 = thunk_FUN_03cf5234();
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea2588);
      FUN_07064ba8(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea25e8);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar3,uVar4);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar2 = FUN_0708cfdc();
    if (-1 < iVar2) {
      if (iVar2 < *(int *)(unaff_x19 + 0x10) + -1) {
        uVar3 = FUN_06f78754();
        return uVar3;
      }
    }
    uVar3 = **(undefined8 **)(*(long *)PTR_DAT_08e69d78 + 0xb8);
  }
  return uVar3;
}


