/*
FUNCTION_NAME: OVRPlugin$$get_shouldRecenter
ENTRY_POINT: 051b1884
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b1be0) */

void OVRPlugin__get_shouldRecenter(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  ulong uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uVar22;
  
  uStack0000000000000088 = _uStack0000000000000008;
  uStack0000000000000098 = _uStack0000000000000018;
  uStack0000000000000090 = _uStack0000000000000010;
  uStack0000000000000080 = in_stack_00000000;
  uStack00000000000000a8 = in_stack_00000028;
  uStack00000000000000a0 = in_stack_00000020;
  uStack00000000000000b8 = in_stack_00000038;
  uStack00000000000000b0 = in_stack_00000030;
  uVar6 = FUN_05ef2cb4();
  FUN_05155480(uVar6,1,0);
  uStack0000000000000074 = CONCAT44(uStack0000000000000018,uStack0000000000000014);
  in_stack_00000068 = uStack0000000000000008;
  in_stack_00000060 = in_stack_00000000;
  in_stack_00000070 = uStack0000000000000010;
  if ((*(char *)(unaff_x19 + 0x38) != '\0') && (*(long *)(unaff_x19 + 0x40) != 0)) {
    uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06608990 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051b1490(uVar1);
    uStack0000000000000054 = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    uVar6 = CONCAT44(uStack0000000000000010,uStack000000000000000c);
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = in_stack_00000000;
    uStack0000000000000050 = uStack0000000000000010;
    FUN_05167964(&stack0x00000060,&stack0x00000040,0);
    uVar7 = FUN_05ef2cb4();
    FUN_05157c90(uVar7,&stack0x00000060,1,0);
    *(undefined1 *)(unaff_x19 + 100) = 1;
    lVar8 = FUN_05ef2cb4();
    if (lVar8 != 0) {
      plVar9 = (long *)FUN_05f048a0(lVar8,0);
      puVar5 = PTR_DAT_065cc690;
      puVar4 = PTR_DAT_065c8d08;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar12 = *plVar9;
        lVar8 = *(long *)puVar4;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_051b19b8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar8,0);
LAB_051b19b8:
        uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar3 = PTR_DAT_065c8a48;
        if ((uVar13 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_02cea798(plVar9,*(undefined8 *)PTR_DAT_065c8a48);
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar13 == 0) goto LAB_051b1b80;
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_051b1b68;
        }
        lVar12 = *plVar9;
        lVar8 = *(long *)puVar4;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_051b1a18;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar8,1);
LAB_051b1a18:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        fVar23 = (float)in_stack_00000030;
        if (plVar11 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce8018(plVar11);
          }
          FUN_05f00f38(plVar11,0);
          uVar17 = FUN_05ee7574(&stack0x00000080,0);
          uVar7 = uVar6;
          uVar22 = in_stack_00000020;
          fVar15 = (float)thunk_FUN_05ee5fe0(&stack0x00000080,0);
          fVar20 = (float)uVar22;
          fVar18 = (float)uVar7;
          fVar24 = fVar23;
          fVar19 = fVar18;
          fVar21 = fVar20;
          fVar16 = (float)FUN_05f01db4(plVar11,0);
          in_stack_00000030 =
               (ulong)(uint)((fVar18 * fVar21 + fVar23 * fVar16 + fVar15 * fVar24) - fVar20 * fVar19
                            );
          FUN_05f0278c(uVar17,uVar6,in_stack_00000020,in_stack_00000030,
                       (fVar20 * fVar16 + fVar23 * fVar19 + fVar18 * fVar24) - fVar15 * fVar21,
                       (fVar15 * fVar19 + fVar23 * fVar21 + fVar20 * fVar24) - fVar18 * fVar16,
                       ((fVar23 * fVar24 - fVar15 * fVar16) - fVar18 * fVar19) - fVar20 * fVar21,
                       plVar11,0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_051b1b68:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_051b1b9c;
    }
  }
LAB_051b1b80:
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar3,0);
LAB_051b1b9c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


