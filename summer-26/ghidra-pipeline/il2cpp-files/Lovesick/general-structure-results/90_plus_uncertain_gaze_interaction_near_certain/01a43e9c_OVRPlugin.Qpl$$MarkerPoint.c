/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 01a43e9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


long OVRPlugin_Qpl__MarkerPoint(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if ((DAT_0377ac6c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1408);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                      );
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(PTR_DAT_033ead80);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_13664);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanControl__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateMetallicMinValue>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_Add__);
    DAT_0377ac6c = 1;
  }
  puVar3 = Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if ((param_1 == 0) ||
     (iVar10 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                         (param_1,*(undefined8 *)
                                   Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                         ), puVar9 = StringLiteral_1408,
     puVar8 = 
     Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateMetallicMinValue>b__0__
     , puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,
     puVar6 = Method_System_Text_RegularExpressions_RegexParser_ScanControl__,
     puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__,
     puVar4 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__,
     puVar2 = Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_Add__,
     iVar10 == 0)) {
    return 0;
  }
  uVar11 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                     (param_1,*(undefined8 *)puVar3);
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar11);
  FUN_0129b5d0(param_1,&stack0x00000008,*(undefined8 *)puVar9);
  uVar1 = DAT_028ab160;
  uVar20 = DAT_028aae40;
  uVar22 = 0;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000060 = in_stack_00000028;
  do {
    uVar13 = FUN_012bf140(&stack0x00000040,*(undefined8 *)puVar4);
    if ((uVar13 & 1) == 0) {
      FUN_012bf83c(&stack0x00000040,*(undefined8 *)PTR_DAT_033ead80);
      return lVar12;
    }
    auVar23 = FUN_00bc3474(&stack0x00000040,*(undefined8 *)StringLiteral_13664);
    _in_stack_00000030 = auVar23;
    lVar14 = FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar8);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar15 = thunk_FUN_00d93c64(lVar14,0);
    uVar21 = *(undefined8 *)puVar7;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_01780344(uVar21,0);
    uVar13 = FUN_01789ac0(uVar15,uVar21,0);
    lVar14 = lVar12 + (long)(int)uVar22 * 0x28;
    if ((uVar13 & 1) == 0) {
      lVar18 = FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar8);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = thunk_FUN_00d93c64(lVar18,0);
      uVar21 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_01780344(uVar21,0);
      uVar13 = FUN_01789ac0(uVar15,uVar21,0);
      if ((uVar13 & 1) != 0) {
        uVar15 = FUN_00aeb078(&stack0x00000030,*(undefined8 *)puVar6);
        plVar16 = (long *)FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar8);
        if ((plVar16 != (long *)0x0) &&
           (*plVar16 !=
            *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined8 *)(lVar14 + 0x20) = uVar15;
        *(undefined8 *)(lVar14 + 0x28) = 0;
        *(long **)(lVar14 + 0x30) = plVar16;
        *(undefined8 *)(lVar14 + 0x38) = 0;
        goto LAB_01a441c8;
      }
      lVar18 = FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar8);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = thunk_FUN_00d93c64(lVar18,0);
      uVar21 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_01780344(uVar21,0);
      uVar13 = FUN_01789ac0(uVar15,uVar21,0);
      if ((uVar13 & 1) == 0) {
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        lVar12 = thunk_FUN_00d62348();
        if (lVar12 != 0) {
          uVar20 = thunk_FUN_00d48444(
                                     Method_System_Collections_Generic_Dictionary<int,_TransformFeatureStateCollection_TransformStateInfo>_Remove__
                                     );
          FUN_017a9608(lVar12,uVar20,0);
          uVar20 = thunk_FUN_00d48444(Obi_PriorityQueue<VoxelPathFinder_TargetVoxel>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar12,uVar20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = FUN_00aeb078(&stack0x00000030,*(undefined8 *)puVar6);
      plVar16 = (long *)FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar19 = (undefined8 *)thunk_FUN_00d624a0();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar21 = *puVar19;
      *(undefined8 *)(lVar14 + 0x20) = uVar15;
      *(undefined8 *)(lVar14 + 0x28) = uVar20;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      *(undefined8 *)(lVar14 + 0x38) = 0;
      *(undefined8 *)(lVar14 + 0x40) = uVar21;
    }
    else {
      uVar15 = FUN_00aeb078(&stack0x00000030,*(undefined8 *)puVar6);
      plVar16 = (long *)FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(*plVar16 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar17 = (undefined4 *)thunk_FUN_00d624a0();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar11 = *puVar17;
      *(undefined8 *)(lVar14 + 0x20) = uVar15;
      *(undefined8 *)(lVar14 + 0x28) = uVar1;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      *(undefined4 *)(lVar14 + 0x38) = uVar11;
      *(undefined4 *)(lVar14 + 0x3c) = 0;
LAB_01a441c8:
      *(undefined8 *)(lVar14 + 0x40) = 0;
    }
    uVar22 = uVar22 + 1;
  } while( true );
}


