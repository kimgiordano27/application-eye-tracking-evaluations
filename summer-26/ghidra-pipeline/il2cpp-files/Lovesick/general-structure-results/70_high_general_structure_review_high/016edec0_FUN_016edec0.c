/*
FUNCTION_NAME: FUN_016edec0
ENTRY_POINT: 016edec0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_016edec0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_03778845 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_169);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_get_Current__
                      );
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_8470);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<StandardVelocityCalculator_SamplePoseData>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef0a0);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Tuple<int,_string>>_Start<VRequest_<GetError>d__98>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_LinkedPool<VectorImageRenderInfo>_Clear__);
    thunk_FUN_00d48444(StringLiteral_8157);
    thunk_FUN_00d48444(PTR_DAT_033eecb8);
    DAT_03778845 = 1;
  }
  FUN_017b46ec(param_1,0);
  puVar1 = Method_UnityEngine_UIElements_UIR_LinkedPool<VectorImageRenderInfo>_Clear__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(
                              DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                              );
    FUN_016ec5b8(uVar10,uVar8);
    uVar8 = thunk_FUN_00d48444(Method_System_Net_Sockets_NetworkStream_ReadAsync__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar8);
  }
  uVar10 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  uVar10 = FUN_01780344(uVar10,0);
  plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar1,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    lVar9 = *(long *)puVar2;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x10) = plVar4, *plVar4 != lVar9))
    goto LAB_016ee284;
  }
  puVar1 = PTR_DAT_033eecb8;
  uVar10 = FUN_01780344(*(undefined8 *)puVar3,0);
  plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar1,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar9 = *(long *)puVar2;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x18) = plVar4, *plVar4 != lVar9))
    goto LAB_016ee284;
  }
  puVar1 = PTR_DAT_033ef0a0;
  uVar10 = FUN_01780344(*(undefined8 *)puVar3,0);
  plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar1,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar9 = *(long *)puVar2;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x20) = plVar4, *plVar4 != lVar9))
    goto LAB_016ee284;
  }
  puVar1 = StringLiteral_8470;
  uVar10 = FUN_01780344(*(undefined8 *)puVar3,0);
  plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar1,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar9 = *(long *)puVar2;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x28) = plVar4, *plVar4 != lVar9))
    goto LAB_016ee284;
  }
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<StandardVelocityCalculator_SamplePoseData>_MoveNext__
  ;
  uVar10 = FUN_01780344(*(undefined8 *)
                         System_Security_Principal_WindowsImpersonationContext_TypeInfo,0);
  plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar3,uVar10,0);
  puVar1 = StringLiteral_169;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Tuple<int,_string>>_Start<VRequest_<GetError>d__98>__
  ;
  if (plVar4 == (long *)0x0) {
LAB_016ee288:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar4 + 0x40) == *(long *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0x40))
  {
    puVar5 = (undefined8 *)thunk_FUN_00d624a0();
    *(undefined8 *)(param_1 + 0x30) = *puVar5;
    uVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
    lVar9 = FUN_01682720(param_2,*(undefined8 *)puVar3,uVar10,0);
    puVar3 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_get_Current__
    ;
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      uVar10 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_get_Current__
      ;
      lVar6 = thunk_FUN_00d6225c(lVar9,uVar10);
      if (lVar6 == 0) {
LAB_016ee200:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar9,uVar10);
      }
      *(long *)(param_1 + 0x40) = lVar6;
      uVar10 = *(undefined8 *)puVar3;
      lVar6 = thunk_FUN_00d6225c(lVar9,uVar10);
      if (lVar6 == 0) goto LAB_016ee200;
    }
    puVar3 = StringLiteral_8157;
    uVar10 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
    plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar3,uVar10,0);
    if (plVar4 == (long *)0x0) goto LAB_016ee288;
    if (*(long *)(*plVar4 + 0x40) == *(long *)(*(long *)StringLiteral_9958 + 0x40)) {
      puVar7 = (undefined1 *)thunk_FUN_00d624a0();
      *(undefined1 *)(param_1 + 0x38) = *puVar7;
      return;
    }
  }
LAB_016ee284:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


