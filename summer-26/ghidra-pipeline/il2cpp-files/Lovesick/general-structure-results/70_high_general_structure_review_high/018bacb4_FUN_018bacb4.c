/*
FUNCTION_NAME: FUN_018bacb4
ENTRY_POINT: 018bacb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_018bacb4(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((DAT_03779966 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RectInt>_RemoveAt__);
    thunk_FUN_00d48444(Oculus_Interaction_GrabAPI_HandPinchData_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14096);
    thunk_FUN_00d48444(System_Diagnostics_ProcessWindowStyle_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12204);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__);
    thunk_FUN_00d48444(StringLiteral_2701);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugShapes_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                      );
    thunk_FUN_00d48444(Method_System_Dynamic_Utils_ExpressionUtils_ValidateArgumentCount__);
    thunk_FUN_00d48444(StringLiteral_12431);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Any<TeleportPoint>__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_56>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_Pop__
                      );
    thunk_FUN_00d48444(StringLiteral_6760);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Panel>_get_Current__);
    thunk_FUN_00d48444(Method_OVRTask<bool>_GetAwaiter__);
    thunk_FUN_00d48444(System_Func<PlayableDirector,_string>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f37f0);
    thunk_FUN_00d48444(System_Predicate<ScriptableRenderPass>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0ff0);
    thunk_FUN_00d48444(PTR_DAT_033f3b78);
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ed278);
    thunk_FUN_00d48444(
                      Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonSchemaModel>,_string>__
                      );
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<ObiDistanceField,_ObiDistanceFieldHandle>_get_Value__
                      );
    thunk_FUN_00d48444(StringLiteral_2694);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                      );
    DAT_03779966 = 1;
  }
  puVar2 = StringLiteral_2701;
  local_50 = 0;
  uStack_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  switch(*param_1) {
  case 0:
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
    FUN_0127e70c(&local_50,&local_38,
                 *(undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    if ((char)local_38 == '\0') {
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar4 = thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_GetPooled__
                                );
      uVar4 = FUN_018056b4(uVar10,uVar4,0);
      uVar10 = thunk_FUN_00d48444(
                                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_get_Item__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,uVar10);
    }
    uVar4 = thunk_FUN_00d6225c(*(undefined8 *)(param_1 + 8),*(undefined8 *)PTR_DAT_033f3b78);
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    switch(uVar3) {
    case 1:
      lVar7 = FUN_018a85a0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                           *(undefined8 *)(param_1 + 0xc));
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_60 = FUN_013bdbc8(lVar7,0,*(undefined8 *)PTR_DAT_033ed278);
      uVar6 = FUN_0127e6c0(local_60,*(undefined8 *)Method_OVRTask<bool>_GetAwaiter__);
      if ((uVar6 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(param_1 + 2,local_60,param_1,
                     *(undefined8 *)Method_System_Collections_Generic_List<RectInt>_RemoveAt__);
        return;
      }
      goto LAB_018baf98;
    case 2:
      lVar7 = FUN_0189cbd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                           *(undefined8 *)(param_1 + 0xc),0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_70 = FUN_013bdbc8(lVar7,0,*(undefined8 *)
                                       Method_System_Collections_Generic_KeyValuePair<ObiDistanceField,_ObiDistanceFieldHandle>_get_Value__
                             );
      uVar6 = FUN_0127e6c0(local_70,*(undefined8 *)System_Func<PlayableDirector,_string>_TypeInfo);
      if ((uVar6 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(param_1 + 2,local_70,param_1,
                     *(undefined8 *)System_Diagnostics_ProcessWindowStyle_TypeInfo);
        return;
      }
      goto LAB_018baf38;
    case 3:
      lVar7 = FUN_0189f738(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                           *(undefined8 *)(param_1 + 0xc));
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_80 = FUN_013bdbc8(lVar7,0,*(undefined8 *)
                                       Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonSchemaModel>,_string>__
                             );
      uVar6 = FUN_0127e6c0(local_80,*(undefined8 *)PTR_DAT_033f37f0);
      if ((uVar6 & 1) == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0x1a) = local_80;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(param_1 + 2,local_80,param_1,*(undefined8 *)StringLiteral_12204);
        return;
      }
      goto LAB_018baf68;
    case 4:
      lVar7 = FUN_018ad1c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                           *(undefined8 *)(param_1 + 0xc));
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_90 = FUN_013bdbc8(lVar7,0,*(undefined8 *)StringLiteral_2694);
      uVar6 = FUN_0127e6c0(local_90,*(undefined8 *)PTR_DAT_033f0ff0);
      if ((uVar6 & 1) == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x1e) = local_90;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(param_1 + 2,local_90,param_1,
                     *(undefined8 *)Oculus_Interaction_GrabAPI_HandPinchData_TypeInfo);
        return;
      }
      goto LAB_018baf08;
    case 5:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      uVar10 = 0;
      if (plVar5 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      lVar7 = FUN_018bde84(uVar10,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_018a1a50(lVar7,uVar4,*(undefined8 *)(param_1 + 10));
      break;
    default:
      uVar4 = *(undefined8 *)(param_1 + 8);
      lVar7 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01731954(0);
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 != (long *)0x0) {
        local_38 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        uVar8 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__
                                  );
        uVar8 = thunk_FUN_00d61fa0(uVar8,&local_38);
        uVar9 = thunk_FUN_00d48444(
                                  Method_UnityEngine_Playables_PlayableGraph_Connect<Playable,_AnimationOffsetPlayable>__
                                  );
        uVar10 = FUN_018651d4(uVar9,uVar10,uVar8,0);
        uVar4 = FUN_018056b4(uVar4,uVar10,0);
        uVar10 = thunk_FUN_00d48444(
                                   Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_get_Item__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar4,uVar10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                  OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_018bfb14(lVar7,uVar10,0);
      FUN_018a1a50(lVar7,uVar4,*(undefined8 *)(param_1 + 10));
      break;
    case 0xb:
      lVar7 = FUN_018bdc34(0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_018a1a50(lVar7,uVar4,*(undefined8 *)(param_1 + 10));
      break;
    case 0xc:
      lVar7 = FUN_018bdd6c(0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_018a1a50(lVar7,uVar4,*(undefined8 *)(param_1 + 10));
    }
    goto LAB_018bafb4;
  case 1:
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
LAB_018baf98:
    FUN_0127e70c(local_60,&local_38,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_Pop__
                );
    break;
  case 2:
    local_70 = *(undefined1 (*) [16])(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *param_1 = 0xffffffff;
LAB_018baf38:
    FUN_0127e70c(local_70,&local_38,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_56>_SliceWithStride<Vector3>__
                );
    break;
  case 3:
    local_80 = *(undefined1 (*) [16])(param_1 + 0x1a);
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *param_1 = 0xffffffff;
LAB_018baf68:
    FUN_0127e70c(local_80,&local_38,*(undefined8 *)StringLiteral_6760);
    break;
  case 4:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *param_1 = 0xffffffff;
LAB_018baf08:
    FUN_0127e70c(local_90,&local_38,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<Panel>_get_Current__);
    break;
  default:
    Oculus_Interaction_SelectorUnityEventWrapper__InjectSelector
              (Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
               ,*(undefined8 *)(param_1 + 8));
    return;
  }
  lVar7 = CONCAT44(uStack_34,local_38);
LAB_018bafb4:
  *param_1 = 0xfffffffe;
  puVar1 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(param_1 + 2,lVar7,*(undefined8 *)puVar1);
  return;
}


