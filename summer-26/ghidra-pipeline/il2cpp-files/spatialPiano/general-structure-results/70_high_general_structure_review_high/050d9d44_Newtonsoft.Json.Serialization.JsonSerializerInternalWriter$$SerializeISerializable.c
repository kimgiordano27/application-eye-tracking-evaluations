/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 050d9d44
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
               (undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x29;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar2 = FUN_050d9dbc(unaff_x29 + -0x38,param_1,uVar1);
  if (lVar2 == 0) {
    FUN_04f86f00(unaff_x29 + -0x38,0);
  }
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


