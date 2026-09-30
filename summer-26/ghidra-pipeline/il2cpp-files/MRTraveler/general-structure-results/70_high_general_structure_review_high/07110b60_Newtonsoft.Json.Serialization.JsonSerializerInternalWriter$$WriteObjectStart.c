/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 07110b60
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  uint in_w8;
  ushort *in_x10;
  long in_x11;
  long lVar4;
  ushort *puVar5;
  long in_x12;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  lVar4 = in_x12 - in_x11;
  uVar3 = 0;
  do {
    if (unaff_w20 <= in_w8) goto LAB_07110ce0;
    uVar2 = *in_x10;
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
    if (0xccccccccccccccc < uVar3) goto LAB_07110bec;
    in_w8 = in_w8 + 1;
    lVar4 = lVar4 + -1;
    uVar3 = uVar3 * (long)unaff_w21 + (ulong)uVar6;
    in_x10 = in_x10 + 1;
    *unaff_x19 = in_w8;
  } while (lVar4 != 0);
  if (0x8000000000000000 < uVar3) {
LAB_07110bec:
    FUN_071119a4();
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
      puVar5 = (ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
      lVar4 = (long)(int)unaff_w20 - (long)(int)uVar6;
      uVar7 = 0;
      do {
        if (unaff_w20 <= uVar6) {
LAB_07110ce0:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar2 = *puVar5;
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
          FUN_071119ec();
          uVar3 = FUN_07110d00();
          return uVar3;
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 1;
        *unaff_x19 = uVar6;
        uVar7 = uVar3;
      } while (lVar4 != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


