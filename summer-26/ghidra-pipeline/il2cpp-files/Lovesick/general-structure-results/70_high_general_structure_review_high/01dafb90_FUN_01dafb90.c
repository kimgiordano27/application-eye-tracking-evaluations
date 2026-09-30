/*
FUNCTION_NAME: FUN_01dafb90
ENTRY_POINT: 01dafb90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01db01a4) */

void FUN_01dafb90(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_0377f713 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegq_s64__);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item3__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass23_0_<DOFloat>b__1__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(UnityEngine_UIElements_TextureId_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Text_UnicodeEncoding_GetBytes__);
    DAT_0377f713 = 1;
  }
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  puVar4 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass23_0_<DOFloat>b__1__;
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar11 = *plVar6;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01dafd14;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,lVar10,0);
LAB_01dafd14:
    uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar5 = StringLiteral_10310;
    if ((uVar12 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_00d6225c(plVar6,*(undefined8 *)StringLiteral_10310);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 == 0) goto LAB_01db0134;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar6;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_01dafd74;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,lVar10,1);
LAB_01dafd74:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar8 + 0x40) !=
        *(long *)(*(long *)
                   System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
                 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar7 = (undefined8 *)thunk_FUN_00d624a0();
    uVar15 = *puVar7;
    plVar8 = (long *)puVar7[1];
    lVar10 = thunk_FUN_00d6225c(uVar15,*(undefined8 *)puVar4);
    if (lVar10 == 0) {
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01731954(0);
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar9 = (long *)FUN_01700c3c(uVar15,uVar14,0);
    }
    else {
      uVar14 = *(undefined8 *)puVar1;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01780344(uVar14,0);
      plVar9 = (long *)FUN_01df09e4(uVar15,uVar14,0);
      if ((plVar9 != (long *)0x0) &&
         (*plVar9 !=
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
    }
    lVar10 = thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar4);
    if (lVar10 == 0) {
      if ((plVar8 == (long *)0x0) ||
         (*plVar8 != *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo)) {
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_01731954(0);
        if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar8 = (long *)FUN_01700c3c(plVar8,uVar15,0);
      }
      else {
        uVar15 = *(undefined8 *)puVar1;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_01780344(uVar15,0);
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01731954(0);
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)System_ComponentModel_ListBindableAttribute_TypeInfo + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        puVar7 = (undefined8 *)thunk_FUN_00d624a0(plVar8);
        plVar8 = (long *)FUN_01ddea34(*puVar7,puVar7[1],uVar15,uVar14,0);
        if ((plVar8 != (long *)0x0) &&
           (*plVar8 !=
            *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
      }
    }
    else {
      uVar15 = *(undefined8 *)puVar1;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_01780344(uVar15,0);
      plVar8 = (long *)FUN_01df09e4(plVar8,uVar15,0);
      if ((plVar8 != (long *)0x0) &&
         (*plVar8 !=
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar8);
      }
    }
    uVar15 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegq_s64__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar12 = FUN_01789ac0(param_3,uVar15,0);
    if ((uVar12 & 1) == 0) {
      uVar15 = *(undefined8 *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item3__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_01780344(uVar15,0);
      uVar12 = FUN_01789ac0(param_3,uVar15,0);
      if ((uVar12 & 1) != 0) {
        plVar9 = (long *)FUN_015f5b28(*(undefined8 *)Method_System_Text_UnicodeEncoding_GetBytes__,
                                      plVar9,0);
      }
    }
    else {
      plVar9 = (long *)FUN_015f5b28(*(undefined8 *)UnityEngine_UIElements_TextureId_TypeInfo,plVar9,
                                    0);
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Type>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_01f6a25c(plVar9,0);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar15,uVar15);
    }
    (**(code **)(*param_2 + 0x518))
              (param_2,uVar15,*(undefined8 *)DG_Tweening_Core_DOGetter<float>_TypeInfo,plVar8,
               *(undefined8 *)(*param_2 + 0x520));
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_01db0150;
    }
  }
LAB_01db0134:
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar5,0);
LAB_01db0150:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


