/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 062527a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(void)

{
  ushort uVar1;
  bool in_ZR;
  ulong uVar2;
  ulong uVar3;
  uint in_w8;
  ulong in_x9;
  ulong in_x10;
  ulong in_x11;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  if (!in_ZR) {
    in_x11 = in_x9;
  }
  uVar3 = in_x10 & 0xffffffffffff | 0x1999000000000000;
  if (unaff_w21 != 10) {
    uVar3 = in_x11;
  }
  if ((int)in_w8 < (int)unaff_w20) {
    puVar4 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
    lVar5 = (long)(int)unaff_w20 - (long)(int)in_w8;
    uVar6 = 0;
    do {
      if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      uVar1 = *puVar4;
      uVar7 = uVar1 - 0x30;
      if (9 < uVar7) {
        uVar7 = (uint)uVar1;
        if (uVar1 - 0x41 < 0x1a) {
          uVar7 = uVar7 - 0x37;
        }
        else {
          if (0x19 < uVar7 - 0x61) {
            return uVar6;
          }
          uVar7 = uVar7 - 0x57;
        }
      }
      if (unaff_w21 <= (int)uVar7) {
        return uVar6;
      }
      if ((uVar3 < uVar6) || (uVar2 = uVar6 * (long)unaff_w21 + (ulong)uVar7, uVar2 < uVar6)) {
        FUN_06253588();
        uVar3 = FUN_06252898();
        return uVar3;
      }
      in_w8 = in_w8 + 1;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 1;
      *unaff_x19 = in_w8;
      uVar6 = uVar2;
    } while (lVar5 != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


