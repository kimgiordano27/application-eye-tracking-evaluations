/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 07a4dba0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(ulong param_1)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  uint in_w8;
  long in_x9;
  ushort *in_x10;
  long in_x11;
  ushort *puVar4;
  ulong in_x12;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint in_w14;
  uint uVar8;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
code_r0x07a4dba0:
  uVar6 = in_w14 - 0x37;
LAB_07a4dbb8:
  if (unaff_w21 <= (int)uVar6) goto LAB_07a4dbe4;
  if (in_x12 <= param_1) goto LAB_07a4dbf0;
  in_w8 = in_w8 + 1;
  in_x11 = in_x11 + -1;
  param_1 = param_1 * in_x9 + (ulong)uVar6;
  in_x10 = in_x10 + 1;
  *unaff_x19 = in_w8;
  if (in_x11 == 0) goto LAB_07a4dbe4;
  if (in_w8 < unaff_w20) goto code_r0x07a4db84;
  goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues;
code_r0x07a4db84:
  uVar2 = *in_x10;
  in_w14 = (uint)uVar2;
  uVar6 = uVar2 - 0x30;
  if (9 < uVar6) {
    if (0x19 < uVar2 - 0x41) {
      if (0x19 < in_w14 - 0x61) {
LAB_07a4dbe4:
        if (param_1 < 0x8000000000000001) {
          return param_1;
        }
LAB_07a4dbf0:
        FUN_07a4e9ac();
        uVar6 = *unaff_x19;
        uVar3 = 0x1fffffffffffffff;
        if (unaff_w21 != 8) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar7 = 0xfffffffffffffff;
        if (unaff_w21 != 0x10) {
          uVar7 = uVar3;
        }
        uVar3 = 0x1999999999999999;
        if (unaff_w21 != 10) {
          uVar3 = uVar7;
        }
        if ((int)unaff_w20 <= (int)uVar6) {
          return 0;
        }
        puVar4 = (ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
        lVar5 = (long)(int)unaff_w20 - (long)(int)uVar6;
        uVar7 = 0;
        while (uVar6 < unaff_w20) {
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
          if ((uVar3 < uVar7) || (uVar1 = uVar7 * (long)unaff_w21 + (ulong)uVar8, uVar1 < uVar7)) {
            FUN_07a4e9f4();
            uVar3 = FUN_07a4dd04();
            return uVar3;
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + -1;
          puVar4 = puVar4 + 1;
          *unaff_x19 = uVar6;
          uVar7 = uVar1;
          if (lVar5 == 0) {
            return uVar1;
          }
        }
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar6 = in_w14 - 0x57;
      goto LAB_07a4dbb8;
    }
    goto code_r0x07a4dba0;
  }
  goto LAB_07a4dbb8;
}


