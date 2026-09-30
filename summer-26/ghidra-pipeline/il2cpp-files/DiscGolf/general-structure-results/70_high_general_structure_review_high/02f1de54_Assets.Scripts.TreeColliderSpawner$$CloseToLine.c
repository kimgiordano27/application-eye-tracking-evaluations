/*
FUNCTION_NAME: Assets.Scripts.TreeColliderSpawner$$CloseToLine
ENTRY_POINT: 02f1de54
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Assets_Scripts_TreeColliderSpawner__CloseToLine(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined4 unaff_w23;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  *(undefined8 *)(unaff_x19 + 0x160) = unaff_x24;
  LeanTween__value(unaff_x19 + 0x160);
  lVar4 = FUN_02d966a4(*unaff_x25,1);
  lVar5 = FUN_03802760(*unaff_x26,*unaff_x27);
  puVar1 = PTR_DAT_069fffd0;
  if (lVar5 != 0) {
    if (6 < *(uint *)(lVar5 + 0x18)) {
      if (lVar4 == 0) goto LAB_02f1e2f8;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar5 + 0x50);
        LeanTween__value();
        *(long *)(unaff_x19 + 0x168) = lVar4;
        LeanTween__value(unaff_x19 + 0x168,lVar4);
        uVar6 = DAT_010fcab0;
        *(undefined4 *)(unaff_x19 + 0x170) = 0xfa;
        *(undefined8 *)(unaff_x19 + 0x180) = uVar6;
        *(undefined1 *)(unaff_x19 + 0x17c) = 1;
        *(undefined8 *)(unaff_x19 + 0x174) = 0x400000003e800000;
        *(undefined4 *)(unaff_x19 + 0x188) = 0x40000000;
        uVar6 = FUN_063041ec(0,0x3f800000,0x3f800000,0x3f000000,0);
        *(undefined8 *)(unaff_x19 + 400) = uVar6;
        LeanTween__value(unaff_x19 + 400,uVar6);
        *(undefined4 *)(unaff_x19 + 0x198) = 2;
        *(undefined8 *)(unaff_x19 + 0x19c) = 0x3f8000003f800000;
        FUN_0552aca4();
        *(long *)(unaff_x19 + 0x60) = unaff_x20;
        *(int *)(unaff_x19 + 0x2c) = unaff_w21;
        *(undefined4 *)(unaff_x19 + 0x30) = unaff_w23;
        LeanTween__value();
        if (unaff_x20 == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(undefined4 *)(unaff_x20 + 0x30);
        }
        in_stack_00000060 = *(undefined8 *)puVar1;
        *(undefined4 *)(unaff_x19 + 0x58) = uVar3;
        in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,unaff_w21);
        in_stack_00000068 = 0xffffffffffffffff;
        uVar6 = FUN_0551e574(&stack0x00000060,0);
        *(undefined8 *)(unaff_x19 + 0x68) = uVar6;
        LeanTween__value();
        puVar1 = PTR_DAT_069fffe8;
        if (unaff_x20 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(unaff_x20 + 0x34);
          lVar4 = *(long *)PTR_DAT_069fffe8;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar4 = *(long *)puVar1;
          }
          iVar7 = **(int **)(lVar4 + 0xb8) + iVar7;
        }
        *(int *)(unaff_x19 + 0x34) = iVar7;
        uVar3 = FUN_06346438(0,1000,0);
        *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
        *(undefined8 *)(unaff_x19 + 0x40) = 0;
        *(undefined8 *)(unaff_x19 + 0x38) = 0;
        *(undefined8 *)(unaff_x19 + 0x50) = 0;
        *(undefined8 *)(unaff_x19 + 0x48) = 0;
        puVar1 = PTR_DAT_069fb9a0;
        if (unaff_w21 == 1) {
          lVar4 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9a0,2);
          in_stack_00000060 = 0;
          in_stack_00000068 = 0;
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          FUN_0630346c(0,0x3f800000,0,0,&stack0x00000060,0);
          if (lVar4 == 0) goto LAB_02f1e2f8;
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x28) = in_stack_00000068;
            *(undefined8 *)(lVar4 + 0x20) = in_stack_00000060;
            *(undefined4 *)(lVar4 + 0x38) = in_stack_00000078;
            *(undefined8 *)(lVar4 + 0x30) = in_stack_00000070;
            in_stack_00000040 = 0;
            in_stack_00000048 = 0;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            FUN_0630346c(0x3f800000,0,0xbf000000,0xbf800000,&stack0x00000040,0);
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              *(undefined4 *)(lVar4 + 0x54) = in_stack_00000058;
              puVar1 = PTR_DAT_069fb998;
              *(undefined8 *)(lVar4 + 0x4c) = in_stack_00000050;
              *(undefined8 *)(lVar4 + 0x44) = in_stack_00000048;
              *(undefined8 *)(lVar4 + 0x3c) = in_stack_00000040;
              uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
              FUN_06304314(uVar6,lVar4,0);
              *unaff_x22 = uVar6;
LAB_02f1e0d8:
              LeanTween__value();
              return;
            }
          }
        }
        else {
          if ((unaff_w21 == 3) && (unaff_x20 != 0)) {
            if (*(int *)(unaff_x20 + 0x2c) == 0) {
              return;
            }
            *(undefined4 *)(unaff_x19 + 0x114) = 0x40400000;
            *(undefined4 *)(unaff_x19 + 300) = 0x3f000000;
            *(undefined4 *)(unaff_x19 + 0x150) = 0x3e4ccccd;
            *(undefined8 *)(unaff_x19 + 0x120) = 0x373f800000;
            return;
          }
          if (unaff_w21 != 0) {
            return;
          }
          lVar4 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9a0,2);
          in_stack_00000060 = 0;
          in_stack_00000068 = 0;
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          FUN_0630346c(0,0x3f800000,0,0,&stack0x00000060,0);
          if (lVar4 == 0) goto LAB_02f1e2f8;
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x28) = in_stack_00000068;
            *(undefined8 *)(lVar4 + 0x20) = in_stack_00000060;
            *(undefined4 *)(lVar4 + 0x38) = in_stack_00000078;
            *(undefined8 *)(lVar4 + 0x30) = in_stack_00000070;
            in_stack_00000040 = 0;
            in_stack_00000048 = 0;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            FUN_0630346c(0x3f800000,0,0xbf800000,0xbf800000,&stack0x00000040,0);
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              *(undefined4 *)(lVar4 + 0x54) = in_stack_00000058;
              puVar2 = PTR_DAT_069fb998;
              *(undefined8 *)(lVar4 + 0x4c) = in_stack_00000050;
              *(undefined8 *)(lVar4 + 0x44) = in_stack_00000048;
              *(undefined8 *)(lVar4 + 0x3c) = in_stack_00000040;
              uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
              FUN_06304314(uVar6,lVar4,0);
              *(undefined8 *)(unaff_x19 + 0x78) = uVar6;
              LeanTween__value((undefined8 *)(unaff_x19 + 0x78),uVar6);
              lVar4 = FUN_02d966a4(*(undefined8 *)puVar1,2);
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              in_stack_00000038 = 0;
              in_stack_00000030 = 0;
              FUN_0630346c(0,0x3f800000,0xc0000000,0xc0000000,&stack0x00000020,0);
              if (lVar4 == 0) goto LAB_02f1e2f8;
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
                *(undefined8 *)(lVar4 + 0x20) = in_stack_00000020;
                *(undefined4 *)(lVar4 + 0x38) = in_stack_00000038;
                *(undefined8 *)(lVar4 + 0x30) = in_stack_00000030;
                FUN_0630346c(0x3f800000,0,0,0);
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined4 *)(lVar4 + 0x54) = 0;
                  *(undefined8 *)(lVar4 + 0x4c) = 0;
                  *(undefined8 *)(lVar4 + 0x44) = 0;
                  *(undefined8 *)(lVar4 + 0x3c) = 0;
                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                  FUN_06304314(uVar6,lVar4,0);
                  *(undefined8 *)(unaff_x19 + 0x98) = uVar6;
                  goto LAB_02f1e0d8;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_02f1e2f8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


