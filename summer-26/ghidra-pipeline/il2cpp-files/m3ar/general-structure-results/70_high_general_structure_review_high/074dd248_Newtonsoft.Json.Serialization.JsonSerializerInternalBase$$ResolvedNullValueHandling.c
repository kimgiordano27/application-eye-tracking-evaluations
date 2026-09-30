/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ResolvedNullValueHandling
ENTRY_POINT: 074dd248
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling
          (undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  int unaff_w23;
  long unaff_x24;
  
  if ((*(byte *)(unaff_x24 + 0xe5f) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f8ca58);
    *(undefined1 *)(unaff_x24 + 0xe5f) = 1;
  }
  if (unaff_w23 != 1) goto LAB_074dd350;
  uVar1 = *param_3;
  if (uVar1 < 0x59) {
    if (uVar1 < 0x45) {
      if (uVar1 != 0x42) {
        if (uVar1 != 0x44) goto LAB_074dd350;
        goto LAB_074dd2c8;
      }
LAB_074dd30c:
      uVar3 = 0x60;
    }
    else if (uVar1 == 0x4e) {
LAB_074dd31c:
      uVar3 = 0;
    }
    else {
      if (uVar1 != 0x50) {
        if (uVar1 != 0x58) goto LAB_074dd350;
        goto LAB_074dd304;
      }
LAB_074dd314:
      uVar3 = 0x50;
    }
  }
  else if (uVar1 < 0x65) {
    if (uVar1 == 0x62) goto LAB_074dd30c;
    if (uVar1 != 100) goto LAB_074dd350;
LAB_074dd2c8:
    uVar3 = 0x40;
  }
  else {
    if (uVar1 == 0x6e) goto LAB_074dd31c;
    if (uVar1 == 0x70) goto LAB_074dd314;
    if (uVar1 != 0x78) goto LAB_074dd350;
LAB_074dd304:
    uVar3 = 0xa0;
  }
  uVar2 = FUN_074dcbd0(param_1,param_2,uVar3);
  if ((uVar2 & 1) != 0) {
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    return 1;
  }
LAB_074dd350:
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return 0;
}


