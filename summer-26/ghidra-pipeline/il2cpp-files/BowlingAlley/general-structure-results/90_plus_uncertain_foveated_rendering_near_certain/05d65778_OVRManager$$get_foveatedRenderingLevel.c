/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 05d65778
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x05d65b14) */

void OVRManager__get_foveatedRenderingLevel(long param_1)

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
  long unaff_x20;
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
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined1 *)(unaff_x19 + 0x622) = 1;
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (plVar12 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x58), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_072b1190) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05d657f8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)PTR_DAT_072b1190,0);
LAB_05d657f8:
  puVar3 = PTR_DAT_07279f60;
  plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
  puVar7 = PTR_DAT_072b1198;
  puVar6 = PTR_DAT_072ae3b8;
  puVar5 = PTR_DAT_072ad918;
  puVar4 = PTR_DAT_0727a180;
  fVar2 = DAT_0139fee0;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  fStack000000000000006c = DAT_0139fd8c;
  do {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05d65898;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar4,0);
LAB_05d65898:
    uVar10 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_05d65aa4;
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
          goto LAB_05d658f4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar7,0);
LAB_05d658f4:
    auVar22 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (auVar22._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    plVar13 = *(long **)(unaff_x20 + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar9 = *plVar13;
    uVar1 = *(undefined4 *)(auVar22._0_8_ + 0x10);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_05d65964;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar6,4);
LAB_05d65964:
    uVar10 = (*(code *)*puVar8)(plVar13,uVar1);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar17 = 0;
      uVar18 = 0;
      uVar15 = FUN_06bf2f54(0,0,0,*(long *)(unaff_x20 + 0x38),0);
      fVar14 = auVar22._12_4_;
      if (auVar22._8_4_ <= fVar14) {
        fVar21 = 1.0;
        fVar14 = 0.0;
LAB_05d65a18:
        fVar20 = 0.0;
        fVar16 = 1.0;
      }
      else {
        if (fVar14 <= 0.0) {
          fVar14 = 1.0;
          fVar21 = 0.0;
          goto LAB_05d65a18;
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
      fVar19 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar9 = *(long *)puVar5;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      *(float *)(lVar9 + 0x18) = fVar16;
      *(float *)(lVar9 + 0x1c) = fVar19 * 0.5;
      *(float *)(lVar9 + 0xc) = fVar14;
      *(float *)(lVar9 + 0x10) = fVar21;
      *(float *)(lVar9 + 0x14) = fVar20;
      FUN_05cf02c4(uVar15,uVar17,uVar18,0,0);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05d65ac0;
    }
  }
LAB_05d65aa4:
  puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_05d65ac0:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
  return;
}


