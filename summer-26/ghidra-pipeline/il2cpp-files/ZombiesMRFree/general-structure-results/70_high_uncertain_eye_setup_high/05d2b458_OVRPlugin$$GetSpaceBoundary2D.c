/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 05d2b458
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d2b854) */

void OVRPlugin__GetSpaceBoundary2D(ulong param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *plVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fStack000000000000006c;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4a90);
    FUN_02fe925c(PTR_DAT_06fb54f8);
    FUN_02fe925c(PTR_DAT_06f70b30);
    FUN_02fe925c(PTR_DAT_06fb8ce0);
    FUN_02fe925c(PTR_DAT_06fb8ce8);
    FUN_02fe925c(PTR_DAT_06f70b38);
    FUN_02fe925c(PTR_DAT_06fb8cf0);
    FUN_02fe925c(PTR_DAT_06fb8cf8);
    *(undefined1 *)(unaff_x19 + 0x94d) = 1;
  }
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (plVar12 = *(long **)(*(long *)(param_2 + 0x20) + 0x58), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06fb8ce0) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05d2b538;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06fb8ce0,0);
LAB_05d2b538:
  puVar3 = PTR_DAT_06f70b30;
  plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
  puVar7 = PTR_DAT_06fb8ce8;
  puVar6 = PTR_DAT_06fb54f8;
  puVar5 = PTR_DAT_06fb4a90;
  puVar4 = PTR_DAT_06f70b38;
  fVar2 = DAT_01369bf8;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  fStack000000000000006c = DAT_01369a04;
  do {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05d2b5d8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar4,0);
LAB_05d2b5d8:
    uVar10 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_05d2b7e4;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05d2b634;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar7,0);
LAB_05d2b634:
    auVar22 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (auVar22._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    plVar13 = *(long **)(param_2 + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar9 = *plVar13;
    uVar1 = *(undefined4 *)(auVar22._0_8_ + 0x10);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_05d2b6a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar13,*(long *)puVar6,4);
LAB_05d2b6a4:
    uVar10 = (*(code *)*puVar8)(plVar13,uVar1);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar17 = 0;
      uVar18 = 0;
      uVar15 = FUN_06905ae4(0,0,0,*(long *)(param_2 + 0x38),0);
      fVar14 = auVar22._12_4_;
      if (auVar22._8_4_ <= fVar14) {
        fVar21 = 1.0;
        fVar14 = 0.0;
LAB_05d2b758:
        fVar20 = 0.0;
        fVar16 = 1.0;
      }
      else {
        if (fVar14 <= 0.0) {
          fVar14 = 1.0;
          fVar21 = 0.0;
          goto LAB_05d2b758;
        }
        fVar14 = (auVar22._8_4_ / fVar14) * 0.5;
        fVar16 = fVar14;
        if (1.0 < fVar14) {
          fVar16 = 1.0;
        }
        if (fVar14 < 0.0) {
          fVar16 = 0.0;
        }
        fVar14 = fVar16 * 0.0 + 1.0;
        fVar21 = fStack000000000000006c - fVar16 * fStack000000000000006c;
        fVar20 = fVar2 - fVar16 * fVar2;
        fVar16 = fVar14;
      }
      lVar9 = *(long *)puVar5;
      fVar19 = *(float *)(param_2 + 0x40);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar9 = *(long *)puVar5;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      *(float *)(lVar9 + 0x18) = fVar16;
      *(float *)(lVar9 + 0x1c) = fVar19 * 0.5;
      *(float *)(lVar9 + 0xc) = fVar14;
      *(float *)(lVar9 + 0x10) = fVar21;
      *(float *)(lVar9 + 0x14) = fVar20;
      FUN_05cae454(uVar15,uVar17,uVar18,0,0);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05d2b800;
    }
  }
LAB_05d2b7e4:
  puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar3,0);
LAB_05d2b800:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
  return;
}


