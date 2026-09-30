/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 01a43f90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


long OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(int param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
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
  
  puVar7 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateMetallicMinValue>b__0__
  ;
  puVar6 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar5 = Method_System_Text_RegularExpressions_RegexParser_ScanControl__;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__;
  puVar2 = Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_Add__;
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    uVar8 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                      ();
    lVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    FUN_0129b5d0();
    uVar1 = DAT_028ab160;
    uVar17 = DAT_028aae40;
    uVar19 = 0;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000028;
    while (uVar10 = FUN_012bf140(&stack0x00000040,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
      auVar20 = FUN_00bc3474(&stack0x00000040,*(undefined8 *)StringLiteral_13664);
      _in_stack_00000030 = auVar20;
      lVar11 = FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar7);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = thunk_FUN_00d93c64(lVar11,0);
      uVar18 = *(undefined8 *)puVar6;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01789ac0(uVar12,uVar18,0);
      lVar11 = lVar9 + (long)(int)uVar19 * 0x28;
      if ((uVar10 & 1) == 0) {
        lVar15 = FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar7);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = thunk_FUN_00d93c64(lVar15,0);
        uVar18 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = FUN_01780344(uVar18,0);
        uVar10 = FUN_01789ac0(uVar12,uVar18,0);
        if ((uVar10 & 1) != 0) {
          uVar12 = FUN_00aeb078(&stack0x00000030,*(undefined8 *)puVar5);
          plVar13 = (long *)FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar7);
          if (plVar13 != (long *)0x0) {
            if (*plVar13 !=
                *(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c();
            }
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined8 *)(lVar11 + 0x20) = uVar12;
          *(undefined8 *)(lVar11 + 0x28) = 0;
          *(long **)(lVar11 + 0x30) = plVar13;
          *(undefined8 *)(lVar11 + 0x38) = 0;
          goto LAB_01a441c8;
        }
        lVar15 = FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar7);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = thunk_FUN_00d93c64(lVar15,0);
        uVar18 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = FUN_01780344(uVar18,0);
        uVar10 = FUN_01789ac0(uVar12,uVar18,0);
        if ((uVar10 & 1) == 0) {
          thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
          lVar9 = thunk_FUN_00d62348();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar17 = thunk_FUN_00d48444(
                                     Method_System_Collections_Generic_Dictionary<int,_TransformFeatureStateCollection_TransformStateInfo>_Remove__
                                     );
          FUN_017a9608(lVar9,uVar17,0);
          uVar17 = thunk_FUN_00d48444(Obi_PriorityQueue<VoxelPathFinder_TargetVoxel>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar9,uVar17);
        }
        uVar12 = FUN_00aeb078(&stack0x00000030,*(undefined8 *)puVar5);
        plVar13 = (long *)FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar7);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        puVar16 = (undefined8 *)thunk_FUN_00d624a0();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar18 = *puVar16;
        *(undefined8 *)(lVar11 + 0x20) = uVar12;
        *(undefined8 *)(lVar11 + 0x28) = uVar17;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined8 *)(lVar11 + 0x38) = 0;
        *(undefined8 *)(lVar11 + 0x40) = uVar18;
      }
      else {
        uVar12 = FUN_00aeb078(&stack0x00000030,*(undefined8 *)puVar5);
        plVar13 = (long *)FUN_00aeb17c(&stack0x00000030,*(undefined8 *)puVar7);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(*plVar13 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                     0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        puVar14 = (undefined4 *)thunk_FUN_00d624a0();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar8 = *puVar14;
        *(undefined8 *)(lVar11 + 0x20) = uVar12;
        *(undefined8 *)(lVar11 + 0x28) = uVar1;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined4 *)(lVar11 + 0x38) = uVar8;
        *(undefined4 *)(lVar11 + 0x3c) = 0;
LAB_01a441c8:
        *(undefined8 *)(lVar11 + 0x40) = 0;
      }
      uVar19 = uVar19 + 1;
    }
    FUN_012bf83c(&stack0x00000040,*(undefined8 *)PTR_DAT_033ead80);
  }
  return lVar9;
}


