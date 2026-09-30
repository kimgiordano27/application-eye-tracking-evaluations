/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 0675d740
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

{
  uint uVar1;
  bool bVar2;
  short *psVar3;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  
  if ((int)unaff_w19 < (int)unaff_w20) {
    psVar3 = (short *)(unaff_x21 + (long)(int)unaff_w19 * 2);
    bVar2 = false;
    uVar1 = unaff_w19;
    if (unaff_w19 <= unaff_w20) {
      uVar1 = unaff_w20;
    }
    do {
      if (uVar1 == unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (*psVar3 != 0) {
        return bVar2;
      }
      unaff_w19 = unaff_w19 + 1;
      psVar3 = psVar3 + 1;
      bVar2 = (int)unaff_w20 <= (int)unaff_w19;
    } while (unaff_w20 != unaff_w19);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


