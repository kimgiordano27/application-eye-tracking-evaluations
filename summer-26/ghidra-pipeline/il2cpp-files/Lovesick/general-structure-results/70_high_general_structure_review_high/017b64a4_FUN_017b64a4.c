/*
FUNCTION_NAME: FUN_017b64a4
ENTRY_POINT: 017b64a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 FUN_017b64a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar4 = param_1;
  if ((DAT_03778ff7 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SimpleTuple<Face,_Face>>_Add__);
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<UIHoverEventArgs>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_122);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Vector3[],_Vector3ArrayOptions>__ctor__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass115_0_<RemoveToggledScript>b__0__);
    thunk_FUN_00d48444(System_Data_DataRowChangeEventArgs_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eecd8);
    plVar4 = (long *)thunk_FUN_00d48444(StringLiteral_8407);
    DAT_03778ff7 = 1;
  }
  puVar3 = Method_SaveData_<>c__DisplayClass115_0_<RemoveToggledScript>b__0__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = 
  Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Vector3[],_Vector3ArrayOptions>__ctor__;
  puVar9 = (undefined8 *)PTR_DAT_033eecd8;
  switch((int)param_1[9]) {
  case 1:
    plVar4 = (long *)Method_System_Collections_Generic_List<SimpleTuple<Face,_Face>>_Add__;
    break;
  case 2:
    plVar4 = (long *)
             Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
    ;
    break;
  case 3:
    plVar4 = (long *)UnityEngine_Events_UnityAction<UIHoverEventArgs>_TypeInfo;
    break;
  case 4:
    lVar8 = param_1[7];
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
LAB_017b6990:
                    /* WARNING: Subroutine does not return */
      FUN_017b6340(plVar4,*(undefined8 *)StringLiteral_8407);
    }
    lVar10 = param_1[8];
    uVar5 = 0;
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x10) == 0) {
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_00da53b4(lVar8,1,0,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
        return uVar6;
      }
      plVar4 = (long *)FUN_016b3f88(lVar10,0);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x017b6704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar4 + 0x298))
                          (plVar4,param_1[7],1,0,*(undefined8 *)(*plVar4 + 0x2a0));
        return uVar6;
      }
      goto LAB_017b6998;
    }
    goto LAB_017b69a8;
  case 5:
    if ((param_1[7] == 0) || (*(int *)(param_1[7] + 0x10) == 0)) goto LAB_017b6990;
    uVar5 = 0;
    if (param_1[8] == 0) goto LAB_017b69a8;
    plVar4 = (long *)FUN_016b3f88(param_1[8],0);
    puVar1 = StringLiteral_122;
    if (plVar4 == (long *)0x0) goto LAB_017b6998;
    uVar6 = (**(code **)(*plVar4 + 0x2a8))(plVar4,param_1[7],*(undefined8 *)(*plVar4 + 0x2b0));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar5 = FUN_016acf94(uVar6,0,0);
    if ((uVar5 & 1) == 0) {
      return uVar6;
    }
    uVar6 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar6 = FUN_00da4fb8(uVar6,2);
    lVar8 = param_1[7];
    FUN_00ac2be8();
    FUN_00acb0b4(uVar6,lVar8);
    FUN_00adb25c(uVar6,0,lVar8);
    lVar8 = param_1[8];
    FUN_00ac2be8(uVar6);
    FUN_00acb0b4(uVar6,lVar8);
    FUN_00adb25c(uVar6,1,lVar8);
    uVar7 = thunk_FUN_00d48444(Method_Oculus_Interaction_RayInteractorCursorVisual_UpdateVisual__);
    uVar6 = FUN_017b63dc(uVar7,uVar6);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar7,uVar6,0);
    goto LAB_017b6978;
  case 6:
    if ((param_1[7] == 0) || (*(int *)(param_1[7] + 0x10) == 0)) goto LAB_017b6990;
    uVar5 = 0;
    if (param_1[8] != 0) {
      uVar6 = FUN_016b3f88(param_1[8],0);
      return uVar6;
    }
LAB_017b69a8:
                    /* WARNING: Subroutine does not return */
    FUN_017b6340(uVar5,*puVar9);
  case 7:
    uVar5 = FUN_016ac04c(param_1[6],0,0);
    if ((uVar5 & 1) != 0) {
      lVar8 = param_1[5];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_01789ac0(lVar8,0,0);
      puVar9 = (undefined8 *)System_Data_DataRowChangeEventArgs_TypeInfo;
      if ((uVar5 & 1) != 0) goto LAB_017b69a8;
    }
    uVar5 = FUN_016ac034(param_1[6],0,0);
    if ((uVar5 & 1) == 0) {
      plVar4 = (long *)param_1[5];
      if ((plVar4 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar4 + 0x488))(plVar4,*(undefined8 *)(*plVar4 + 0x490)),
         lVar8 == 0)) goto LAB_017b6998;
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 4)) goto LAB_017b699c;
      uVar6 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
      goto LAB_017b692c;
    }
    plVar4 = (long *)param_1[6];
    if ((plVar4 != (long *)0x0) &&
       (lVar8 = (**(code **)(*plVar4 + 0x338))(plVar4,*(undefined8 *)(*plVar4 + 0x340)), lVar8 != 0)
       ) {
      if (*(uint *)(param_1 + 4) < *(uint *)(lVar8 + 0x18)) {
        return *(undefined8 *)(lVar8 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
      }
      goto LAB_017b699c;
    }
    goto LAB_017b6998;
  case 8:
    *(undefined4 *)(param_1 + 9) = 4;
    plVar4 = (long *)(**(code **)(*param_1 + 0x1a8))
                               (param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1b0));
    lVar8 = *(long *)puVar2;
    if (plVar4 == (long *)0x0) {
LAB_017b6744:
      plVar4 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar4 + 300) < *(byte *)(lVar8 + 300)) goto LAB_017b6744;
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8) {
        plVar4 = (long *)0x0;
      }
    }
    lVar10 = param_1[2];
    *(undefined4 *)(param_1 + 9) = 8;
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) {
LAB_017b699c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
      }
      uVar5 = FUN_01789ac0(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      if (plVar4 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar4 + 0x928))(plVar4,param_1[2],*(undefined8 *)(*plVar4 + 0x930));
LAB_017b692c:
        uVar6 = FUN_017b57ec(param_1,uVar6);
        return uVar6;
      }
    }
LAB_017b6998:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  default:
    uVar6 = thunk_FUN_00d48444(PTR_DAT_033ec810);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar7,uVar6,0);
LAB_017b6978:
    uVar6 = thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass115_0_<RemoveToggledScript>b__0__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar6);
  }
  lVar8 = *plVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *plVar4;
  }
  return **(undefined8 **)(lVar8 + 0xb8);
}


