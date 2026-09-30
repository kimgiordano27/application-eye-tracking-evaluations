/*
FUNCTION_NAME: FUN_02fc7ea4
ENTRY_POINT: 02fc7ea4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fc84b8) */

void FUN_02fc7ea4(long param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  ulong *puVar19;
  undefined1 uVar20;
  undefined8 uVar21;
  uint uVar22;
  ulong local_c8;
  ulong local_b8;
  ulong local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  char local_74 [4];
  
  if ((DAT_0412af5e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d26938);
    FUN_01ab69ac(PTR_DAT_03d26908);
    FUN_01ab69ac(PTR_DAT_03d26830);
    FUN_01ab69ac(PTR_DAT_03d268d8);
    FUN_01ab69ac(PTR_DAT_03d26d30);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    DAT_0412af5e = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uVar21 = *(undefined8 *)(param_1 + 0x18);
  local_74[0] = '\0';
  FUN_027e0bd8(uVar21,local_74,0);
  if (*(char *)(param_1 + 0x40) != '\0') {
Cysharp_Threading_Tasks_UniTask_WhenAnyPromise__OnCompleted:
    if (local_74[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar21,0);
    }
    return;
  }
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02fbbf70(lVar15,*(undefined4 *)(lVar15 + 0x5c),0);
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar18 = *(long *)(lVar15 + 0xd0);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = *(int *)(*(long *)(lVar15 + 0x30) + 0x18);
  lVar15 = *(long *)PTR_DAT_03d26908;
  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
  uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(lVar18 + 0x18) = 0;
  }
  else {
    iVar4 = *(int *)(lVar18 + 0x18);
    *(undefined4 *)(lVar18 + 0x18) = 0;
    if (0 < iVar4) {
      FUN_02793a34(*(undefined8 *)(lVar18 + 0x10),0,iVar4,0);
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_022158dc(lVar15,iVar3,*(undefined8 *)PTR_DAT_03d26d30);
  if (iVar3 < 1) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x38),0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x30),0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x28),0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x20),0);
LAB_02fc844c:
    *(undefined1 *)(param_1 + 0x40) = 1;
    goto Cysharp_Threading_Tasks_UniTask_WhenAnyPromise__OnCompleted;
  }
  local_88 = CONCAT44(0xbf800000,(undefined4)local_88);
  local_88 = local_88 & 0xffffffffffffff00;
  uStack_80 = 0xffffffffffffffff;
  local_78 = local_78 & 0xff000000;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar4 = *(int *)(lVar15 + 0x38);
  cVar5 = *(char *)(lVar15 + 0x44);
  bVar1 = iVar4 - 1U < 2 & (*(byte *)(lVar15 + 0x45) ^ 1);
  if (bVar1 == 0) {
    iVar17 = iVar3;
    if (cVar5 != '\0') goto LAB_02fc80c4;
    bVar7 = SBORROW4(iVar3,1);
    iVar17 = iVar3 + -1;
  }
  else {
    bVar7 = SBORROW4(iVar3,3);
    iVar17 = iVar3 + -3;
  }
  if (iVar17 == 0 || iVar17 < 0 != bVar7) {
    iVar17 = 1;
  }
LAB_02fc80c4:
  uVar22 = 0;
  iVar14 = 0;
  sVar6 = 0;
  local_c8 = 0;
  bVar7 = false;
  local_b8 = 0;
  do {
    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(*(long *)(lVar15 + 0x30),iVar14,&local_a0,*(undefined8 *)PTR_DAT_03d268d8);
    uVar16 = local_a0;
    sVar11 = FUN_02fc43d4(uVar22,cVar5 != '\0',iVar3,0);
    sVar12 = FUN_02fc43a4(uVar22,cVar5 != '\0',iVar3,0);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar13 = FUN_02fc4410(iVar14,iVar3,cVar5 != '\0',bVar1,iVar4 == 4,
                          *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x5c),0);
    if (((short)uStack_80 == -1) && (((uVar13 ^ 1) & 1) != 0)) {
      uVar20 = 0;
      bVar8 = false;
joined_r0x02fc8228:
      if (bVar1 == 0) goto LAB_02fc822c;
LAB_02fc81cc:
      if ((uVar22 & 0xffff) == 0) {
        iVar14 = 0;
      }
      else if (iVar3 + -1 == iVar14) {
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar14 = FUN_0276c0cc(0,iVar3 + -3,0);
      }
      else {
        iVar14 = iVar14 + -1;
      }
    }
    else {
      if (sVar12 == -1) {
        uVar20 = 1;
        bVar8 = true;
        goto joined_r0x02fc8228;
      }
      bVar8 = sVar11 == -1;
      uVar20 = 1;
      if (bVar1 != 0) goto LAB_02fc81cc;
LAB_02fc822c:
      iVar14 = (int)(short)uVar22;
    }
    if (sVar11 == -1) {
      bVar9 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar9 = FUN_02fc4410((int)sVar11,iVar3,cVar5 != '\0',bVar1,iVar4 == 4,
                           *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x5c),0);
      bVar9 = bVar9 & 1;
    }
    if (sVar12 == -1) {
      bVar10 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar10 = FUN_02fc4410((int)sVar12,iVar3,cVar5 != '\0',bVar1,iVar4 == 4,
                            *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x5c),0);
      bVar10 = bVar10 & 1;
    }
    local_88 = CONCAT71(local_88._1_7_,uVar20);
    sVar2 = sVar6;
    if ((uVar13 & 1) == 0) {
      sVar2 = -1;
    }
    uStack_80 = CONCAT26(sVar11,CONCAT24(sVar12,uVar22 << 0x10));
    local_78._0_3_ = CONCAT12(bVar8,CONCAT11(bVar10,bVar9));
    local_88 = CONCAT44((1.0 / (float)iVar17) * (float)iVar14,(undefined4)local_88);
    uStack_80 = CONCAT62(uStack_80._2_6_,sVar2);
    uStack_98 = uStack_80;
    local_a0 = local_88;
    local_90 = local_78;
    if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(uint *)(uVar16 + 0x120) = local_78;
    *(undefined8 *)(uVar16 + 0x118) = uStack_80;
    *(ulong *)(uVar16 + 0x110) = local_88;
    if ((uVar13 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar15,uVar16,*(undefined8 *)PTR_DAT_03d26938);
      local_c8 = uVar16;
      sVar6 = sVar6 + 1;
      if (!bVar7) {
        local_b8 = uVar16;
      }
      bVar7 = true;
    }
    if (!bVar8) {
      *(undefined8 *)(uVar16 + 0x70) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(uVar16 + 0x70),0);
      *(undefined4 *)(uVar16 + 0x78) = 2;
    }
    uVar22 = uVar22 + 1;
    if (iVar3 <= (short)uVar22) {
      *(ulong *)(param_1 + 0x20) = local_b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      puVar19 = (ulong *)(param_1 + 0x28);
      *puVar19 = local_c8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar19);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*puVar19 == 0) {
        uVar16 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(lVar15,(long)*(short *)(*puVar19 + 0x11c),&local_a0,
                     *(undefined8 *)PTR_DAT_03d268d8);
        uVar16 = local_a0;
      }
      *(ulong *)(param_1 + 0x38) = uVar16;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      goto LAB_02fc844c;
    }
    iVar14 = (int)(short)uVar22;
    lVar15 = *(long *)(param_1 + 0x10);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  } while( true );
}


