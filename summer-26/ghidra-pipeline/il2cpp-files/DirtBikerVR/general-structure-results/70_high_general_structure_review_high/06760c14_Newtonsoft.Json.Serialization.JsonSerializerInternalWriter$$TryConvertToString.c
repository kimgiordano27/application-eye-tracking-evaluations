/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 06760c14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
                (int param_1,long param_2,uint param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  uint uVar8;
  
                    /* try { // try from 06760c1c to 06860c1f has its CatchHandler @ 06760c54 */
                    /* try { // try from 06760c20 to 06860c43 has its CatchHandler @ 06760b28 */
  if ((DAT_0897bb6a & 1) == 0) {
                    /* try { // try from 06760c44 to 06860c53 has its CatchHandler @ 06760c54 */
    FUN_03a8a718(PTR_DAT_0849f768);
    DAT_0897bb6a = 1;
  }
                    /* catch() { ... } // from try @ 06760c1c with catch @ 06760c54
                       catch() { ... } // from try @ 06760c44 with catch @ 06760c54 */
                    /* try { // try from 06760c58 to 06860c5b has its CatchHandler @ 06760c64 */
                    /* try { // try from 06760c5c to 06860c67 has its CatchHandler @ 06760b28 */
  if ((param_1 == 10) && ((param_5 & 1) == 0)) {
    uVar3 = *param_4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06760c58 with catch @ 06760c64
                        */
    if ((int)param_3 <= (int)uVar3) {
      return 0;
    }
    uVar5 = 0;
    puVar6 = (ushort *)(param_2 + (long)(int)uVar3 * 2);
    lVar7 = (long)(int)param_3 - (long)(int)uVar3;
    do {
      if (param_3 <= uVar3) goto LAB_06760dc0;
      uVar4 = *puVar6;
      if (9 < uVar4 - 0x30) break;
      if (0xccccccccccccccc < uVar5) goto LAB_06760cd4;
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 1;
      *param_4 = uVar3;
      uVar5 = uVar5 * 10 + (ulong)(uVar4 - 0x30);
    } while (lVar7 != 0);
    if (uVar5 < 0x8000000000000001) {
      return uVar5;
    }
LAB_06760cd4:
    FUN_06761a98();
  }
  uVar5 = 0x1fffffffffffffff;
  if (param_1 != 8) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar3 = *param_4;
  uVar2 = 0xfffffffffffffff;
  if (param_1 != 0x10) {
    uVar2 = uVar5;
  }
  if (param_1 == 10) {
    uVar2 = 0x1999999999999999;
  }
  if ((int)param_3 <= (int)uVar3) {
    return 0;
  }
  puVar6 = (ushort *)(param_2 + (long)(int)uVar3 * 2);
  lVar7 = (long)(int)param_3 - (long)(int)uVar3;
  uVar5 = 0;
  while (uVar3 < param_3) {
    uVar4 = *puVar6;
    uVar8 = uVar4 - 0x30;
    if (9 < uVar8) {
      uVar8 = (uint)uVar4;
      if (uVar4 - 0x41 < 0x1a) {
        uVar8 = uVar8 - 0x37;
      }
      else {
        if (0x19 < uVar8 - 0x61) {
          return uVar5;
        }
        uVar8 = uVar8 - 0x57;
      }
    }
    if (param_1 <= (int)uVar8) {
      return uVar5;
    }
    if ((uVar2 < uVar5) || (uVar1 = uVar5 * (long)param_1 + (ulong)uVar8, uVar1 < uVar5)) {
      FUN_06761ae0();
      uVar5 = FUN_06760de0();
      return uVar5;
    }
    uVar3 = uVar3 + 1;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    *param_4 = uVar3;
    uVar5 = uVar1;
    if (lVar7 == 0) {
      return uVar1;
    }
  }
LAB_06760dc0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


