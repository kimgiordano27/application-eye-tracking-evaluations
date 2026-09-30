/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 0745d588
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__get_gpuUtilLevel(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x20;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  ulong in_stack_00000040;
  undefined4 in_stack_00000048;
  
  if ((*(byte *)(unaff_x20 + 0x7f5) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0921fb08);
    FUN_03d2d2b0(PTR_DAT_0921fbf0);
    *(undefined1 *)(unaff_x20 + 0x7f5) = 1;
  }
  puVar6 = PTR_DAT_0921fbf0;
  _fStack0000000000000030 = 0;
  _fStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  plVar17 = *(long **)(param_4 + 0x28);
  if (plVar17 != (long *)0x0) {
    lVar12 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0921fbf0) {
          puVar11 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
          goto LAB_0745d620;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar17,*(long *)PTR_DAT_0921fbf0,9);
LAB_0745d620:
    uVar15 = (*(code *)*puVar11)(plVar17,1,&stack0x00000030,puVar11[1]);
    if ((uVar15 & 1) == 0) {
      return *(float *)(param_4 + 0x44);
    }
    plVar17 = *(long **)(param_4 + 0x28);
    if (plVar17 != (long *)0x0) {
      lVar13 = *plVar17;
      lVar12 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0745d694;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar17,lVar12,0);
LAB_0745d694:
      iVar10 = (*(code *)*puVar11)(plVar17,puVar11[1]);
      if (DAT_09836325 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_09836325 = '\x01';
      }
      puVar3 = PTR_DAT_091a0f88;
      if (*(long *)(param_4 + 0x30) != 0) {
        fVar24 = fStack0000000000000034;
        fVar25 = fStack0000000000000038;
        fVar26 = fStack0000000000000030;
        lVar12 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
        fVar18 = *(float *)(lVar12 + 0x18);
        fVar28 = *(float *)(lVar12 + 0x1c);
        fVar29 = *(float *)(lVar12 + 0x20);
        fVar19 = (float)FUN_08a5d3f4(*(long *)(param_4 + 0x30),0);
        if (DAT_0983637d == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a1008);
          DAT_0983637d = '\x01';
        }
        puVar4 = PTR_DAT_091a1008;
        fVar26 = fVar26 - fVar19;
        fVar24 = fVar24 - param_2;
        fVar25 = fVar25 - param_3;
        if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        fVar19 = DAT_0191476c;
        fVar20 = SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar24 * fVar24);
        if (fVar20 <= DAT_0191476c) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          pfVar14 = *(float **)(*(long *)puVar3 + 0xb8);
          fVar26 = *pfVar14;
          fVar24 = pfVar14[1];
          fVar25 = pfVar14[2];
        }
        else {
          fVar26 = fVar26 / fVar20;
          fVar24 = fVar24 / fVar20;
          fVar25 = fVar25 / fVar20;
        }
        if (DAT_0983637d == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a1008);
          DAT_0983637d = '\x01';
        }
        fVar20 = fVar28 * fVar25 - fVar29 * fVar24;
        fVar29 = fVar29 * fVar26 - fVar18 * fVar25;
        fVar18 = fVar18 * fVar24 - fVar28 * fVar26;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        fVar28 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar29 * fVar29);
        if (fVar28 <= fVar19) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          pfVar14 = *(float **)(*(long *)puVar3 + 0xb8);
          fVar20 = *pfVar14;
          fVar29 = pfVar14[1];
          fVar18 = pfVar14[2];
        }
        else {
          fVar20 = fVar20 / fVar28;
          fVar29 = fVar29 / fVar28;
          fVar18 = fVar18 / fVar28;
        }
        uVar8 = in_stack_00000048;
        puVar5 = PTR_DAT_0921fb08;
        uVar7 = uStack000000000000003c;
        uVar27 = in_stack_00000040 & 0xffffffff;
        fVar28 = (float)in_stack_00000040;
        uVar15 = in_stack_00000040 >> 0x20;
        fVar30 = (float)(in_stack_00000040 >> 0x20);
        lVar12 = *(long *)PTR_DAT_0921fb08;
        if (iVar10 != 1) {
          fVar20 = -fVar20;
          fVar29 = -fVar29;
          fVar18 = -fVar18;
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar12 = *(long *)puVar5;
        }
        lVar13 = *(long *)(lVar12 + 0xb8);
        bVar9 = iVar10 != 1;
        lVar12 = 0x2c;
        if (bVar9) {
          lVar12 = 0x74;
        }
        lVar1 = 0x28;
        if (bVar9) {
          lVar1 = 0x70;
        }
        lVar2 = 0x24;
        if (bVar9) {
          lVar2 = 0x6c;
        }
        fVar21 = (float)FUN_08a44d84(uVar7,uVar27,uVar15,uVar8,*(undefined4 *)(lVar13 + lVar2),
                                     *(undefined4 *)(lVar13 + lVar1),
                                     *(undefined4 *)(lVar13 + lVar12),0);
        if (DAT_09837382 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a2ee8);
          DAT_09837382 = '\x01';
        }
        fVar22 = fVar25 * fVar25 + fVar26 * fVar26 + fVar24 * fVar24;
        if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar22) {
          fVar23 = fVar25 * fVar30 + fVar26 * fVar21 + fVar24 * fVar28;
          fVar21 = fVar21 - (fVar26 * fVar23) / fVar22;
          fVar28 = fVar28 - (fVar24 * fVar23) / fVar22;
          fVar30 = fVar30 - (fVar25 * fVar23) / fVar22;
        }
        if (DAT_0983637d == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a1008);
          DAT_0983637d = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        fVar26 = SQRT(fVar30 * fVar30 + fVar21 * fVar21 + fVar28 * fVar28);
        if (fVar26 <= fVar19) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          pfVar14 = *(float **)(*(long *)puVar3 + 0xb8);
          fVar21 = *pfVar14;
          fVar28 = pfVar14[1];
          fVar30 = pfVar14[2];
        }
        else {
          fVar21 = fVar21 / fVar26;
          fVar28 = fVar28 / fVar26;
          fVar30 = fVar30 / fVar26;
        }
        fVar26 = (float)FUN_03e64c4c(fVar21,fVar28,fVar30,fVar20,fVar29,fVar18,0);
        plVar17 = *(long **)(param_4 + 0x28);
        if (plVar17 != (long *)0x0) {
          lVar13 = *plVar17;
          lVar12 = *(long *)puVar6;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0745daa4;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_03d8f370(plVar17,lVar12,0);
LAB_0745daa4:
          iVar10 = (*(code *)*puVar11)(plVar17,puVar11[1]);
          fVar24 = -fVar26;
          if (iVar10 != 1) {
            fVar24 = fVar26;
          }
          if (-70.0 <= fVar24) {
            return fVar24;
          }
          return fVar24 + 360.0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


