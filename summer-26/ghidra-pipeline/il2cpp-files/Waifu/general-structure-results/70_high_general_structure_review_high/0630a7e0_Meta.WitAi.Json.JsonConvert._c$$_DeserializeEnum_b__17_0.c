/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c$$<DeserializeEnum>b__17_0
ENTRY_POINT: 0630a7e0
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


void Meta_WitAi_Json_JsonConvert_<>c__<DeserializeEnum>b__17_0(long param_1)

{
  float *pfVar1;
  long in_x9;
  long in_x10;
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
  float fVar7;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float fStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000018;
  
  pfVar1 = (float *)(in_x9 + param_1 * in_x10);
  fVar6 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar9 = pfVar1[2];
  fStack0000000000000010 = unaff_s10;
  if (*(char *)(unaff_x21 + 0xcb) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xcb) = 1;
  }
  fVar6 = unaff_s12 - fVar6;
  fVar11 = unaff_s13 - fVar11;
  fVar9 = unaff_s14 - fVar9;
  if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar2 = 1.0 / SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar11 * fVar11);
  fVar6 = fVar6 * fVar2;
  fVar11 = fVar11 * fVar2;
  fVar9 = fVar9 * fVar2;
  fVar2 = unaff_s8 * fVar6 - in_stack_00000018._4_4_ * fVar11;
  fVar3 = fStack0000000000000010 * fVar11 - unaff_s8 * fVar9;
  fVar4 = in_stack_00000018._4_4_ * fVar9 - fStack0000000000000010 * fVar6;
  fVar8 = fVar9 * fVar4 - fVar11 * fVar2;
  fVar10 = fVar6 * fVar2 - fVar9 * fVar3;
  fVar7 = fVar11 * fVar3 - fVar6 * fVar4;
  fVar12 = fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10;
  fVar2 = in_s17;
  fVar3 = in_s18;
  fVar4 = in_s19;
  fVar5 = in_s20;
  if (unaff_s15 < fVar12) {
    if (*(char *)(unaff_x21 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x21 + 0xcb) = 1;
    }
    fStack0000000000000004 = in_s18;
    if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar2 = 1.0 / SQRT(fVar12);
    fVar5 = fVar8 * fVar2;
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x50) + unaff_x20 * 0xc);
    *pfVar1 = fVar5;
    pfVar1[1] = fVar10 * fVar2;
    pfVar1[2] = fVar7 * fVar2;
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x60) + unaff_x20 * 0xc);
    *pfVar1 = fVar6;
    pfVar1[1] = fVar11;
    pfVar1[2] = fVar9;
    fVar3 = fVar11;
    fVar4 = fVar9;
    fVar2 = (float)FUN_03794fcc(fVar6,0);
    in_s18 = fStack0000000000000004;
  }
  fVar6 = 1.0 / (in_s20 * in_s20 + in_s19 * in_s19 + in_s17 * in_s17 + in_s18 * in_s18);
  fVar9 = in_s20 * fVar6;
  fVar11 = fVar6 * -in_s17;
  fVar7 = fVar6 * -in_s18;
  fVar6 = fVar6 * -in_s19;
  pfVar1 = (float *)(*(long *)(unaff_x19 + 0x70) + unaff_x20 * 0x10);
  *pfVar1 = (fVar11 * fVar5 + fVar7 * fVar4 + fVar9 * fVar2) - fVar6 * fVar3;
  pfVar1[1] = (fVar9 * fVar3 + fVar7 * fVar5 + fVar6 * fVar2) - fVar11 * fVar4;
  pfVar1[2] = (fVar9 * fVar4 + fVar6 * fVar5 + fVar11 * fVar3) - fVar7 * fVar2;
  pfVar1[3] = (fVar9 * fVar5 - (fVar7 * fVar3 + fVar11 * fVar2)) - fVar6 * fVar4;
  return;
}


