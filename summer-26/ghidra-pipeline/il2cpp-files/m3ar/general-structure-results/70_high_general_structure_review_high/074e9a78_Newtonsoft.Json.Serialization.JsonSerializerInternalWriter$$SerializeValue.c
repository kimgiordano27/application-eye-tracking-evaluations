/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 074e9a78
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(ulong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074e99b0 with catch @ 074e9a84
                        */
    FUN_0403162c(PTR_DAT_08f8ca70);
    *(undefined1 *)(unaff_x23 + 0xefd) = 1;
  }
                    /* try { // try from 074e9a9c to 075e9ab3 has its CatchHandler @ 074e9b70 */
  if (DAT_0953ed42 == '\0') {
    FUN_0403162c(PTR_DAT_08f8ca88);
    DAT_0953ed42 = '\x01';
  }
                    /* try { // try from 074e9ab4 to 075e9b5f has its CatchHandler @ 074e9904 */
  if (unaff_x20 != 0) {
    FUN_0736648c();
  }
  uVar1 = FUN_05f233fc();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  *unaff_x19 = uVar2;
  return uVar1 & 1;
}


