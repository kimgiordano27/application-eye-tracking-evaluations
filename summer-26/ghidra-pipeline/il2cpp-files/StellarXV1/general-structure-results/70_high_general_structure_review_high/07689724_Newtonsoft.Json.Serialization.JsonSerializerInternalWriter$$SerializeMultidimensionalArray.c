/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 07689724
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
                (ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 in_ZR;
  ulong uVar4;
  uint in_w8;
  ushort *in_x9;
  long in_x10;
  ulong in_x11;
  ushort *puVar5;
  long in_x12;
  long lVar6;
  uint uVar7;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  while (!(bool)in_ZR) {
    if (unaff_w20 <= in_w8) goto LAB_07689820;
    uVar3 = *in_x9;
    if (9 < uVar3 - 0x30) break;
    if (in_x11 <= param_1) goto LAB_07689734;
    in_w8 = in_w8 + 1;
    in_x10 = in_x10 + -1;
    in_x9 = in_x9 + 1;
    *unaff_x19 = in_w8;
    param_1 = param_1 * in_x12 + (ulong)(uVar3 - 0x30);
    in_ZR = in_x10 == 0;
  }
  if (0x8000000000000000 < param_1) {
LAB_07689734:
    FUN_0768a4f8();
    uVar4 = 0x1fffffffffffffff;
    if (unaff_w21 != 8) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar2 = *unaff_x19;
    uVar1 = 0xfffffffffffffff;
    if (unaff_w21 != 0x10) {
      uVar1 = uVar4;
    }
    if (unaff_w21 == 10) {
      uVar1 = 0x1999999999999999;
    }
    if ((int)uVar2 < (int)unaff_w20) {
      puVar5 = (ushort *)(unaff_x22 + (long)(int)uVar2 * 2);
      lVar6 = (long)(int)unaff_w20 - (long)(int)uVar2;
      uVar4 = 0;
      do {
        if (unaff_w20 <= uVar2) {
LAB_07689820:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar3 = *puVar5;
        uVar7 = uVar3 - 0x30;
        if (9 < uVar7) {
          uVar7 = (uint)uVar3;
          if (uVar3 - 0x41 < 0x1a) {
            uVar7 = uVar7 - 0x37;
          }
          else {
            if (0x19 < uVar7 - 0x61) {
              return uVar4;
            }
            uVar7 = uVar7 - 0x57;
          }
        }
        if (unaff_w21 <= (int)uVar7) {
          return uVar4;
        }
        if ((uVar1 < uVar4) || (param_1 = uVar4 * (long)unaff_w21 + (ulong)uVar7, param_1 < uVar4))
        {
          FUN_0768a540();
          uVar4 = FUN_07689840();
          return uVar4;
        }
        uVar2 = uVar2 + 1;
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 1;
        *unaff_x19 = uVar2;
        uVar4 = param_1;
      } while (lVar6 != 0);
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


