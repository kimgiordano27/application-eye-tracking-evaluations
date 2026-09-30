/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
ENTRY_POINT: 07110ca4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
                (ulong param_1)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  uint in_w8;
  ulong in_x9;
  long in_x10;
  ushort *in_x11;
  long in_x12;
  uint uVar4;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  
  while( true ) {
    in_w8 = in_w8 + 1;
    in_x12 = in_x12 + -1;
    in_x11 = in_x11 + 1;
    *unaff_x19 = in_w8;
    if (in_x12 == 0) {
      return param_1;
    }
    if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar1 = *in_x11;
    uVar4 = uVar1 - 0x30;
    if (9 < uVar4) {
      uVar4 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar4 = uVar4 - 0x37;
      }
      else {
        if (0x19 < uVar4 - 0x61) {
          return param_1;
        }
        uVar4 = uVar4 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar4) break;
    if ((in_x9 < param_1) ||
       (uVar3 = param_1 * in_x10 + (ulong)uVar4, bVar2 = uVar3 < param_1, param_1 = uVar3, bVar2)) {
      FUN_071119ec();
      uVar3 = FUN_07110d00();
      return uVar3;
    }
  }
  return param_1;
}


