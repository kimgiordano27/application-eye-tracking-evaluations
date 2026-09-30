/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 07c86024
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_15;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07c863ac) */

void OVRPlugin__get_eyeTrackingEnabled(void)

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
  long *plVar12;
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
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  float fStack000000000000006c;
  
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (plVar12 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x58), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f50a58) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_07c86090;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f50a58,0);
LAB_07c86090:
  puVar3 = PTR_DAT_09f1f008;
  plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
  puVar7 = PTR_DAT_09f50a60;
  puVar6 = PTR_DAT_09f4db18;
  puVar5 = PTR_DAT_09f4d0f0;
  puVar4 = PTR_DAT_09f1f018;
  fVar2 = DAT_01c75cd4;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  fStack000000000000006c = DAT_01c75ad0;
                    /* try { // try from 07c860dc to 07d86113 has its CatchHandler @ 07c8612c */
  do {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07c86130;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar12,*(long *)puVar4,0);
LAB_07c86130:
    uVar10 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_07c8633c;
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
          goto LAB_07c8618c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar12,*(long *)puVar7,0);
LAB_07c8618c:
    auVar21 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (auVar21._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar13 = *(long **)(unaff_x20 + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = *plVar13;
    uVar1 = *(undefined4 *)(auVar21._0_8_ + 0x10);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_07c861fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar6,4);
LAB_07c861fc:
    uVar10 = (*(code *)*puVar8)(plVar13,uVar1);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar17 = (ulong)in_stack_00000008;
      uVar10 = _uStack0000000000000000 >> 0x20;
      uVar15 = FUN_09537f40(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar17,
                            *(long *)(unaff_x20 + 0x38),0);
      fVar14 = auVar21._12_4_;
      if (auVar21._8_4_ <= fVar14) {
        fVar20 = 1.0;
        fVar14 = 0.0;
LAB_07c862b0:
        fVar19 = 0.0;
        fVar16 = 1.0;
      }
      else {
        if (fVar14 <= 0.0) {
          fVar14 = 1.0;
          fVar20 = 0.0;
          goto LAB_07c862b0;
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
      lVar9 = *(long *)puVar5;
      fVar18 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar9 = *(long *)puVar5;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      *(float *)(lVar9 + 0x18) = fVar16;
      *(float *)(lVar9 + 0x1c) = fVar18 * 0.5;
      *(float *)(lVar9 + 0xc) = fVar14;
      *(float *)(lVar9 + 0x10) = fVar20;
      *(float *)(lVar9 + 0x14) = fVar19;
      FUN_07c082e4(uVar15,uVar10,uVar17,0,0);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_07c86358;
    }
  }
LAB_07c8633c:
  puVar8 = (undefined8 *)FUN_044822ac(plVar12,*(long *)puVar3,0);
LAB_07c86358:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
  return;
}


