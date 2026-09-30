/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 0767c1d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull
          (undefined8 param_1)

{
  undefined1 in_ZR;
  int in_w8;
  ulong in_x9;
  int in_w10;
  uint uVar1;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  do {
    if ((bool)in_ZR) {
LAB_0767c24c:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if ((9 < in_w8) || (uVar1 = (uint)*(ushort *)(unaff_x20 + in_x9 * 2), 9 < uVar1 - 0x30)) {
LAB_0767c204:
      if ((uint)in_x9 != unaff_w21) {
        if (unaff_w21 <= (uint)in_x9) goto LAB_0767c24c;
        if (*(short *)(unaff_x20 + (in_x9 & 0xffffffff) * 2) != 0) {
          *unaff_x19 = -1;
          if ((int)param_1 != 0) {
            return 0;
          }
          return 0x47;
        }
      }
      *unaff_x19 = in_w8;
      return param_1;
    }
    in_x9 = in_x9 + 1;
    in_w8 = uVar1 + in_w8 * in_w10 + -0x30;
    if (unaff_w21 == (uint)in_x9) {
      in_x9 = (ulong)unaff_w21;
      goto LAB_0767c204;
    }
    in_ZR = unaff_w21 == (uint)in_x9;
  } while( true );
}


