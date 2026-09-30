/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 0718d37c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  int unaff_w21;
  long unaff_x23;
  long *unaff_x24;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
  }
  if (DAT_09842bf7 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    DAT_09842bf7 = '\x01';
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar1 = *unaff_x24;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    uVar2 = FUN_048d36ac();
    return uVar2;
  }
  if (unaff_w21 == 0) {
    return 0;
  }
  if (unaff_x23 != 0) {
    uVar2 = thunk_FUN_0710d31c();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


