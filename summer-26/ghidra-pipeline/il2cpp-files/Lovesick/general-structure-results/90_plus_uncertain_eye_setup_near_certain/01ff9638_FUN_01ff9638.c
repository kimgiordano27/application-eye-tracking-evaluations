/*
FUNCTION_NAME: FUN_01ff9638
ENTRY_POINT: 01ff9638
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

void FUN_01ff9638(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char local_64 [4];
  
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03780865 & 1) == 0) {
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
    DAT_03780865 = 1;
  }
  local_64[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01789ac0(param_1,0,0);
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((uVar7 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar2;
  }
  uVar15 = **(undefined8 **)(lVar8 + 0xb8);
  local_64[0] = '\0';
  FUN_017d75a8(uVar15,local_64,0);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar2;
  }
  plVar9 = (long *)**(long **)(lVar8 + 0xb8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
  puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar4 = Method_SoccerBlocker_HideCrowd__;
  puVar2 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo;
  bVar1 = false;
joined_r0x01ff9784:
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = *plVar9;
  lVar8 = *(long *)puVar5;
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar7 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar8) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_01ff97d4;
      }
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,0);
LAB_01ff97d4:
  uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar6 = StringLiteral_10310;
  if ((uVar7 & 1) != 0) {
    lVar13 = *plVar9;
    lVar8 = *(long *)puVar5;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_01ff9834;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,1);
LAB_01ff9834:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    plVar12 = (long *)thunk_FUN_00d624a0();
    plVar11 = (long *)*plVar12;
    plVar12 = (long *)plVar12[1];
    lVar8 = *(long *)puVar3;
    if (plVar11 == (long *)0x0) {
LAB_01ff9880:
      plVar11 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar11 + 300) < *(byte *)(lVar8 + 300)) goto LAB_01ff9880;
      if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8) {
        plVar11 = (long *)0x0;
      }
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0178a8c4(plVar11,0,0);
    if ((uVar7 & 1) == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1,plVar11,*(undefined8 *)(*param_1 + 0x2d0));
    if ((uVar7 & 1) == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32;
    goto LAB_01ff9910;
  }
  plVar9 = (long *)thunk_FUN_00d6225c(plVar9,*(undefined8 *)StringLiteral_10310);
  if (plVar9 == (long *)0x0) goto LAB_01ff9a20;
  lVar8 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar7 == 0) goto LAB_01ff99f8;
  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
  goto LAB_01ff99e0;
Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32:
  uVar16 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_01780344(uVar16,0);
  uVar7 = FUN_01789ac0(plVar11,uVar16,0);
  if ((uVar7 & 1) != 0) {
LAB_01ff9910:
    if (plVar12 != (long *)0x0) {
      if (*plVar12 != *(long *)Method_System_Collections_Generic_List<Selectable>__ctor__) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar12);
      }
      do {
        plVar11 = (long *)plVar12[5];
        if ((plVar11 != (long *)0x0) && (*plVar11 == *(long *)StringLiteral_3919)) {
          uVar7 = FUN_01ff41bc(plVar11,param_1);
          if ((uVar7 & 1) != 0) {
            lVar8 = FUN_01feed44(plVar11,param_1,0);
            bVar1 = true;
            if (lVar8 != 0) {
              bVar1 = true;
              *(undefined4 *)(lVar8 + 0x48) = 0;
              *(undefined8 *)(lVar8 + 0x40) = 0;
              *(undefined8 *)(lVar8 + 0x38) = 0;
              *(undefined8 *)(lVar8 + 0x30) = 0;
              *(undefined8 *)(lVar8 + 0x28) = 0;
              *(undefined8 *)(lVar8 + 0x20) = 0;
              *(undefined8 *)(lVar8 + 0x18) = 0;
            }
          }
          break;
        }
        plVar12 = (long *)plVar12[4];
        bVar1 = true;
      } while (plVar12 != (long *)0x0);
    }
  }
  goto joined_r0x01ff9784;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_01ff99e0:
    if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_01ff9a14;
    }
  }
LAB_01ff99f8:
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_01ff9a14:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_01ff9a20:
  puVar3 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (local_64[0] != '\0') {
    thunk_FUN_00d56f10(uVar15,0);
  }
  if (bVar1) {
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar3;
    }
    thunk_FUN_00d74634(*(long *)(lVar8 + 0xb8) + 0x20,0);
    FUN_01ffff70(param_1);
  }
  return;
}


