/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.Tessellator$$FindConstraint
ENTRY_POINT: 066d1b94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_8
*/


void UnityEngine_Rendering_Universal_UTess_Tessellator__FindConstraint(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    param_1 = *unaff_x19;
  }
  uVar14 = **(undefined8 **)(param_1 + 0xb8);
  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
  FUN_055c676c(uVar6,uVar14,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_TryGetValue__
               ,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18);
  *puVar7 = uVar6;
  thunk_FUN_0333a630(puVar7,uVar6);
  *(undefined8 *)(unaff_x25 + 0x60) = uVar6;
  thunk_FUN_0333a630((undefined8 *)(unaff_x25 + 0x60),uVar6);
  if (unaff_x24 != 0) {
    FUN_0474fa70();
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                              );
    FUN_066bf21c(lVar8,0);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x28) =
           *(undefined8 *)
            Method_Oculus_Interaction_DistantCandidateComputer<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
      ;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x28));
      lVar12 = *(long *)(lVar8 + 0x48);
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Remove__
                                );
      FUN_066b3804(lVar9,0);
      puVar2 = PTR_DAT_072ae1a8;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x28) =
             *(undefined8 *)Method_Unity_VisualScripting_Divide<float>__ctor__;
        thunk_FUN_0333a630();
        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727eb10);
        FUN_055c5a5c();
        *(undefined8 *)(lVar9 + 0x48) = uVar6;
        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),uVar6);
        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
        FUN_0501b95c();
        *(undefined8 *)(lVar9 + 0x50) = uVar6;
        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50),uVar6);
        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                                  );
        FUN_0510c3c0();
        *(undefined8 *)(lVar9 + 0x58) = uVar6;
        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x58),uVar6);
        if (lVar12 != 0) {
          FUN_0474fa70(lVar12,lVar9,*unaff_x29);
          puVar3 = PTR_DAT_072aecd8;
          if (*(long *)(unaff_x23 + 400) != 0) {
            if (*(char *)(*(long *)(unaff_x23 + 400) + 0x10) == '\0') {
              lVar12 = *(long *)(lVar8 + 0x48);
              lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_DateTime>_Remove__
                                        );
              FUN_066b3804(lVar9,0);
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x28) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_Clear__
                ;
                thunk_FUN_0333a630();
                uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727eb10);
                FUN_055c5a5c();
                *(undefined8 *)(lVar9 + 0x48) = uVar6;
                thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),uVar6);
                uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                FUN_0501b95c();
                *(undefined8 *)(lVar9 + 0x50) = uVar6;
                thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50),uVar6);
                uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                                          );
                FUN_0510c3c0();
                *(undefined8 *)(lVar9 + 0x58) = uVar6;
                thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x58),uVar6);
                if (lVar12 != 0) {
                  FUN_0474fa70(lVar12,lVar9,*unaff_x29);
                  if (*(long *)(unaff_x23 + 400) != 0) {
                    if (*(char *)(*(long *)(unaff_x23 + 400) + 0x38) != '\0') {
                      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                );
                      FUN_066c0510(lVar9,0);
                      if (lVar9 == 0) goto LAB_066d38d0;
                      *(undefined8 *)(lVar9 + 0x28) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                      ;
                      thunk_FUN_0333a630();
                      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                      FUN_055c676c();
                      *(undefined8 *)(lVar9 + 0x48) = uVar6;
                      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),uVar6);
                      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                      FUN_05020914();
                      *(undefined8 *)(lVar9 + 0x50) = uVar6;
                      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50),uVar6);
                      puVar4 = 
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      lVar12 = *(long *)
                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar12 = *(long *)puVar4;
                      }
                      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x50);
                      if (lVar13 == 0) {
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar12 = *(long *)puVar4;
                        }
                        uVar6 = **(undefined8 **)(lVar12 + 0xb8);
                        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                        FUN_055c676c(lVar13,uVar6,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                                     ,0);
                        plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                        *plVar10 = lVar13;
                        thunk_FUN_0333a630(plVar10,lVar13);
                      }
                      *(long *)(lVar9 + 0x60) = lVar13;
                      thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar13);
                      lVar12 = *(long *)puVar4;
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar12 = *(long *)puVar4;
                      }
                      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x58);
                      if (lVar13 == 0) {
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar12 = *(long *)puVar4;
                        }
                        uVar6 = **(undefined8 **)(lVar12 + 0xb8);
                        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                        FUN_055c676c(lVar13,uVar6,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Remove__
                                     ,0);
                        plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
                        *plVar10 = lVar13;
                        thunk_FUN_0333a630(plVar10,lVar13);
                      }
                      *(long *)(lVar9 + 0x68) = lVar13;
                      thunk_FUN_0333a630((long *)(lVar9 + 0x68),lVar13);
                      lVar13 = *(long *)(lVar8 + 0x48);
                      lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                                 );
                      FUN_066bf21c(lVar12,0);
                      if (((lVar12 == 0) || (*(long *)(lVar12 + 0x48) == 0)) ||
                         (FUN_0474fa70(*(long *)(lVar12 + 0x48),lVar9,*unaff_x29), lVar13 == 0))
                      goto LAB_066d38d0;
                      FUN_0474fa70(lVar13,lVar12,*unaff_x29);
                    }
                    lVar12 = *(long *)(lVar8 + 0x48);
                    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                              );
                    FUN_066c0510(lVar9,0);
                    if (lVar9 != 0) {
                      *(undefined8 *)(lVar9 + 0x28) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                      ;
                      thunk_FUN_0333a630();
                      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                      FUN_055c676c();
                      *(undefined8 *)(lVar9 + 0x48) = uVar6;
                      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),uVar6);
                      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                      FUN_05020914();
                      *(undefined8 *)(lVar9 + 0x50) = uVar6;
                      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50),uVar6);
                      puVar4 = 
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      lVar13 = *(long *)
                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      if (*(int *)(lVar13 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar13 = *(long *)puVar4;
                      }
                      lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x60);
                      if (lVar15 == 0) {
                        if (*(int *)(lVar13 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar13 = *(long *)puVar4;
                        }
                        uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                        lVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                        FUN_055c676c(lVar15,uVar6,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TryGetValue__
                                     ,0);
                        plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
                        *plVar10 = lVar15;
                        thunk_FUN_0333a630(plVar10,lVar15);
                      }
                      *(long *)(lVar9 + 0x60) = lVar15;
                      thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar15);
                      if (lVar12 != 0) {
                        FUN_0474fa70(lVar12,lVar9,*unaff_x29);
                        lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                                  );
                        FUN_066bf21c(lVar9,0);
                        puVar2 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
                        if (lVar9 != 0) {
                          *(undefined8 *)(lVar9 + 0x28) =
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                          ;
                          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x28));
                          lVar13 = *(long *)(lVar9 + 0x48);
                          lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Remove__
                                                  );
                          FUN_066b3804(lVar12,0);
                          if (lVar12 != 0) {
                            *(undefined8 *)(lVar12 + 0x28) =
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
                            ;
                            thunk_FUN_0333a630();
                            uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727eb10);
                            FUN_055c5a5c();
                            *(undefined8 *)(lVar12 + 0x48) = uVar6;
                            thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x48),uVar6);
                            uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                            FUN_0501b95c();
                            *(undefined8 *)(lVar12 + 0x50) = uVar6;
                            thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x50),uVar6);
                            if (lVar13 != 0) {
                              FUN_0474fa70(lVar13,lVar12,*unaff_x29);
                              lVar13 = *(long *)(lVar9 + 0x48);
                              lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                                  );
                              FUN_066c03a8(lVar12,0);
                              puVar4 = 
                              Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                              ;
                              if (lVar12 != 0) {
                                *(undefined8 *)(lVar12 + 0x28) =
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>__ctor__
                                ;
                                thunk_FUN_0333a630();
                                lVar15 = *(long *)puVar4;
                                if (*(int *)(lVar15 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar15 = *(long *)puVar4;
                                }
                                lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x68);
                                if (lVar16 == 0) {
                                  if (*(int *)(lVar15 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar15 = *(long *)puVar4;
                                  }
                                  uVar6 = **(undefined8 **)(lVar15 + 0xb8);
                                  lVar16 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                  FUN_055c5e7c(lVar16,uVar6,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
                                               ,0);
                                  plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
                                  *plVar10 = lVar16;
                                  thunk_FUN_0333a630(plVar10,lVar16);
                                  unaff_x29 = (undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                  ;
                                }
                                *(long *)(lVar12 + 0x48) = lVar16;
                                thunk_FUN_0333a630((long *)(lVar12 + 0x48),lVar16);
                                lVar15 = *(long *)puVar4;
                                if (*(int *)(lVar15 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar15 = *(long *)puVar4;
                                }
                                lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
                                if (lVar16 == 0) {
                                  if (*(int *)(lVar15 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar15 = *(long *)puVar4;
                                  }
                                  uVar6 = **(undefined8 **)(lVar15 + 0xb8);
                                  lVar16 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                  FUN_0501d488(lVar16,uVar6,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                                               ,0);
                                  plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
                                  *plVar10 = lVar16;
                                  thunk_FUN_0333a630(plVar10,lVar16);
                                  unaff_x29 = (undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                  ;
                                }
                                *(long *)(lVar12 + 0x50) = lVar16;
                                thunk_FUN_0333a630((long *)(lVar12 + 0x50),lVar16);
                                lVar15 = *(long *)puVar4;
                                if (*(int *)(lVar15 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar15 = *(long *)puVar4;
                                }
                                lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x78);
                                if (lVar16 == 0) {
                                  if (*(int *)(lVar15 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar15 = *(long *)puVar4;
                                  }
                                  uVar6 = **(undefined8 **)(lVar15 + 0xb8);
                                  lVar16 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                  FUN_055c5e7c(lVar16,uVar6,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_set_Item__
                                               ,0);
                                  plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
                                  *plVar10 = lVar16;
                                  thunk_FUN_0333a630(plVar10,lVar16);
                                  unaff_x29 = (undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                  ;
                                }
                                *(long *)(lVar12 + 0x60) = lVar16;
                                thunk_FUN_0333a630((long *)(lVar12 + 0x60),lVar16);
                                puVar2 = 
                                Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_Add__
                                ;
                                if (lVar13 != 0) {
                                  FUN_0474fa70(lVar13,lVar12,*unaff_x29);
                                  if (*(char *)(in_stack_00000010 + 0x44) != '\0') {
                                    if (*(int *)(*(long *)PTR_DAT_07279480 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    uVar11 = FUN_06bae618(0);
                                    if ((uVar11 & 1) == 0) {
                                      if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                    }
                                    else {
                                      if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                      lVar12 = *(long *)(in_stack_00000018 + 0x10);
                                      lVar13 = *(long *)puVar2;
                                      *(int *)(in_stack_00000018 + 0x1c) =
                                           *(int *)(in_stack_00000018 + 0x1c) + 1;
                                      if (lVar12 == 0) goto LAB_066d38d0;
                                      uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                        *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                             in_stack_00000008;
                                        thunk_FUN_0333a630();
                                      }
                                      else {
                                        FUN_041e2c78(in_stack_00000018,in_stack_00000008,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                    }
                                    lVar12 = *(long *)(in_stack_00000018 + 0x10);
                                    lVar13 = *(long *)puVar2;
                                    *(int *)(in_stack_00000018 + 0x1c) =
                                         *(int *)(in_stack_00000018 + 0x1c) + 1;
                                    if (lVar12 == 0) goto LAB_066d38d0;
                                    uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                      *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                      *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
                                      thunk_FUN_0333a630();
                                    }
                                    else {
                                      FUN_041e2c78(in_stack_00000018,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                  if (*(char *)(in_stack_00000010 + 0x45) != '\0') {
                                    if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                    lVar8 = *(long *)(in_stack_00000018 + 0x10);
                                    lVar12 = *(long *)puVar2;
                                    *(int *)(in_stack_00000018 + 0x1c) =
                                         *(int *)(in_stack_00000018 + 0x1c) + 1;
                                    if (lVar8 == 0) goto LAB_066d38d0;
                                    uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                      plVar10 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar10 = lVar9;
                                      thunk_FUN_0333a630(plVar10,lVar9);
                                    }
                                    else {
                                      FUN_041e2c78(in_stack_00000018,lVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                  uVar6 = *(undefined8 *)(in_stack_00000010 + 0x30);
                                  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar11 = FUN_06be9890(uVar6,0,0);
                                  if (((uVar11 & 1) == 0) ||
                                     (*(int *)(in_stack_00000010 + 0xc) == 0)) {
                                    if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                  }
                                  else {
                                    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                                  );
                                    FUN_066bf21c(lVar8,0);
                                    if (lVar8 == 0) goto LAB_066d38d0;
                                    *(undefined8 *)(lVar8 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_TryGetValue__
                                    ;
                                    thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x28));
                                    lVar12 = *(long *)(lVar8 + 0x48);
                                    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                                  );
                                    FUN_066c03a8(lVar9,0);
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    *(undefined8 *)(lVar9 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                                    ;
                                    thunk_FUN_0333a630();
                                    lVar13 = *(long *)puVar4;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar4;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x80);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar4;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                      
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                      FUN_055c5e7c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>__ctor__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x48) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x48),lVar15);
                                    lVar13 = *(long *)puVar4;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar4;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar4;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
                                      FUN_0501d488(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_Add__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x50) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x50),lVar15);
                                    lVar13 = *(long *)puVar4;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar4;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar4;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                      
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                      FUN_055c5e7c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_GetEnumerator__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x60) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar15);
                                    if (lVar12 == 0) goto LAB_066d38d0;
                                    FUN_0474fa70(lVar12,lVar9,*unaff_x29);
                                    lVar12 = *(long *)(lVar8 + 0x48);
                                    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  );
                                    FUN_066c0510(lVar9,0);
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    *(undefined8 *)(lVar9 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                                    ;
                                    thunk_FUN_0333a630();
                                    lVar13 = *(long *)puVar4;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar4;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x98);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar4;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Item__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x48) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x48),lVar15);
                                    lVar13 = *(long *)puVar4;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar4;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xa0);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar4;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                                      FUN_05020914(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>__ctor__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x50) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x50),lVar15);
                                    lVar13 = *(long *)puVar4;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar4;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xa8);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar4;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>__ctor__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x60) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar15);
                                    lVar13 = *(long *)puVar4;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar4;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xb0);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar4;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_Add__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x68) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x68),lVar15);
                                    if (lVar12 == 0) goto LAB_066d38d0;
                                    FUN_0474fa70(lVar12,lVar9,*unaff_x29);
                                    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>__ctor__
                                                  );
                                    FUN_066ac73c(lVar9,0);
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    *(undefined8 *)(lVar9 + 0x28) =
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_Distance<Vector4>__ctor__;
                                    thunk_FUN_0333a630();
                                    *(undefined8 *)(lVar9 + 0x60) =
                                         *(undefined8 *)(in_stack_00000028 + 0x1d0);
                                    thunk_FUN_0333a630();
                                    FUN_05283634(lVar9,*(undefined8 *)(in_stack_00000028 + 0x1d8),
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<string,_MockRuntime_AfterFunctionDelegate>_set_Item__
                                                );
                                    puVar4 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                    FUN_055c5e7c();
                                    *(undefined8 *)(lVar9 + 0x80) = uVar6;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x80),uVar6);
                                    puVar3 = PTR_DAT_072aecd8;
                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
                                    FUN_0501d488();
                                    *(undefined8 *)(lVar9 + 0x88) = uVar6;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x88),uVar6);
                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                    FUN_055c5e7c();
                                    *(undefined8 *)(lVar9 + 0x48) = uVar6;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),uVar6);
                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                    FUN_0501d488();
                                    *(undefined8 *)(lVar9 + 0x50) = uVar6;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50),uVar6);
                                    *(long *)(in_stack_00000028 + 0x1f0) = lVar9;
                                    thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1f0),
                                                       lVar9);
                                    if (*(long *)(lVar8 + 0x48) == 0) goto LAB_066d38d0;
                                    FUN_0474fa70(*(long *)(lVar8 + 0x48),
                                                 *(undefined8 *)(in_stack_00000028 + 0x1f0),
                                                 *unaff_x29);
                                    lVar12 = *(long *)(lVar8 + 0x48);
                                    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  );
                                    FUN_066c0510(lVar9,0);
                                    puVar3 = 
                                    Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                                    ;
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    *(undefined8 *)(lVar9 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>__ctor__
                                    ;
                                    thunk_FUN_0333a630();
                                    lVar13 = *(long *)puVar3;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar3;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xb8);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar3;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_GetEnumerator__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb8);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x48) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x48),lVar15);
                                    lVar13 = *(long *)puVar3;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar3;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xc0);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar3;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                                      FUN_05020914(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_get_Item__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc0);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x50) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x50),lVar15);
                                    lVar13 = *(long *)puVar3;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar3;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 200);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar3;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>__ctor__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 200);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x60) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar15);
                                    lVar13 = *(long *)puVar3;
                                    if (*(int *)(lVar13 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar13 = *(long *)puVar3;
                                    }
                                    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xd0);
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar13 = *(long *)puVar3;
                                      }
                                      uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                                      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar15,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_Remove__
                                                  ,0);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd0);
                                      *plVar10 = lVar15;
                                      thunk_FUN_0333a630(plVar10,lVar15);
                                    }
                                    *(long *)(lVar9 + 0x68) = lVar15;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x68),lVar15);
                                    if ((lVar12 == 0) ||
                                       (FUN_0474fa70(lVar12,lVar9,*unaff_x29),
                                       in_stack_00000018 == 0)) goto LAB_066d38d0;
                                    lVar9 = *(long *)(in_stack_00000018 + 0x10);
                                    lVar12 = *(long *)puVar2;
                                    *(int *)(in_stack_00000018 + 0x1c) =
                                         *(int *)(in_stack_00000018 + 0x1c) + 1;
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar10 = lVar8;
                                      thunk_FUN_0333a630(plVar10,lVar8);
                                    }
                                    else {
                                      FUN_041e2c78(in_stack_00000018,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                  puVar3 = 
                                  Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                                  ;
                                  puVar2 = 
                                  Method_System_Collections_Generic_Dictionary<string,_Enum>_GetEnumerator__
                                  ;
                                  if (0 < *(int *)(in_stack_00000018 + 0x18)) {
                                    uVar6 = FUN_041e47e4(in_stack_00000018,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_ContainsKey__
                                                  );
                                    *(undefined8 *)(in_stack_00000028 + 0x1a0) = uVar6;
                                    thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1a0),
                                                       uVar6);
                                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    lVar8 = FUN_066ac7a8(0);
                                    lVar9 = *(long *)puVar3;
                                    if (*(int *)(lVar9 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0(lVar9);
                                    }
                                    if (((lVar8 == 0) ||
                                        (lVar8 = FUN_066ac820(lVar8,*(undefined8 *)
                                                                     (*(long *)(*(long *)puVar3 +
                                                                               0xb8) + 0x10),1,0,0,0
                                                             ), lVar8 == 0)) ||
                                       (*(long *)(lVar8 + 0x28) == 0)) goto LAB_066d38d0;
                                    FUN_0474fbc4(*(long *)(lVar8 + 0x28),
                                                 *(undefined8 *)(in_stack_00000028 + 0x1a0),
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Values__
                                                );
                                  }
                                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  lVar8 = FUN_066ac7a8(0);
                                  if (lVar8 != 0) {
                                    FUN_066b19ec(lVar8,*(undefined8 *)(in_stack_00000028 + 400),0);
                                    return;
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
            else {
              lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                        );
              FUN_066bf21c(lVar8,0);
              if (lVar8 != 0) {
                lVar9 = *(long *)(lVar8 + 0x48);
                lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>__ctor__
                                          );
                FUN_066ac73c(lVar8,0);
                puVar3 = 
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                ;
                puVar2 = PTR_DAT_07279510;
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x28) =
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<fsPortableReflection_AttributeQuery,_Attribute>__ctor__
                  ;
                  thunk_FUN_0333a630();
                  puVar5 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
                  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                              UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                  FUN_055c5e7c();
                  *(undefined8 *)(lVar8 + 0x48) = uVar6;
                  thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar6);
                  puVar4 = PTR_DAT_072aecd8;
                  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
                  FUN_0501d488();
                  *(undefined8 *)(lVar8 + 0x50) = uVar6;
                  thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar6);
                  uVar6 = *(undefined8 *)puVar3;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar6 = FUN_059324dc(uVar6,0);
                  FUN_066c0660(lVar8,uVar6,0);
                  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
                  FUN_055c5e7c();
                  *(undefined8 *)(lVar8 + 0x80) = uVar6;
                  thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x80),uVar6);
                  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                  FUN_0501d488();
                  *(undefined8 *)(lVar8 + 0x88) = uVar6;
                  thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x88),uVar6);
                  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<TrackableId,_ARPlane>_TryGetValue__
                                            );
                  FUN_0510c88c();
                  *(undefined8 *)(lVar8 + 0x58) = uVar6;
                  thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x58),uVar6);
                  if (lVar9 != 0) {
                    FUN_0474fa70(lVar9,lVar8,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                );
                    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                              );
                    FUN_066c0510(lVar8,0);
                    puVar2 = PTR_DAT_072ae1a8;
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x28) =
                           *(undefined8 *)Method_Unity_VisualScripting_Distance<Vector2>__ctor__;
                      thunk_FUN_0333a630();
                      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                      FUN_055c676c();
                      *(undefined8 *)(lVar8 + 0x48) = uVar6;
                      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar6);
                      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                      FUN_05020914();
                      *(undefined8 *)(lVar8 + 0x50) = uVar6;
                      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar6);
                      FUN_06e3caf8(*(undefined4 *)
                                    (*(long *)
                                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                                    + 0xe0));
                      return;
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
LAB_066d38d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


