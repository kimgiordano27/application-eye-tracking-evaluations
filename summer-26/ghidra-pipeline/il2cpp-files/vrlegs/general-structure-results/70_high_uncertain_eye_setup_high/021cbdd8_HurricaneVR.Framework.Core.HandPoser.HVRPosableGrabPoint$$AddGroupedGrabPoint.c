/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint$$AddGroupedGrabPoint
ENTRY_POINT: 021cbdd8
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

undefined4 HurricaneVR_Framework_Core_HandPoser_HVRPosableGrabPoint__AddGroupedGrabPoint(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 in_x7;
  long unaff_x19;
  long *unaff_x21;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar16 [16];
  
  do {
    plVar5 = (long *)thunk_FUN_01a59484();
    lVar13 = *plVar5;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (lVar13 == 0) goto LAB_021cbe38;
LAB_021cbe00:
      uVar6 = FUN_025bb98c(lVar13,0);
      *(ulong *)(unaff_x19 + 0x30) = (ulong)*(uint *)(lVar13 + 0x10);
    }
    else {
      if (lVar13 != 0) goto LAB_021cbe00;
LAB_021cbe38:
      uVar6 = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
    puVar7 = (ulong *)thunk_FUN_01a59484();
    uVar14 = *puVar7;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (uVar14 == 0) goto LAB_021cbea4;
LAB_021cbe70:
      uVar8 = FUN_025bb98c(uVar14,0);
      uVar14 = (ulong)*(uint *)(uVar14 + 0x10);
    }
    else {
      if (uVar14 != 0) goto LAB_021cbe70;
LAB_021cbea4:
      uVar8 = 0;
    }
    puVar7 = (ulong *)thunk_FUN_01a59484();
    uVar15 = *puVar7;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (uVar15 == 0) goto LAB_021cbf08;
LAB_021cbed4:
      uVar9 = FUN_025bb98c(uVar15,0);
      uVar15 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      if (uVar15 != 0) goto LAB_021cbed4;
LAB_021cbf08:
      uVar9 = 0;
    }
    puVar10 = (undefined8 *)thunk_FUN_01a59484();
    puVar1 = PTR_DAT_03cdb9f8;
    uVar11 = *puVar10;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    FUN_01fccd94(unaff_x19 + 0x40,uVar11,*(undefined8 *)puVar1);
    uVar2 = FUN_026ea61c(unaff_x19 + 0x50,unaff_x28,unaff_x27,uVar6,
                         *(undefined8 *)(unaff_x19 + 0x30),uVar8,uVar14,in_x7,uVar9,uVar15,
                         *(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x48),0);
    if ((((uVar2 >> 4 & 1) == 0) ||
        (puVar10 = (undefined8 *)thunk_FUN_01a59484(), *(char *)*puVar10 != '.')) ||
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
        uVar3 = uVar2;
        if ((*(byte *)(*plVar5 + 0x14) & 1) != 0) {
          uVar3 = FUN_026eab50(unaff_x19 + 0x50,0);
        }
        plVar5 = (long *)thunk_FUN_01a59484();
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(uint *)(*plVar5 + 0x14) & uVar3) != 0) goto LAB_021cbd18;
      }
      if ((uVar2 >> 4 & 1) != 0) {
        plVar5 = (long *)thunk_FUN_01a59484();
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(char *)(*plVar5 + 0x10) != '\0') &&
           (uVar14 = (**(code **)(*unaff_x21 + 0x1d8))(), (uVar14 & 1) != 0)) {
          plVar5 = (long *)thunk_FUN_01a59484();
          if (*plVar5 == 0) {
            uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc4478);
            FUN_02265624(uVar6,*(undefined8 *)PTR_DAT_03cdb9f0);
            FUN_018820a8();
          }
          plVar5 = (long *)thunk_FUN_01a59484();
          lVar13 = *plVar5;
          puVar7 = (ulong *)thunk_FUN_01a59484();
          uVar14 = *puVar7;
          if (DAT_041221cf == '\0') {
            FUN_01ab69ac(PTR_DAT_03cdba00);
            DAT_041221cf = '\x01';
            if (uVar14 == 0) goto LAB_021cc22c;
LAB_021cc1c8:
            uVar6 = FUN_025bb98c(uVar14,0);
            uVar14 = (ulong)*(uint *)(uVar14 + 0x10);
          }
          else {
            if (uVar14 != 0) goto LAB_021cc1c8;
LAB_021cc22c:
            uVar6 = 0;
          }
          auVar16 = FUN_026ea9f4(unaff_x19 + 0x50,0);
          if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar6 = System_Threading_ReaderWriterLock__HasWriterLock
                            (uVar6,uVar14,auVar16._0_8_,auVar16._8_8_,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar6,uVar6);
          }
          FUN_02265dfc(lVar13,uVar6,*(undefined8 *)PTR_DAT_03cc4458);
        }
      }
LAB_021cc290:
      uVar14 = (**(code **)(*unaff_x21 + 0x1c8))();
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x21;
        *(long *)(unaff_x19 + 0x40) = unaff_x19 + 0x50;
        *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
        (**(code **)(*(long *)(lVar13 + 0x1f0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar13 + 0x1f0) + 8));
        FUN_01ab69d4();
        uVar12 = 1;
        goto LAB_021cbc84;
      }
    }
    else {
      plVar5 = (long *)thunk_FUN_01a59484();
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(char *)(*plVar5 + 0x20) != '\0') goto LAB_021cc290;
    }
LAB_021cbd18:
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
    pcVar4 = (char *)thunk_FUN_01a59484();
    if (*pcVar4 != '\0') {
      uVar12 = 0;
LAB_021cbc84:
      if (*(char *)(unaff_x19 + 0x3c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x19 + 0x18),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar12;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar10 = (undefined8 *)thunk_FUN_01a59484();
    unaff_x28 = *puVar10;
    unaff_x27 = puVar10[1];
  } while( true );
}


