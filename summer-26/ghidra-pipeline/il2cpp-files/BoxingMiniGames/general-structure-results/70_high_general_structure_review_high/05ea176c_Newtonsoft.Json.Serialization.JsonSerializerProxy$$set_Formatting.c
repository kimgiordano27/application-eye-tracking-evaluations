/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Formatting
ENTRY_POINT: 05ea176c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Formatting(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x209) = 1;
  if (*(int *)(unaff_x19 + 0x10) == -2) {
    iVar1 = *(int *)(unaff_x19 + 0x20);
    lVar3 = FUN_05e81c48(0);
    if (lVar3 == 0)
    goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateTimeZoneHandling;
    iVar2 = FUN_05e81ca4(lVar3,0);
    if (iVar1 == iVar2) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      return unaff_x19;
    }
  }
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a18268);
  FUN_05ea1484(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    thunk_FUN_036b7ad0();
    return lVar3;
  }
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateTimeZoneHandling:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


