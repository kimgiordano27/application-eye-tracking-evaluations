/*
FUNCTION_NAME: FUN_02519cb0
ENTRY_POINT: 02519cb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_02519cb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  
  if ((DAT_037829cb & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f4658);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_Request<ChallengeList>_TypeInfo);
    DAT_037829cb = 1;
  }
  if (param_1 == 0) goto LAB_0251a0b8;
  lVar6 = FUN_024fa77c(param_1,0);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
    if ((int)*(long *)(lVar6 + 0x18) == 0) {
LAB_0251a0b4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar7 = FUN_0250c58c(*(undefined8 *)(lVar6 + 0x20),0);
    puVar1 = PTR_DAT_033f4658;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_033f4658 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_0251a0bc(lVar6);
      puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
      puVar2 = Oculus_Platform_Request<ChallengeList>_TypeInfo;
      if (lVar6 == 0) {
LAB_0251a0b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = *(ulong *)(lVar6 + 0x18);
      if (uVar7 != 0) {
        if (0 < (int)uVar7) {
          uVar12 = 0;
          lVar13 = lVar6 + 0x20;
          do {
            uVar11 = (uint)uVar12;
            lVar9 = lVar6 + (long)(int)uVar11 * 8;
            if ((int)uVar7 < 1) {
              dVar19 = INFINITY;
            }
            else {
              uVar16 = 0;
              plVar17 = (long *)(lVar9 + 0x20);
              dVar19 = INFINITY;
              do {
                if (uVar12 != uVar16) {
                  if ((uVar7 & 0xffffffff) <= uVar16) goto LAB_0251a0b4;
                  lVar8 = *(long *)(lVar13 + uVar16 * 8);
                  if (lVar8 == 0) goto LAB_0251a0b8;
                  if ((uint)uVar7 <= uVar11) goto LAB_0251a0b4;
                  if (*plVar17 == 0) goto LAB_0251a0b8;
                  dVar21 = *(double *)(lVar8 + 0x18);
                  dVar18 = (double)FUN_024fef04(*plVar17,0);
                  lVar8 = *(long *)puVar2;
                  dVar21 = dVar21 - dVar18;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar8 = *(long *)puVar2;
                  }
                  if ((dVar21 < dVar19) && (-**(double **)(lVar8 + 0xb8) <= dVar21)) {
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    dVar19 = (double)FUN_01772618(dVar19,dVar21,0);
                  }
                  if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) <= uVar16) goto LAB_0251a0b4;
                  lVar8 = *(long *)(lVar13 + uVar16 * 8);
                  if (lVar8 == 0) goto LAB_0251a0b8;
                  if ((uint)*(ulong *)(lVar6 + 0x18) <= uVar11) goto LAB_0251a0b4;
                  if (*plVar17 == 0) goto LAB_0251a0b8;
                  dVar21 = *(double *)(lVar8 + 0x18);
                  dVar18 = (double)FUN_024fef04(*plVar17,0);
                  if (dVar21 <= dVar18) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_0251a0b4;
                    lVar8 = *(long *)(lVar13 + uVar16 * 8);
                    if (lVar8 == 0) goto LAB_0251a0b8;
                    dVar18 = (double)FUN_024fef04(lVar8,0);
                    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0251a0b4;
                    if (*plVar17 == 0) goto LAB_0251a0b8;
                    dVar21 = (double)FUN_024fef04(*plVar17,0);
                    if (dVar21 < dVar18) {
                      dVar19 = 0.0;
                    }
                  }
                }
                uVar7 = *(ulong *)(lVar6 + 0x18);
                uVar16 = uVar16 + 1;
              } while ((long)uVar16 < (long)(int)uVar7);
            }
            lVar8 = *(long *)puVar1;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar8 = *(long *)puVar1;
              uVar7 = *(ulong *)(lVar6 + 0x18);
            }
            if (dVar19 <= **(double **)(lVar8 + 0xb8)) {
              dVar19 = 0.0;
            }
            if ((uint)uVar7 <= uVar11) goto LAB_0251a0b4;
            lVar9 = *(long *)(lVar9 + 0x20);
            if (lVar9 == 0) goto LAB_0251a0b8;
            uVar12 = uVar12 + 1;
            *(double *)(lVar9 + 0xa0) = dVar19;
          } while ((int)uVar12 < (int)(uint)uVar7);
        }
        if ((int)uVar7 == 0) goto LAB_0251a0b4;
        lVar13 = *(long *)(lVar6 + 0x20);
        if (lVar13 == 0) goto LAB_0251a0b8;
        uVar20 = *(undefined8 *)(lVar13 + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_01772420(0,uVar20,0);
        *(undefined8 *)(lVar13 + 0xa8) = uVar20;
        uVar20 = *(undefined8 *)(lVar6 + 0x18);
        if (1 < (int)uVar20) {
          uVar10 = 0;
          uVar11 = 1;
          do {
            if ((int)uVar20 == 0) goto LAB_0251a0b4;
            uVar15 = 0;
            uVar14 = 0xffffffff;
            dVar19 = 0.0;
            while( true ) {
              plVar17 = (long *)(lVar6 + (long)(int)uVar15 * 8 + 0x20);
              lVar13 = *plVar17;
              if (lVar13 == 0) goto LAB_0251a0b8;
              dVar18 = (double)FUN_024fef04(lVar13,0);
              if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0251a0b4;
              lVar13 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_0251a0b8;
              dVar21 = *(double *)(lVar13 + 0x18);
              if (dVar21 < dVar18) {
                dVar21 = 0.0;
                goto LAB_0251a044;
              }
              if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_0251a0b4;
              lVar13 = *plVar17;
              if (lVar13 == 0) goto LAB_0251a0b8;
              dVar18 = (double)FUN_024fef04(lVar13,0);
              dVar21 = dVar21 - dVar18;
              uVar4 = uVar15;
              if (uVar14 != 0xffffffff && dVar19 <= dVar21) {
                dVar21 = dVar19;
                uVar4 = uVar14;
              }
              uVar14 = uVar4;
              if (uVar10 == uVar15) break;
              uVar15 = uVar15 + 1;
              dVar19 = dVar21;
              if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_0251a0b4;
            }
            if (-1 < (int)uVar14) {
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_0251a0b4;
              lVar13 = *(long *)(lVar6 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_0251a0b8;
              iVar5 = FUN_02500350(lVar13,0);
              if (iVar5 != 0) {
                dVar21 = 0.0;
              }
            }
LAB_0251a044:
            lVar13 = *(long *)puVar1;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar13 = *(long *)puVar1;
            }
            uVar20 = *(undefined8 *)(lVar6 + 0x18);
            if (dVar21 <= **(double **)(lVar13 + 0xb8)) {
              dVar21 = 0.0;
            }
            if ((uint)uVar20 <= uVar11) goto LAB_0251a0b4;
            lVar13 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_0251a0b8;
            *(double *)(lVar13 + 0xa8) = dVar21;
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + 1;
          } while ((int)uVar11 < (int)(uint)uVar20);
        }
      }
    }
  }
  return;
}


