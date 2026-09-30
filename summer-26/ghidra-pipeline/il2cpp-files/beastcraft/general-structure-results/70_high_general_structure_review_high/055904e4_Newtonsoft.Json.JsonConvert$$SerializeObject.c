/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 055904e4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  ushort *unaff_x19;
  ushort *unaff_x20;
  ulong unaff_x21;
  
  uVar2 = unaff_x21 & 0xffffffff;
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    uVar1 = *unaff_x20;
    param_1 = param_1 + -1;
    if (0xffffffe5 < uVar1 - 0x7b) {
      uVar1 = uVar1 & 0xffdf;
    }
    uVar2 = uVar2 - 1;
    *unaff_x19 = uVar1;
    unaff_x19 = unaff_x19 + 1;
    unaff_x20 = unaff_x20 + 1;
  } while (uVar2 != 0);
  return;
}


