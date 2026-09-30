/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint$$.ctor
ENTRY_POINT: 021cc13c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021cc318) */

undefined4 HurricaneVR_Framework_Core_HandPoser_HVRPosableGrabPoint___ctor(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 in_x7;
  long unaff_x19;
  long lVar15;
  long *unaff_x21;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  long unaff_x29;
  undefined1 auVar19 [16];
  
code_r0x021cc13c:
  uVar11 = thunk_FUN_01a89e68(*param_1);
  FUN_02265624(uVar11,*(undefined8 *)PTR_DAT_03cdb9f0);
  FUN_018820a8();
LAB_021cc178:
  plVar12 = (long *)thunk_FUN_01a59484();
  lVar15 = *plVar12;
  plVar12 = (long *)thunk_FUN_01a59484();
  lVar17 = *plVar12;
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar17 == 0) {
    uVar11 = 0;
    uVar16 = 0;
  }
  else {
    uVar11 = FUN_025bb98c(lVar17,0);
    uVar16 = *(undefined4 *)(lVar17 + 0x10);
  }
  auVar19 = FUN_026ea9f4(unaff_x19 + 0x50,0);
  if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = System_Threading_ReaderWriterLock__HasWriterLock
                     (uVar11,uVar16,auVar19._0_8_,auVar19._8_8_,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar11,uVar11);
  }
  FUN_02265dfc(lVar15,uVar11,*(undefined8 *)PTR_DAT_03cc4458);
  do {
    uVar13 = (**(code **)(*unaff_x21 + 0x1c8))();
    if ((uVar13 & 1) != 0) {
      lVar15 = *unaff_x21;
      *(long *)(unaff_x19 + 0x40) = unaff_x19 + 0x50;
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
      (**(code **)(*(long *)(lVar15 + 0x1f0) + 0x10))
                (*(undefined8 *)(*(long *)(lVar15 + 0x1f0) + 8));
      FUN_01ab69d4();
      uVar16 = 1;
LAB_021cbc84:
      if (*(char *)(unaff_x19 + 0x3c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x19 + 0x18),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar16;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
LAB_021cbd18:
    do {
      plVar12 = (long *)thunk_FUN_01a59484();
      if ((*plVar12 != 0) && (plVar12 = (long *)thunk_FUN_01a59484(), *plVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_021cc4f8();
      pcVar5 = (char *)thunk_FUN_01a59484();
      if (*pcVar5 != '\0') {
        uVar16 = 0;
        goto LAB_021cbc84;
      }
      puVar6 = (undefined8 *)thunk_FUN_01a59484();
      uVar11 = *puVar6;
      uVar1 = puVar6[1];
      plVar12 = (long *)thunk_FUN_01a59484();
      lVar15 = *plVar12;
      if (DAT_041221cf == '\0') {
        FUN_01ab69ac(PTR_DAT_03cdba00);
        DAT_041221cf = '\x01';
        if (lVar15 == 0) goto LAB_021cbe38;
LAB_021cbe00:
        uVar7 = FUN_025bb98c(lVar15,0);
        *(ulong *)(unaff_x19 + 0x30) = (ulong)*(uint *)(lVar15 + 0x10);
      }
      else {
        if (lVar15 != 0) goto LAB_021cbe00;
LAB_021cbe38:
        uVar7 = 0;
        *(undefined8 *)(unaff_x19 + 0x30) = 0;
      }
      puVar8 = (ulong *)thunk_FUN_01a59484();
      uVar13 = *puVar8;
      if (DAT_041221cf == '\0') {
        FUN_01ab69ac(PTR_DAT_03cdba00);
        DAT_041221cf = '\x01';
        if (uVar13 == 0) goto LAB_021cbea4;
LAB_021cbe70:
        uVar9 = FUN_025bb98c(uVar13,0);
        uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
      }
      else {
        if (uVar13 != 0) goto LAB_021cbe70;
LAB_021cbea4:
        uVar9 = 0;
      }
      puVar8 = (ulong *)thunk_FUN_01a59484();
      uVar18 = *puVar8;
      if (DAT_041221cf == '\0') {
        FUN_01ab69ac(PTR_DAT_03cdba00);
        DAT_041221cf = '\x01';
        if (uVar18 == 0) goto LAB_021cbf08;
LAB_021cbed4:
        uVar10 = FUN_025bb98c(uVar18,0);
        uVar18 = (ulong)*(uint *)(uVar18 + 0x10);
      }
      else {
        if (uVar18 != 0) goto LAB_021cbed4;
LAB_021cbf08:
        uVar10 = 0;
      }
      puVar6 = (undefined8 *)thunk_FUN_01a59484();
      puVar2 = PTR_DAT_03cdb9f8;
      uVar14 = *puVar6;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      FUN_01fccd94(unaff_x19 + 0x40,uVar14,*(undefined8 *)puVar2);
      uVar3 = FUN_026ea61c(unaff_x19 + 0x50,uVar11,uVar1,uVar7,*(undefined8 *)(unaff_x19 + 0x30),
                           uVar9,uVar13,in_x7,uVar10,uVar18,*(undefined8 *)(unaff_x19 + 0x40),
                           *(undefined8 *)(unaff_x19 + 0x48),0);
      if ((((uVar3 >> 4 & 1) == 0) ||
          (puVar6 = (undefined8 *)thunk_FUN_01a59484(), *(char *)*puVar6 != '.')) ||
         ((plVar12 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar12 + 1) != '\0' &&
          ((plVar12 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar12 + 1) != '.' ||
           (plVar12 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar12 + 2) != '\0')))))) {
        plVar12 = (long *)thunk_FUN_01a59484();
        if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(*plVar12 + 0x14) != 0) {
          plVar12 = (long *)thunk_FUN_01a59484();
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar4 = uVar3;
          if ((*(byte *)(*plVar12 + 0x14) & 1) != 0) {
            uVar4 = FUN_026eab50(unaff_x19 + 0x50,0);
          }
          plVar12 = (long *)thunk_FUN_01a59484();
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((*(uint *)(*plVar12 + 0x14) & uVar4) != 0) goto LAB_021cbd18;
        }
        if ((uVar3 >> 4 & 1) != 0) {
          plVar12 = (long *)thunk_FUN_01a59484();
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((*(char *)(*plVar12 + 0x10) != '\0') &&
             (uVar13 = (**(code **)(*unaff_x21 + 0x1d8))(), (uVar13 & 1) != 0)) {
            plVar12 = (long *)thunk_FUN_01a59484();
            param_1 = (undefined8 *)PTR_DAT_03cc4478;
            if (*plVar12 == 0) goto code_r0x021cc13c;
            goto LAB_021cc178;
          }
        }
        break;
      }
      plVar12 = (long *)thunk_FUN_01a59484();
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    } while (*(char *)(*plVar12 + 0x20) == '\0');
  } while( true );
}


