/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqrdmulhq_laneq_s32
ENTRY_POINT: 01ff965c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01ff9acc) */
/* WARNING: Removing unreachable block (ram,0x01ff9a34) */
/* WARNING: Removing unreachable block (ram,0x01ff9ad8) */
/* WARNING: Removing unreachable block (ram,0x01ff9a64) */

void Unity_Burst_Intrinsics_Arm_Neon__vqrdmulhq_laneq_s32(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x28;
  long *plVar16;
  char cStack000000000000000c;
  
  plVar16 = *(long **)(unaff_x28 + 0xf98);
  if ((*(byte *)(unaff_x20 + 0x865) & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_3919);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Selectable>__ctor__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    *(undefined1 *)(unaff_x20 + 0x865) = 1;
  }
  cStack000000000000000c = 0;
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01789ac0(param_1,0,0);
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar2;
  }
  uVar14 = **(undefined8 **)(lVar7 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_017d75a8(uVar14,&stack0x0000000c,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar2;
  }
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_SoccerBlocker_HideCrowd__;
  puVar2 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo;
  bVar1 = false;
joined_r0x01ff9784:
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar12 = *plVar8;
  lVar7 = *(long *)puVar4;
  uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_01ff97d4;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar7,0);
LAB_01ff97d4:
  uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar5 = StringLiteral_10310;
  if ((uVar6 & 1) != 0) {
    lVar12 = *plVar8;
    lVar7 = *(long *)puVar4;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_01ff9834;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar7,1);
LAB_01ff9834:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    plVar11 = (long *)thunk_FUN_00d624a0();
    plVar10 = (long *)*plVar11;
    plVar11 = (long *)plVar11[1];
    lVar7 = *plVar16;
    if (plVar10 == (long *)0x0) {
LAB_01ff9880:
      plVar10 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar10 + 300) < *(byte *)(lVar7 + 300)) goto LAB_01ff9880;
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7) {
        plVar10 = (long *)0x0;
      }
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0178a8c4(plVar10,0,0);
    if ((uVar6 & 1) == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1,plVar10,*(undefined8 *)(*param_1 + 0x2d0));
    if ((uVar6 & 1) == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32;
    goto LAB_01ff9910;
  }
  plVar16 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)StringLiteral_10310);
  if (plVar16 == (long *)0x0) goto LAB_01ff9a20;
  lVar7 = *plVar16;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar6 == 0) goto LAB_01ff99f8;
  piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_01ff99e0;
Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32:
  uVar15 = *(undefined8 *)puVar3;
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_01780344(uVar15,0);
  uVar6 = FUN_01789ac0(plVar10,uVar15,0);
  if ((uVar6 & 1) != 0) {
LAB_01ff9910:
    if (plVar11 != (long *)0x0) {
      if (*plVar11 != *(long *)Method_System_Collections_Generic_List<Selectable>__ctor__) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar11);
      }
      do {
        plVar10 = (long *)plVar11[5];
        if ((plVar10 != (long *)0x0) && (*plVar10 == *(long *)StringLiteral_3919)) {
          uVar6 = FUN_01ff41bc(plVar10,param_1);
          if ((uVar6 & 1) != 0) {
            lVar7 = FUN_01feed44(plVar10,param_1,0);
            bVar1 = true;
            if (lVar7 != 0) {
              bVar1 = true;
              *(undefined4 *)(lVar7 + 0x48) = 0;
              *(undefined8 *)(lVar7 + 0x40) = 0;
              *(undefined8 *)(lVar7 + 0x38) = 0;
              *(undefined8 *)(lVar7 + 0x30) = 0;
              *(undefined8 *)(lVar7 + 0x28) = 0;
              *(undefined8 *)(lVar7 + 0x20) = 0;
              *(undefined8 *)(lVar7 + 0x18) = 0;
            }
          }
          break;
        }
        plVar11 = (long *)plVar11[4];
        bVar1 = true;
      } while (plVar11 != (long *)0x0);
    }
  }
  goto joined_r0x01ff9784;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_01ff99e0:
    if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_01ff9a14;
    }
  }
LAB_01ff99f8:
  puVar9 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar5,0);
LAB_01ff9a14:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
LAB_01ff9a20:
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00d56f10(uVar14,0);
  }
  if (bVar1) {
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar2;
    }
    thunk_FUN_00d74634(*(long *)(lVar7 + 0xb8) + 0x20,0);
    FUN_01ffff70(param_1);
  }
  return;
}


