/*
FUNCTION_NAME: OVRPlugin$$get_latency
ENTRY_POINT: 051b1930
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

void OVRPlugin__get_latency
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,float param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar17;
  undefined8 uVar20;
  
  FUN_05157c90();
  *(undefined1 *)(unaff_x19 + 100) = 1;
  lVar5 = FUN_05ef2cb4();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar6 = (long *)FUN_05f048a0(lVar5,0);
  puVar4 = PTR_DAT_065cc690;
  puVar3 = PTR_DAT_065c8d08;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar9 = *plVar6;
    lVar5 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_051b19b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar5,0);
LAB_051b19b8:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar2 = PTR_DAT_065c8a48;
    if ((uVar10 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_02cea798(plVar6,*(undefined8 *)PTR_DAT_065c8a48);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 == 0) goto LAB_051b1b80;
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    lVar5 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_051b1a18;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar5,1);
LAB_051b1a18:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar8);
      }
      FUN_05f00f38(plVar8,0);
      uVar14 = FUN_05ee7574(&stack0x00000080,0);
      uVar17 = param_2;
      uVar20 = param_3;
      fVar12 = (float)thunk_FUN_05ee5fe0(&stack0x00000080,0);
      fVar18 = (float)uVar20;
      fVar15 = (float)uVar17;
      fVar21 = param_4;
      fVar16 = fVar15;
      fVar19 = fVar18;
      fVar13 = (float)FUN_05f01db4(plVar8,0);
      fVar22 = param_4 * fVar16;
      fVar23 = param_4 * fVar19;
      fVar24 = param_4 * fVar21;
      param_4 = (fVar15 * fVar19 + param_4 * fVar13 + fVar12 * fVar21) - fVar18 * fVar16;
      FUN_05f0278c(uVar14,param_2,param_3,param_4,
                   (fVar18 * fVar13 + fVar22 + fVar15 * fVar21) - fVar12 * fVar19,
                   (fVar12 * fVar16 + fVar23 + fVar18 * fVar21) - fVar15 * fVar13,
                   ((fVar24 - fVar12 * fVar13) - fVar15 * fVar16) - fVar18 * fVar19,plVar8,0);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_051b1b9c;
    }
  }
LAB_051b1b80:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar2,0);
LAB_051b1b9c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


