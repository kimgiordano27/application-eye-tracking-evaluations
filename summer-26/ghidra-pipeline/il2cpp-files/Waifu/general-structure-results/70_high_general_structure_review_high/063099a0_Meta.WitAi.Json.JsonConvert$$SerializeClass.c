/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeClass
ENTRY_POINT: 063099a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__SerializeClass
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  long unaff_x19;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  long in_stack_00000000;
  float in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  in_stack_00000010 = (float)FUN_062fa93c(0);
  fStack0000000000000014 = param_2;
  in_stack_00000018 = param_3;
  fStack000000000000001c = param_4;
  in_stack_00000028 = in_stack_00000048;
  in_stack_00000020 = in_stack_00000040;
  puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 0x20) + in_stack_00000000 * 0x20);
  puVar1[1] = CONCAT44(param_4,param_3);
  *puVar1 = CONCAT44(param_2,in_stack_00000010);
  puVar1[3] = in_stack_00000048;
  puVar1[2] = in_stack_00000040;
  if (param_4 <= 0.0) {
    if (param_3 <= 0.0) {
      if (param_2 <= 0.0) {
        fVar6 = 0.0;
        fVar5 = 0.0;
        if (in_stack_00000010 <= 0.0) goto LAB_06309b00;
        lVar3 = 1;
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 3;
    }
  }
  else {
    lVar3 = 4;
  }
  fVar5 = 0.0;
  pfVar4 = &stack0x00000010;
  fVar6 = 0.0;
  do {
    bVar2 = *(byte *)(*(long *)(unaff_x19 + 0x30) + (long)(int)pfVar4[4]);
    if (*(int *)(DAT_083d2d30 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086de4d5 == '\0') {
      FUN_0335b6c8(&DAT_083d2d30,1);
      DataMemoryBarrier(2,3);
      DAT_086de4d5 = '\x01';
    }
    if (*(int *)(DAT_083d2d30 + 0xe0) == 0) {
      FUN_033b9870();
      if ((bVar2 >> 1 & 1) == 0) goto LAB_06309a90;
LAB_06309ad8:
      fVar6 = fVar6 + *pfVar4;
    }
    else {
      if ((bVar2 >> 1 & 1) != 0) goto LAB_06309ad8;
LAB_06309a90:
      if (*(int *)(DAT_083d2d30 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (DAT_086de5d7 == '\0') {
        FUN_0335b6c8(&DAT_083d2d30,1);
        DataMemoryBarrier(2,3);
        DAT_086de5d7 = '\x01';
      }
      if (*(int *)(DAT_083d2d30 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if ((bVar2 & 1) != 0) {
        fVar5 = fVar5 + *pfVar4;
      }
    }
    lVar3 = lVar3 + -1;
    pfVar4 = pfVar4 + 1;
  } while (lVar3 != 0);
LAB_06309b00:
  if (*(int *)(DAT_083d2d30 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar3 = 2;
  if (fVar6 <= fVar5) {
    lVar3 = 1;
  }
  *(undefined1 *)(*(long *)(unaff_x19 + 0x10) + in_stack_00000000) =
       *(undefined1 *)(*(long *)(DAT_083d2d30 + 0xb8) + lVar3);
  return;
}


