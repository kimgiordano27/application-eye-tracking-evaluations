/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateFormatHandling
ENTRY_POINT: 05ea178c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateFormatHandling(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  
  if (param_1 != 0) {
    iVar1 = FUN_05e81ca4(param_1,0);
    if (unaff_w20 == iVar1) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      lVar2 = unaff_x19;
    }
    else {
      lVar2 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a18268);
      FUN_05ea1484(lVar2,0);
      if (lVar2 == 0)
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateTimeZoneHandling;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
      thunk_FUN_036b7ad0();
    }
    return lVar2;
  }
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateTimeZoneHandling:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


