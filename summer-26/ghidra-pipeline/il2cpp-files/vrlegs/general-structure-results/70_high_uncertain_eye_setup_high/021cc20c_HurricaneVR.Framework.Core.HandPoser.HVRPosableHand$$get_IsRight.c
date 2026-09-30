/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPosableHand$$get_IsRight
ENTRY_POINT: 021cc20c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021cc318) */

undefined4 HurricaneVR_Framework_Core_HandPoser_HVRPosableHand__get_IsRight(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_x7;
  long unaff_x19;
  long *unaff_x21;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x29;
  undefined1 auVar18 [16];
  
LAB_021cbd18:
  do {
    plVar5 = (long *)thunk_FUN_01a59484();
    if ((*plVar5 != 0) && (plVar5 = (long *)thunk_FUN_01a59484(), *plVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_021cc4f8();
    pcVar6 = (char *)thunk_FUN_01a59484();
    if (*pcVar6 != '\0') {
      uVar14 = 0;
      goto LAB_021cbc84;
    }
    puVar7 = (undefined8 *)thunk_FUN_01a59484();
    uVar12 = *puVar7;
    uVar1 = puVar7[1];
    plVar5 = (long *)thunk_FUN_01a59484();
    lVar15 = *plVar5;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (lVar15 == 0) goto LAB_021cbe38;
LAB_021cbe00:
      uVar8 = FUN_025bb98c(lVar15,0);
      *(ulong *)(unaff_x19 + 0x30) = (ulong)*(uint *)(lVar15 + 0x10);
    }
    else {
      if (lVar15 != 0) goto LAB_021cbe00;
LAB_021cbe38:
      uVar8 = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
    puVar9 = (ulong *)thunk_FUN_01a59484();
    uVar16 = *puVar9;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (uVar16 == 0) goto LAB_021cbea4;
LAB_021cbe70:
      uVar10 = FUN_025bb98c(uVar16,0);
      uVar16 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      if (uVar16 != 0) goto LAB_021cbe70;
LAB_021cbea4:
      uVar10 = 0;
    }
    puVar9 = (ulong *)thunk_FUN_01a59484();
    uVar17 = *puVar9;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (uVar17 == 0) goto LAB_021cbf08;
LAB_021cbed4:
      uVar11 = FUN_025bb98c(uVar17,0);
      uVar17 = (ulong)*(uint *)(uVar17 + 0x10);
    }
    else {
      if (uVar17 != 0) goto LAB_021cbed4;
LAB_021cbf08:
      uVar11 = 0;
    }
    puVar7 = (undefined8 *)thunk_FUN_01a59484();
    puVar2 = PTR_DAT_03cdb9f8;
    uVar13 = *puVar7;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    FUN_01fccd94(unaff_x19 + 0x40,uVar13,*(undefined8 *)puVar2);
    uVar3 = FUN_026ea61c(unaff_x19 + 0x50,uVar12,uVar1,uVar8,*(undefined8 *)(unaff_x19 + 0x30),
                         uVar10,uVar16,in_x7,uVar11,uVar17,*(undefined8 *)(unaff_x19 + 0x40),
                         *(undefined8 *)(unaff_x19 + 0x48),0);
    if ((((uVar3 >> 4 & 1) == 0) ||
        (puVar7 = (undefined8 *)thunk_FUN_01a59484(), *(char *)*puVar7 != '.')) ||
       ((plVar5 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar5 + 1) != '\0' &&
        ((plVar5 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar5 + 1) != '.' ||
         (plVar5 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar5 + 2) != '\0')))))) {
      plVar5 = (long *)thunk_FUN_01a59484();
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar5 + 0x14) != 0) {
        plVar5 = (long *)thunk_FUN_01a59484();
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar4 = uVar3;
        if ((*(byte *)(*plVar5 + 0x14) & 1) != 0) {
          uVar4 = FUN_026eab50(unaff_x19 + 0x50,0);
        }
        plVar5 = (long *)thunk_FUN_01a59484();
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(uint *)(*plVar5 + 0x14) & uVar4) != 0) goto LAB_021cbd18;
      }
      if ((uVar3 >> 4 & 1) != 0) {
        plVar5 = (long *)thunk_FUN_01a59484();
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(char *)(*plVar5 + 0x10) != '\0') &&
           (uVar16 = (**(code **)(*unaff_x21 + 0x1d8))(), (uVar16 & 1) != 0)) {
          plVar5 = (long *)thunk_FUN_01a59484();
          if (*plVar5 == 0) {
            uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc4478);
            FUN_02265624(uVar12,*(undefined8 *)PTR_DAT_03cdb9f0);
            FUN_018820a8();
          }
          plVar5 = (long *)thunk_FUN_01a59484();
          lVar15 = *plVar5;
          puVar9 = (ulong *)thunk_FUN_01a59484();
          uVar16 = *puVar9;
          if (DAT_041221cf == '\0') {
            FUN_01ab69ac(PTR_DAT_03cdba00);
            DAT_041221cf = '\x01';
            if (uVar16 == 0) goto LAB_021cc22c;
LAB_021cc1c8:
            uVar12 = FUN_025bb98c(uVar16,0);
            uVar16 = (ulong)*(uint *)(uVar16 + 0x10);
          }
          else {
            if (uVar16 != 0) goto LAB_021cc1c8;
LAB_021cc22c:
            uVar12 = 0;
          }
          auVar18 = FUN_026ea9f4(unaff_x19 + 0x50,0);
          if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = System_Threading_ReaderWriterLock__HasWriterLock
                             (uVar12,uVar16,auVar18._0_8_,auVar18._8_8_,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar12,uVar12);
          }
          FUN_02265dfc(lVar15,uVar12,*(undefined8 *)PTR_DAT_03cc4458);
        }
      }
    }
    else {
      plVar5 = (long *)thunk_FUN_01a59484();
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(char *)(*plVar5 + 0x20) == '\0') goto LAB_021cbd18;
    }
    uVar16 = (**(code **)(*unaff_x21 + 0x1c8))();
    if ((uVar16 & 1) != 0) {
      lVar15 = *unaff_x21;
      *(long *)(unaff_x19 + 0x40) = unaff_x19 + 0x50;
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
      (**(code **)(*(long *)(lVar15 + 0x1f0) + 0x10))
                (*(undefined8 *)(*(long *)(lVar15 + 0x1f0) + 8));
      FUN_01ab69d4();
      uVar14 = 1;
LAB_021cbc84:
      if (*(char *)(unaff_x19 + 0x3c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x19 + 0x18),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar14;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


