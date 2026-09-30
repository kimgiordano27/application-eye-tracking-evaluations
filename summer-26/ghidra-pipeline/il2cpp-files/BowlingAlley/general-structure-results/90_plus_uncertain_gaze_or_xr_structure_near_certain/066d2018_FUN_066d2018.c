/*
FUNCTION_NAME: FUN_066d2018
ENTRY_POINT: 066d2018
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 203
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_066d2018(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int in_w8;
  long *unaff_x19;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x29;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
    param_1 = *unaff_x19;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0xb8) + 0x20);
  if (lVar8 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      param_1 = *unaff_x19;
    }
    uVar12 = **(undefined8 **)(param_1 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*unaff_x24);
    FUN_055c676c(lVar8,uVar12,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_ContainsKey__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0x20);
    *plVar5 = lVar8;
    thunk_FUN_0333a630(plVar5,lVar8);
    unaff_x29 = (undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__;
  }
  *(long *)(unaff_x27 + 0x60) = lVar8;
  thunk_FUN_0333a630((long *)(unaff_x27 + 0x60),lVar8);
  lVar8 = *unaff_x19;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *unaff_x19;
  }
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
  if (lVar9 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar8 = *unaff_x19;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar9 = thunk_FUN_032a56a0(*unaff_x24);
    FUN_055c676c(lVar9,uVar12,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_get_Item__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x19 + 0xb8) + 0x28);
    *plVar5 = lVar9;
    thunk_FUN_0333a630(plVar5,lVar9);
    unaff_x29 = (undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__;
  }
  *(long *)(unaff_x27 + 0x68) = lVar9;
  thunk_FUN_0333a630((long *)(unaff_x27 + 0x68),lVar9);
  if (unaff_x26 != 0) {
    FUN_0474fa70();
    if (*(long *)(unaff_x23 + 400) != 0) {
      if (*(uint *)(*(long *)(unaff_x23 + 400) + 0x1c) < 3) {
        lVar9 = *(long *)(unaff_x25 + 0x48);
        lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                  );
        FUN_066c0510(lVar8,0);
        if (lVar8 == 0) goto LAB_066d38d0;
        *(undefined8 *)(lVar8 + 0x28) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_Add__
        ;
        thunk_FUN_0333a630();
        uVar12 = thunk_FUN_032a56a0(*unaff_x24);
        FUN_055c676c();
        *(undefined8 *)(lVar8 + 0x48) = uVar12;
        thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar12);
        uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
        FUN_05020914();
        *(undefined8 *)(lVar8 + 0x50) = uVar12;
        thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar12);
        if (lVar9 == 0) goto LAB_066d38d0;
        FUN_0474fa70(lVar9,lVar8,*unaff_x29);
      }
      lVar9 = *(long *)(unaff_x25 + 0x48);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                );
      FUN_066c03a8(lVar8,0);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x28) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_Add__
        ;
        thunk_FUN_0333a630();
        uVar12 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
        FUN_055c5e7c();
        *(undefined8 *)(lVar8 + 0x48) = uVar12;
        thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar12);
        uVar12 = thunk_FUN_032a56a0(*unaff_x22);
        FUN_0501d488();
        *(undefined8 *)(lVar8 + 0x50) = uVar12;
        thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar12);
        puVar3 = 
        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__;
        lVar6 = *(long *)
                 Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
        ;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar6 = *(long *)puVar3;
          }
          uVar12 = **(undefined8 **)(lVar6 + 0xb8);
          lVar10 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var
                                     );
          FUN_055c5e7c(lVar10,uVar12,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>__ctor__
                       ,0);
          plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
          *plVar5 = lVar10;
          thunk_FUN_0333a630(plVar5,lVar10);
          unaff_x29 = (undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
          ;
        }
        *(long *)(lVar8 + 0x60) = lVar10;
        thunk_FUN_0333a630((long *)(lVar8 + 0x60),lVar10);
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar6 = *(long *)puVar3;
          }
          uVar12 = **(undefined8 **)(lVar6 + 0xb8);
          lVar10 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var
                                     );
          FUN_055c5e7c(lVar10,uVar12,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Add__
                       ,0);
          plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          *plVar5 = lVar10;
          thunk_FUN_0333a630(plVar5,lVar10);
          unaff_x29 = (undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
          ;
        }
        *(long *)(lVar8 + 0x68) = lVar10;
        thunk_FUN_0333a630((long *)(lVar8 + 0x68),lVar10);
        if (lVar9 != 0) {
          FUN_0474fa70(lVar9,lVar8,*unaff_x29);
          lVar9 = *(long *)(unaff_x25 + 0x48);
          lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                    );
          FUN_066c03a8(lVar8,0);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x28) =
                 *(undefined8 *)Method_Unity_VisualScripting_Divide<object>__ctor__;
            thunk_FUN_0333a630();
            uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                         UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
            FUN_055c5e7c();
            *(undefined8 *)(lVar8 + 0x48) = uVar12;
            thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar12);
            uVar12 = thunk_FUN_032a56a0(*unaff_x22);
            FUN_0501d488();
            *(undefined8 *)(lVar8 + 0x50) = uVar12;
            thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar12);
            puVar3 = 
            Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__;
            lVar6 = *(long *)
                     Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
            ;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar6 = *(long *)puVar3;
            }
            lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
            if (lVar10 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar6 = *(long *)puVar3;
              }
              uVar12 = **(undefined8 **)(lVar6 + 0xb8);
              lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                           UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
              FUN_055c5e7c(lVar10,uVar12,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Clear__
                           ,0);
              plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
              *plVar5 = lVar10;
              thunk_FUN_0333a630(plVar5,lVar10);
              unaff_x29 = (undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
              ;
            }
            *(long *)(lVar8 + 0x60) = lVar10;
            thunk_FUN_0333a630((long *)(lVar8 + 0x60),lVar10);
            lVar6 = *(long *)puVar3;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar6 = *(long *)puVar3;
            }
            lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
            if (lVar10 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar6 = *(long *)puVar3;
              }
              uVar12 = **(undefined8 **)(lVar6 + 0xb8);
              lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                           UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
              FUN_055c5e7c(lVar10,uVar12,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_ContainsKey__
                           ,0);
              plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
              *plVar5 = lVar10;
              thunk_FUN_0333a630(plVar5,lVar10);
              unaff_x29 = (undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
              ;
            }
            *(long *)(lVar8 + 0x68) = lVar10;
            thunk_FUN_0333a630((long *)(lVar8 + 0x68),lVar10);
            if ((lVar9 != 0) &&
               (FUN_0474fa70(lVar9,lVar8,*unaff_x29), *(long *)(in_stack_00000020 + 0x48) != 0)) {
              FUN_0474fa70();
              lVar9 = *(long *)(in_stack_00000020 + 0x48);
              lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_DateTime>_Remove__
                                        );
              FUN_066b3804(lVar8,0);
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x28) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_Clear__
                ;
                thunk_FUN_0333a630();
                uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727eb10);
                FUN_055c5a5c();
                *(undefined8 *)(lVar8 + 0x48) = uVar12;
                thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar12);
                uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                FUN_0501b95c();
                *(undefined8 *)(lVar8 + 0x50) = uVar12;
                thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar12);
                uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                                           );
                FUN_0510c3c0();
                *(undefined8 *)(lVar8 + 0x58) = uVar12;
                thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x58),uVar12);
                if (lVar9 != 0) {
                  FUN_0474fa70(lVar9,lVar8,*unaff_x29);
                  if (*(long *)(unaff_x23 + 400) != 0) {
                    if (*(char *)(*(long *)(unaff_x23 + 400) + 0x38) != '\0') {
                      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                );
                      FUN_066c0510(lVar8,0);
                      if (lVar8 == 0) goto LAB_066d38d0;
                      *(undefined8 *)(lVar8 + 0x28) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                      ;
                      thunk_FUN_0333a630();
                      uVar12 = thunk_FUN_032a56a0(*unaff_x24);
                      FUN_055c676c();
                      *(undefined8 *)(lVar8 + 0x48) = uVar12;
                      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar12);
                      uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                      FUN_05020914();
                      *(undefined8 *)(lVar8 + 0x50) = uVar12;
                      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar12);
                      puVar3 = 
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      lVar9 = *(long *)
                               Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar9 = *(long *)puVar3;
                      }
                      lVar6 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x50);
                      if (lVar6 == 0) {
                        if (*(int *)(lVar9 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar9 = *(long *)puVar3;
                        }
                        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                        lVar6 = thunk_FUN_032a56a0(*unaff_x24);
                        FUN_055c676c(lVar6,uVar12,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                                     ,0);
                        plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
                        *plVar5 = lVar6;
                        thunk_FUN_0333a630(plVar5,lVar6);
                      }
                      *(long *)(lVar8 + 0x60) = lVar6;
                      thunk_FUN_0333a630((long *)(lVar8 + 0x60),lVar6);
                      lVar9 = *(long *)puVar3;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar9 = *(long *)puVar3;
                      }
                      lVar6 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x58);
                      if (lVar6 == 0) {
                        if (*(int *)(lVar9 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar9 = *(long *)puVar3;
                        }
                        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                        lVar6 = thunk_FUN_032a56a0(*unaff_x24);
                        FUN_055c676c(lVar6,uVar12,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Remove__
                                     ,0);
                        plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
                        *plVar5 = lVar6;
                        thunk_FUN_0333a630(plVar5,lVar6);
                      }
                      *(long *)(lVar8 + 0x68) = lVar6;
                      thunk_FUN_0333a630((long *)(lVar8 + 0x68),lVar6);
                      lVar6 = *(long *)(in_stack_00000020 + 0x48);
                      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                                );
                      FUN_066bf21c(lVar9,0);
                      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x48) == 0)) ||
                         (FUN_0474fa70(*(long *)(lVar9 + 0x48),lVar8,*unaff_x29), lVar6 == 0))
                      goto LAB_066d38d0;
                      FUN_0474fa70(lVar6,lVar9,*unaff_x29);
                    }
                    lVar9 = *(long *)(in_stack_00000020 + 0x48);
                    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                              );
                    FUN_066c0510(lVar8,0);
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x28) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Remove__
                      ;
                      thunk_FUN_0333a630();
                      uVar12 = thunk_FUN_032a56a0(*unaff_x24);
                      FUN_055c676c();
                      *(undefined8 *)(lVar8 + 0x48) = uVar12;
                      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x48),uVar12);
                      uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                      FUN_05020914();
                      *(undefined8 *)(lVar8 + 0x50) = uVar12;
                      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x50),uVar12);
                      puVar3 = 
                      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      lVar6 = *(long *)
                               Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                      ;
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar6 = *(long *)puVar3;
                      }
                      lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                      if (lVar10 == 0) {
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar6 = *(long *)puVar3;
                        }
                        uVar12 = **(undefined8 **)(lVar6 + 0xb8);
                        lVar10 = thunk_FUN_032a56a0(*unaff_x24);
                        FUN_055c676c(lVar10,uVar12,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TryGetValue__
                                     ,0);
                        plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
                        *plVar5 = lVar10;
                        thunk_FUN_0333a630(plVar5,lVar10);
                      }
                      *(long *)(lVar8 + 0x60) = lVar10;
                      thunk_FUN_0333a630((long *)(lVar8 + 0x60),lVar10);
                      if (lVar9 != 0) {
                        FUN_0474fa70(lVar9,lVar8,*unaff_x29);
                        lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Clear__
                                                  );
                        FUN_066bf21c(lVar8,0);
                        puVar3 = UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var;
                        if (lVar8 != 0) {
                          *(undefined8 *)(lVar8 + 0x28) =
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                          ;
                          thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x28));
                          lVar6 = *(long *)(lVar8 + 0x48);
                          lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<string,_DateTime>_Remove__
                                                  );
                          FUN_066b3804(lVar9,0);
                          if (lVar9 != 0) {
                            *(undefined8 *)(lVar9 + 0x28) =
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
                            ;
                            thunk_FUN_0333a630();
                            uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727eb10);
                            FUN_055c5a5c();
                            *(undefined8 *)(lVar9 + 0x48) = uVar12;
                            thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),uVar12);
                            uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                            FUN_0501b95c();
                            *(undefined8 *)(lVar9 + 0x50) = uVar12;
                            thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50),uVar12);
                            if (lVar6 != 0) {
                              FUN_0474fa70(lVar6,lVar9,*unaff_x29);
                              lVar6 = *(long *)(lVar8 + 0x48);
                              lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                                                  );
                              FUN_066c03a8(lVar9,0);
                              puVar2 = 
                              Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                              ;
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0x28) =
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>__ctor__
                                ;
                                thunk_FUN_0333a630();
                                lVar10 = *(long *)puVar2;
                                if (*(int *)(lVar10 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar10 = *(long *)puVar2;
                                }
                                lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x68);
                                if (lVar11 == 0) {
                                  if (*(int *)(lVar10 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar10 = *(long *)puVar2;
                                  }
                                  uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                  FUN_055c5e7c(lVar11,uVar12,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
                                               ,0);
                                  plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
                                  *plVar5 = lVar11;
                                  thunk_FUN_0333a630(plVar5,lVar11);
                                  unaff_x29 = (undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                  ;
                                }
                                *(long *)(lVar9 + 0x48) = lVar11;
                                thunk_FUN_0333a630((long *)(lVar9 + 0x48),lVar11);
                                lVar10 = *(long *)puVar2;
                                if (*(int *)(lVar10 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar10 = *(long *)puVar2;
                                }
                                lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x70);
                                if (lVar11 == 0) {
                                  if (*(int *)(lVar10 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar10 = *(long *)puVar2;
                                  }
                                  uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                  lVar11 = thunk_FUN_032a56a0(*unaff_x22);
                                  FUN_0501d488(lVar11,uVar12,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                                               ,0);
                                  plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
                                  *plVar5 = lVar11;
                                  thunk_FUN_0333a630(plVar5,lVar11);
                                  unaff_x29 = (undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                  ;
                                }
                                *(long *)(lVar9 + 0x50) = lVar11;
                                thunk_FUN_0333a630((long *)(lVar9 + 0x50),lVar11);
                                lVar10 = *(long *)puVar2;
                                if (*(int *)(lVar10 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar10 = *(long *)puVar2;
                                }
                                lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x78);
                                if (lVar11 == 0) {
                                  if (*(int *)(lVar10 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar10 = *(long *)puVar2;
                                  }
                                  uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                  FUN_055c5e7c(lVar11,uVar12,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_set_Item__
                                               ,0);
                                  plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
                                  *plVar5 = lVar11;
                                  thunk_FUN_0333a630(plVar5,lVar11);
                                  unaff_x29 = (undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Count__
                                  ;
                                }
                                *(long *)(lVar9 + 0x60) = lVar11;
                                thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar11);
                                puVar3 = 
                                Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_Add__
                                ;
                                if (lVar6 != 0) {
                                  FUN_0474fa70(lVar6,lVar9,*unaff_x29);
                                  if (*(char *)(in_stack_00000010 + 0x44) != '\0') {
                                    if (*(int *)(*(long *)PTR_DAT_07279480 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    uVar7 = FUN_06bae618(0);
                                    if ((uVar7 & 1) == 0) {
                                      if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                    }
                                    else {
                                      if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                      lVar9 = *(long *)(in_stack_00000018 + 0x10);
                                      lVar6 = *(long *)puVar3;
                                      *(int *)(in_stack_00000018 + 0x1c) =
                                           *(int *)(in_stack_00000018 + 0x1c) + 1;
                                      if (lVar9 == 0) goto LAB_066d38d0;
                                      uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                             in_stack_00000008;
                                        thunk_FUN_0333a630();
                                      }
                                      else {
                                        FUN_041e2c78(in_stack_00000018,in_stack_00000008,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                    }
                                    lVar9 = *(long *)(in_stack_00000018 + 0x10);
                                    lVar6 = *(long *)puVar3;
                                    *(int *)(in_stack_00000018 + 0x1c) =
                                         *(int *)(in_stack_00000018 + 0x1c) + 1;
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                           in_stack_00000020;
                                      thunk_FUN_0333a630();
                                    }
                                    else {
                                      FUN_041e2c78(in_stack_00000018,in_stack_00000020,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                  if (*(char *)(in_stack_00000010 + 0x45) != '\0') {
                                    if (in_stack_00000018 == 0) goto LAB_066d38d0;
                                    lVar9 = *(long *)(in_stack_00000018 + 0x10);
                                    lVar6 = *(long *)puVar3;
                                    *(int *)(in_stack_00000018 + 0x1c) =
                                         *(int *)(in_stack_00000018 + 0x1c) + 1;
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar5 = lVar8;
                                      thunk_FUN_0333a630(plVar5,lVar8);
                                    }
                                    else {
                                      FUN_041e2c78(in_stack_00000018,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                  uVar12 = *(undefined8 *)(in_stack_00000010 + 0x30);
                                  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar7 = FUN_06be9890(uVar12,0,0);
                                  if (((uVar7 & 1) == 0) || (*(int *)(in_stack_00000010 + 0xc) == 0)
                                     ) {
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
                                    lVar6 = *(long *)(lVar8 + 0x48);
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
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x80);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                      
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                      FUN_055c5e7c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>__ctor__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x48) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x48),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x88);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
                                      FUN_0501d488(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_Add__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x50) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x50),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x90);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                      
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                      FUN_055c5e7c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_GetEnumerator__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x60) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar11);
                                    if (lVar6 == 0) goto LAB_066d38d0;
                                    FUN_0474fa70(lVar6,lVar9,*unaff_x29);
                                    lVar6 = *(long *)(lVar8 + 0x48);
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
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x98);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Item__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x48) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x48),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xa0);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                                      FUN_05020914(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>__ctor__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x50) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x50),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xa8);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>__ctor__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x60) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xb0);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_Add__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x68) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x68),lVar11);
                                    if (lVar6 == 0) goto LAB_066d38d0;
                                    FUN_0474fa70(lVar6,lVar9,*unaff_x29);
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
                                    uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
                                    FUN_055c5e7c();
                                    *(undefined8 *)(lVar9 + 0x80) = uVar12;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x80),uVar12);
                                    puVar2 = PTR_DAT_072aecd8;
                                    uVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072aecd8);
                                    FUN_0501d488();
                                    *(undefined8 *)(lVar9 + 0x88) = uVar12;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x88),uVar12);
                                    uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                    FUN_055c5e7c();
                                    *(undefined8 *)(lVar9 + 0x48) = uVar12;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48),uVar12);
                                    uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                    FUN_0501d488();
                                    *(undefined8 *)(lVar9 + 0x50) = uVar12;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50),uVar12);
                                    *(long *)(in_stack_00000028 + 0x1f0) = lVar9;
                                    thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1f0),
                                                       lVar9);
                                    if (*(long *)(lVar8 + 0x48) == 0) goto LAB_066d38d0;
                                    FUN_0474fa70(*(long *)(lVar8 + 0x48),
                                                 *(undefined8 *)(in_stack_00000028 + 0x1f0),
                                                 *unaff_x29);
                                    lVar6 = *(long *)(lVar8 + 0x48);
                                    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  );
                                    FUN_066c0510(lVar9,0);
                                    puVar2 = 
                                    Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_ContainsKey__
                                    ;
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    *(undefined8 *)(lVar9 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>__ctor__
                                    ;
                                    thunk_FUN_0333a630();
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xb8);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_GetEnumerator__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x48) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x48),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xc0);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad50);
                                      FUN_05020914(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_get_Item__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x50) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x50),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 200);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>__ctor__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x60) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x60),lVar11);
                                    lVar10 = *(long *)puVar2;
                                    if (*(int *)(lVar10 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                      lVar10 = *(long *)puVar2;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xd0);
                                    if (lVar11 == 0) {
                                      if (*(int *)(lVar10 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar10 = *(long *)puVar2;
                                      }
                                      uVar12 = **(undefined8 **)(lVar10 + 0xb8);
                                      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                                      FUN_055c676c(lVar11,uVar12,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_Remove__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0);
                                      *plVar5 = lVar11;
                                      thunk_FUN_0333a630(plVar5,lVar11);
                                    }
                                    *(long *)(lVar9 + 0x68) = lVar11;
                                    thunk_FUN_0333a630((long *)(lVar9 + 0x68),lVar11);
                                    if ((lVar6 == 0) ||
                                       (FUN_0474fa70(lVar6,lVar9,*unaff_x29), in_stack_00000018 == 0
                                       )) goto LAB_066d38d0;
                                    lVar9 = *(long *)(in_stack_00000018 + 0x10);
                                    lVar6 = *(long *)puVar3;
                                    *(int *)(in_stack_00000018 + 0x1c) =
                                         *(int *)(in_stack_00000018 + 0x1c) + 1;
                                    if (lVar9 == 0) goto LAB_066d38d0;
                                    uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar5 = lVar8;
                                      thunk_FUN_0333a630(plVar5,lVar8);
                                    }
                                    else {
                                      FUN_041e2c78(in_stack_00000018,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                  puVar2 = 
                                  Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                                  ;
                                  puVar3 = 
                                  Method_System_Collections_Generic_Dictionary<string,_Enum>_GetEnumerator__
                                  ;
                                  if (0 < *(int *)(in_stack_00000018 + 0x18)) {
                                    uVar12 = FUN_041e47e4(in_stack_00000018,
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_ContainsKey__
                                                  );
                                    *(undefined8 *)(in_stack_00000028 + 0x1a0) = uVar12;
                                    thunk_FUN_0333a630((undefined8 *)(in_stack_00000028 + 0x1a0),
                                                       uVar12);
                                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    lVar8 = FUN_066ac7a8(0);
                                    lVar9 = *(long *)puVar2;
                                    if (*(int *)(lVar9 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0(lVar9);
                                    }
                                    if (((lVar8 == 0) ||
                                        (lVar8 = FUN_066ac820(lVar8,*(undefined8 *)
                                                                     (*(long *)(*(long *)puVar2 +
                                                                               0xb8) + 0x10),1,0,0,0
                                                             ), lVar8 == 0)) ||
                                       (*(long *)(lVar8 + 0x28) == 0)) goto LAB_066d38d0;
                                    FUN_0474fbc4(*(long *)(lVar8 + 0x28),
                                                 *(undefined8 *)(in_stack_00000028 + 0x1a0),
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<string,_EventDescriptor>_get_Values__
                                                );
                                  }
                                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
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
          }
        }
      }
    }
  }
LAB_066d38d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


