/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ObjectCreationHandling
ENTRY_POINT: 074efdc4
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ObjectCreationHandling(void)

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
  uint unaff_w28;
  
  do {
    if (unaff_w21 == unaff_w24) {
LAB_074efde0:
      if (unaff_w28 == 0) {
        uVar2 = 1;
      }
      else {
FUN_074efe2c:
        unaff_x26 = 0;
        uVar2 = 0;
        *unaff_x20 = 1;
      }
LAB_074efc68:
      *unaff_x19 = unaff_x26;
      return uVar2 & 1;
    }
    if (unaff_w21 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) {
      if (unaff_w24 < unaff_w21) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar2 = FUN_074f172c();
        if ((uVar2 & 1) == 0) {
          unaff_x26 = 0;
        }
        if ((uVar2 & 1 & unaff_w28) == 0) goto LAB_074efc68;
        goto FUN_074efe2c;
      }
      goto LAB_074efde0;
    }
    unaff_w24 = unaff_w24 + 1;
    unaff_x23 = unaff_x23 + 1;
  } while( true );
}


