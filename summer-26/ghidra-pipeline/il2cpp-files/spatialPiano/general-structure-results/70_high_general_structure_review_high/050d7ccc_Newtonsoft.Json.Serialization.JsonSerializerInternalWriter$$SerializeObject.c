/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 050d7ccc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(void)

{
  long lVar1;
  long lVar2;
  code *in_x9;
  long *unaff_x19;
  undefined8 uVar3;
  
  lVar1 = (*in_x9)();
  uVar3 = *(undefined8 *)PTR_DAT_067cda88;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  lVar2 = FUN_050e4454(uVar3,0);
  uVar3 = 0;
  if (lVar1 == lVar2) {
    lVar1 = (**(code **)(*unaff_x19 + 0x458))();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
  }
  return uVar3;
}


