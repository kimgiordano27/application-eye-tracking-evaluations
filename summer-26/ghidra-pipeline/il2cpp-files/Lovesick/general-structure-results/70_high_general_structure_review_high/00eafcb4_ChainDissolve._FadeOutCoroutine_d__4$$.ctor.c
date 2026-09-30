/*
FUNCTION_NAME: ChainDissolve.<FadeOutCoroutine>d__4$$.ctor
ENTRY_POINT: 00eafcb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x00eb00a4) */
/* WARNING: Removing unreachable block (ram,0x00eb0264) */

void ChainDissolve_<FadeOutCoroutine>d__4___ctor
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long *param_4,long param_5,
               int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  if ((DAT_03775123 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_8795);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_4736);
    thunk_FUN_00d48444(System_IO_TextWriter_<>c_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(PTR_DAT_033f65c8);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlUntypedConverter_ToInt64__);
    DAT_03775123 = 1;
  }
  if (param_5 != 0) {
    lVar12 = *(long *)PTR_DAT_033f65c8;
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
    uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(param_5 + 0x18) = 0;
    }
    else {
      iVar8 = *(int *)(param_5 + 0x18);
      *(undefined4 *)(param_5 + 0x18) = 0;
      if (0 < iVar8) {
        FUN_0179519c(*(undefined8 *)(param_5 + 0x10),0,iVar8,0);
        if (param_4 == (long *)0x0) goto LAB_00eb025c;
        goto ChainDissolve_<FadeInCoroutine>d__6___ctor;
      }
    }
    if (param_4 != (long *)0x0) {
ChainDissolve_<FadeInCoroutine>d__6___ctor:
      lVar12 = *param_4;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_4736) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_00eafe20;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_4736,0);
LAB_00eafe20:
      iVar8 = (*(code *)*puVar10)(param_4,puVar10[1]);
      puVar2 = StringLiteral_8795;
      if (2 < iVar8) {
        lVar12 = *param_4;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)System_IO_TextWriter_<>c_TypeInfo) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_00eafe90;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(param_4,*(long *)System_IO_TextWriter_<>c_TypeInfo,0);
LAB_00eafe90:
        uVar14 = (*(code *)*puVar10)(param_4,0,puVar10[1]);
        lVar12 = *param_4;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        uVar15 = param_2;
        uVar17 = param_3;
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_00eafef8;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar2,0);
LAB_00eafef8:
        puVar5 = StringLiteral_10310;
        puVar2 = System_Func<Assembly[]>_TypeInfo;
        plVar11 = (long *)(*(code *)*puVar10)(param_4,puVar10[1]);
        puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar3 = Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
LAB_00eaff2c:
        uVar18 = param_3;
        uVar16 = param_2;
        lVar12 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              param_2 = uVar15;
              goto LAB_00eaff84;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,0);
        param_2 = uVar15;
LAB_00eaff84:
        uVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar9 & 1) != 0) {
          lVar12 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_00eaffe0;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,0);
LAB_00eaffe0:
          uVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          fVar19 = (float)uVar9;
          fVar20 = (float)uVar14;
          uVar15 = param_2;
          uVar14 = uVar9;
          param_3 = uVar17;
          if (fVar20 <= fVar19) {
            uVar15 = (ulong)(uint)ABS(fVar19 - fVar20);
            bVar6 = **(float **)(*(long *)puVar2 + 0xb8) <= ABS(fVar19 - fVar20);
            bVar7 = (float)uVar18 <= (float)uVar17;
            fVar21 = (float)uVar17;
            if (bVar7 || bVar6) {
              fVar21 = (float)uVar18;
            }
            uVar1 = (uint)param_2;
            if (bVar7 || bVar6) {
              uVar1 = (uint)uVar16;
            }
            if (bVar7 || bVar6) {
              fVar19 = fVar20;
            }
            uVar14 = (ulong)(uint)fVar19;
            param_2 = (ulong)uVar1;
            param_3 = (ulong)(uint)fVar21;
          }
          goto LAB_00eaff2c;
        }
        if (plVar11 != (long *)0x0) {
          lVar12 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_00eb008c;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar5,0);
LAB_00eb008c:
          (*(code *)*puVar10)(plVar11,puVar10[1]);
        }
        puVar5 = StringLiteral_1006;
        puVar4 = Method_System_Xml_Schema_XmlUntypedConverter_ToInt64__;
        FUN_00ac4f98(uVar14,uVar16,uVar18,param_5,*(undefined8 *)StringLiteral_1006);
        puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
        do {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_00eb0330(uVar14,param_4);
          FUN_0132138c(param_5,0);
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(puVar3);
            DAT_03774e1a = '\x01';
          }
          fVar20 = (float)uVar14 - fStack0000000000000000;
          fVar21 = (float)uVar16 - fStack0000000000000004;
          fVar19 = (float)uVar18 - in_stack_00000008;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (**(float **)(*(long *)puVar2 + 0xb8) <
              SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21)) {
            FUN_00ac4f98(uVar14,uVar16,uVar18,param_5,*(undefined8 *)puVar5);
          }
          FUN_0132138c(param_5,0);
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(puVar3);
            DAT_03774e1a = '\x01';
          }
          fVar20 = (float)uVar14 - fStack0000000000000000;
          fVar21 = (float)uVar16 - fStack0000000000000004;
          fVar19 = (float)uVar18 - in_stack_00000008;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
        } while ((**(float **)(*(long *)puVar2 + 0xb8) <
                  SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21)) &&
                (*(int *)(param_5 + 0x18) < param_6));
      }
      return;
    }
  }
LAB_00eb025c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


