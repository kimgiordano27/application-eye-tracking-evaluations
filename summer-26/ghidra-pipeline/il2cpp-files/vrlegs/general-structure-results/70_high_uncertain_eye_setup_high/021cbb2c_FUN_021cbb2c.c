/*
FUNCTION_NAME: FUN_021cbb2c
ENTRY_POINT: 021cbb2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021cc318) */

undefined4 FUN_021cbb2c(long *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  ulong auStack_3e0 [6];
  undefined1 auStack_3b0 [8];
  ulong local_3a8;
  undefined1 *local_3a0;
  undefined8 local_398;
  long local_390;
  long local_388;
  ulong local_380;
  char local_374 [4];
  undefined1 *local_370;
  undefined1 *puStack_368;
  undefined1 auStack_360 [752];
  long local_70;
  
  local_390 = tpidr_el0;
  local_70 = *(long *)(local_390 + 0x28);
  if ((DAT_041221bf & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc1608);
    FUN_01ab69ac(PTR_DAT_03cc4458);
    FUN_01ab69ac(PTR_DAT_03cdb9f0);
    FUN_01ab69ac(PTR_DAT_03cc4478);
    FUN_01ab69ac(PTR_DAT_03cdb9f8);
    DAT_041221bf = 1;
  }
  plVar15 = (long *)(param_2 + 0x20);
  lVar14 = *plVar15;
  uVar17 = (ulong)*(uint *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x60) + 0xfc);
  lVar13 = -(uVar17 + 0xf & 0x1fffffff0);
  puVar18 = auStack_3b0 + lVar13;
  memset(auStack_360,0,0x2f0);
  local_374[0] = '\0';
  pcVar5 = (char *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(lVar14 + 0xc0) + 0x80) + 0xc0);
  uVar16 = 0;
  if (*pcVar5 == '\0') {
    memset(auStack_360,0,0x2f0);
    puVar6 = (undefined8 *)
             thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) + 0x60);
    local_398 = *puVar6;
    local_374[0] = '\0';
    FUN_027e0bd8(local_398,local_374,0);
    pcVar5 = (char *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) +
                                                0xc0);
    if (*pcVar5 == '\0') {
      plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) +
                                                  0x160);
      lVar14 = *plVar7;
      local_3a8 = uVar17;
      local_3a0 = puVar18;
      if (lVar14 == 0) {
        local_388 = 0;
      }
      else {
        local_388 = 0;
        if (*(int *)(lVar14 + 0x18) != 0) {
          local_388 = lVar14 + 0x20;
        }
      }
