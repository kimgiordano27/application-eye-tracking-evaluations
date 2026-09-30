/*
FUNCTION_NAME: FUN_034bae00
ENTRY_POINT: 034bae00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034bae00(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_04832c67 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Tween>__);
    thunk_FUN_01efb3a4(Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Tweener>__);
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Color,_Color,_ColorOptions>>__
                      );
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                      );
    thunk_FUN_01efb3a4(Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Sequence>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TwoPaneSplitView_OnPostDisplaySetup__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Append__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TwoPaneSplitView_OnSizeChange__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerDown__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerMove__);
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerUp__);
    thunk_FUN_01efb3a4(Method_System_Type_FilterAttributeImpl__);
    thunk_FUN_01efb3a4(Method_System_Type_FilterNameIgnoreCaseImpl__);
    thunk_FUN_01efb3a4(Method_System_Type_FilterNameImpl__);
    thunk_FUN_01efb3a4(Method_System_Type_FormatTypeName__);
    thunk_FUN_01efb3a4(Method_System_Type_GetArrayRank__);
    thunk_FUN_01efb3a4(Method_System_Type_GetConstructor__);
    thunk_FUN_01efb3a4(Method_System_Type_GetEnumName__);
    thunk_FUN_01efb3a4(Method_System_Type_GetEnumNames__);
    thunk_FUN_01efb3a4(Method_System_Type_GetEnumUnderlyingType__);
    DAT_04832c67 = 1;
  }
  FUN_035ac8e8(param_1,0);
  puVar5 = Method_System_Type_GetEnumName__;
  puVar4 = Method_System_Type_FilterNameIgnoreCaseImpl__;
  puVar3 = Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerMove__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 != 0) {
    uVar7 = FUN_0348b9c8(param_2,*(undefined8 *)Method_System_Type_GetEnumUnderlyingType__,0);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    thunk_FUN_01f51358();
    uVar7 = FUN_0348b9c8(param_2,*(undefined8 *)puVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    thunk_FUN_01f51358();
    uVar7 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03579868(uVar7,0);
    plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar5,uVar7,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
      lVar10 = *(long *)
                Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
      ;
      if ((*plVar8 != lVar10) || (*(long **)(param_1 + 0x60) = plVar8, *plVar8 != lVar10))
      goto LAB_034bb234;
    }
    puVar4 = Method_System_Type_GetArrayRank__;
    puVar3 = Method_System_Text_StringBuilder_Append__;
    puVar2 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
    thunk_FUN_01f51358(param_1 + 0x60,plVar8);
    uVar7 = FUN_03579868(*(undefined8 *)puVar3,0);
    plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar4,uVar7,0);
    if (plVar8 == (long *)0x0) {
      lVar10 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar10 = thunk_FUN_01f116d0(plVar8,uVar7);
      if (lVar10 == 0) goto LAB_034bb388;
      *(long *)(param_1 + 0x48) = lVar10;
      lVar11 = *(long *)puVar2;
      lVar10 = thunk_FUN_01f116d0(plVar8,lVar11);
      if (lVar10 == 0) goto LAB_034bb39c;
    }
    puVar4 = Method_System_Type_FilterAttributeImpl__;
    thunk_FUN_01f51358(param_1 + 0x48,lVar10);
    uVar7 = FUN_03579868(*(undefined8 *)puVar3,0);
    plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar4,uVar7,0);
    if (plVar8 == (long *)0x0) {
      lVar10 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar10 = thunk_FUN_01f116d0(plVar8,uVar7);
      if (lVar10 == 0) {
LAB_034bb388:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar8,uVar7);
      }
      *(long *)(param_1 + 0x50) = lVar10;
      lVar11 = *(long *)puVar2;
      lVar10 = thunk_FUN_01f116d0(plVar8,lVar11);
      if (lVar10 == 0) goto LAB_034bb39c;
    }
    puVar3 = Method_System_Type_GetEnumNames__;
    puVar2 = Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Tween>__;
    thunk_FUN_01f51358(param_1 + 0x50,lVar10);
    uVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
    plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar7,0);
    puVar3 = Method_System_Type_FormatTypeName__;
    puVar2 = Method_UnityEngine_UIElements_TwoPaneSplitView_OnSizeChange__;
    if (plVar8 != (long *)0x0) {
      lVar11 = *(long *)Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Tweener>__;
      if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar9 = (undefined4 *)thunk_FUN_01f11920();
        *(undefined4 *)(param_1 + 0x3c) = *puVar9;
        uVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
        plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar7,0);
        if (plVar8 == (long *)0x0) {
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        else {
          lVar10 = *(long *)Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerDown__;
          bVar1 = *(byte *)(lVar10 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10)) {
LAB_034bb234:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar8);
          }
          *(long **)(param_1 + 0x40) = plVar8;
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10))
          goto LAB_034bb234;
        }
        puVar3 = Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerUp__;
        puVar2 = Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Sequence>__;
        thunk_FUN_01f51358(param_1 + 0x40,plVar8);
        uVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
        plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar7,0);
        puVar3 = Method_System_Type_GetConstructor__;
        puVar2 = 
        Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Color,_Color,_ColorOptions>>__
        ;
        if (plVar8 == (long *)0x0) goto LAB_034bb384;
        lVar11 = *(long *)Method_UnityEngine_UIElements_TwoPaneSplitView_OnPostDisplaySetup__;
        if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar11 + 0x40)) {
          puVar9 = (undefined4 *)thunk_FUN_01f11920();
          *(undefined4 *)(param_1 + 0x58) = *puVar9;
          uVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
          plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar7,0);
          puVar2 = Method_System_Type_FilterNameImpl__;
          if (plVar8 == (long *)0x0) goto LAB_034bb384;
          lVar11 = *(long *)
                    Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
          ;
          if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar11 + 0x40)) {
            puVar9 = (undefined4 *)thunk_FUN_01f11920();
            *(undefined4 *)(param_1 + 0x38) = *puVar9;
            iVar6 = FUN_0348b56c(param_2,*(undefined8 *)puVar2,0);
            if (iVar6 == -1) {
              return;
            }
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
            FUN_03533a20(uVar7,iVar6,0);
            *(undefined8 *)(param_1 + 0x30) = uVar7;
            thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar7);
            return;
          }
        }
      }
LAB_034bb39c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8,lVar11);
    }
  }
LAB_034bb384:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


