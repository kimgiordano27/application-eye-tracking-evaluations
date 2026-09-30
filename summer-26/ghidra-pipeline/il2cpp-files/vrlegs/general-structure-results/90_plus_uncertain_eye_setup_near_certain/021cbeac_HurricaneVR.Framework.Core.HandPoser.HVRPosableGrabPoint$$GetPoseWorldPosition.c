/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint$$GetPoseWorldPosition
ENTRY_POINT: 021cbeac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021cc318) */

undefined4 HurricaneVR_Framework_Core_HandPoser_HVRPosableGrabPoint__GetPoseWorldPosition(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 in_x7;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  long *unaff_x21;
  undefined4 uVar11;
  undefined8 unaff_x23;
  ulong unaff_x24;
  ulong uVar12;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar13 [16];
  
  do {
    puVar5 = (ulong *)thunk_FUN_01a59484();
    uVar12 = *puVar5;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (uVar12 == 0) goto LAB_021cbf08;
LAB_021cbed4:
      uVar6 = FUN_025bb98c(uVar12,0);
      uVar12 = (ulong)*(uint *)(uVar12 + 0x10);
    }
    else {
      if (uVar12 != 0) goto LAB_021cbed4;
LAB_021cbf08:
      uVar6 = 0;
    }
    puVar7 = (undefined8 *)thunk_FUN_01a59484();
    puVar1 = PTR_DAT_03cdb9f8;
    uVar9 = *puVar7;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    FUN_01fccd94(unaff_x19 + 0x40,uVar9,*(undefined8 *)puVar1);
    uVar2 = FUN_026ea61c(unaff_x19 + 0x50,unaff_x28,unaff_x27,unaff_x20,
                         *(undefined8 *)(unaff_x19 + 0x30),unaff_x23,unaff_x24,in_x7,uVar6,uVar12,
                         *(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x48),0);
    if ((((uVar2 >> 4 & 1) == 0) ||
        (puVar7 = (undefined8 *)thunk_FUN_01a59484(), *(char *)*puVar7 != '.')) ||
       ((plVar8 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar8 + 1) != '\0' &&
        ((plVar8 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar8 + 1) != '.' ||
         (plVar8 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar8 + 2) != '\0')))))) {
      plVar8 = (long *)thunk_FUN_01a59484();
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar8 + 0x14) != 0) {
        plVar8 = (long *)thunk_FUN_01a59484();
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar3 = uVar2;
        if ((*(byte *)(*plVar8 + 0x14) & 1) != 0) {
          uVar3 = FUN_026eab50(unaff_x19 + 0x50,0);
        }
        plVar8 = (long *)thunk_FUN_01a59484();
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(uint *)(*plVar8 + 0x14) & uVar3) != 0) goto LAB_021cbd18;
      }
      if ((uVar2 >> 4 & 1) != 0) {
        plVar8 = (long *)thunk_FUN_01a59484();
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(char *)(*plVar8 + 0x10) != '\0') &&
           (uVar12 = (**(code **)(*unaff_x21 + 0x1d8))(), (uVar12 & 1) != 0)) {
          plVar8 = (long *)thunk_FUN_01a59484();
          if (*plVar8 == 0) {
            uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc4478);
            FUN_02265624(uVar6,*(undefined8 *)PTR_DAT_03cdb9f0);
            FUN_018820a8();
          }
          plVar8 = (long *)thunk_FUN_01a59484();
          lVar10 = *plVar8;
          puVar5 = (ulong *)thunk_FUN_01a59484();
          uVar12 = *puVar5;
          if (DAT_041221cf == '\0') {
            FUN_01ab69ac(PTR_DAT_03cdba00);
            DAT_041221cf = '\x01';
            if (uVar12 == 0) goto LAB_021cc22c;
LAB_021cc1c8:
            uVar6 = FUN_025bb98c(uVar12,0);
            uVar12 = (ulong)*(uint *)(uVar12 + 0x10);
          }
          else {
            if (uVar12 != 0) goto LAB_021cc1c8;
LAB_021cc22c:
            uVar6 = 0;
          }
          auVar13 = FUN_026ea9f4(unaff_x19 + 0x50,0);
          if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar6 = System_Threading_ReaderWriterLock__HasWriterLock
                            (uVar6,uVar12,auVar13._0_8_,auVar13._8_8_,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar6,uVar6);
          }
          FUN_02265dfc(lVar10,uVar6,*(undefined8 *)PTR_DAT_03cc4458);
        }
      }
LAB_021cc290:
      uVar12 = (**(code **)(*unaff_x21 + 0x1c8))();
      if ((uVar12 & 1) != 0) {
        lVar10 = *unaff_x21;
        *(long *)(unaff_x19 + 0x40) = unaff_x19 + 0x50;
        *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
        (**(code **)(*(long *)(lVar10 + 0x1f0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar10 + 0x1f0) + 8));
        FUN_01ab69d4();
        uVar11 = 1;
        goto LAB_021cbc84;
      }
    }
    else {
      plVar8 = (long *)thunk_FUN_01a59484();
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(char *)(*plVar8 + 0x20) != '\0') goto LAB_021cc290;
    }
LAB_021cbd18:
    plVar8 = (long *)thunk_FUN_01a59484();
    if ((*plVar8 != 0) && (plVar8 = (long *)thunk_FUN_01a59484(), *plVar8 == 0)) {
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
      uVar11 = 0;
LAB_021cbc84:
      if (*(char *)(unaff_x19 + 0x3c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x19 + 0x18),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar11;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)thunk_FUN_01a59484();
    unaff_x28 = *puVar7;
    unaff_x27 = puVar7[1];
    plVar8 = (long *)thunk_FUN_01a59484();
    lVar10 = *plVar8;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (lVar10 == 0) goto LAB_021cbe38;
LAB_021cbe00:
      unaff_x20 = FUN_025bb98c(lVar10,0);
      *(ulong *)(unaff_x19 + 0x30) = (ulong)*(uint *)(lVar10 + 0x10);
    }
    else {
      if (lVar10 != 0) goto LAB_021cbe00;
LAB_021cbe38:
      unaff_x20 = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
    puVar5 = (ulong *)thunk_FUN_01a59484();
    unaff_x24 = *puVar5;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (unaff_x24 == 0) goto LAB_021cbea4;
LAB_021cbe70:
      unaff_x23 = FUN_025bb98c(unaff_x24,0);
      unaff_x24 = (ulong)*(uint *)(unaff_x24 + 0x10);
    }
    else {
      if (unaff_x24 != 0) goto LAB_021cbe70;
LAB_021cbea4:
      unaff_x23 = 0;
    }
  } while( true );
}