LAB_021cbd18:
      do {
        plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) +
                                                    0x160);
        if (*plVar7 == 0) {
          uVar16 = 0;
        }
        else {
          plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80)
                                                      + 0x160);
          if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar16 = *(undefined4 *)(*plVar7 + 0x18);
        }
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_021cc4f8(param_1,local_388,uVar16,*(undefined8 *)(*(long *)(*plVar15 + 0xc0) + 0x40));
        pcVar5 = (char *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) +
                                                    0xc0);
        if (*pcVar5 != '\0') goto LAB_021cbc7c;
        puVar6 = (undefined8 *)
                 thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) + 0x100);
        uVar12 = *puVar6;
        uVar1 = puVar6[1];
        plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) +
                                                    0x80);
        lVar14 = *plVar7;
        if (DAT_041221cf == '\0') {
          FUN_01ab69ac(PTR_DAT_03cdba00);
          DAT_041221cf = '\x01';
          if (lVar14 != 0) goto LAB_021cbe00;
LAB_021cbe38:
          uVar8 = 0;
          local_380 = 0;
        }
        else {
          if (lVar14 == 0) goto LAB_021cbe38;
LAB_021cbe00:
          uVar8 = FUN_025bb98c(lVar14,0);
          local_380 = (ulong)*(uint *)(lVar14 + 0x10);
        }
        puVar9 = (ulong *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80)
                                                     + 0x20);
        uVar17 = *puVar9;
        if (DAT_041221cf == '\0') {
          FUN_01ab69ac(PTR_DAT_03cdba00);
          DAT_041221cf = '\x01';
          if (uVar17 != 0) goto LAB_021cbe70;
LAB_021cbea4:
          uVar10 = 0;
        }
        else {
          if (uVar17 == 0) goto LAB_021cbea4;
LAB_021cbe70:
          uVar10 = FUN_025bb98c(uVar17,0);
          uVar17 = (ulong)*(uint *)(uVar17 + 0x10);
        }
        puVar9 = (ulong *)thunk_FUN_01a59484(param_1,*(undefined8 *)
                                                      (**(long **)(*plVar15 + 0xc0) + 0x80));
        uVar19 = *puVar9;
        if (DAT_041221cf == '\0') {
          FUN_01ab69ac(PTR_DAT_03cdba00);
          DAT_041221cf = '\x01';
          if (uVar19 != 0) goto LAB_021cbed4;
LAB_021cbf08:
          uVar11 = 0;
        }
        else {
          if (uVar19 == 0) goto LAB_021cbf08;
LAB_021cbed4:
          uVar11 = FUN_025bb98c(uVar19,0);
          uVar19 = (ulong)*(uint *)(uVar19 + 0x10);
        }
        puVar6 = (undefined8 *)
                 thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) + 0x140);
        local_370 = (undefined1 *)0x0;
        puStack_368 = (undefined1 *)0x0;
        FUN_01fccd94(&local_370,*puVar6,*(undefined8 *)PTR_DAT_03cdb9f8);
        puVar18 = local_370;
        uVar2 = local_380;
        *(undefined1 **)((long)auStack_3e0 + lVar13 + 0x18) = puStack_368;
        *(undefined8 *)((long)auStack_3e0 + lVar13 + 0x20) = 0;
        *(ulong *)((long)auStack_3e0 + lVar13 + 8) = uVar19;
        *(undefined1 **)((long)auStack_3e0 + lVar13 + 0x10) = puVar18;
        *(undefined8 *)((long)auStack_3e0 + lVar13) = uVar11;
        uVar3 = FUN_026ea61c(auStack_360,uVar12,uVar1,uVar8,uVar2,uVar10,uVar17);
        if ((((uVar3 >> 4 & 1) == 0) ||
            (puVar6 = (undefined8 *)
                      thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) +
                                                 0x100), *(char *)*puVar6 != '.')) ||
           ((plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                  0x80) + 0x100),
            *(char *)(*plVar7 + 1) != '\0' &&
            ((plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                   0x80) + 0x100),
             *(char *)(*plVar7 + 1) != '.' ||
             (plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                   0x80) + 0x100),
             *(char *)(*plVar7 + 2) != '\0')))))) {
          plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80)
                                                      + 0x40);
          if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(int *)(*plVar7 + 0x14) != 0) {
            plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                 0x80) + 0x40);
            if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar4 = uVar3;
            if ((*(byte *)(*plVar7 + 0x14) & 1) != 0) {
              uVar4 = FUN_026eab50(auStack_360,0);
            }
            plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                 0x80) + 0x40);
            if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if ((*(uint *)(*plVar7 + 0x14) & uVar4) != 0) goto LAB_021cbd18;
          }
          if ((uVar3 >> 4 & 1) != 0) {
            plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                 0x80) + 0x40);
            if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if ((*(char *)(*plVar7 + 0x10) != '\0') &&
               (uVar17 = (**(code **)(*param_1 + 0x1d8))
                                   (param_1,auStack_360,*(undefined8 *)(*param_1 + 0x1e0)),
               (uVar17 & 1) != 0)) {
              plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                   0x80) + 0xe0);
              if (*plVar7 == 0) {
                uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc4478);
                FUN_02265624(uVar12,*(undefined8 *)PTR_DAT_03cdb9f0);
                FUN_018820a8(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) + 0xe0,uVar12);
              }
              plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                   0x80) + 0xe0);
              lVar14 = *plVar7;
              puVar9 = (ulong *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) +
                                                                    0x80) + 0x80);
              uVar17 = *puVar9;
              if (DAT_041221cf == '\0') {
                FUN_01ab69ac(PTR_DAT_03cdba00);
                DAT_041221cf = '\x01';
                if (uVar17 != 0) goto LAB_021cc1c8;
LAB_021cc22c:
                uVar12 = 0;
              }
              else {
                if (uVar17 == 0) goto LAB_021cc22c;
LAB_021cc1c8:
                uVar12 = FUN_025bb98c(uVar17,0);
                uVar17 = (ulong)*(uint *)(uVar17 + 0x10);
              }
              auVar20 = FUN_026ea9f4(auStack_360,0);
              if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = System_Threading_ReaderWriterLock__HasWriterLock
                                 (uVar12,uVar17,auVar20._0_8_,auVar20._8_8_,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c(uVar12,uVar12);
              }
              FUN_02265dfc(lVar14,uVar12,*(undefined8 *)PTR_DAT_03cc4458);
            }
          }
        }
        else {
          plVar7 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80)
                                                      + 0x40);
          if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(char *)(*plVar7 + 0x20) == '\0') goto LAB_021cbd18;
        }
        uVar17 = (**(code **)(*param_1 + 0x1c8))
                           (param_1,auStack_360,*(undefined8 *)(*param_1 + 0x1d0));
        puVar18 = local_3a0;
      } while ((uVar17 & 1) == 0);
      local_370 = auStack_360;
      puStack_368 = local_3a0;
      lVar13 = *(long *)(*param_1 + 0x1f0);
      (**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 8),lVar13,param_1,&local_370,local_3a0);
      FUN_01ab69d4(param_1,*(long *)(**(long **)(*plVar15 + 0xc0) + 0x80) + 0x120,puVar18,local_3a8)
      ;
      uVar16 = 1;
    }
    else {
LAB_021cbc7c:
      uVar16 = 0;
    }
    if (local_374[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(local_398,0);
    }
  }
  if (*(long *)(local_390 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}


