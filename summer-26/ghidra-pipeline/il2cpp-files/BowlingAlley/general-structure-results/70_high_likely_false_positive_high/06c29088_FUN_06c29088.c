/*
FUNCTION_NAME: FUN_06c29088
ENTRY_POINT: 06c29088
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_06c29088(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  
  if ((DAT_076e7f5f & 1) == 0) {
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__);
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInParent__)
    ;
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_Linq_JsonPath_CompositeExpression_IsMatch__);
    thunk_FUN_032e1da0(PTR_DAT_072ad8b8);
    thunk_FUN_032e1da0(PTR_DAT_07289360);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_BeginWrite<byte>__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_BeginWrite<float>__);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_Start<AuthAPIRequests_<RefreshToken>d__9>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_BeginWrite<OvrComputeBufferPool_JointData>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_EndWrite<byte>__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_EndWrite<float>__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_EndWrite<OvrComputeBufferPool_JointData>__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_SetData<ShaderInput_LightData>__);
    thunk_FUN_032e1da0(Method_Unity_Collections_NativeArray<XRRaycastHit>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_SetData<uint>__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_07285210);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_GetData__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_SetData__);
    thunk_FUN_032e1da0(Method_UnityEngine_ComputeBuffer_SetData__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferResource_CreatePooledGraphicsResource__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferResource_ReleasePooledGraphicsResource__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    DAT_076e7f5f = 1;
  }
  plVar9 = (long *)(param_1 + 0x20);
  if (*plVar9 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar9 = lVar4;
    thunk_FUN_0333a630(plVar9,lVar4);
  }
  plVar7 = (long *)(param_1 + 0x28);
  if (*plVar7 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar7 = lVar4;
    thunk_FUN_0333a630(plVar7,lVar4);
  }
  plVar29 = (long *)(param_1 + 0x30);
  if (*plVar29 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar29 = lVar4;
    thunk_FUN_0333a630(plVar29,lVar4);
  }
  plVar28 = (long *)(param_1 + 0x38);
  if (*plVar28 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar28 = lVar4;
    thunk_FUN_0333a630(plVar28,lVar4);
  }
  plVar27 = (long *)(param_1 + 0x50);
  if (*plVar27 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar27 = lVar4;
    thunk_FUN_0333a630(plVar27,lVar4);
  }
  plVar11 = (long *)(param_1 + 0x40);
  if (*plVar11 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar11 = lVar4;
    thunk_FUN_0333a630(plVar11,lVar4);
  }
  plVar12 = (long *)(param_1 + 0x48);
  if (*plVar12 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar12 = lVar4;
    thunk_FUN_0333a630(plVar12,lVar4);
  }
  plVar13 = (long *)(param_1 + 0x58);
  if (*plVar13 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar13 = lVar4;
    thunk_FUN_0333a630(plVar13,lVar4);
  }
  plVar14 = (long *)(param_1 + 0x60);
  if (*plVar14 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar14 = lVar4;
    thunk_FUN_0333a630(plVar14,lVar4);
  }
  plVar15 = (long *)(param_1 + 0x70);
  if (*plVar15 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar15 = lVar4;
    thunk_FUN_0333a630(plVar15,lVar4);
  }
  plVar16 = (long *)(param_1 + 0x78);
  if (*plVar16 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar16 = lVar4;
    thunk_FUN_0333a630(plVar16,lVar4);
  }
  plVar17 = (long *)(param_1 + 0x90);
  if (*plVar17 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar17 = lVar4;
    thunk_FUN_0333a630(plVar17,lVar4);
  }
  plVar18 = (long *)(param_1 + 0x98);
  if (*plVar18 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar18 = lVar4;
    thunk_FUN_0333a630(plVar18,lVar4);
  }
  plVar19 = (long *)(param_1 + 0xa0);
  if (*plVar19 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar19 = lVar4;
    thunk_FUN_0333a630(plVar19,lVar4);
  }
  plVar20 = (long *)(param_1 + 0xa8);
  if (*plVar20 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar20 = lVar4;
    thunk_FUN_0333a630(plVar20,lVar4);
  }
  plVar21 = (long *)(param_1 + 0xb0);
  if (*plVar21 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar21 = lVar4;
    thunk_FUN_0333a630(plVar21,lVar4);
  }
  plVar22 = (long *)(param_1 + 0xb8);
  if (*plVar22 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar22 = lVar4;
    thunk_FUN_0333a630(plVar22,lVar4);
  }
  plVar23 = (long *)(param_1 + 0xc0);
  if (*plVar23 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar23 = lVar4;
    thunk_FUN_0333a630(plVar23,lVar4);
  }
  plVar24 = (long *)(param_1 + 200);
  if (*plVar24 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar24 = lVar4;
    thunk_FUN_0333a630(plVar24,lVar4);
  }
  puVar2 = PTR_DAT_07289360;
  plVar26 = (long *)(param_1 + 0xd0);
  if (*plVar26 == 0) {
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ad8b8);
    UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb();
    *plVar26 = lVar4;
    thunk_FUN_0333a630(plVar26,lVar4);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076d3ca9 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07289360);
    DAT_076d3ca9 = '\x01';
  }
  puVar3 = Method_Newtonsoft_Json_Linq_JsonPath_CompositeExpression_IsMatch__;
  puVar1 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *(long *)puVar2;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_050f818c(lVar4,uVar5,*(undefined8 *)puVar1);
  plVar6 = (long *)(param_1 + 0xe8);
  *plVar6 = lVar4;
  thunk_FUN_0333a630(plVar6,lVar4);
  puVar1 = Method_UnityEngine_ComputeBuffer_EndWrite<byte>__;
  puVar2 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInParent__;
  if (*plVar6 != 0) {
    FUN_050f8afc(*plVar6,*(undefined8 *)Method_UnityEngine_ComputeBuffer_EndWrite<byte>__,*plVar9,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInParent__);
    if (*plVar9 != 0) {
      FUN_06c2903c(*plVar9,*(undefined8 *)puVar1);
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_Start<AuthAPIRequests_<RefreshToken>d__9>__
      ;
      if (*plVar6 != 0) {
        FUN_050f8afc(*plVar6,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_Start<AuthAPIRequests_<RefreshToken>d__9>__
                     ,*plVar7,*(undefined8 *)puVar2);
        if (*plVar7 != 0) {
          FUN_06c2903c(*plVar7,*(undefined8 *)puVar1);
          puVar1 = Method_Unity_Collections_NativeArray<XRRaycastHit>_GetEnumerator__;
          if (*plVar6 != 0) {
            FUN_050f8afc(*plVar6,*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<XRRaycastHit>_GetEnumerator__
                         ,*plVar29,*(undefined8 *)puVar2);
            if (*plVar29 != 0) {
              FUN_06c2903c(*plVar29,*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_07285210;
              if (*plVar6 != 0) {
                FUN_050f8afc(*plVar6,*(undefined8 *)PTR_DAT_07285210,*plVar28,*(undefined8 *)puVar2)
                ;
                if (*plVar28 != 0) {
                  FUN_06c2903c(*plVar28,*(undefined8 *)puVar1);
                  puVar1 = Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
                  if (*plVar6 != 0) {
                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                          Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                 ,*plVar27,*(undefined8 *)puVar2);
                    if (*plVar27 != 0) {
                      FUN_06c2903c(*plVar27,*(undefined8 *)puVar1);
                      puVar1 = Method_UnityEngine_ComputeBuffer_BeginWrite<byte>__;
                      if (*plVar6 != 0) {
                        FUN_050f8afc(*plVar6,*(undefined8 *)
                                              Method_UnityEngine_ComputeBuffer_BeginWrite<byte>__,
                                     *plVar11,*(undefined8 *)puVar2);
                        if (*plVar11 != 0) {
                          FUN_06c2903c(*plVar11,*(undefined8 *)puVar1);
                          puVar1 = Method_UnityEngine_ComputeBuffer_SetData__;
                          if (*plVar6 != 0) {
                            FUN_050f8afc(*plVar6,*(undefined8 *)
                                                  Method_UnityEngine_ComputeBuffer_SetData__,
                                         *plVar12,*(undefined8 *)puVar2);
                            if (*plVar12 != 0) {
                              FUN_06c2903c(*plVar12,*(undefined8 *)puVar1);
                              puVar1 = 
                              Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
                              if (*plVar6 != 0) {
                                FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                             ,*plVar13,*(undefined8 *)puVar2);
                                if (*plVar13 != 0) {
                                  FUN_06c2903c(*plVar13,*(undefined8 *)puVar1);
                                  puVar1 = 
                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                  ;
                                  if (*plVar6 != 0) {
                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                 ,*plVar14,*(undefined8 *)puVar2);
                                    if (*plVar14 != 0) {
                                      FUN_06c2903c(*plVar14,*(undefined8 *)puVar1);
                                      puVar1 = Method_UnityEngine_ComputeBuffer_EndWrite<float>__;
                                      if (*plVar6 != 0) {
                                        FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_ComputeBuffer_EndWrite<float>__
                                                  ,*plVar15,*(undefined8 *)puVar2);
                                        if (*plVar15 != 0) {
                                          FUN_06c2903c(*plVar15,*(undefined8 *)puVar1);
                                          puVar1 = 
                                          Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                          ;
                                          if (*plVar6 != 0) {
                                            FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  ,*plVar16,*(undefined8 *)puVar2);
                                            if (*plVar16 != 0) {
                                              FUN_06c2903c(*plVar16,*(undefined8 *)puVar1);
                                              puVar1 = 
                                              Method_UnityEngine_ComputeBuffer_SetData<uint>__;
                                              if (*plVar6 != 0) {
                                                FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_ComputeBuffer_SetData<uint>__,
                                                  *plVar17,*(undefined8 *)puVar2);
                                                if (*plVar17 != 0) {
                                                  FUN_06c2903c(*plVar17,*(undefined8 *)puVar1);
                                                  puVar1 = Method_UnityEngine_ComputeBuffer__ctor__;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_ComputeBuffer__ctor__,*plVar18,
                                                  *(undefined8 *)puVar2);
                                                  if (*plVar18 != 0) {
                                                    FUN_06c2903c(*plVar18,*(undefined8 *)puVar1);
                                                    puVar1 = 
                                                  Method_UnityEngine_ComputeBuffer_BeginWrite<float>__
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_ComputeBuffer_BeginWrite<float>__
                                                  ,*plVar19,*(undefined8 *)puVar2);
                                                  if (*plVar19 != 0) {
                                                    FUN_06c2903c(*plVar19,*(undefined8 *)puVar1);
                                                    puVar1 = 
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  ,*plVar20,*(undefined8 *)puVar2);
                                                  if (*plVar20 != 0) {
                                                    FUN_06c2903c(*plVar20,*(undefined8 *)puVar1);
                                                    puVar1 = 
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  ,*plVar21,*(undefined8 *)puVar2);
                                                  if (*plVar21 != 0) {
                                                    FUN_06c2903c(*plVar21,*(undefined8 *)puVar1);
                                                    puVar1 = 
                                                  Method_UnityEngine_ComputeBuffer_GetData__;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_ComputeBuffer_GetData__,
                                                  *plVar22,*(undefined8 *)puVar2);
                                                  if (*plVar22 != 0) {
                                                    FUN_06c2903c(*plVar22,*(undefined8 *)puVar1);
                                                    puVar1 = 
                                                  Method_UnityEngine_ComputeBuffer_SetData__;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_ComputeBuffer_SetData__,
                                                  *plVar23,*(undefined8 *)puVar2);
                                                  if (*plVar23 != 0) {
                                                    FUN_06c2903c(*plVar23,*(undefined8 *)puVar1);
                                                    puVar1 = 
                                                  Method_UnityEngine_ComputeBuffer_BeginWrite<OvrComputeBufferPool_JointData>__
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_ComputeBuffer_BeginWrite<OvrComputeBufferPool_JointData>__
                                                  ,*plVar24,*(undefined8 *)puVar2);
                                                  if (*plVar24 != 0) {
                                                    FUN_06c2903c(*plVar24,*(undefined8 *)puVar1);
                                                    puVar1 = 
                                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferResource_CreatePooledGraphicsResource__
                                                  ;
                                                  if (*plVar6 != 0) {
                                                    FUN_050f8afc(*plVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferResource_CreatePooledGraphicsResource__
                                                  ,*plVar26,*(undefined8 *)puVar2);
                                                  if (*plVar26 != 0) {
                                                    FUN_06c2903c(*plVar26,*(undefined8 *)puVar1);
                                                    lVar4 = *(long *)(param_1 + 0xd8);
                                                    if (lVar4 == 0) {
LAB_06c29b78:
                                                      puVar3 = 
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  ;
                                                  puVar1 = 
                                                  Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__
                                                  ;
                                                  if (*(long *)(param_1 + 0xe8) != 0) {
                                                    plVar9 = (long *)(param_1 + 0x68);
                                                    uVar25 = FUN_050fa644(*(long *)(param_1 + 0xe8),
                                                                          *(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  ,plVar9,*(undefined8 *)
                                                                                                                      
                                                  Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__
                                                  );
                                                  if ((uVar25 & 1) == 0) {
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                PTR_DAT_072ad8b8);
                                                                                                        
                                                  UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb
                                                            ();
                                                  *plVar9 = lVar4;
                                                  thunk_FUN_0333a630(plVar9,lVar4);
                                                  if (*plVar9 == 0) goto LAB_06c29d70;
                                                  FUN_06c2903c(*plVar9,*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_ComputeBuffer_SetData<ShaderInput_LightData>__
                                                  );
                                                  if (*plVar6 == 0) goto LAB_06c29d70;
                                                  FUN_050f8afc(*plVar6,*(undefined8 *)puVar3,*plVar9
                                                               ,*(undefined8 *)puVar2);
                                                  }
                                                  puVar3 = 
                                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferResource_ReleasePooledGraphicsResource__
                                                  ;
                                                  if (*(long *)(param_1 + 0xe8) != 0) {
                                                    plVar9 = (long *)(param_1 + 0x88);
                                                    uVar25 = FUN_050fa644(*(long *)(param_1 + 0xe8),
                                                                          *(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferResource_ReleasePooledGraphicsResource__
                                                  ,plVar9,*(undefined8 *)puVar1);
                                                  if ((uVar25 & 1) == 0) {
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                PTR_DAT_072ad8b8);
                                                                                                        
                                                  UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb
                                                            ();
                                                  *plVar9 = lVar4;
                                                  thunk_FUN_0333a630(plVar9,lVar4);
                                                  if (*plVar9 == 0) goto LAB_06c29d70;
                                                  FUN_06c2903c(*plVar9,*(undefined8 *)puVar3);
                                                  if (*plVar6 == 0) goto LAB_06c29d70;
                                                  FUN_050f8afc(*plVar6,*(undefined8 *)puVar3,*plVar9
                                                               ,*(undefined8 *)puVar2);
                                                  }
                                                  puVar3 = 
                                                  Method_UnityEngine_ComputeBuffer_EndWrite<OvrComputeBufferPool_JointData>__
                                                  ;
                                                  if (*(long *)(param_1 + 0xe8) != 0) {
                                                    plVar9 = (long *)(param_1 + 0x80);
                                                    uVar25 = FUN_050fa644(*(long *)(param_1 + 0xe8),
                                                                          *(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_ComputeBuffer_EndWrite<OvrComputeBufferPool_JointData>__
                                                  ,plVar9,*(undefined8 *)puVar1);
                                                  if ((uVar25 & 1) == 0) {
                                                    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                PTR_DAT_072ad8b8);
                                                                                                        
                                                  UnityEngine_UIElements_MinMaxSlider__set_dragMaxThumb
                                                            ();
                                                  *plVar9 = lVar4;
                                                  thunk_FUN_0333a630(plVar9,lVar4);
                                                  if (*plVar6 == 0) goto LAB_06c29d70;
                                                  FUN_050f8afc(*plVar6,*(undefined8 *)puVar3,*plVar9
                                                               ,*(undefined8 *)puVar2);
                                                  if (*plVar9 == 0) goto LAB_06c29d70;
                                                  FUN_06c2903c(*plVar9,*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                                                  );
                                                  }
                                                  lVar4 = FUN_06c28f74();
                                                  if (lVar4 != 0) {
                                                    if (DAT_076e8038 == (code *)0x0) {
                                                      DAT_076e8038 = (code *)
                                                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_ScriptableObject_op_Equality
                                                            (
                                                  "UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_076e8038)(lVar4,1);
                                                  lVar4 = FUN_06c28f74();
                                                  if ((lVar4 != 0) &&
                                                     (lVar4 = FUN_06c29e20(), lVar4 != 0)) {
                                                    FUN_06c29e94(0x3f800000,0,0,0x3f800000);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    lVar10 = 4;
                                                    do {
                                                      uVar25 = lVar10 - 4;
                                                      if ((long)(int)*(uint *)(lVar4 + 0x18) <=
                                                          (long)uVar25) goto LAB_06c29b78;
                                                      if (*(uint *)(lVar4 + 0x18) <= uVar25) {
LAB_06c29d74:
                    /* WARNING: Subroutine does not return */
                                                                                                                
                                                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                                                            ();
                                                  }
                                                  if (*(long *)(lVar4 + lVar10 * 8) != 0) {
                                                    lVar8 = *(long *)(param_1 + 0xe8);
                                                    uVar5 = FUN_06c29d78();
                                                    lVar4 = *(long *)(param_1 + 0xd8);
                                                    if (lVar4 == 0) break;
                                                    if (*(uint *)(lVar4 + 0x18) <= uVar25)
                                                    goto LAB_06c29d74;
                                                    if (lVar8 == 0) break;
                                                    FUN_050f8afc(lVar8,uVar5,
                                                                 *(undefined8 *)(lVar4 + lVar10 * 8)
                                                                 ,*(undefined8 *)puVar2);
                                                    lVar4 = *(long *)(param_1 + 0xd8);
                                                  }
                                                  lVar10 = lVar10 + 1;
                                                  } while (lVar4 != 0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06c29d70:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


