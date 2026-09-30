/*
FUNCTION_NAME: FUN_0100438c
ENTRY_POINT: 0100438c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0100438c(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if ((DAT_03775d5e & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                      );
    DAT_03775d5e = 1;
  }
  puVar5 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  lVar14 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    fVar20 = (float)FUN_026890c0(0);
    if (lVar14 == 0) goto LAB_010049ac;
LAB_01004588:
    puVar5 = 
    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
    fVar25 = (fVar20 - *(float *)(param_4 + 0x40)) / *(float *)(lVar14 + 0x54);
    fVar20 = fVar25;
    if (1.0 < fVar25) {
      fVar20 = 1.0;
    }
    fVar20 = fVar20 * (float)*(int *)(lVar14 + 0x50);
    iVar18 = -0x80000000;
    if (fVar20 != INFINITY) {
      iVar18 = (int)fVar20;
    }
    *(int *)(lVar14 + 0x6c) = iVar18;
    lVar8 = FUN_0176ebb0((int *)(lVar14 + 0x6c),*(undefined8 *)puVar5,0);
    puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    uVar15 = 0;
    iVar18 = 1;
    do {
      if (lVar8 == 0) goto LAB_010049ac;
      iVar16 = 0;
      iVar17 = 1;
      iVar11 = iVar18;
      do {
        iVar11 = iVar11 + -1;
        uVar6 = FUN_015fa29c(lVar8,iVar11,0);
        iVar16 = iVar16 + ((uVar6 & 0xffff) - 0x30) * iVar17;
        iVar17 = iVar17 * 10;
      } while (0 < iVar11);
      lVar9 = *(long *)(param_4 + 0x28);
      if (lVar9 == 0) goto LAB_010049ac;
      if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
      lVar9 = lVar9 + uVar15 * 0xc;
      lVar10 = *(long *)(param_4 + 0x30);
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
      fVar20 = *(float *)(lVar9 + 0x28);
      if (DAT_03775438 == '\0') {
        thunk_FUN_00d48444(puVar5);
        DAT_03775438 = '\x01';
      }
      if (lVar10 == 0) goto LAB_010049ac;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_010049b0;
      fVar24 = *(float *)(lVar14 + 0x38);
      fVar23 = (float)iVar16;
      lVar9 = *(long *)(*(long *)puVar5 + 0xb8);
      uVar21 = *(undefined8 *)(lVar9 + 0x3c);
      fVar22 = *(float *)(lVar9 + 0x44);
      lVar10 = lVar10 + uVar15 * 0xc;
      *(ulong *)(lVar10 + 0x20) =
           CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar21 >> 0x20) * fVar23 * fVar24
                    ,(float)uVar7 + (float)uVar21 * fVar23 * fVar24);
      *(float *)(lVar10 + 0x28) = fVar20 + fVar22 * fVar23 * fVar24;
      uVar3 = 2;
      if (*(float *)(lVar14 + 0x54) <= 10.0) {
        uVar3 = 1;
      }
      if (uVar3 < uVar15) {
        lVar9 = *(long *)(lVar14 + 0x30);
        if (lVar9 == 0) goto LAB_010049ac;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
        lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_010049ac;
        lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (lVar9,0);
        lVar10 = *(long *)(param_4 + 0x30);
        if (lVar10 == 0) goto LAB_010049ac;
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_010049b0;
        if (lVar9 == 0) goto LAB_010049ac;
        lVar10 = lVar10 + uVar15 * 0xc;
        FUN_0269f968(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                     *(undefined4 *)(lVar10 + 0x28),lVar9,0);
      }
      else {
        lVar9 = *(long *)(param_4 + 0x38);
        if (lVar9 == 0) goto LAB_010049ac;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
        pfVar13 = (float *)(lVar9 + uVar15 * 0xc + 0x20);
        fVar20 = *pfVar13;
        lVar9 = *(long *)(param_4 + 0x30);
        if (lVar9 == 0) goto LAB_010049ac;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
        if (*(float *)(lVar9 + uVar15 * 0xc + 0x20) < fVar20) {
          fVar23 = *(float *)(lVar14 + 0x38);
          fVar22 = (float)FUN_02689110(0);
          lVar9 = *(long *)(lVar14 + 0x60);
          if (lVar9 == 0) goto LAB_010049ac;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
          *pfVar13 = fVar20 + fVar23 * fVar22 * (float)*(int *)(lVar9 + uVar15 * 4 + 0x20);
          lVar9 = *(long *)(lVar14 + 0x30);
          if (lVar9 == 0) goto LAB_010049ac;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_010049ac;
          lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar9,0);
          lVar10 = *(long *)(param_4 + 0x38);
          if (lVar10 == 0) goto LAB_010049ac;
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_010049b0;
          if (lVar9 == 0) goto LAB_010049ac;
          lVar10 = lVar10 + uVar15 * 0xc;
          FUN_0269f968(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                       *(undefined4 *)(lVar10 + 0x28),lVar9,0);
          lVar9 = *(long *)(param_4 + 0x38);
          if (lVar9 == 0) goto LAB_010049ac;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
          pfVar13 = (float *)(lVar9 + uVar15 * 0xc + 0x20);
          lVar9 = *(long *)(param_4 + 0x30);
          if (lVar9 == 0) goto LAB_010049ac;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_010049b0;
          fVar20 = *(float *)(lVar9 + uVar15 * 0xc + 0x20);
          if (*pfVar13 < fVar20) {
            *pfVar13 = fVar20;
          }
        }
      }
      uVar15 = uVar15 + 1;
      iVar18 = iVar18 + 1;
    } while (uVar15 != 4);
    if (1.0 < fVar25) {
      lVar8 = *(long *)(param_4 + 0x38);
      if (lVar8 == 0) goto LAB_010049ac;
      uVar6 = *(uint *)(lVar8 + 0x18);
      if (uVar6 == 0) {
LAB_010049b0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar9 = *(long *)(param_4 + 0x30);
      if (lVar9 == 0) goto LAB_010049ac;
      uVar4 = *(uint *)(lVar9 + 0x18);
      if (uVar4 == 0) goto LAB_010049b0;
      fVar20 = *(float *)(lVar8 + 0x20) - *(float *)(lVar9 + 0x20);
      fVar25 = (float)*(undefined8 *)(lVar8 + 0x24) - (float)*(undefined8 *)(lVar9 + 0x24);
      fVar22 = (float)((ulong)*(undefined8 *)(lVar8 + 0x24) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar9 + 0x24) >> 0x20);
      if (fVar22 * fVar22 + fVar20 * fVar20 + fVar25 * fVar25 < DAT_028aa020) {
        if ((uVar6 < 2) || (uVar4 < 2)) goto LAB_010049b0;
        fVar20 = *(float *)(lVar8 + 0x2c) - *(float *)(lVar9 + 0x2c);
        fVar25 = (float)*(undefined8 *)(lVar8 + 0x30) - (float)*(undefined8 *)(lVar9 + 0x30);
        fVar22 = (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
        if (fVar22 * fVar22 + fVar20 * fVar20 + fVar25 * fVar25 < DAT_028aa020) {
          if ((uVar6 < 3) || (uVar4 < 3)) goto LAB_010049b0;
          fVar20 = *(float *)(lVar8 + 0x38) - *(float *)(lVar9 + 0x38);
          fVar25 = (float)*(undefined8 *)(lVar8 + 0x3c) - (float)*(undefined8 *)(lVar9 + 0x3c);
          fVar22 = (float)((ulong)*(undefined8 *)(lVar8 + 0x3c) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar9 + 0x3c) >> 0x20);
          if (fVar22 * fVar22 + fVar20 * fVar20 + fVar25 * fVar25 < DAT_028aa020) {
            if (*(long *)(lVar14 + 0x40) == 0) {
LAB_010049ac:
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0268ace8(*(long *)(lVar14 + 0x40),0,0);
            if (*(long *)(lVar14 + 0x48) == 0) goto LAB_010049ac;
            FUN_0268ace8(*(long *)(lVar14 + 0x48),1,0);
            goto LAB_01004970;
          }
        }
      }
    }
    uVar7 = 1;
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 0x10) = 1;
  }
  else {
    if (*(int *)(param_4 + 0x10) == 0) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      uVar7 = FUN_00da4fb8(*(undefined8 *)puVar5,4);
      *(undefined8 *)(param_4 + 0x28) = uVar7;
      uVar7 = FUN_00da4fb8(*(undefined8 *)puVar5,4);
      *(undefined8 *)(param_4 + 0x30) = uVar7;
      uVar7 = FUN_00da4fb8(*(undefined8 *)puVar5,4);
      *(undefined8 *)(param_4 + 0x38) = uVar7;
      uVar19 = FUN_026890c0(0);
      *(undefined4 *)(param_4 + 0x40) = uVar19;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 0x48) != 0)) {
        FUN_0268ace8(*(long *)(lVar14 + 0x48),0,0);
        if (*(long *)(lVar14 + 0x40) != 0) {
          FUN_0268ace8(*(long *)(lVar14 + 0x40),1,0);
          lVar8 = *(long *)(lVar14 + 0x30);
          if (lVar8 != 0) {
            lVar9 = 0;
            lVar10 = 0x28;
            while( true ) {
              uVar6 = (uint)lVar9;
              if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar6) {
                fVar20 = (float)FUN_026890c0(0);
                goto LAB_01004588;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_010049b0;
              lVar8 = *(long *)(lVar8 + lVar9 * 8 + 0x20);
              if (lVar8 == 0) break;
              lVar12 = *(long *)(param_4 + 0x28);
              lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (lVar8,0);
              if ((lVar8 == 0) || (uVar19 = FUN_0269f8e8(lVar8,0), lVar12 == 0)) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar6) goto LAB_010049b0;
              puVar1 = (undefined4 *)(lVar12 + lVar10);
              puVar1[-2] = uVar19;
              puVar1[-1] = param_2;
              *puVar1 = (int)param_3;
              lVar8 = *(long *)(param_4 + 0x28);
              if (lVar8 == 0) break;
              if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_010049b0;
              lVar12 = *(long *)(param_4 + 0x38);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar6) goto LAB_010049b0;
              uVar19 = *(undefined4 *)(lVar8 + lVar10);
              *(undefined8 *)((undefined4 *)(lVar12 + lVar10) + -2) =
                   *(undefined8 *)((undefined4 *)(lVar8 + lVar10) + -2);
              *(undefined4 *)(lVar12 + lVar10) = uVar19;
              lVar8 = *(long *)(param_4 + 0x28);
              if (lVar8 == 0) break;
              if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_010049b0;
              lVar12 = *(long *)(param_4 + 0x30);
              if (lVar12 == 0) break;
              lVar9 = lVar9 + 1;
              if (*(uint *)(lVar12 + 0x18) <= (int)lVar9 - 1U) goto LAB_010049b0;
              puVar1 = (undefined4 *)(lVar8 + lVar10);
              uVar19 = *puVar1;
              puVar2 = (undefined4 *)(lVar12 + lVar10);
              lVar10 = lVar10 + 0xc;
              *(undefined8 *)(puVar2 + -2) = *(undefined8 *)(puVar1 + -2);
              *puVar2 = uVar19;
              lVar8 = *(long *)(lVar14 + 0x30);
              if (lVar8 == 0) break;
            }
          }
        }
      }
      goto LAB_010049ac;
    }
LAB_01004970:
    uVar7 = 0;
  }
  return uVar7;
}


