/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 0747b324
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0747b688) */

void OVRPlugin__IsValidBone(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *in_x10;
  int *piVar12;
  long unaff_x20;
  long *plVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack000000000000006c;
  
                    /* catch() { ... } // from try @ 0747ab1c with catch @ 0747b324 */
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* catch() { ... } // from try @ 0747ab78 with catch @ 0747b328 */
                    /* catch() { ... } // from try @ 0747aa90 with catch @ 0747b32c */
  if (uVar11 != 0) {
                    /* catch() { ... } // from try @ 0747ae40 with catch @ 0747b330 */
                    /* catch() { ... } // from try @ 0747b05c with catch @ 0747b334 */
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 0747a9f8 with catch @ 0747b338
                       catch() { ... } // from try @ 0747b080 with catch @ 0747b338
                       catch() { ... } // from try @ 0747b0c8 with catch @ 0747b338
                       catch() { ... } // from try @ 0747b174 with catch @ 0747b338 */
                    /* catch() { ... } // from try @ 0747af98 with catch @ 0747b33c */
                    /* catch() { ... } // from try @ 0747b048 with catch @ 0747b340 */
      if (*(long *)(piVar12 + -2) == *in_x10) {
                    /* try { // try from 0747b360 to 0757b363 has its CatchHandler @ 0747b370 */
        puVar8 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0747b36c;
      }
                    /* catch() { ... } // from try @ 0747b0a4 with catch @ 0747b344 */
      uVar11 = uVar11 - 1;
                    /* catch() { ... } // from try @ 0747ac04 with catch @ 0747b348 */
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_03d8f370();
LAB_0747b36c:
  puVar3 = PTR_DAT_091a14e0;
                    /* catch() { ... } // from try @ 0747b360 with catch @ 0747b370 */
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar7 = PTR_DAT_092235f0;
  puVar6 = PTR_DAT_09220558;
  puVar5 = PTR_DAT_0921fb20;
  puVar4 = PTR_DAT_091a1508;
  fVar2 = DAT_01914314;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  fStack000000000000006c = DAT_01914060;
  do {
    lVar10 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0747b40c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar4,0);
LAB_0747b40c:
    uVar11 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_0747b618;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0747b468;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar7,0);
LAB_0747b468:
    auVar21 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (auVar21._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar13 = *(long **)(unaff_x20 + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar10 = *plVar13;
    uVar1 = *(undefined4 *)(auVar21._0_8_ + 0x10);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_0747b4d8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar6,4);
LAB_0747b4d8:
    uVar11 = (*(code *)*puVar8)(plVar13,uVar1);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar17 = (ulong)in_stack_00000008;
      uVar11 = _uStack0000000000000000 >> 0x20;
      uVar15 = FUN_08a5bac8(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar17,
                            *(long *)(unaff_x20 + 0x38),0);
      fVar14 = auVar21._12_4_;
      if (auVar21._8_4_ <= fVar14) {
        fVar20 = 1.0;
        fVar14 = 0.0;
LAB_0747b58c:
        fVar19 = 0.0;
        fVar16 = 1.0;
      }
      else {
        if (fVar14 <= 0.0) {
          fVar14 = 1.0;
          fVar20 = 0.0;
          goto LAB_0747b58c;
        }
        fVar14 = (auVar21._8_4_ / fVar14) * 0.5;
        fVar16 = fVar14;
        if (1.0 < fVar14) {
          fVar16 = 1.0;
        }
        if (fVar14 < 0.0) {
          fVar16 = 0.0;
        }
        fVar14 = fVar16 * 0.0 + 1.0;
        fVar20 = fStack000000000000006c - fVar16 * fStack000000000000006c;
        fVar19 = fVar2 - fVar16 * fVar2;
        fVar16 = fVar14;
      }
      lVar10 = *(long *)puVar5;
      fVar18 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      *(float *)(lVar10 + 0x18) = fVar16;
      *(float *)(lVar10 + 0x1c) = fVar18 * 0.5;
      *(float *)(lVar10 + 0xc) = fVar14;
      *(float *)(lVar10 + 0x10) = fVar20;
      *(float *)(lVar10 + 0x14) = fVar19;
      FUN_073fc178(uVar15,uVar11,uVar17,0,0);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0747b634;
    }
  }
LAB_0747b618:
  puVar8 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar3,0);
LAB_0747b634:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return;
}


