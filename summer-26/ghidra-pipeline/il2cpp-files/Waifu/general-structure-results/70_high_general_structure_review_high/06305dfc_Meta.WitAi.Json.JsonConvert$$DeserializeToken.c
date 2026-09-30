/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 06305dfc
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


void Meta_WitAi_Json_JsonConvert__DeserializeToken(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  
  FUN_0666ec64(DAT_08432960,*(undefined8 *)(unaff_x19 + 0x10),DAT_0842ded8,0);
  if (unaff_x20 != (long *)0x0) {
    FUN_0667fa20();
    uVar2 = FUN_062f22d0(unaff_x19 + 0x18);
    FUN_06660dbc(DAT_08444da8,uVar2,0);
    FUN_0667fa20();
    uVar3 = FUN_03398650(DAT_083daa08);
    uVar2 = DAT_0844a688;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    uStack000000000000007c = FUN_062e3448();
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x0000007c);
    uVar2 = DAT_0844c200;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    in_stack_00000078 = FUN_062f9284();
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x00000078);
    uVar2 = DAT_0843f968;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    uStack000000000000002c = FUN_062f6908();
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x0000002c);
    uVar2 = DAT_0844a0c0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
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
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x00000028);
    uVar2 = DAT_084395f0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    uStack0000000000000024 = FUN_062f9234();
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x00000024);
    uVar2 = DAT_08446228;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    uVar1 = 0;
    if (*(long *)(unaff_x19 + 0x140) != 0) {
      uVar1 = FUN_062d0374(*(long *)(unaff_x19 + 0x140),0);
    }
    in_stack_00000020 = uVar1;
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x00000020);
    uVar2 = DAT_0844a030;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    if (*(long *)(unaff_x19 + 0x158) != 0) {
      uVar3 = FUN_03398650(DAT_083d1220);
      uVar2 = DAT_0844fee8;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      FUN_0683f31c(&stack0x00000050,uVar3,0);
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      FUN_0666f060(0,uVar2,&stack0x00000030);
      FUN_0667fa20();
    }
    if (*(long *)(unaff_x19 + 0x168) != 0) {
      uVar3 = FUN_03398650(DAT_083d1220);
      uVar2 = DAT_08455590;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      FUN_0683f31c(&stack0x00000050,uVar3,0);
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      FUN_0666f060(0,uVar2,&stack0x00000030);
      FUN_0667fa20();
    }
    if (*(long *)(unaff_x19 + 0x148) != 0) {
      uVar3 = FUN_03398650(DAT_083c8518);
      uVar2 = DAT_08432d98;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      FUN_0683f31c(&stack0x00000050,uVar3,0);
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      FUN_0666f060(0,uVar2,&stack0x00000030);
      FUN_0667fa20();
    }
    FUN_0687b38c(0);
    uVar2 = FUN_066772ac();
    FUN_0667fa20(uVar2,DAT_08431e88,0);
    if ((DAT_086de724 & 1) == 0) {
      FUN_0335b6c8(&DAT_083f9070,1);
      DataMemoryBarrier(2,3);
      DAT_086de724 = 1;
    }
    uVar3 = FUN_03398650(DAT_083cda98);
    uVar2 = DAT_08434848;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
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
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x0000007c);
    uVar2 = DAT_084395f8;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
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
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x0000007c);
    uVar2 = DAT_08452168;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    in_stack_00000078 = 0;
    if (*(long *)(unaff_x19 + 0x2e0) != 0) {
      in_stack_00000078 = *(undefined4 *)(*(long *)(unaff_x19 + 0x2e0) + 0x18);
    }
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x00000078);
    uVar2 = DAT_084382e8;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    uStack000000000000002c = 0;
    if (*(long *)(unaff_x19 + 0x2e8) != 0) {
      uStack000000000000002c = *(undefined4 *)(*(long *)(unaff_x19 + 0x2e8) + 0x18);
    }
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x0000002c);
    uVar2 = DAT_08436c38;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
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
    uVar3 = FUN_03398650(DAT_083cda98,&stack0x00000028);
    uVar2 = DAT_08441d60;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    FUN_0687b38c(0);
    uVar2 = FUN_066772ac();
    FUN_0667fa20(uVar2,DAT_08431e80,0);
    uVar3 = FUN_03398650(DAT_083d4170);
    uVar2 = DAT_08450a48;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_0683f31c(&stack0x00000050,uVar3,0);
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    FUN_0666f060(0,uVar2,&stack0x00000030);
    FUN_0667fa20();
    FUN_0687b38c(0);
    FUN_066772ac();
    plVar4 = *(long **)(unaff_x19 + 0x140);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    FUN_0667fa20();
    FUN_0687b38c(0);
    uVar2 = FUN_066772ac();
    (**(code **)(*unaff_x20 + 0x168))(uVar2,*(undefined8 *)(*unaff_x20 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


