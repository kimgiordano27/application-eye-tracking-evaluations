/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 0747b374
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0747b688) */

void OVRPlugin__GetSkeleton(code *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long *plVar12;
  long unaff_x24;
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
  
  plVar13 = *(long **)(unaff_x24 + 0x4e0);
  plVar7 = (long *)(*param_1)();
  puVar6 = PTR_DAT_092235f0;
  puVar5 = PTR_DAT_09220558;
  puVar4 = PTR_DAT_0921fb20;
  puVar3 = PTR_DAT_091a1508;
  fVar2 = DAT_01914314;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  fStack000000000000006c = DAT_01914060;
                    /* try { // try from 0747b3b0 to 0757b3d7 has its CatchHandler @ 0747b3ec */
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 0747b3d8 to 0757b3e3 has its CatchHandler @ 0747a7e4 */
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0747b40c;
        }
                    /* try { // try from 0747b3e4 to 0757b3eb has its CatchHandler @ 0747b3ec */
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
                    /* catch() { ... } // from try @ 0747b3b0 with catch @ 0747b3ec
                       catch() { ... } // from try @ 0747b3e4 with catch @ 0747b3ec */
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar3,0);
LAB_0747b40c:
    uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_0747b618;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0747b468;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar6,0);
LAB_0747b468:
    auVar21 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (auVar21._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar12 = *(long **)(unaff_x20 + 0x30);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar9 = *plVar12;
    uVar1 = *(undefined4 *)(auVar21._0_8_ + 0x10);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_0747b4d8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar5,4);
LAB_0747b4d8:
    uVar10 = (*(code *)*puVar8)(plVar12,uVar1);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar17 = (ulong)in_stack_00000008;
      uVar10 = _uStack0000000000000000 >> 0x20;
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
      lVar9 = *(long *)puVar4;
      fVar18 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar9 = *(long *)puVar4;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      *(float *)(lVar9 + 0x18) = fVar16;
      *(float *)(lVar9 + 0x1c) = fVar18 * 0.5;
      *(float *)(lVar9 + 0xc) = fVar14;
      *(float *)(lVar9 + 0x10) = fVar20;
      *(float *)(lVar9 + 0x14) = fVar19;
      FUN_073fc178(uVar15,uVar10,uVar17,0,0);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *plVar13) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0747b634;
    }
  }
LAB_0747b618:
  puVar8 = (undefined8 *)FUN_03d8f370(plVar7,*plVar13,0);
LAB_0747b634:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


