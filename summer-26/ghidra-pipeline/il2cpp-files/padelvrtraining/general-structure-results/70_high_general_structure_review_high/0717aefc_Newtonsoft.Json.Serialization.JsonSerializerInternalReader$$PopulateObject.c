/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
ENTRY_POINT: 0717aefc
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject(undefined8 param_1)

{
  uint uVar1;
  bool in_ZR;
  uint uVar2;
  uint uVar3;
  uint *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  
  if (in_ZR) {
    uVar2 = *(ushort *)(unaff_x21 + 2) - 0x30;
    if (uVar2 < 10) goto LAB_0717afc8;
  }
  else if (((unaff_w20 == 3) && (uVar3 = *(ushort *)(unaff_x21 + 2) - 0x30, uVar3 < 10)) &&
          (uVar2 = *(ushort *)(unaff_x21 + 4) - 0x30, uVar2 < 10)) {
    uVar2 = uVar2 + uVar3 * 10;
    goto LAB_0717afc8;
  }
  uVar2 = 0;
  uVar3 = 1;
  do {
    if ((9 < (int)uVar2) ||
       (uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar3 * 2) - 0x30, 9 < uVar1)) {
      if (unaff_w20 != uVar3) {
        if (unaff_w20 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        if (*(short *)(unaff_x21 + (long)(int)uVar3 * 2) != 0) {
          *unaff_x19 = 0xffffffff;
          if ((int)param_1 != 0) {
            return 0;
          }
          return 0x47;
        }
      }
      break;
    }
    uVar3 = uVar3 + 1;
    uVar2 = uVar1 + uVar2 * 10;
  } while (unaff_w20 != uVar3);
LAB_0717afc8:
  *unaff_x19 = uVar2;
  return param_1;
}


