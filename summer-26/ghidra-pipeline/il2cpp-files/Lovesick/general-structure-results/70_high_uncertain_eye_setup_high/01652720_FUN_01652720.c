/*
FUNCTION_NAME: FUN_01652720
ENTRY_POINT: 01652720
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01652b5c) */

void FUN_01652720(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  
  if ((DAT_037782dd & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_65__);
    thunk_FUN_00d48444(PTR_DAT_033eed40);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Func<STMVoiceData,_string>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Double_System_IConvertible_ToChar__);
    thunk_FUN_00d48444(StringLiteral_2549);
    thunk_FUN_00d48444(PTR_DAT_033f0428);
    DAT_037782dd = 1;
  }
  puVar10 = StringLiteral_10310;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar11 = (long *)(**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  puVar9 = StringLiteral_2549;
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__796_65__;
  puVar7 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar6 = Method_System_Double_System_IConvertible_ToChar__;
  puVar5 = System_Func<STMVoiceData,_string>_TypeInfo;
  puVar4 = PTR_DAT_033f0428;
  puVar3 = PTR_DAT_033eed40;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar16 = *plVar11;
    lVar14 = *(long *)puVar7;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0165285c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar14,0);
LAB_0165285c:
    uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if ((uVar18 & 1) == 0) {
      plVar11 = (long *)thunk_FUN_00d6225c(plVar11,*(undefined8 *)puVar10);
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar16 = *plVar11;
      lVar14 = *(long *)puVar10;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 == 0) goto LAB_01652ae4;
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    lVar16 = *plVar11;
    lVar14 = *(long *)puVar7;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_016528bc;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar14,1);
LAB_016528bc:
    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar13 != (long *)0x0) {
      lVar14 = *plVar13;
      bVar1 = *(byte *)(lVar14 + 300);
      uVar17 = (uint)bVar1;
      bVar2 = *(byte *)(*(long *)puVar6 + 300);
      if ((bVar1 < bVar2) ||
         (lVar16 = *(long *)(lVar14 + 200),
         *(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar13);
      }
      lVar15 = *(long *)puVar8;
      uVar18 = (ulong)*(byte *)(lVar15 + 300);
      if ((bVar1 < *(byte *)(lVar15 + 300)) || (*(long *)(lVar16 + uVar18 * 8 + -8) != lVar15)) {
        lVar15 = *(long *)puVar3;
        uVar18 = (ulong)*(byte *)(lVar15 + 300);
        if ((bVar1 < *(byte *)(lVar15 + 300)) || (*(long *)(lVar16 + uVar18 * 8 + -8) != lVar15)) {
          lVar15 = *(long *)puVar9;
          uVar18 = (ulong)*(byte *)(lVar15 + 300);
          if ((bVar1 < *(byte *)(lVar15 + 300)) || (*(long *)(lVar16 + uVar18 * 8 + -8) != lVar15))
          {
            lVar15 = *(long *)puVar4;
            uVar18 = (ulong)*(byte *)(lVar15 + 300);
            if ((*(byte *)(lVar15 + 300) <= bVar1) &&
               (*(long *)(lVar16 + uVar18 * 8 + -8) == lVar15)) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar14 = *plVar13;
                lVar15 = *(long *)puVar4;
                uVar17 = (uint)*(byte *)(lVar14 + 300);
                uVar18 = (ulong)*(byte *)(lVar15 + 300);
              }
              if ((uVar17 < (uint)uVar18) ||
                 (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar13);
              }
              FUN_0164f9b8(plVar13);
            }
          }
          else {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar14 = *plVar13;
              lVar15 = *(long *)puVar9;
              uVar17 = (uint)*(byte *)(lVar14 + 300);
              uVar18 = (ulong)*(byte *)(lVar15 + 300);
            }
            if ((uVar17 < (uint)uVar18) ||
               (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar13);
            }
            System_DateTime__get_Now(plVar13);
          }
        }
        else {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar14 = *plVar13;
            lVar15 = *(long *)puVar3;
            uVar17 = (uint)*(byte *)(lVar14 + 300);
            uVar18 = (ulong)*(byte *)(lVar15 + 300);
          }
          if ((uVar17 < (uint)uVar18) ||
             (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar13);
          }
          FUN_0164f5ec(plVar13);
        }
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *plVar13;
          lVar15 = *(long *)puVar8;
          uVar17 = (uint)*(byte *)(lVar14 + 300);
          uVar18 = (ulong)*(byte *)(lVar15 + 300);
        }
        if ((uVar17 < (uint)uVar18) ||
           (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar13);
        }
        FUN_0164f35c(plVar13);
      }
    }
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar19 + -2) == lVar14) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_01652b00;
    }
  }
LAB_01652ae4:
  puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar14,0);
LAB_01652b00:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return;
}


