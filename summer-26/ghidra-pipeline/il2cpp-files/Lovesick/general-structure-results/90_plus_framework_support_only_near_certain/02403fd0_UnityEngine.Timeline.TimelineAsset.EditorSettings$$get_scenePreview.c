/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineAsset.EditorSettings$$get_scenePreview
ENTRY_POINT: 02403fd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Timeline_TimelineAsset_EditorSettings__get_scenePreview(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x25;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  
  lVar6 = *unaff_x19;
  uVar7 = *(undefined8 *)(unaff_x25 + 0x80);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *unaff_x19;
  }
  uVar11 = in_stack_00000058;
  puVar1 = StringLiteral_8567;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    FUN_02414be8(*(undefined4 *)(lVar6 + 0xe0));
    return;
  }
  uVar7 = FUN_010dcdb8(uVar7,lVar8,
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                      );
  uVar7 = FUN_010df6b8(uVar7,*(undefined8 *)puVar1);
  lVar6 = *unaff_x19;
  uVar9 = *(undefined8 *)(unaff_x25 + 0x70);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
    lVar6 = *unaff_x19;
  }
  puVar1 = PTR_DAT_033eedf8;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar6);
      lVar6 = *unaff_x19;
    }
    uVar11 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar8 == 0) goto LAB_02404390;
    FUN_012d239c(lVar8,uVar11,*(undefined8 *)PTR_DAT_033f0718,0);
    *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x10) = lVar8;
    uVar11 = in_stack_00000058;
  }
  puVar1 = 
  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__;
  uVar9 = FUN_010dcdb8(uVar9,lVar8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_get_Count__
                      );
  uVar9 = FUN_010df6b8(uVar9,*(undefined8 *)puVar1);
  lVar6 = *unaff_x19;
  uVar10 = *(undefined8 *)(unaff_x25 + 0x70);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
    lVar6 = *unaff_x19;
  }
  puVar1 = StringLiteral_1507;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar6);
      lVar6 = *unaff_x19;
    }
    uVar11 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar8 == 0) goto LAB_02404390;
    FUN_012d239c(lVar8,uVar11,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_TypeInfo
                 ,0);
    *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = lVar8;
    uVar11 = in_stack_00000058;
  }
  puVar5 = StringLiteral_10491;
  puVar4 = StringLiteral_9135;
  puVar3 = StringLiteral_2811;
  puVar2 = Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__;
  puVar1 = PTR_DAT_033f1c70;
  uVar10 = FUN_010dcdb8(uVar10,lVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_37__);
  uVar10 = FUN_010df6b8(uVar10,*(undefined8 *)puVar5);
  FUN_01322050(in_stack_00000010,uVar9,*(undefined8 *)puVar1);
  FUN_01322050(uVar11,uVar7,*(undefined8 *)puVar3);
  FUN_01322050(in_stack_00000000,uVar10,*(undefined8 *)puVar2);
  FUN_0240394c(*(undefined4 *)(in_stack_00000010 + 0x18),in_stack_00000008);
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = StringLiteral_12929;
  puVar3 = StringLiteral_10837;
  puVar2 = Method_System_Collections_Generic_List<ARTrackedObject>_get_Count__;
  puVar1 = System_Collections_Generic_ICollection<IList<int>>_TypeInfo;
  if (lVar6 != 0) {
    FUN_01320e50(lVar6,*(undefined8 *)
                        UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_ShaderConstants_TypeInfo
                );
    UnityEngine_Timeline_TimelineAsset__DeleteTrack(in_stack_00000010,uVar11,lVar6);
    FUN_02403688(lVar6);
    FUN_024036d8(in_stack_00000010,in_stack_00000000,uVar11,in_stack_00000008,lVar6);
    uVar7 = FUN_01325140(in_stack_00000000,*(undefined8 *)puVar2);
    uVar9 = FUN_01325140(in_stack_00000010,*(undefined8 *)puVar4);
    uVar11 = FUN_01325140(uVar11,*(undefined8 *)puVar3);
    uVar10 = FUN_01325140(in_stack_00000008,*(undefined8 *)puVar1);
    if (in_stack_00000018 != 0) {
      FUN_0266ed50(in_stack_00000018,0);
      FUN_0266b9c4(in_stack_00000018,uVar9,0);
      FUN_0266db2c(in_stack_00000018,uVar11,0);
      FUN_0266bb1c(in_stack_00000018,uVar10,0);
      FUN_0266c128(in_stack_00000018,uVar7,0);
      FUN_024039f8(&stack0x00000028,uVar9);
      in_stack_00000020[2] = in_stack_00000038;
      in_stack_00000020[1] = in_stack_00000030;
      *in_stack_00000020 = in_stack_00000028;
      return;
    }
  }
LAB_02404390:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


