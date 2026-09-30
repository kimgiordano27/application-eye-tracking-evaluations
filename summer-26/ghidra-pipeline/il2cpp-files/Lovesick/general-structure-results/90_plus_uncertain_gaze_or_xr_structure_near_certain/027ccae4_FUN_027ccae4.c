/*
FUNCTION_NAME: FUN_027ccae4
ENTRY_POINT: 027ccae4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_027ccae4(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_037888d7 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugManager_<>c_<_ctor>b__61_1__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<MRUKAnchor>_Add__);
    thunk_FUN_00d48444(
                      Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_5072);
    thunk_FUN_00d48444(UnityEngine_EventSystems_IDragHandler_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_3__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<sbyte>__ctor__
                      );
    thunk_FUN_00d48444(Obi_IAerodynamicConstraintsUser_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0078);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_u32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<TEdge>>_Clear__);
    thunk_FUN_00d48444(UnityEngine_EventSystems_EventSystem_<>c__DisplayClass52_0_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<SceneSelectButton>__);
    thunk_FUN_00d48444(StringLiteral_3301);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<CloseBufferAndWriterAsync>d__9>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_u16__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_float>__ctor__);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MBBlendShapeFrame_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11650);
    thunk_FUN_00d48444(Method_UnityEngine_Mesh_SetIndices<ushort>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Face>_get_Current__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__);
    DAT_037888d7 = 1;
  }
  FUN_027e21bc(param_1,param_2,0);
  puVar3 = Method_System_Collections_Generic_List<List<TEdge>>_Clear__;
  puVar2 = UnityEngine_EventSystems_IDragHandler_TypeInfo;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar2);
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_u32__;
  puVar2 = Obi_IAerodynamicConstraintsUser_TypeInfo;
  if (lVar4 == lVar5) {
    FUN_027cd0a0(param_1);
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar2);
  puVar3 = Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__;
  puVar2 = PTR_DAT_033f0078;
  if (lVar4 == lVar5) {
    FUN_026da868(0,0);
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar3);
  puVar3 = StringLiteral_5072;
  puVar2 = StringLiteral_3301;
  if (lVar4 == lVar5) {
    bVar1 = *(byte *)(*(long *)StringLiteral_11650 + 300);
    if (*(byte *)(*param_2 + 300) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)StringLiteral_11650) {
      param_2 = (long *)0x0;
    }
    FUN_027cd23c(param_1,param_2);
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar3);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_3__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<CloseBufferAndWriterAsync>d__9>__
  ;
  if (lVar4 == lVar5) {
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_List_Enumerator<Face>_get_Current__
                     + 300);
    if (*(byte *)(*param_2 + 300) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)Method_System_Collections_Generic_List_Enumerator<Face>_get_Current__) {
      param_2 = (long *)0x0;
    }
    FUN_027cd630(param_1,param_2);
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar3);
  puVar3 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__;
  puVar2 = UnityEngine_EventSystems_EventSystem_<>c__DisplayClass52_0_TypeInfo;
  if (lVar4 == lVar5) {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_Mesh_SetIndices<ushort>__ + 300);
    if (*(byte *)(*param_2 + 300) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)Method_UnityEngine_Mesh_SetIndices<ushort>__) {
      param_2 = (long *)0x0;
    }
    FUN_027cd798(param_1,param_2);
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar3);
  puVar3 = Method_System_Collections_Generic_HashSet<MRUKAnchor>_Add__;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
  ;
  if (lVar4 == lVar5) {
    bVar1 = *(byte *)(*(long *)DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MBBlendShapeFrame_TypeInfo
                     + 300);
    if (*(byte *)(*param_2 + 300) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MBBlendShapeFrame_TypeInfo) {
      param_2 = (long *)0x0;
    }
    FUN_027cd8e0(param_1,param_2);
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar3);
  puVar3 = Method_UnityEngine_GameObject_GetComponent<SceneSelectButton>__;
  puVar2 = 
  Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<sbyte>__ctor__;
  if (lVar4 == lVar5) {
    bVar1 = *(byte *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__ + 300);
    if (*(byte *)(*param_2 + 300) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)Method_System_Xml_XmlSqlBinaryReader_ValueAsULong__) {
      param_2 = (long *)0x0;
    }
    FUN_027cdee8(param_1,param_2);
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar2);
  if (lVar4 != lVar5) {
    return;
  }
  bVar1 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_u16__ + 300);
  if (*(byte *)(*param_2 + 300) < bVar1) {
    param_2 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
           *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsubw_u16__) {
    param_2 = (long *)0x0;
  }
  FUN_027ce24c(param_1,param_2);
  return;
}


