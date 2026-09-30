/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 0500dff0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

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
LAB_0500e00c:
      if (unaff_w28 == 0) {
        uVar2 = 1;
      }
      else {
LAB_0500e058:
        unaff_x26 = 0;
        uVar2 = 0;
        *unaff_x20 = 1;
      }
LAB_0500de94:
      *unaff_x19 = unaff_x26;
      return uVar2 & 1;
    }
    if (unaff_w21 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) {
      if (unaff_w24 < unaff_w21) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar2 = FUN_0500f958();
        if ((uVar2 & 1) == 0) {
          unaff_x26 = 0;
        }
        if ((uVar2 & 1 & unaff_w28) == 0) goto LAB_0500de94;
        goto LAB_0500e058;
      }
      goto LAB_0500e00c;
    }
    unaff_w24 = unaff_w24 + 1;
    unaff_x23 = unaff_x23 + 1;
  } while( true );
}


