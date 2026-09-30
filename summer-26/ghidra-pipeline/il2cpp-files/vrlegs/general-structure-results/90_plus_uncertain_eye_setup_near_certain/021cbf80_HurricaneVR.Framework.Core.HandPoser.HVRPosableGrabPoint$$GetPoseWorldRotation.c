/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint$$GetPoseWorldRotation
ENTRY_POINT: 021cbf80
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

undefined4
HurricaneVR_Framework_Core_HandPoser_HVRPosableGrabPoint__GetPoseWorldRotation(uint param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 in_x7;
  long unaff_x19;
  long lVar14;
  long *unaff_x21;
  undefined4 uVar15;
  ulong uVar16;
  uint unaff_w27;
  long unaff_x29;
  undefined1 auVar17 [16];
  
  do {
    if ((((param_1 >> 4 & 1) == 0) ||
        (puVar8 = (undefined8 *)thunk_FUN_01a59484(), *(char *)*puVar8 != '.')) ||
       ((plVar9 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar9 + 1) != '\0' &&
        ((plVar9 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar9 + 1) != '.' ||
         (plVar9 = (long *)thunk_FUN_01a59484(), *(char *)(*plVar9 + 2) != '\0')))))) {
      plVar9 = (long *)thunk_FUN_01a59484();
      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar9 + 0x14) != 0) {
        plVar9 = (long *)thunk_FUN_01a59484();
        if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar3 = unaff_w27;
        if ((*(byte *)(*plVar9 + 0x14) & 1) != 0) {
          uVar3 = FUN_026eab50(unaff_x19 + 0x50,0);
        }
        plVar9 = (long *)thunk_FUN_01a59484();
        if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(uint *)(*plVar9 + 0x14) & uVar3) != 0) goto LAB_021cbd18;
      }
      if ((unaff_w27 >> 4 & 1) != 0) {
        plVar9 = (long *)thunk_FUN_01a59484();
        if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(char *)(*plVar9 + 0x10) != '\0') &&
           (uVar10 = (**(code **)(*unaff_x21 + 0x1d8))(), (uVar10 & 1) != 0)) {
          plVar9 = (long *)thunk_FUN_01a59484();
          if (*plVar9 == 0) {
            uVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc4478);
            FUN_02265624(uVar11,*(undefined8 *)PTR_DAT_03cdb9f0);
            FUN_018820a8();
          }
          plVar9 = (long *)thunk_FUN_01a59484();
          lVar14 = *plVar9;
          puVar12 = (ulong *)thunk_FUN_01a59484();
          uVar10 = *puVar12;
          if (DAT_041221cf == '\0') {
            FUN_01ab69ac(PTR_DAT_03cdba00);
            DAT_041221cf = '\x01';
            if (uVar10 == 0) goto LAB_021cc22c;
LAB_021cc1c8:
            uVar11 = FUN_025bb98c(uVar10,0);
            uVar10 = (ulong)*(uint *)(uVar10 + 0x10);
          }
          else {
            if (uVar10 != 0) goto LAB_021cc1c8;
LAB_021cc22c:
            uVar11 = 0;
          }
          auVar17 = FUN_026ea9f4(unaff_x19 + 0x50,0);
          if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = System_Threading_ReaderWriterLock__HasWriterLock
                             (uVar11,uVar10,auVar17._0_8_,auVar17._8_8_,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar11,uVar11);
          }
          FUN_02265dfc(lVar14,uVar11,*(undefined8 *)PTR_DAT_03cc4458);
        }
      }
LAB_021cc290:
      uVar10 = (**(code **)(*unaff_x21 + 0x1c8))();
      if ((uVar10 & 1) != 0) {
        lVar14 = *unaff_x21;
        *(long *)(unaff_x19 + 0x40) = unaff_x19 + 0x50;
        *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
        (**(code **)(*(long *)(lVar14 + 0x1f0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar14 + 0x1f0) + 8));
        FUN_01ab69d4();
        uVar15 = 1;
        goto LAB_021cbc84;
      }
    }
    else {
      plVar9 = (long *)thunk_FUN_01a59484();
      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(char *)(*plVar9 + 0x20) != '\0') goto LAB_021cc290;
    }
LAB_021cbd18:
    plVar9 = (long *)thunk_FUN_01a59484();
    if ((*plVar9 != 0) && (plVar9 = (long *)thunk_FUN_01a59484(), *plVar9 == 0)) {
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
      uVar15 = 0;
LAB_021cbc84:
      if (*(char *)(unaff_x19 + 0x3c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x19 + 0x18),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar15;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar8 = (undefined8 *)thunk_FUN_01a59484();
    uVar11 = *puVar8;
    uVar1 = puVar8[1];
    plVar9 = (long *)thunk_FUN_01a59484();
    lVar14 = *plVar9;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (lVar14 == 0) goto LAB_021cbe38;
LAB_021cbe00:
      uVar5 = FUN_025bb98c(lVar14,0);
      *(ulong *)(unaff_x19 + 0x30) = (ulong)*(uint *)(lVar14 + 0x10);
    }
    else {
      if (lVar14 != 0) goto LAB_021cbe00;
LAB_021cbe38:
      uVar5 = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
    puVar12 = (ulong *)thunk_FUN_01a59484();
    uVar10 = *puVar12;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (uVar10 == 0) goto LAB_021cbea4;
LAB_021cbe70:
      uVar6 = FUN_025bb98c(uVar10,0);
      uVar10 = (ulong)*(uint *)(uVar10 + 0x10);
    }
    else {
      if (uVar10 != 0) goto LAB_021cbe70;
LAB_021cbea4:
      uVar6 = 0;
    }
    puVar12 = (ulong *)thunk_FUN_01a59484();
    uVar16 = *puVar12;
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
      if (uVar16 == 0) goto LAB_021cbf08;
LAB_021cbed4:
      uVar7 = FUN_025bb98c(uVar16,0);
      uVar16 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      if (uVar16 != 0) goto LAB_021cbed4;
LAB_021cbf08:
      uVar7 = 0;
    }
    puVar8 = (undefined8 *)thunk_FUN_01a59484();
    puVar2 = PTR_DAT_03cdb9f8;
    uVar13 = *puVar8;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    FUN_01fccd94(unaff_x19 + 0x40,uVar13,*(undefined8 *)puVar2);
    param_1 = FUN_026ea61c(unaff_x19 + 0x50,uVar11,uVar1,uVar5,*(undefined8 *)(unaff_x19 + 0x30),
                           uVar6,uVar10,in_x7,uVar7,uVar16,*(undefined8 *)(unaff_x19 + 0x40),
                           *(undefined8 *)(unaff_x19 + 0x48),0);
    unaff_w27 = param_1;
  } while( true );
}


