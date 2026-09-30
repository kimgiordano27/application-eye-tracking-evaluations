/*
FUNCTION_NAME: FUN_034bba98
ENTRY_POINT: 034bba98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034bba98(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_04832c6c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Tweener>__);
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TwoPaneSplitView_OnPostDisplaySetup__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerUp__);
    thunk_FUN_01efb3a4(Method_System_Type_FilterAttributeImpl__);
    thunk_FUN_01efb3a4(Method_System_Type_FilterNameIgnoreCaseImpl__);
    thunk_FUN_01efb3a4(Method_System_Type_FilterNameImpl__);
    thunk_FUN_01efb3a4(Method_System_Type_GetProperty__);
    thunk_FUN_01efb3a4(Method_System_Type_FormatTypeName__);
    thunk_FUN_01efb3a4(Method_System_Type_GetType__);
    thunk_FUN_01efb3a4(Method_System_Type_GetArrayRank__);
    thunk_FUN_01efb3a4(Method_System_Type_GetConstructor__);
    thunk_FUN_01efb3a4(Method_System_Type_GetEnumName__);
    thunk_FUN_01efb3a4(Method_System_Type_GetEnumNames__);
    thunk_FUN_01efb3a4(Method_System_Type_GetEnumUnderlyingType__);
    DAT_04832c6c = 1;
  }
  puVar9 = Method_System_Type_GetType__;
  puVar8 = Method_System_Type_GetEnumNames__;
  puVar7 = Method_System_Type_GetEnumName__;
  puVar6 = Method_System_Type_GetArrayRank__;
  puVar5 = Method_System_Type_FormatTypeName__;
  puVar4 = Method_System_Type_FilterNameImpl__;
  puVar3 = Method_System_Type_FilterNameIgnoreCaseImpl__;
  puVar2 = Method_System_Type_FilterAttributeImpl__;
  puVar1 = Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<Tweener>__;
  if (param_2 != 0) {
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Type_GetEnumUnderlyingType__,
                 *(undefined8 *)(param_1 + 0x10),0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x48),0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x50),0);
    plVar11 = *(long **)(param_1 + 0x30);
    uVar13 = *(undefined8 *)puVar4;
    if (plVar11 == (long *)0x0) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
    }
    FUN_0347e5c4(param_2,uVar13,uVar10,0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x18),0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar7,*(undefined8 *)(param_1 + 0x60),0);
    local_64 = *(undefined4 *)(param_1 + 0x3c);
    uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_64);
    FUN_03477a2c(param_2,*(undefined8 *)puVar8,uVar13,0);
    local_68 = 0;
    uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_68);
    FUN_03477a2c(param_2,*(undefined8 *)puVar9,uVar13,0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x40),0);
    local_6c = *(undefined4 *)(param_1 + 0x58);
    uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_TwoPaneSplitView_OnPostDisplaySetup__
                                ,&local_6c);
    FUN_03477a2c(param_2,*(undefined8 *)
                          Method_UnityEngine_UIElements_TwoPaneSplitViewResizer_OnPointerUp__,uVar13
                 ,0);
    local_70 = *(undefined4 *)(param_1 + 0x38);
    uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                 Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                ,&local_70);
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Type_GetConstructor__,uVar13,0);
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Type_GetProperty__,0,0);
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar13 = thunk_FUN_01f117cc();
  uVar12 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
  FUN_034efd20(uVar13,uVar12,0);
  uVar12 = thunk_FUN_01efb3a4(Method_System_Type_GetType__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar13,uVar12);
}


