/*
FUNCTION_NAME: FUN_01defd50
ENTRY_POINT: 01defd50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01df01fc) */

long FUN_01defd50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = StringLiteral_11159;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_0377f988 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11159);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(StringLiteral_3349);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(UnityEngine_UIElements_MouseMoveEvent_TypeInfo);
    thunk_FUN_00d48444(Method_Obi_ObiConstraints<ObiBendTwistConstraintsBatch>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Mathematics_math_select_shuffle_component__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_6785);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<JobHandle>_Dispose__);
    DAT_0377f988 = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01780344(uVar13,0);
  uVar4 = FUN_01789ac0(uVar12,uVar13,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_01702364(param_2,0);
    return lVar5;
  }
  uVar13 = *(undefined8 *)Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01780344(uVar13,0);
  uVar4 = FUN_01789ac0(uVar12,uVar13,0);
  puVar3 = Method_Obi_ObiConstraints<ObiBendTwistConstraintsBatch>__ctor__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_00da52a8(param_2,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
    return lVar5;
  }
  uVar13 = *(undefined8 *)StringLiteral_3349;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01780344(uVar13,0);
  uVar4 = FUN_01789ac0(uVar12,uVar13,0);
  puVar1 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
  if ((uVar4 & 1) != 0) {
    local_40 = 0;
    uStack_38 = 0;
    FUN_01768d04(&local_40,param_2,0);
    uStack_48 = uStack_38;
    local_50 = local_40;
    lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_50);
    return lVar5;
  }
  uVar13 = *(undefined8 *)StringLiteral_6785;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01780344(uVar13,0);
  uVar4 = FUN_01789ac0(uVar12,uVar13,0);
  puVar2 = Method_System_Collections_Generic_List<VisualElement>_AddRange__;
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>_AddRange__);
      puVar2 = Method_Unity_Mathematics_math_select_shuffle_component__;
      if (lVar5 != 0) {
        FUN_016ddb2c(lVar5,param_2,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar6 = FUN_01df02a0(uVar12);
        if (lVar6 != 0) {
          lVar5 = FUN_01fa3ed8(lVar6,lVar5,0);
          return lVar5;
        }
      }
    }
    else {
      lVar5 = FUN_0179c59c(*(undefined8 *)(param_1 + 0x20),1,0);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_Unity_Collections_NativeArray<JobHandle>_Dispose__;
      if (lVar6 != 0) {
        FUN_016ddb2c(lVar6,param_2,0);
        plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = StringLiteral_10310;
        if (plVar7 != (long *)0x0) {
          FUN_01f292fc(plVar7,lVar6,0);
          puVar1 = UnityEngine_UIElements_MouseMoveEvent_TypeInfo;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar12 = *(undefined8 *)UnityEngine_UIElements_MouseMoveEvent_TypeInfo;
          lVar6 = thunk_FUN_00d6225c(lVar5,uVar12);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar5,uVar12);
          }
          lVar6 = *(long *)puVar1;
          plVar8 = (long *)thunk_FUN_00d6225c(lVar5,lVar6);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar5,lVar6);
          }
          lVar10 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar6) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_01df0154;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar6,1);
LAB_01df0154:
          (*(code *)*puVar9)(plVar8,plVar7,puVar9[1]);
          lVar6 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_01df01b4;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_01df01b4:
          (*(code *)*puVar9)(plVar7,puVar9[1]);
          return lVar5;
        }
      }
    }
  }
  else {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__
                              );
    if (lVar5 != 0) {
      FUN_01fc3894(lVar5,param_2,0);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


