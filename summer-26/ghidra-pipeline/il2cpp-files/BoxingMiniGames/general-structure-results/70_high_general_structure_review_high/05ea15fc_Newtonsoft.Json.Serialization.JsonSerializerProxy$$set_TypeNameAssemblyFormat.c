/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormat
ENTRY_POINT: 05ea15fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormat(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  
  lVar2 = thunk_FUN_0367fa58();
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
    uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4,0);
  }
  puVar1 = PTR_DAT_07a18270;
  if ((*(uint *)(unaff_x19 + 3) & 0xfffffffc) != 0) {
    unaff_x19[7] = lVar2;
    thunk_FUN_036b7ad0(unaff_x19 + 7,lVar2);
    FUN_05c98bb4(*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


