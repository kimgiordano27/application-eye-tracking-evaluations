/*
FUNCTION_NAME: FUN_00eafc90
ENTRY_POINT: 00eafc90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x00eb00a4) */
/* WARNING: Removing unreachable block (ram,0x00eb0264) */

void FUN_00eafc90(undefined1 param_1 [16],ulong param_2,ulong param_3,long *param_4,long param_5,
                 int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a0;
  float fStack_9c;
  float local_98;
  
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
    lVar13 = *(long *)PTR_DAT_033f65c8;
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
    uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
    if ((uVar10 & 1) == 0) {
      *(undefined4 *)(param_5 + 0x18) = 0;
    }
    else {
      iVar9 = *(int *)(param_5 + 0x18);
      *(undefined4 *)(param_5 + 0x18) = 0;
      if (0 < iVar9) {
        FUN_0179519c(*(undefined8 *)(param_5 + 0x10),0,iVar9,0);
        if (param_4 == (long *)0x0) goto LAB_00eb025c;
        goto ChainDissolve_<FadeInCoroutine>d__6___ctor;
      }
    }
    if (param_4 != (long *)0x0) {
ChainDissolve_<FadeInCoroutine>d__6___ctor:
      lVar13 = *param_4;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_4736) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_00eafe20;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_4736,0);
LAB_00eafe20:
      iVar9 = (*(code *)*puVar11)(param_4,puVar11[1]);
      puVar2 = StringLiteral_8795;
      if (2 < iVar9) {
        lVar13 = *param_4;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)System_IO_TextWriter_<>c_TypeInfo) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_00eafe90;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(param_4,*(long *)System_IO_TextWriter_<>c_TypeInfo,0);
LAB_00eafe90:
        uVar15 = (*(code *)*puVar11)(param_4,0,puVar11[1]);
        lVar13 = *param_4;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
        uVar16 = param_2;
        uVar18 = param_3;
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_00eafef8;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(param_4,*(long *)puVar2,0);
LAB_00eafef8:
        puVar5 = StringLiteral_10310;
        puVar2 = System_Func<Assembly[]>_TypeInfo;
        plVar12 = (long *)(*(code *)*puVar11)(param_4,puVar11[1]);
        puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar3 = Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
LAB_00eaff2c:
        uVar19 = param_3;
        uVar17 = param_2;
        lVar13 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              param_2 = uVar16;
              goto LAB_00eaff84;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
        param_2 = uVar16;
LAB_00eaff84:
        uVar10 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        if ((uVar10 & 1) != 0) {
          lVar13 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar10 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_00eaffe0;
              }
              uVar10 = uVar10 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_00eaffe0:
          uVar10 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          fVar21 = (float)uVar10;
          fVar22 = (float)uVar15;
          uVar16 = param_2;
          uVar15 = uVar10;
          param_3 = uVar18;
          if (fVar22 <= fVar21) {
            uVar16 = (ulong)(uint)ABS(fVar21 - fVar22);
            bVar7 = **(float **)(*(long *)puVar2 + 0xb8) <= ABS(fVar21 - fVar22);
            bVar8 = (float)uVar19 <= (float)uVar18;
            fVar20 = (float)uVar18;
            if (bVar8 || bVar7) {
              fVar20 = (float)uVar19;
            }
            uVar1 = (uint)param_2;
            if (bVar8 || bVar7) {
              uVar1 = (uint)uVar17;
            }
            if (bVar8 || bVar7) {
              fVar21 = fVar22;
            }
            uVar15 = (ulong)(uint)fVar21;
            param_2 = (ulong)uVar1;
            param_3 = (ulong)(uint)fVar20;
          }
          goto LAB_00eaff2c;
        }
        if (plVar12 != (long *)0x0) {
          lVar13 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar10 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_00eb008c;
              }
              uVar10 = uVar10 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_00eb008c:
          (*(code *)*puVar11)(plVar12,puVar11[1]);
        }
        puVar6 = StringLiteral_1006;
        puVar5 = Method_System_Xml_Schema_XmlUntypedConverter_ToInt64__;
        puVar4 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
        FUN_00ac4f98(uVar15,uVar17,uVar19,param_5,*(undefined8 *)StringLiteral_1006);
        puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
        do {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_00eb0330(uVar15,param_4);
          FUN_0132138c(param_5,0,&local_a0,*(undefined8 *)puVar4);
          fVar20 = local_98;
          fVar22 = fStack_9c;
          fVar21 = local_a0;
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(puVar3);
            DAT_03774e1a = '\x01';
          }
          fVar21 = (float)uVar15 - fVar21;
          fVar22 = (float)uVar17 - fVar22;
          fVar20 = (float)uVar19 - fVar20;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (**(float **)(*(long *)puVar2 + 0xb8) <
              SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22)) {
            FUN_00ac4f98(uVar15,uVar17,uVar19,param_5,*(undefined8 *)puVar6);
          }
          FUN_0132138c(param_5,0,&local_a0,*(undefined8 *)puVar4);
          fVar20 = local_98;
          fVar22 = fStack_9c;
          fVar21 = local_a0;
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(puVar3);
            DAT_03774e1a = '\x01';
          }
          fVar21 = (float)uVar15 - fVar21;
          fVar22 = (float)uVar17 - fVar22;
          fVar20 = (float)uVar19 - fVar20;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
        } while ((**(float **)(*(long *)puVar2 + 0xb8) <
                  SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22)) &&
                (*(int *)(param_5 + 0x18) < param_6));
      }
      return;
    }
  }
LAB_00eb025c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


