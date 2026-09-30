/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 062526ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue(void)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  uint in_w8;
  int in_w10;
  ushort *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  puVar4 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
  lVar5 = (long)in_w10 - (long)(int)in_w8;
  uVar3 = 0;
  do {
    if (unaff_w20 <= in_w8) goto LAB_06252878;
    uVar2 = *puVar4;
    uVar6 = uVar2 - 0x30;
    if (9 < uVar6) {
      uVar6 = (uint)uVar2;
      if (uVar2 - 0x41 < 0x1a) {
        uVar6 = uVar6 - 0x37;
      }
      else {
        if (0x19 < uVar6 - 0x61) break;
        uVar6 = uVar6 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar6) break;
    if (0xccccccccccccccc < uVar3) goto LAB_06252784;
    in_w8 = in_w8 + 1;
    lVar5 = lVar5 + -1;
    uVar3 = uVar3 * (long)unaff_w21 + (ulong)uVar6;
    puVar4 = puVar4 + 1;
    *unaff_x19 = in_w8;
  } while (lVar5 != 0);
  if (0x8000000000000000 < uVar3) {
LAB_06252784:
    FUN_06253540();
    uVar6 = *unaff_x19;
    uVar3 = 0x1fffffffffffffff;
    if (unaff_w21 != 8) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar7 = 0xfffffffffffffff;
    if (unaff_w21 != 0x10) {
      uVar7 = uVar3;
    }
    uVar1 = 0x1999999999999999;
    if (unaff_w21 != 10) {
      uVar1 = uVar7;
    }
    if ((int)uVar6 < (int)unaff_w20) {
      puVar4 = (ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
      lVar5 = (long)(int)unaff_w20 - (long)(int)uVar6;
      uVar7 = 0;
      do {
        if (unaff_w20 <= uVar6) {
LAB_06252878:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        uVar2 = *puVar4;
        uVar8 = uVar2 - 0x30;
        if (9 < uVar8) {
          uVar8 = (uint)uVar2;
          if (uVar2 - 0x41 < 0x1a) {
            uVar8 = uVar8 - 0x37;
          }
          else {
            if (0x19 < uVar8 - 0x61) {
              return uVar7;
            }
            uVar8 = uVar8 - 0x57;
          }
        }
        if (unaff_w21 <= (int)uVar8) {
          return uVar7;
        }
        if ((uVar1 < uVar7) || (uVar3 = uVar7 * (long)unaff_w21 + (ulong)uVar8, uVar3 < uVar7)) {
          FUN_06253588();
          uVar3 = FUN_06252898();
          return uVar3;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + -1;
        puVar4 = puVar4 + 1;
        *unaff_x19 = uVar6;
        uVar7 = uVar3;
      } while (lVar5 != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


