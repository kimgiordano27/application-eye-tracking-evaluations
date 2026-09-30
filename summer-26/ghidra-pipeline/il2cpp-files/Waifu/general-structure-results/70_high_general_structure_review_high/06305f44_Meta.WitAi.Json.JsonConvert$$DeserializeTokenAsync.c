/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeTokenAsync
ENTRY_POINT: 06305f44
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeTokenAsync(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  
  uVar4 = *(undefined8 *)(param_1 + 0x968);
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,param_2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  uStack000000000000002c = FUN_062f6908();
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x0000002c);
  uVar4 = DAT_0844a0c0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  if ((DAT_086de725 & 1) == 0) {
    FUN_0335b6c8(&DAT_083f9248,1);
    DataMemoryBarrier(2,3);
    DAT_086de725 = 1;
  }
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x1c0) != 0) {
    in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x1c8);
  }
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x00000028);
  uVar4 = DAT_084395f0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  uStack0000000000000024 = FUN_062f9234();
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x00000024);
  uVar4 = DAT_08446228;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  uVar1 = 0;
  if (*(long *)(unaff_x19 + 0x140) != 0) {
    uVar1 = FUN_062d0374(*(long *)(unaff_x19 + 0x140),0);
  }
  in_stack_00000020 = uVar1;
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x00000020);
  uVar4 = DAT_0844a030;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  if (*(long *)(unaff_x19 + 0x158) != 0) {
    uVar2 = FUN_03398650(DAT_083d1220);
    uVar4 = DAT_0844fee8;
    uStack0000000000000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000068 = 0;
    uStack0000000000000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar2,0);
    in_stack_00000038 = uStack0000000000000058;
    in_stack_00000030 = uStack0000000000000050;
    in_stack_00000048 = uStack0000000000000068;
    in_stack_00000040 = uStack0000000000000060;
    FUN_0666f060(0,uVar4,&stack0x00000030);
    FUN_0667fa20();
  }
  if (*(long *)(unaff_x19 + 0x168) != 0) {
    uVar2 = FUN_03398650(DAT_083d1220);
    uVar4 = DAT_08455590;
    uStack0000000000000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000068 = 0;
    uStack0000000000000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar2,0);
    in_stack_00000038 = uStack0000000000000058;
    in_stack_00000030 = uStack0000000000000050;
    in_stack_00000048 = uStack0000000000000068;
    in_stack_00000040 = uStack0000000000000060;
    FUN_0666f060(0,uVar4,&stack0x00000030);
    FUN_0667fa20();
  }
  if (*(long *)(unaff_x19 + 0x148) != 0) {
    uVar2 = FUN_03398650(DAT_083c8518);
    uVar4 = DAT_08432d98;
    uStack0000000000000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000068 = 0;
    uStack0000000000000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar2,0);
    in_stack_00000038 = uStack0000000000000058;
    in_stack_00000030 = uStack0000000000000050;
    in_stack_00000048 = uStack0000000000000068;
    in_stack_00000040 = uStack0000000000000060;
    FUN_0666f060(0,uVar4,&stack0x00000030);
    FUN_0667fa20();
  }
  FUN_0687b38c(0);
  uVar4 = FUN_066772ac();
  FUN_0667fa20(uVar4,DAT_08431e88,0);
  if ((DAT_086de724 & 1) == 0) {
    FUN_0335b6c8(&DAT_083f9070,1);
    DataMemoryBarrier(2,3);
    DAT_086de724 = 1;
  }
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98));
  uVar4 = DAT_08434848;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  if ((DAT_086de725 & 1) == 0) {
    FUN_0335b6c8(&DAT_083f9248,1);
    DataMemoryBarrier(2,3);
    DAT_086de725 = 1;
  }
  uStack000000000000007c = 0;
  if (*(long *)(unaff_x19 + 0x1c0) != 0) {
    uStack000000000000007c = *(undefined4 *)(unaff_x19 + 0x1c8);
  }
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x0000007c);
  uVar4 = DAT_084395f8;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  if ((*(byte *)(*(long *)(DAT_083f9858 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  if (*(long *)(unaff_x19 + 0x1e0) == 0) {
    uStack000000000000007c = 0;
  }
  else {
    uStack000000000000007c = FUN_04ecfaec((long *)(unaff_x19 + 0x1e0),DAT_083f9838);
  }
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x0000007c);
  uVar4 = DAT_08452168;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  in_stack_00000078 = 0;
  if (*(long *)(unaff_x19 + 0x2e0) != 0) {
    in_stack_00000078 = *(undefined4 *)(*(long *)(unaff_x19 + 0x2e0) + 0x18);
  }
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x00000078);
  uVar4 = DAT_084382e8;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  uStack000000000000002c = 0;
  if (*(long *)(unaff_x19 + 0x2e8) != 0) {
    uStack000000000000002c = *(undefined4 *)(*(long *)(unaff_x19 + 0x2e8) + 0x18);
  }
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x0000002c);
  uVar4 = DAT_08436c38;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  if ((DAT_086de726 & 1) == 0) {
    FUN_0335b6c8(&DAT_083f9260,1);
    DataMemoryBarrier(2,3);
    DAT_086de726 = 1;
  }
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x290) != 0) {
    in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x298);
  }
  uVar2 = FUN_03398650(*(undefined8 *)(unaff_x22 + 0xa98),&stack0x00000028);
  uVar4 = DAT_08441d60;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  FUN_0687b38c(0);
  uVar4 = FUN_066772ac();
  FUN_0667fa20(uVar4,DAT_08431e80,0);
  uVar2 = FUN_03398650(DAT_083d4170);
  uVar4 = DAT_08450a48;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  FUN_0683f31c(&stack0x00000050,uVar2,0);
  in_stack_00000038 = uStack0000000000000058;
  in_stack_00000030 = uStack0000000000000050;
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  FUN_0666f060(0,uVar4,&stack0x00000030);
  FUN_0667fa20();
  FUN_0687b38c(0);
  FUN_066772ac();
  plVar3 = *(long **)(unaff_x19 + 0x140);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  FUN_0667fa20();
  FUN_0687b38c(0);
  uVar4 = FUN_066772ac();
  (**(code **)(*unaff_x20 + 0x168))(uVar4,*(undefined8 *)(*unaff_x20 + 0x170));
  return;
}


