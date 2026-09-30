/*
FUNCTION_NAME: Oculus.Interaction.RectTransformBoundsClipperDriver$$Start
ENTRY_POINT: 018bb0f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_RectTransformBoundsClipperDriver__Start(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  long *unaff_x23;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char cStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  lVar5 = (**(code **)(*param_1 + 0x188))
                    (param_1,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*param_1 + 400));
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  _in_stack_00000040 =
       FUN_013bdbc8(lVar5,0,*(undefined8 *)
                             UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                   );
  uVar6 = FUN_0127e6c0(&stack0x00000040,
                       *(undefined8 *)System_Predicate<ScriptableRenderPass>_TypeInfo);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098fc0(unaff_x19 + 2,&stack0x00000040);
    return;
  }
  FUN_0127e70c(&stack0x00000040,&stack0x00000058,
               *(undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
  if (cStack0000000000000058 == '\0') {
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    uVar3 = thunk_FUN_00d48444(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_GetPooled__)
    ;
    uVar3 = FUN_018056b4(uVar9,uVar3,0);
    uVar9 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_get_Item__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar9);
  }
  uVar3 = thunk_FUN_00d6225c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_033f3b78);
  plVar4 = *(long **)(unaff_x19 + 8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
  switch(uVar2) {
  case 1:
    lVar5 = FUN_018a85a0(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    _in_stack_00000030 = FUN_013bdbc8(lVar5,0,*(undefined8 *)PTR_DAT_033ed278);
    uVar6 = FUN_0127e6c0(&stack0x00000030,*(undefined8 *)Method_OVRTask<bool>_GetAwaiter__);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(unaff_x19 + 2,&stack0x00000030);
      return;
    }
    FUN_0127e70c(&stack0x00000030,&stack0x00000058,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_Pop__
                );
    break;
  case 2:
    lVar5 = FUN_0189cbd4(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    _in_stack_00000020 =
         FUN_013bdbc8(lVar5,0,*(undefined8 *)
                               Method_System_Collections_Generic_KeyValuePair<ObiDistanceField,_ObiDistanceFieldHandle>_get_Value__
                     );
    uVar6 = FUN_0127e6c0(&stack0x00000020,
                         *(undefined8 *)System_Func<PlayableDirector,_string>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    FUN_0127e70c(&stack0x00000020,&stack0x00000058,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_56>_SliceWithStride<Vector3>__
                );
    break;
  case 3:
    lVar5 = FUN_0189f738(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    _in_stack_00000010 =
         FUN_013bdbc8(lVar5,0,*(undefined8 *)
                               Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonSchemaModel>,_string>__
                     );
    uVar6 = FUN_0127e6c0(&stack0x00000010,*(undefined8 *)PTR_DAT_033f37f0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    FUN_0127e70c(&stack0x00000010,&stack0x00000058,*(undefined8 *)StringLiteral_6760);
    break;
  case 4:
    lVar5 = FUN_018ad1c0(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar10 = FUN_013bdbc8(lVar5,0,*(undefined8 *)StringLiteral_2694);
    uVar6 = FUN_0127e6c0();
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x1e) = auVar10;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(unaff_x19 + 2);
      return;
    }
    FUN_0127e70c();
    break;
  case 5:
    plVar4 = *(long **)(unaff_x19 + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
    uVar9 = 0;
    if (plVar4 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    lVar5 = FUN_018bde84(uVar9,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_018a1a50(lVar5,uVar3,*(undefined8 *)(unaff_x19 + 10));
    goto LAB_018bafb4;
  default:
    uVar3 = *(undefined8 *)(unaff_x19 + 8);
    lVar5 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_01731954(0);
    plVar4 = *(long **)(unaff_x19 + 8);
    if (plVar4 != (long *)0x0) {
      _cStack0000000000000058 =
           (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      uVar7 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__)
      ;
      uVar7 = thunk_FUN_00d61fa0(uVar7,&stack0x00000058);
      uVar8 = thunk_FUN_00d48444(
                                Method_UnityEngine_Playables_PlayableGraph_Connect<Playable,_AnimationOffsetPlayable>__
                                );
      uVar9 = FUN_018651d4(uVar8,uVar9,uVar7,0);
      uVar3 = FUN_018056b4(uVar3,uVar9,0);
      uVar9 = thunk_FUN_00d48444(
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_get_Item__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    plVar4 = *(long **)(unaff_x19 + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_018bfb14(lVar5,uVar9,0);
    FUN_018a1a50(lVar5,uVar3,*(undefined8 *)(unaff_x19 + 10));
    goto LAB_018bafb4;
  case 0xb:
    lVar5 = FUN_018bdc34(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_018a1a50(lVar5,uVar3,*(undefined8 *)(unaff_x19 + 10));
    goto LAB_018bafb4;
  case 0xc:
    lVar5 = FUN_018bdd6c(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_018a1a50(lVar5,uVar3,*(undefined8 *)(unaff_x19 + 10));
    goto LAB_018bafb4;
  }
  lVar5 = CONCAT44(uStack000000000000005c,_cStack0000000000000058);
LAB_018bafb4:
  *unaff_x19 = 0xfffffffe;
  puVar1 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(unaff_x19 + 2,lVar5,*(undefined8 *)puVar1);
  return;
}


