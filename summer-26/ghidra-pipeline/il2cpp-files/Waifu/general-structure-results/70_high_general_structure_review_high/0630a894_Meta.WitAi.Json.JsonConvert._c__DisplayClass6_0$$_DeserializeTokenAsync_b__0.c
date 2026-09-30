/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c__DisplayClass6_0$$<DeserializeTokenAsync>b__0
ENTRY_POINT: 0630a894
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert_<>c__DisplayClass6_0__<DeserializeTokenAsync>b__0
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,float param_6)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float fVar8;
  float unaff_s11;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s15;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  
  fVar11 = unaff_s9 * param_1;
  fVar10 = unaff_s11 * param_1;
  param_1 = unaff_s8 * param_1;
  fVar2 = param_5 * fVar11 - param_4 * fVar10;
  fVar3 = param_6 * fVar10 - param_5 * param_1;
  fVar4 = param_4 * param_1 - param_6 * fVar11;
  fVar7 = param_1 * fVar4 - fVar10 * fVar2;
  fVar8 = fVar11 * fVar2 - param_1 * fVar3;
  fVar6 = fVar10 * fVar3 - fVar11 * fVar4;
  fVar9 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar2 = in_s17;
  fVar3 = in_s18;
  fVar4 = in_s19;
  fVar5 = in_s20;
  if (unaff_s15 < fVar9) {
    fStack000000000000000c = in_s19;
    fStack0000000000000014 = in_s20;
    if (*(char *)(unaff_x21 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x21 + 0xcb) = 1;
    }
    fStack0000000000000004 = in_s18;
    if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar2 = 1.0 / SQRT(fVar9);
    fVar5 = fVar7 * fVar2;
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x50) + unaff_x20 * 0xc);
    *pfVar1 = fVar5;
    pfVar1[1] = fVar8 * fVar2;
    pfVar1[2] = fVar6 * fVar2;
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x60) + unaff_x20 * 0xc);
    *pfVar1 = fVar11;
    pfVar1[1] = fVar10;
    pfVar1[2] = param_1;
    fVar3 = fVar10;
    fVar4 = param_1;
    fVar2 = (float)FUN_03794fcc(fVar11,0);
    in_s19 = fStack000000000000000c;
    in_s20 = fStack0000000000000014;
    in_s18 = fStack0000000000000004;
  }
  fVar6 = 1.0 / (in_s20 * in_s20 + in_s19 * in_s19 + in_s17 * in_s17 + in_s18 * in_s18);
  fVar7 = in_s20 * fVar6;
  fVar8 = fVar6 * -in_s17;
  fVar9 = fVar6 * -in_s18;
  fVar6 = fVar6 * -in_s19;
  pfVar1 = (float *)(*(long *)(unaff_x19 + 0x70) + unaff_x20 * 0x10);
  *pfVar1 = (fVar8 * fVar5 + fVar9 * fVar4 + fVar7 * fVar2) - fVar6 * fVar3;
  pfVar1[1] = (fVar7 * fVar3 + fVar9 * fVar5 + fVar6 * fVar2) - fVar8 * fVar4;
  pfVar1[2] = (fVar7 * fVar4 + fVar6 * fVar5 + fVar8 * fVar3) - fVar9 * fVar2;
  pfVar1[3] = (fVar7 * fVar5 - (fVar9 * fVar3 + fVar8 * fVar2)) - fVar6 * fVar4;
  return;
}


