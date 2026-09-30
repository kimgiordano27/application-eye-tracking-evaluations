/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ObjectCreationHandling
ENTRY_POINT: 04f3bd70
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ObjectCreationHandling(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  uint unaff_w27;
  
  while( true ) {
    uVar1 = *unaff_x23;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) break;
    unaff_w24 = unaff_w24 + 1;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_w21 == unaff_w24) {
LAB_04f3bdb0:
      if (unaff_w27 == 0) {
        uVar2 = 1;
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
      }
      goto LAB_04f3bdf4;
    }
    if (unaff_w21 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    param_1 = *unaff_x25;
  }
  if (unaff_w21 <= unaff_w24) goto LAB_04f3bdb0;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_04f3d628();
  if ((uVar2 & 1) == 0) {
    unaff_x26 = 0;
  }
  if ((unaff_w27 & uVar2 & 1) == 0)
  goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
LAB_04f3bdf4:
  unaff_x26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


