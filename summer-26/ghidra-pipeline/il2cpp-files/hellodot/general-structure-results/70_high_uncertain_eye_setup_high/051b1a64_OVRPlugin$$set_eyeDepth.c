/*
FUNCTION_NAME: OVRPlugin$$set_eyeDepth
ENTRY_POINT: 051b1a64
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b1be0) */

void OVRPlugin__set_eyeDepth
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,float param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar13;
  undefined8 uVar16;
  
  do {
    uVar10 = FUN_05ee7574(&stack0x00000080,0);
    uVar13 = param_2;
    uVar16 = param_3;
    fVar8 = (float)thunk_FUN_05ee5fe0(&stack0x00000080,0);
    fVar14 = (float)uVar16;
    fVar11 = (float)uVar13;
    fVar17 = param_4;
    fVar12 = fVar11;
    fVar15 = fVar14;
    fVar9 = (float)FUN_05f01db4(unaff_x20,0);
    fVar18 = param_4 * fVar12;
    fVar19 = param_4 * fVar15;
    fVar20 = param_4 * fVar17;
    param_4 = (fVar11 * fVar15 + param_4 * fVar9 + fVar8 * fVar17) - fVar14 * fVar12;
    FUN_05f0278c(uVar10,param_2,param_3,param_4,
                 (fVar14 * fVar9 + fVar18 + fVar11 * fVar17) - fVar8 * fVar15,
                 (fVar8 * fVar12 + fVar19 + fVar14 * fVar17) - fVar11 * fVar9,
                 ((fVar20 - fVar8 * fVar9) - fVar11 * fVar12) - fVar14 * fVar15,unaff_x20,0);
    do {
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_051b19b8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051b19b8:
      uVar6 = (*(code *)*puVar3)();
      puVar2 = PTR_DAT_065c8a48;
      if ((uVar6 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_02cea798();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_051b1b80;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_051b1b68;
      }
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_051b1a18;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051b1a18:
      unaff_x20 = (long *)(*(code *)*puVar3)();
    } while (unaff_x20 == (long *)0x0);
    bVar1 = *(byte *)(*unaff_x22 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(unaff_x20);
    }
    FUN_05f00f38(unaff_x20,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_051b1b68:
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_051b1b9c;
    }
  }
LAB_051b1b80:
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar2,0);
LAB_051b1b9c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


