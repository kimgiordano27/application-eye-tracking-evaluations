/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 076ca350
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076ca818) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRPlugin__IsMixedRealityInitialized(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  long *in_stack_00000088;
  
                    /* try { // try from 076ca354 to 077ca357 has its CatchHandler @ 076ca54c */
  fVar15 = (float)(*in_x9)(param_2,*(undefined8 *)(param_1 + 0x28));
  fVar17 = *(float *)(unaff_x19 + 0x5c);
                    /* try { // try from 076ca364 to 077ca36b has its CatchHandler @ 076ca548 */
  fVar20 = -(fVar17 * 0.5);
  if (*(char *)(unaff_x19 + 0x8c) != '\0') {
    fVar20 = fVar17 * 0.5;
  }
                    /* try { // try from 076ca37c to 077ca393 has its CatchHandler @ 076ca55c */
  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
     (plVar13 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0x10), plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar9 = *plVar13;
  fVar21 = *(float *)(unaff_x19 + 0x88);
                    /* try { // try from 076ca398 to 077ca3a3 has its CatchHandler @ 076ca554 */
  fVar22 = *(float *)(unaff_x19 + 0x58);
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08fadbb0) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_076ca3e4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08fadbb0,0);
LAB_076ca3e4:
  in_stack_00000088 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  puVar6 = PTR_DAT_08fadbc0;
  puVar5 = PTR_DAT_08fadbb8;
  puVar4 = PTR_DAT_08fad0f0;
  puVar3 = PTR_DAT_08f6a1b8;
  puVar2 = PTR_DAT_08f65880;
  if (in_stack_00000088 != (long *)0x0) {
    bVar14 = 1;
LAB_076ca444:
    do {
      plVar13 = in_stack_00000088;
      lVar9 = *in_stack_00000088;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076ca490;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000088,*(long *)puVar2,0);
LAB_076ca490:
      uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      plVar13 = in_stack_00000088;
      if ((uVar11 & 1) == 0) {
        if (in_stack_00000088 == (long *)0x0) {
          return bVar14;
        }
        lVar9 = *in_stack_00000088;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_076ca7bc;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_076ca7a4;
      }
      if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *in_stack_00000088;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076ca4f4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000088,*(long *)puVar5,0);
LAB_076ca4f4:
      lVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      plVar13 = *(long **)(unaff_x19 + 0x28);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *plVar13;
      lVar8 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x12) * 0x10 + 0x138);
            goto LAB_076ca55c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(plVar13,lVar8,0x12);
LAB_076ca55c:
      uVar11 = (*(code *)*puVar7)(plVar13,&stack0x00000068,puVar7[1]);
      if ((uVar11 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        plVar13 = *(long **)(unaff_x19 + 0x28);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar10 = *plVar13;
        uVar1 = *(undefined4 *)(lVar9 + 0x14);
        lVar8 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_076ca5d0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0406ae20(plVar13,lVar8,9);
LAB_076ca5d0:
        uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&stack0x00000048,puVar7[1]);
        if ((uVar11 & 1) != 0) {
          plVar13 = *(long **)(unaff_x19 + 0x38);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar8 = *plVar13;
          uVar1 = *(undefined4 *)(lVar9 + 0x14);
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_076ca640;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar4,0);
LAB_076ca640:
          uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&stack0x00000038,puVar7[1]);
          if ((uVar11 & 1) != 0) {
            fVar18 = fStack0000000000000074;
            fVar16 = (float)FUN_076ca834();
            fVar16 = fVar16 * fStack0000000000000038;
            fVar18 = fVar18 * fStack000000000000003c;
            fVar19 = fVar17 * in_stack_00000040;
            if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            FUN_0706723c(*(long *)(unaff_x19 + 0x68),lVar9,*(undefined8 *)puVar6);
            bVar14 = bVar14 & (fVar15 - fVar21) * (fVar22 + fVar20) < fVar19 + fVar16 + fVar18;
            if (in_stack_00000088 == (long *)0x0) break;
            goto LAB_076ca444;
          }
        }
      }
      bVar14 = 0;
    } while (in_stack_00000088 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_076ca7a4:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_076ca7d8;
    }
  }
LAB_076ca7bc:
  puVar7 = (undefined8 *)FUN_0406ae20(in_stack_00000088,*(long *)PTR_DAT_08f65868,0);
LAB_076ca7d8:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return bVar14;
}


