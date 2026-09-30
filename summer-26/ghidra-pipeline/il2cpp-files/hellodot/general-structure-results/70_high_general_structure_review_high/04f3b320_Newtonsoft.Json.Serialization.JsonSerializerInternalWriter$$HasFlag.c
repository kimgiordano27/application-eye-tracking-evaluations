/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 04f3b320
PROGRAM: hellodot-libil2cpp.so
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
  undefined1 in_ZR;
  uint uVar2;
  undefined4 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined4 unaff_w26;
  uint unaff_w27;
  
  do {
    unaff_x23 = unaff_x23 + 1;
    if ((bool)in_ZR) {
LAB_04f3b33c:
      if (unaff_w27 == 0) {
        uVar2 = 1;
      }
      else {
LAB_04f3b380:
        unaff_w26 = 0;
        uVar2 = 0;
        *unaff_x20 = 1;
      }
LAB_04f3b2b4:
      *unaff_x19 = unaff_w26;
      return uVar2 & 1;
    }
    if (unaff_w21 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) {
      if (unaff_w24 < unaff_w21) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar2 = FUN_04f3d628();
        if ((uVar2 & 1) == 0) {
          unaff_w26 = 0;
        }
        if ((unaff_w27 & uVar2 & 1) == 0) goto LAB_04f3b2b4;
        goto LAB_04f3b380;
      }
      goto LAB_04f3b33c;
    }
    unaff_w24 = unaff_w24 + 1;
    in_ZR = unaff_w21 == unaff_w24;
  } while( true );
}


