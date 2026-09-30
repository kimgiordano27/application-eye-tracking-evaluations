/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.ModuleHandle$$IsInsideCircle
ENTRY_POINT: 066d21b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_8
*/


void UnityEngine_Rendering_Universal_UTess_ModuleHandle__IsInsideCircle(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar10;
  long unaff_x27;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
  FUN_05020914();
  *(undefined8 *)(unaff_x27 + 0x50) = uVar5;
  thunk_FUN_0333a630((undefined8 *)(unaff_x27 + 0x50),uVar5);
  if (unaff_x26 != 0) {
    FUN_0474fa70();
    lVar10 = *(long *)(unaff_x25 + 0x48);
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                              );
    FUN_066c03a8(lVar6,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x28) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_Add__
      ;
      thunk_FUN_0333a630();
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
      FUN_055c5e7c();
      *(undefined8 *)(lVar6 + 0x48) = uVar5;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x48),uVar5);
      uVar5 = thunk_FUN_032a56a0(*unaff_x22);
      FUN_0501d488();
      *(undefined8 *)(lVar6 + 0x50) = uVar5;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x50),uVar5);
      puVar3 = 
      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__;
      lVar7 = *(long *)
               Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
      ;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar7 = *(long *)puVar3;
      }
      lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar7 = *(long *)puVar3;
        }
        uVar5 = **(undefined8 **)(lVar7 + 0xb8);
        lVar11 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
        FUN_055c5e7c(lVar11,uVar5,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>__ctor__
                     ,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *plVar8 = lVar11;
        thunk_FUN_0333a630(plVar8,lVar11);
        unaff_x29 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
        ;
      }
      *(long *)(lVar6 + 0x60) = lVar11;
      thunk_FUN_0333a630((long *)(lVar6 + 0x60),lVar11);
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar7 = *(long *)puVar3;
      }
      lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar7 = *(long *)puVar3;
        }
        uVar5 = **(undefined8 **)(lVar7 + 0xb8);
        lVar11 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
        FUN_055c5e7c(lVar11,uVar5,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Add__
                     ,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
        *plVar8 = lVar11;
        thunk_FUN_0333a630(plVar8,lVar11);
        unaff_x29 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
        ;
      }
      *(long *)(lVar6 + 0x68) = lVar11;
      thunk_FUN_0333a630((long *)(lVar6 + 0x68),lVar11);
      if (lVar10 != 0) {
        FUN_0474fa70(lVar10,lVar6,*unaff_x29);
        lVar10 = *(long *)(unaff_x25 + 0x48);
        lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                  );
        FUN_066c03a8(lVar6,0);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x28) =
               *(undefined8 *)Method_Unity_VisualScripting_Divide<object>__ctor__;
          thunk_FUN_0333a630();
          uVar5 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var)
          ;
          FUN_055c5e7c();
          *(undefined8 *)(lVar6 + 0x48) = uVar5;
          thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x48),uVar5);
          uVar5 = thunk_FUN_032a56a0(*unaff_x22);
          FUN_0501d488();
          *(undefined8 *)(lVar6 + 0x50) = uVar5;
          thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x50),uVar5);
          puVar3 = 
          Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__;
          lVar7 = *(long *)
                   Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
          ;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar7 = *(long *)puVar3;
          }
          lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
          if (lVar11 == 0) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar7 = *(long *)puVar3;
            }
            uVar5 = **(undefined8 **)(lVar7 + 0xb8);
            lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                         UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
            FUN_055c5e7c(lVar11,uVar5,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Clear__
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
            *plVar8 = lVar11;
            thunk_FUN_0333a630(plVar8,lVar11);
            unaff_x29 = (undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
            ;
          }
          *(long *)(lVar6 + 0x60) = lVar11;
          thunk_FUN_0333a630((long *)(lVar6 + 0x60),lVar11);
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar7 = *(long *)puVar3;
          }
          lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
          if (lVar11 == 0) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar7 = *(long *)puVar3;
            }
            uVar5 = **(undefined8 **)(lVar7 + 0xb8);
            lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                         UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
            FUN_055c5e7c(lVar11,uVar5,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_ContainsKey__
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
            *plVar8 = lVar11;
            thunk_FUN_0333a630(plVar8,lVar11);
            unaff_x29 = (undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
            ;
          }
          *(long *)(lVar6 + 0x68) = lVar11;
          thunk_FUN_0333a630((long *)(lVar6 + 0x68),lVar11);
          if ((lVar10 != 0) &&
             (FUN_0474fa70(lVar10,lVar6,*unaff_x29), *(long *)(in_stack_00000020 + 0x48) != 0)) {
            FUN_0474fa70();
            lVar10 = *(long *)(in_stack_00000020 + 0x48);
            lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_DateTime>_Remove__
                                      );
            FUN_066b3804(lVar6,0);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x28) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_Clear__
              ;
              thunk_FUN_0333a630();
              uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727eb10);
              FUN_055c5a5c();
              *(undefined8 *)(lVar6 + 0x48) = uVar5;
              thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x48),uVar5);
              uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
              FUN_0501b95c();
              *(undefined8 *)(lVar6 + 0x50) = uVar5;
              thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x50),uVar5);
              uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                                        );
              FUN_0510c3c0();
              *(undefined8 *)(lVar6 + 0x58) = uVar5;
              thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x58),uVar5);
              if (lVar10 != 0) {
                FUN_0474fa70(lVar10,lVar6,*unaff_x29);
                if (*(long *)(unaff_x23 + 400) != 0) {
                  if (*(char *)(*(long *)(unaff_x23 + 400) + 0x38) != '\0') {
                    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                              );
                    FUN_066c0510(lVar6,0);
                    if (lVar6 == 0) goto LAB_066d38d0;
                    *(undefined8 *)(lVar6 + 0x28) =
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                    ;
                    thunk_FUN_0333a630();
                    uVar5 = thunk_FUN_032a56a0(*unaff_x24);
                    FUN_055c676c();
                    *(undefined8 *)(lVar6 + 0x48) = uVar5;
                    thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x48),uVar5);
                    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                    FUN_05020914();
                    *(undefined8 *)(lVar6 + 0x50) = uVar5;
                    thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x50),uVar5);
                    puVar3 = 
                    Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                    ;
                    lVar10 = *(long *)
                              Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                    ;
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar7 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
                    if (lVar7 == 0) {
                      if (*(int *)(lVar10 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar10 = *(long *)puVar3;
                      }
                      uVar5 = **(undefined8 **)(lVar10 + 0xb8);
                      lVar7 = thunk_FUN_032a56a0(*unaff_x24);
                      FUN_055c676c(lVar7,uVar5,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                                   ,0);
                      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
                      *plVar8 = lVar7;
                      thunk_FUN_0333a630(plVar8,lVar7);
                    }
                    *(long *)(lVar6 + 0x60) = lVar7;
                    thunk_FUN_0333a630((long *)(lVar6 + 0x60),lVar7);
                    lVar10 = *(long *)puVar3;
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar7 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x58);
                    if (lVar7 == 0) {
                      if (*(int *)(lVar10 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar10 = *(long *)puVar3;
                      }
                      uVar5 = **(undefined8 **)(lVar10 + 0xb8);
                      lVar7 = thunk_FUN_032a56a0(*unaff_x24);
                      FUN_055c676c(lVar7,uVar5,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Remove__
                                   ,0);
                      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
                      *plVar8 = lVar7;
                      thunk_FUN_0333a630(plVar8,lVar7);
                    }
                    *(long *)(lVar6 + 0x68) = lVar7;
                    thunk_FUN_0333a630((long *)(lVar6 + 0x68),lVar7);
                    lVar7 = *(long *)(in_stack_00000020 + 0x48);
                    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                               );
                    FUN_066bf21c(lVar10,0);
                    if (((lVar10 == 0) || (*(long *)(lVar10 + 0x48) == 0)) ||
                       (FUN_0474fa70(*(long *)(lVar10 + 0x48),lVar6,*unaff_x29), lVar7 == 0))
                    goto LAB_066d38d0;
                    FUN_0474fa70(lVar7,lVar10,*unaff_x29);
                  }
                  lVar10 = *(long *)(in_stack_00000020 + 0x48);
                  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                            );
                  FUN_066c0510(lVar6,0);
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x28) =
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                    ;
                    thunk_FUN_0333a630();
                    uVar5 = thunk_FUN_032a56a0(*unaff_x24);
                    FUN_055c676c();
                    *(undefined8 *)(lVar6 + 0x48) = uVar5;
                    thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x48),uVar5);
                    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                    FUN_05020914();
                    *(undefined8 *)(lVar6 + 0x50) = uVar5;
                    thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x50),uVar5);
                    puVar3 = 
                    Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                    ;
                    lVar7 = *(long *)
                             Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                    ;
                    if (*(int *)(lVar7 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar7 = *(long *)puVar3;
                    }
                    lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x60);
                    if (lVar11 == 0) {
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar7 = *(long *)puVar3;
                      }
                      uVar5 = **(undefined8 **)(lVar7 + 0xb8);
                      lVar11 = thunk_FUN_032a56a0(*unaff_x24);
                      FUN_055c676c(lVar11,uVar5,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TryGetValue__
                                   ,0);
                      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
                      *plVar8 = lVar11;
                      thunk_FUN_0333a630(plVar8,lVar11);
                    }
                    *(long *)(lVar6 + 0x60) = lVar11;
                    thunk_FUN_0333a630((long *)(lVar6 + 0x60),lVar11);
                    if (lVar10 != 0) {
                      FUN_0474fa70(lVar10,lVar6,*unaff_x29);
                      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                                );
                      FUN_066bf21c(lVar6,0);
                      puVar3 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 0x28) =
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                        ;
                        thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x28));
                        lVar7 = *(long *)(lVar6 + 0x48);
                        lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Remove__
                                                  );
                        FUN_066b3804(lVar10,0);
                        if (lVar10 != 0) {
                          *(undefined8 *)(lVar10 + 0x28) =
                               *(undefined8 *)
                                Method_Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
                          ;
                          thunk_FUN_0333a630();
                          uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727eb10);
                          FUN_055c5a5c();
                          *(undefined8 *)(lVar10 + 0x48) = uVar5;
                          thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x48),uVar5);
                          uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                          FUN_0501b95c();
                          *(undefined8 *)(lVar10 + 0x50) = uVar5;
                          thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x50),uVar5);
                          if (lVar7 != 0) {
                            FUN_0474fa70(lVar7,lVar10,*unaff_x29);
                            lVar7 = *(long *)(lVar6 + 0x48);
                            lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                                  );
                            FUN_066c03a8(lVar10,0);
                            puVar2 = 
                            Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                            ;
                            if (lVar10 != 0) {
                              *(undefined8 *)(lVar10 + 0x28) =
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>__ctor__
                              ;
                              thunk_FUN_0333a630();
                              lVar11 = *(long *)puVar2;
                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                                lVar11 = *(long *)puVar2;
                              }
                              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x68);
                              if (lVar12 == 0) {
                                if (*(int *)(lVar11 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar11 = *(long *)puVar2;
                                }
                                uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                lVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                FUN_055c5e7c(lVar12,uVar5,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
                                             ,0);
                                plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
                                *plVar8 = lVar12;
                                thunk_FUN_0333a630(plVar8,lVar12);
                                unaff_x29 = (undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                ;
                              }
                              *(long *)(lVar10 + 0x48) = lVar12;
                              thunk_FUN_0333a630((long *)(lVar10 + 0x48),lVar12);
                              lVar11 = *(long *)puVar2;
                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                                lVar11 = *(long *)puVar2;
                              }
                              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x70);
                              if (lVar12 == 0) {
                                if (*(int *)(lVar11 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar11 = *(long *)puVar2;
                                }
                                uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                lVar12 = thunk_FUN_032a56a0(*unaff_x22);
                                FUN_0501d488(lVar12,uVar5,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                                             ,0);
                                plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
                                *plVar8 = lVar12;
                                thunk_FUN_0333a630(plVar8,lVar12);
                                unaff_x29 = (undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                ;
                              }
                              *(long *)(lVar10 + 0x50) = lVar12;
                              thunk_FUN_0333a630((long *)(lVar10 + 0x50),lVar12);
                              lVar11 = *(long *)puVar2;
                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                                lVar11 = *(long *)puVar2;
                              }
                              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x78);
                              if (lVar12 == 0) {
                                if (*(int *)(lVar11 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar11 = *(long *)puVar2;
                                }
                                uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                lVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                FUN_055c5e7c(lVar12,uVar5,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_set_Item__
                                             ,0);
                                plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
                                *plVar8 = lVar12;
                                thunk_FUN_0333a630(plVar8,lVar12);
                                unaff_x29 = (undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                ;
                              }
                              *(long *)(lVar10 + 0x60) = lVar12;
                              thunk_FUN_0333a630((long *)(lVar10 + 0x60),lVar12);
                              puVar3 = 
                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_Add__
                              ;
                              if (lVar7 != 0) {
                                FUN_0474fa70(lVar7,lVar10,*unaff_x29);
                                if (*(char *)(in_stack_00000010 + 0x44) != '\0') {
                                  if (*(int *)(*(long *)PTR_DAT_07279480 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar9 = FUN_06bae618(0);
                                  if ((uVar9 & 1) == 0) {
                                    if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                  }
                                  else {
                                    if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                    lVar10 = *(long *)(in_stack_00000018 + 0x10);
                                    lVar7 = *(long *)puVar3;
                                    *(int *)(in_stack_00000018 + 0x1c) =
                                         *(int *)(in_stack_00000018 + 0x1c) + 1;
                                    if (lVar10 == 0) goto LAB_066d38d0;
                                    uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                           in_stack_00000008;
                                      thunk_FUN_0333a630();
                                    }
                                    else {
                                      FUN_041e2c78(in_stack_00000018,in_stack_00000008,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                  lVar10 = *(long *)(in_stack_00000018 + 0x10);
                                  lVar7 = *(long *)puVar3;
                                  *(int *)(in_stack_00000018 + 0x1c) =
                                       *(int *)(in_stack_00000018 + 0x1c) + 1;
                                  if (lVar10 == 0) goto LAB_066d38d0;
                                  uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                    *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                         in_stack_00000020;
                                    thunk_FUN_0333a630();
                                  }
                                  else {
                                    FUN_041e2c78(in_stack_00000018,in_stack_00000020,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                }
                                if (*(char *)(in_stack_00000010 + 0x45) != '\0') {
                                  if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                  lVar10 = *(long *)(in_stack_00000018 + 0x10);
                                  lVar7 = *(long *)puVar3;
                                  *(int *)(in_stack_00000018 + 0x1c) =
                                       *(int *)(in_stack_00000018 + 0x1c) + 1;
                                  if (lVar10 == 0) goto LAB_066d38d0;
                                  uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                    plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar8 = lVar6;
                                    thunk_FUN_0333a630(plVar8,lVar6);
                                  }
                                  else {
                                    FUN_041e2c78(in_stack_00000018,lVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                }
                                uVar5 = *(undefined8 *)(in_stack_00000010 + 0x30);
                                if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                }
                                uVar9 = FUN_06be9890(uVar5,0,0);
                                if (((uVar9 & 1) == 0) || (*(int *)(in_stack_00000010 + 0xc) == 0))
                                {
                                  if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                }
                                else {
                                  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                                  );
                                  FUN_066bf21c(lVar6,0);
                                  if (lVar6 == 0) goto LAB_066d38d0;
                                  *(undefined8 *)(lVar6 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_TryGetValue__
                                  ;
                                  thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x28));
                                  lVar7 = *(long *)(lVar6 + 0x48);
                                  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                                  );
                                  FUN_066c03a8(lVar10,0);
                                  if (lVar10 == 0) goto LAB_066d38d0;
                                  *(undefined8 *)(lVar10 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                                  ;
                                  thunk_FUN_0333a630();
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x80);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                    FUN_055c5e7c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>__ctor__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x48) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x48),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
                                    FUN_0501d488(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_Add__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x50) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x50),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                    FUN_055c5e7c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_GetEnumerator__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x60) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x60),lVar12);
                                  if (lVar7 == 0) goto LAB_066d38d0;
                                  FUN_0474fa70(lVar7,lVar10,*unaff_x29);
                                  lVar7 = *(long *)(lVar6 + 0x48);
                                  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  );
                                  FUN_066c0510(lVar10,0);
                                  if (lVar10 == 0) goto LAB_066d38d0;
                                  *(undefined8 *)(lVar10 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                                  ;
                                  thunk_FUN_0333a630();
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x98);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                    FUN_055c676c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Item__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x48) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x48),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xa0);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                                    FUN_05020914(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>__ctor__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x50) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x50),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xa8);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                    FUN_055c676c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>__ctor__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x60) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x60),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xb0);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                    FUN_055c676c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_Add__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x68) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x68),lVar12);
                                  if (lVar7 == 0) goto LAB_066d38d0;
                                  FUN_0474fa70(lVar7,lVar10,*unaff_x29);
                                  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>__ctor__
                                                  );
                                  FUN_066ac73c(lVar10,0);
                                  if (lVar10 == 0) goto LAB_066d38d0;
                                  *(undefined8 *)(lVar10 + 0x28) =
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_Distance<Vector4>__ctor__;
                                  thunk_FUN_0333a630();
                                  *(undefined8 *)(lVar10 + 0x60) =
                                       *(undefined8 *)(in_stack_00000028 + 0x1d0);
                                  thunk_FUN_0333a630();
                                  FUN_05283634(lVar10,*(undefined8 *)(in_stack_00000028 + 0x1d8),
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<string,_MockRuntime_AfterFunctionDelegate>_set_Item__
                                              );
                                  puVar4 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
                                  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                            
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                  FUN_055c5e7c();
                                  *(undefined8 *)(lVar10 + 0x80) = uVar5;
                                  thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x80),uVar5);
                                  puVar2 = PTR_DAT_072aecd8;
                                  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
                                  FUN_0501d488();
                                  *(undefined8 *)(lVar10 + 0x88) = uVar5;
                                  thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x88),uVar5);
                                  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                  FUN_055c5e7c();
                                  *(undefined8 *)(lVar10 + 0x48) = uVar5;
                                  thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x48),uVar5);
                                  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                  FUN_0501d488();
                                  *(undefined8 *)(lVar10 + 0x50) = uVar5;
                                  thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x50),uVar5);
                                  *(long *)(in_stack_00000028 + 0x1f0) = lVar10;
                                  thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1f0),
                                                     lVar10);
                                  if (*(long *)(lVar6 + 0x48) == 0) goto LAB_066d38d0;
                                  FUN_0474fa70(*(long *)(lVar6 + 0x48),
                                               *(undefined8 *)(in_stack_00000028 + 0x1f0),*unaff_x29
                                              );
                                  lVar7 = *(long *)(lVar6 + 0x48);
                                  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  );
                                  FUN_066c0510(lVar10,0);
                                  puVar2 = 
                                  Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                                  ;
                                  if (lVar10 == 0) goto LAB_066d38d0;
                                  *(undefined8 *)(lVar10 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>__ctor__
                                  ;
                                  thunk_FUN_0333a630();
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xb8);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                    FUN_055c676c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_GetEnumerator__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x48) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x48),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xc0);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                                    FUN_05020914(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_get_Item__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x50) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x50),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 200);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                    FUN_055c676c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>__ctor__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x60) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x60),lVar12);
                                  lVar11 = *(long *)puVar2;
                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar11 = *(long *)puVar2;
                                  }
                                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xd0);
                                  if (lVar12 == 0) {
                                    if (*(int *)(lVar11 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar11 = *(long *)puVar2;
                                    }
                                    uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                    FUN_055c676c(lVar12,uVar5,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_Remove__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0);
                                    *plVar8 = lVar12;
                                    thunk_FUN_0333a630(plVar8,lVar12);
                                  }
                                  *(long *)(lVar10 + 0x68) = lVar12;
                                  thunk_FUN_0333a630((long *)(lVar10 + 0x68),lVar12);
                                  if ((lVar7 == 0) ||
                                     (FUN_0474fa70(lVar7,lVar10,*unaff_x29), in_stack_00000018 == 0)
                                     ) goto LAB_066d38d0;
                                  lVar10 = *(long *)(in_stack_00000018 + 0x10);
                                  lVar7 = *(long *)puVar3;
                                  *(int *)(in_stack_00000018 + 0x1c) =
                                       *(int *)(in_stack_00000018 + 0x1c) + 1;
                                  if (lVar10 == 0) goto LAB_066d38d0;
                                  uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                    plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar8 = lVar6;
                                    thunk_FUN_0333a630(plVar8,lVar6);
                                  }
                                  else {
                                    FUN_041e2c78(in_stack_00000018,lVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                }
                                puVar2 = 
                                Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                                ;
                                puVar3 = 
                                Method_System_Collections_Generic_Dictionary<string,_Enum>_GetEnumerator__
                                ;
                                if (0 < *(int *)(in_stack_00000018 + 0x18)) {
                                  uVar5 = FUN_041e47e4(in_stack_00000018,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_ContainsKey__
                                                  );
                                  *(undefined8 *)(in_stack_00000028 + 0x1a0) = uVar5;
                                  thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1a0),uVar5
                                                    );
                                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  lVar6 = FUN_066ac7a8(0);
                                  lVar10 = *(long *)puVar2;
                                  if (*(int *)(lVar10 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0(lVar10);
                                  }
                                  if (((lVar6 == 0) ||
                                      (lVar6 = FUN_066ac820(lVar6,*(undefined8 *)
                                                                   (*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 0x10),1,0,0,0),
                                      lVar6 == 0)) || (*(long *)(lVar6 + 0x28) == 0))
                                  goto LAB_066d38d0;
                                  FUN_0474fbc4(*(long *)(lVar6 + 0x28),
                                               *(undefined8 *)(in_stack_00000028 + 0x1a0),
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Values__
                                              );
                                }
                                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                }
                                lVar6 = FUN_066ac7a8(0);
                                if (lVar6 != 0) {
                                  FUN_066b19ec(lVar6,*(undefined8 *)(in_stack_00000028 + 400),0);
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
        }
      }
    }
  }
LAB_066d38d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


