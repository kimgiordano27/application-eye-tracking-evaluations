/*
FUNCTION_NAME: OVRManager$$add_SpatialAnchorCreateComplete
ENTRY_POINT: 060b8040
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__add_SpatialAnchorCreateComplete
                (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5
                ,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  long in_x9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x21;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  
  piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar13 + -2) == param_6) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar13 + 9) * 0x10 + 0x138);
      goto LAB_060b8080;
    }
    in_x9 = in_x9 + -1;
    piVar13 = piVar13 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060b8080:
  uVar7 = (*(code *)*puVar6)();
  if ((uVar7 & 1) == 0) {
    return *(float *)(unaff_x19 + 0x44);
  }
  plVar14 = *(long **)(unaff_x19 + 0x28);
  if (plVar14 != (long *)0x0) {
    lVar8 = *plVar14;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_060b80f4;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar14,*unaff_x21,0);
LAB_060b80f4:
    iVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    if (DAT_07ed76b6 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b6 = '\x01';
    }
    puVar1 = PTR_DAT_079f4dc0;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar8 = *(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
      fVar15 = *(float *)(lVar8 + 0x18);
      fVar20 = *(float *)(lVar8 + 0x1c);
      fVar21 = *(float *)(lVar8 + 0x20);
      fVar16 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x30),0);
      if (DAT_07ed76b7 == '\0') {
        FUN_03642964(PTR_DAT_079f4df0);
        DAT_07ed76b7 = '\x01';
      }
      puVar2 = PTR_DAT_079f4df0;
      fStack0000000000000030 = fStack0000000000000030 - fVar16;
      fStack0000000000000034 = fStack0000000000000034 - param_3;
      fStack0000000000000038 = fStack0000000000000038 - param_4;
      if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      fVar16 = DAT_01651354;
      fVar17 = SQRT(fStack0000000000000038 * fStack0000000000000038 +
                    fStack0000000000000030 * fStack0000000000000030 +
                    fStack0000000000000034 * fStack0000000000000034);
      if (fVar17 <= DAT_01651354) {
        if (DAT_07ed76b5 == '\0') {
          FUN_03642964(PTR_DAT_079f4dc0);
          DAT_07ed76b5 = '\x01';
        }
        pfVar10 = *(float **)(*(long *)puVar1 + 0xb8);
        fStack0000000000000030 = *pfVar10;
        fStack0000000000000034 = pfVar10[1];
        fStack0000000000000038 = pfVar10[2];
      }
      else {
        fStack0000000000000030 = fStack0000000000000030 / fVar17;
        fStack0000000000000034 = fStack0000000000000034 / fVar17;
        fStack0000000000000038 = fStack0000000000000038 / fVar17;
      }
      if (DAT_07ed76b7 == '\0') {
        FUN_03642964(PTR_DAT_079f4df0);
        DAT_07ed76b7 = '\x01';
      }
      fVar17 = fVar20 * fStack0000000000000038 - fVar21 * fStack0000000000000034;
      fVar21 = fVar21 * fStack0000000000000030 - fVar15 * fStack0000000000000038;
      fVar15 = fVar15 * fStack0000000000000034 - fVar20 * fStack0000000000000030;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      fVar20 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar21 * fVar21);
      if (fVar20 <= fVar16) {
        if (DAT_07ed76b5 == '\0') {
          FUN_03642964(PTR_DAT_079f4dc0);
          DAT_07ed76b5 = '\x01';
        }
        pfVar10 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar17 = *pfVar10;
        fVar21 = pfVar10[1];
        fVar15 = pfVar10[2];
      }
      else {
        fVar17 = fVar17 / fVar20;
        fVar21 = fVar21 / fVar20;
        fVar15 = fVar15 / fVar20;
      }
      puVar3 = PTR_DAT_07a207e0;
      bVar4 = iVar5 != 1;
      if (bVar4) {
        fVar17 = -fVar17;
        fVar15 = -fVar15;
      }
      lVar8 = *(long *)PTR_DAT_07a207e0;
      if (bVar4) {
        fVar21 = -fVar21;
      }
      if (bVar4) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = *(long *)(lVar8 + 0xb8);
        puVar9 = (undefined4 *)(lVar8 + 0x6c);
        puVar11 = (undefined4 *)(lVar8 + 0x70);
        puVar12 = (undefined4 *)(lVar8 + 0x74);
      }
      else {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = *(long *)(lVar8 + 0xb8);
        puVar9 = (undefined4 *)(lVar8 + 0x24);
        puVar11 = (undefined4 *)(lVar8 + 0x28);
        puVar12 = (undefined4 *)(lVar8 + 0x2c);
      }
      fVar20 = (float)FUN_071af638(uStack000000000000003c,fStack0000000000000040,
                                   fStack0000000000000044,in_stack_00000048,*puVar9,*puVar11,
                                   *puVar12,0);
      if (DAT_07eddc9c == '\0') {
        FUN_03642964(PTR_DAT_079f4df8);
        DAT_07eddc9c = '\x01';
      }
      fVar18 = fStack0000000000000038 * fStack0000000000000038 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034;
      if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar18) {
        fVar19 = fStack0000000000000038 * fStack0000000000000044 +
                 fStack0000000000000030 * fVar20 + fStack0000000000000034 * fStack0000000000000040;
        fVar20 = fVar20 - (fStack0000000000000030 * fVar19) / fVar18;
        fStack0000000000000040 = fStack0000000000000040 - (fStack0000000000000034 * fVar19) / fVar18
        ;
        fStack0000000000000044 = fStack0000000000000044 - (fStack0000000000000038 * fVar19) / fVar18
        ;
      }
      if (DAT_07ed76b7 == '\0') {
        FUN_03642964(PTR_DAT_079f4df0);
        DAT_07ed76b7 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      fVar18 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                    fVar20 * fVar20 + fStack0000000000000040 * fStack0000000000000040);
      if (fVar18 <= fVar16) {
        if (DAT_07ed76b5 == '\0') {
          FUN_03642964(PTR_DAT_079f4dc0);
          DAT_07ed76b5 = '\x01';
        }
        pfVar10 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar20 = *pfVar10;
        fStack0000000000000040 = pfVar10[1];
        fStack0000000000000044 = pfVar10[2];
      }
      else {
        fVar20 = fVar20 / fVar18;
        fStack0000000000000040 = fStack0000000000000040 / fVar18;
        fStack0000000000000044 = fStack0000000000000044 / fVar18;
      }
      fVar15 = (float)FUN_060389e8(fVar20,fStack0000000000000040,fStack0000000000000044,fVar17,
                                   fVar21,fVar15,0);
      plVar14 = *(long **)(unaff_x19 + 0x28);
      if (plVar14 != (long *)0x0) {
        lVar8 = *plVar14;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_060b8500;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar14,*unaff_x21,0);
LAB_060b8500:
        iVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
        fVar16 = -fVar15;
        if (iVar5 != 1) {
          fVar16 = fVar15;
        }
        if (-70.0 <= fVar16) {
          return fVar16;
        }
        return fVar16 + 360.0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


