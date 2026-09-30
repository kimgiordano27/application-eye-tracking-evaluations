/*
FUNCTION_NAME: FUN_027ee444
ENTRY_POINT: 027ee444
PROGRAM: Lovesick-libil2cpp.so
SCORE: 202
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_027ee444(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_38;
  
  puVar2 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_RemoveAt__;
  if ((DAT_037889f8 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5890);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Cast<FieldInfo>__);
    thunk_FUN_00d48444(PTR_DAT_033ebd88);
    thunk_FUN_00d48444(System_DateTimeParse_DS___TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_AutoMoveTowardsTarget_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eaac0);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_MethodBuilder_get_ReflectedType__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_82_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6684);
    thunk_FUN_00d48444(Meta_Voice_Audio_RawAudioClipStream_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7649);
    thunk_FUN_00d48444(StringLiteral_2668);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<LightingSwapper_LightingGroup>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_319);
    thunk_FUN_00d48444(StringLiteral_163);
    thunk_FUN_00d48444(StringLiteral_12083);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(Method_System_Convert_ToByte__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerator<<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<MeshTransform>_GetEnumerator__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_VisualElement_Hierarchy_RemoveAt__);
    DAT_037889f8 = 1;
  }
  local_38 = 0;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar3 = StringLiteral_6684;
  puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(long *)(param_1 + 0x418) = lVar5;
    *(undefined4 *)(param_1 + 0x424) = 0;
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar3;
    }
    *(float *)(param_1 + 0x428) = (float)*(int *)(*(long *)(lVar5 + 0xb8) + 8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_033f6e48;
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)PTR_DAT_033f6e48);
      *(long *)(param_1 + 0x460) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = 
      System_Collections_Generic_IEnumerator<<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>>_TypeInfo
      ;
      if (lVar5 != 0) {
        FUN_01320e50(lVar5,*(undefined8 *)puVar1);
        *(long *)(param_1 + 0x468) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = Method_Unity_Collections_NativeArray<MeshTransform>_GetEnumerator__;
        if (lVar5 != 0) {
          FUN_01320e50(lVar5,*(undefined8 *)Method_System_Convert_ToByte__);
          *(long *)(param_1 + 0x470) = lVar5;
          FUN_02760744(param_1,0);
          FUN_0275089c(param_1,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),0);
          FUN_027ed904(param_1,1);
          if (DAT_03774d77 == '\0') {
            thunk_FUN_00d48444(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                              );
            DAT_03774d77 = '\x01';
          }
          *(undefined8 *)(param_1 + 0x458) =
               **(undefined8 **)
                 (*(long *)Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                 0xb8);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar5 != 0) {
            FUN_027d0a2c(lVar5,0);
            *(long *)(param_1 + 0x438) = lVar5;
            FUN_0275089c(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58),0);
            if (*(long *)(param_1 + 0x438) != 0) {
              lVar7 = *(long *)(*(long *)(param_1 + 0x438) + 0x408);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                          System_Collections_Generic_List<VisualElement>_TypeInfo);
              if ((lVar5 != 0) &&
                 (FUN_011c181c(lVar5,param_1,*(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo,0),
                 puVar2 = StringLiteral_163, lVar7 != 0)) {
                FUN_027d83e4(lVar7,lVar5,0);
                lVar7 = *(long *)(param_1 + 0x438);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar5 != 0) &&
                   (FUN_012c5834(lVar5,param_1,
                                 *(undefined8 *)
                                  Method_System_Reflection_Emit_MethodBuilder_get_ReflectedType__,0)
                   , puVar2 = 
                     Field_<PrivateImplementationDetails>_8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD
                   , lVar7 != 0)) {
                  FUN_010bfbd4(lVar7,lVar5,0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<LightingSwapper_LightingGroup>_get_Count__
                              );
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  puVar2 = StringLiteral_7649;
                  if (lVar5 != 0) {
                    FUN_012c5834(lVar5,param_1,*(undefined8 *)PTR_DAT_033ebd88,0);
                    FUN_010bfbd4(param_1,lVar5,0,*(undefined8 *)puVar2);
                    puVar2 = StringLiteral_319;
                    plVar6 = *(long **)(param_1 + 0x438);
                    if (plVar6 != (long *)0x0) {
                      lVar5 = (**(code **)(*plVar6 + 0x738))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x740));
                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if ((lVar7 != 0) &&
                         (FUN_012c5834(lVar7,param_1,
                                       *(undefined8 *)
                                        Method_System_Linq_Enumerable_Cast<FieldInfo>__,0),
                         lVar5 != 0)) {
                        FUN_010bfbd4(lVar5,lVar7,0,
                                     *(undefined8 *)Meta_Voice_Audio_RawAudioClipStream_TypeInfo);
                        puVar2 = StringLiteral_12083;
                        plVar6 = *(long **)(param_1 + 0x438);
                        if (plVar6 != (long *)0x0) {
                          lVar5 = (**(code **)(*plVar6 + 0x738))
                                            (plVar6,*(undefined8 *)(*plVar6 + 0x740));
                          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          if ((lVar7 != 0) &&
                             (FUN_012c5834(lVar7,param_1,
                                           *(undefined8 *)System_DateTimeParse_DS___TypeInfo,0),
                             lVar5 != 0)) {
                            FUN_010bfbd4(lVar5,lVar7,0,*(undefined8 *)StringLiteral_2668);
                            local_38 = *(undefined8 *)(param_1 + 0x360);
                            FUN_02751f44(&local_38,*(undefined8 *)(param_1 + 0x438),0);
                            plVar6 = *(long **)(param_1 + 0x438);
                            if (plVar6 != (long *)0x0) {
                              lVar5 = (**(code **)(*plVar6 + 0x738))
                                                (plVar6,*(undefined8 *)(*plVar6 + 0x740));
                              if (lVar5 != 0) {
                                *(undefined1 *)(lVar5 + 0x18) = 1;
                                plVar6 = *(long **)(param_1 + 0x438);
                                if (plVar6 != (long *)0x0) {
                                  lVar5 = (**(code **)(*plVar6 + 0x738))
                                                    (plVar6,*(undefined8 *)(*plVar6 + 0x740));
                                  puVar2 = StringLiteral_5890;
                                  if (lVar5 != 0) {
                                    uVar4 = FUN_0274aad8(lVar5,0);
                                    FUN_0274ab04(lVar5,uVar4 & 0xfffffffd,0);
                                    *(undefined1 *)(param_1 + 0x18) = 1;
                                    FUN_0274a2c4(param_1,1,0);
                                    FUN_027a2c7c(param_1,1,0);
                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                    puVar2 = 
                                    Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
                                    if (lVar5 != 0) {
                                      FUN_011c21b8(lVar5,param_1,
                                                   *(undefined8 *)
                                                                                                        
                                                  Oculus_Interaction_AutoMoveTowardsTarget_TypeInfo,
                                                  0);
                                      *(long *)(param_1 + 0x488) = lVar5;
                                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                      if (lVar5 != 0) {
                                        FUN_016f27fc(lVar5,param_1,*(undefined8 *)PTR_DAT_033eaac0,0
                                                    );
                                        *(long *)(param_1 + 0x490) = lVar5;
                                        FUN_027ee328(param_1,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


