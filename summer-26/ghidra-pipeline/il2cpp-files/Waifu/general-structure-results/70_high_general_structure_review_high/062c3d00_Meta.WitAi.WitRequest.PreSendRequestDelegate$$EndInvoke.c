/*
FUNCTION_NAME: Meta.WitAi.WitRequest.PreSendRequestDelegate$$EndInvoke
ENTRY_POINT: 062c3d00
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest_PreSendRequestDelegate__EndInvoke(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long lVar10;
  int iVar11;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_0335b6c8(&DAT_083ca458,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea808,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cda98,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d7a40,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d16e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d25d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084329b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844c7e8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842dd58,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844c7f0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x5f8) = 1;
  plVar4 = (long *)FUN_03398a84(DAT_083d16e0);
  FUN_0667dab4(plVar4,0);
  if (plVar4 != (long *)0x0) {
    FUN_0667fa20(plVar4,DAT_084329b0,0);
    if (*(char *)(unaff_x20 + 0x18) == '\0') {
      FUN_0667fa20(plVar4,DAT_0844c7f0,0);
    }
    else {
      if ((DAT_086de5f1 & 1) == 0) {
        FUN_0335b6c8(&DAT_083ea800,1);
        DataMemoryBarrier(2,3);
        DAT_086de5f1 = 1;
      }
      iStack000000000000001c = 0;
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        iStack000000000000001c = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x28);
      }
      uVar5 = FUN_03398650(DAT_083cda98,(long)&stack0x00000018 + 4);
      uVar6 = DAT_0844c7e8;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      FUN_0683f31c(&stack0x00000040,uVar5,0);
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      uVar6 = FUN_0666f060(0,uVar6,&stack0x00000020);
      FUN_0667fa20(plVar4,uVar6,0);
      if ((DAT_086de5f1 & 1) == 0) {
        FUN_0335b6c8(&DAT_083ea800,1);
        DataMemoryBarrier(2,3);
        DAT_086de5f1 = 1;
      }
      lVar9 = *(long *)(unaff_x20 + 0x10);
      if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar9 + 0x28), 0 < (int)uVar1)) {
        lVar10 = 0;
        iVar11 = 0;
        do {
          uVar3 = *(uint *)(*(long *)(lVar9 + 0x10) + lVar10);
          if ((uVar3 & 1) != 0) {
            uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + lVar10 + 4);
            iStack000000000000001c = iVar11;
            uVar5 = FUN_03398650(DAT_083cda98,(long)&stack0x00000018 + 4);
            uStack0000000000000018 = uVar3;
            uVar7 = FUN_03398650(DAT_083d25d8,&stack0x00000018);
            in_stack_00000010._4_4_ = uVar2;
            uVar8 = FUN_03398650(DAT_083d7a40,(long)&stack0x00000010 + 4);
            uVar6 = DAT_0842dd58;
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            FUN_0683f5f0(&stack0x00000040,uVar5,uVar7,uVar8,0);
            in_stack_00000028 = in_stack_00000048;
            in_stack_00000020 = in_stack_00000040;
            in_stack_00000038 = in_stack_00000058;
            in_stack_00000030 = in_stack_00000050;
            uVar6 = FUN_0666f060(0,uVar6,&stack0x00000020);
            FUN_0667fa20(plVar4,uVar6,0);
          }
          if ((ulong)uVar1 * 0xd4 + -0xd4 == lVar10) goto LAB_062c3fc0;
          lVar9 = *(long *)(unaff_x20 + 0x10);
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 0xd4;
        } while (lVar9 != 0);
        goto LAB_062c3fa8;
      }
    }
LAB_062c3fc0:
    uVar6 = FUN_0687b38c(0);
    uVar6 = FUN_066772ac(plVar4,uVar6);
    uVar6 = (**(code **)(*plVar4 + 0x168))(uVar6,*(undefined8 *)(*plVar4 + 0x170));
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870(DAT_083ca458);
    }
    FUN_079c9c0c(uVar6,0);
    if (unaff_x23 != 0) {
      iVar11 = (int)plVar4[4] + *(int *)((long)plVar4 + 0x24);
      if (iVar11 != 0) {
        FUN_0667f7fc(unaff_x23,plVar4,0,iVar11);
      }
      return;
    }
  }
LAB_062c3fa8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


