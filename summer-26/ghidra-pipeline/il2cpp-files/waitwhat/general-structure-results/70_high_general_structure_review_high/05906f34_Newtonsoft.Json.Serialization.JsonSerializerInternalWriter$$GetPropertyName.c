/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 05906f34
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(void)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  
  if (unaff_w21 != 0) {
    if (unaff_w21 == 1) {
      if (in_w8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      uVar2 = System_Globalization_UmAlQuraCalendar__GetDayOfMonth
                        (*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_070c20c8,0);
      if ((uVar2 & 1) != 0) {
        return unaff_x19;
      }
    }
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar3 = *unaff_x23;
    }
    unaff_x19 = FUN_057c0768(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10));
    uVar2 = FUN_059758c8(0);
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_057bdc60(), (uVar2 & 1) != 0)) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0590703c to 05a07187 has its CatchHandler @ 05906b40 */
        FUN_03188cd8();
      }
      if ((0 < *(int *)(unaff_x19 + 0x10)) && (sVar1 = FUN_057b9840(unaff_x19,0,0), sVar1 != 0x2f))
      {
                    /* try { // try from 05907024 to 05a0703b has its CatchHandler @ 059071a0 */
        lVar3 = FUN_057b27f0();
        return lVar3;
      }
    }
  }
  return unaff_x19;
}


