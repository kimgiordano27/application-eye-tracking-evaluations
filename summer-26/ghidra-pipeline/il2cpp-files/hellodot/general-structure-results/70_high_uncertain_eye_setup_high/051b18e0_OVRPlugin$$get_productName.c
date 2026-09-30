/*
FUNCTION_NAME: OVRPlugin$$get_productName
ENTRY_POINT: 051b18e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b1be0) */

void OVRPlugin__get_productName
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,float param_4,
               long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined4 unaff_w20;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uVar21;
  
  if (*(int *)(param_5 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_051b1490(unaff_w20);
  uVar18 = CONCAT44(in_stack_00000010,uStack000000000000000c);
  in_stack_00000048 = uStack0000000000000008;
  in_stack_00000040 = in_stack_00000000;
  in_stack_00000050 = in_stack_00000010;
  FUN_05167964(&stack0x00000060,&stack0x00000040,0);
  uVar5 = FUN_05ef2cb4();
  FUN_05157c90(uVar5,&stack0x00000060,1,0);
  *(undefined1 *)(unaff_x19 + 100) = 1;
  lVar6 = FUN_05ef2cb4();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar7 = (long *)FUN_05f048a0(lVar6,0);
  puVar4 = PTR_DAT_065cc690;
  puVar3 = PTR_DAT_065c8d08;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar10 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_051b19b8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,lVar6,0);
LAB_051b19b8:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar2 = PTR_DAT_065c8a48;
    if ((uVar11 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_02cea798(plVar7,*(undefined8 *)PTR_DAT_065c8a48);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 == 0) goto LAB_051b1b80;
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_051b1a18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,lVar6,1);
LAB_051b1a18:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar9);
      }
      FUN_05f00f38(plVar9,0);
      uVar15 = FUN_05ee7574(&stack0x00000080,0);
      uVar5 = uVar18;
      uVar21 = param_3;
      fVar13 = (float)thunk_FUN_05ee5fe0(&stack0x00000080,0);
      fVar19 = (float)uVar21;
      fVar16 = (float)uVar5;
      fVar22 = param_4;
      fVar17 = fVar16;
      fVar20 = fVar19;
      fVar14 = (float)FUN_05f01db4(plVar9,0);
      fVar23 = param_4 * fVar17;
      fVar24 = param_4 * fVar20;
      fVar25 = param_4 * fVar22;
      param_4 = (fVar16 * fVar20 + param_4 * fVar14 + fVar13 * fVar22) - fVar19 * fVar17;
      FUN_05f0278c(uVar15,uVar18,param_3,param_4,
                   (fVar19 * fVar14 + fVar23 + fVar16 * fVar22) - fVar13 * fVar20,
                   (fVar13 * fVar17 + fVar24 + fVar19 * fVar22) - fVar16 * fVar14,
                   ((fVar25 - fVar13 * fVar14) - fVar16 * fVar17) - fVar19 * fVar20,plVar9,0);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_051b1b9c;
    }
  }
LAB_051b1b80:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_051b1b9c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


