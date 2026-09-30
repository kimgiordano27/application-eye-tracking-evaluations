/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$remove_Error
ENTRY_POINT: 032a6748
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__remove_Error(undefined8 *param_1)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  int in_w9;
  ulong uVar3;
  int in_w10;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w21;
  
  if (in_NG == in_OV) {
    in_w10 = in_w9;
  }
  lVar2 = FUN_01c5d2fc(*param_1,(in_w10 >> 5) + 1);
  *(long *)(unaff_x19 + 0x10) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x18) = unaff_w21;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (long)((ulong)uVar1 << 0x20)) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        *(uint *)(lVar2 + 0x20 + uVar3 * 4) = -(unaff_w20 & 1);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)uVar1);
    }
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


