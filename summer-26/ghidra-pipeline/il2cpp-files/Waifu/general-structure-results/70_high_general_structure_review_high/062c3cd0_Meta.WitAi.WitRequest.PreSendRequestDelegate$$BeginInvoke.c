/*
FUNCTION_NAME: Meta.WitAi.WitRequest.PreSendRequestDelegate$$BeginInvoke
ENTRY_POINT: 062c3cd0
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


void Meta_WitAi_WitRequest_PreSendRequestDelegate__BeginInvoke(long param_1,long param_2)

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
  long lVar10;
  int iVar11;
  undefined4 local_ac;
  uint local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_086de5f8 & 1) == 0) {
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
    DAT_086de5f8 = 1;
  }
  plVar4 = (long *)FUN_03398a84(DAT_083d16e0);
  FUN_0667dab4(plVar4,0);
  if (plVar4 != (long *)0x0) {
    FUN_0667fa20(plVar4,DAT_084329b0,0);
    if (*(char *)(param_1 + 0x18) == '\0') {
      FUN_0667fa20(plVar4,DAT_0844c7f0,0);
    }
    else {
      if ((DAT_086de5f1 & 1) == 0) {
        FUN_0335b6c8(&DAT_083ea800,1);
        DataMemoryBarrier(2,3);
        DAT_086de5f1 = 1;
      }
      local_a4 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        local_a4 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
      }
      uVar5 = FUN_03398650(DAT_083cda98,&local_a4);
      uVar6 = DAT_0844c7e8;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      FUN_0683f31c(&local_80,uVar5,0);
      uStack_98 = uStack_78;
      local_a0 = local_80;
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      uVar6 = FUN_0666f060(0,uVar6,&local_a0);
      FUN_0667fa20(plVar4,uVar6,0);
      if ((DAT_086de5f1 & 1) == 0) {
        FUN_0335b6c8(&DAT_083ea800,1);
        DataMemoryBarrier(2,3);
        DAT_086de5f1 = 1;
      }
      lVar9 = *(long *)(param_1 + 0x10);
      if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar9 + 0x28), 0 < (int)uVar1)) {
        lVar10 = 0;
        iVar11 = 0;
        do {
          uVar3 = *(uint *)(*(long *)(lVar9 + 0x10) + lVar10);
          if ((uVar3 & 1) != 0) {
            uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + lVar10 + 4);
            local_a4 = iVar11;
            uVar5 = FUN_03398650(DAT_083cda98,&local_a4);
            local_a8 = uVar3;
            uVar7 = FUN_03398650(DAT_083d25d8,&local_a8);
            local_ac = uVar2;
            uVar8 = FUN_03398650(DAT_083d7a40,&local_ac);
            uVar6 = DAT_0842dd58;
            uStack_78 = 0;
            local_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            FUN_0683f5f0(&local_80,uVar5,uVar7,uVar8,0);
            uStack_98 = uStack_78;
            local_a0 = local_80;
            uStack_88 = uStack_68;
            uStack_90 = uStack_70;
            uVar6 = FUN_0666f060(0,uVar6,&local_a0);
            FUN_0667fa20(plVar4,uVar6,0);
          }
          if ((ulong)uVar1 * 0xd4 + -0xd4 == lVar10) goto LAB_062c3fc0;
          lVar9 = *(long *)(param_1 + 0x10);
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
    if (param_2 != 0) {
      iVar11 = (int)plVar4[4] + *(int *)((long)plVar4 + 0x24);
      if (iVar11 != 0) {
        FUN_0667f7fc(param_2,plVar4,0,iVar11);
      }
      return;
    }
  }
LAB_062c3fa8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


