/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchShared$$get_NumberOfValues
ENTRY_POINT: 0145aa64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_5
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchShared__get_NumberOfValues(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  lVar1 = thunk_FUN_00d62348();
  if (lVar1 != 0) {
    FUN_0143e30c(lVar1,*(undefined8 *)
                        Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_State__
                 ,0,0);
    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar2 == 0) {
LAB_0145ae5c:
      uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,0);
    }
    if (0x14 < *unaff_x23) {
      unaff_x19[0x18] = lVar1;
      lVar1 = thunk_FUN_00d62348(*unaff_x22);
      if (lVar1 == 0) goto LAB_0145ae58;
      FUN_0143e30c(lVar1,*(undefined8 *)
                          Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_TypeInfo
                   ,0,0);
      lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar2 == 0) goto LAB_0145ae5c;
      if (0x15 < *unaff_x23) {
        unaff_x19[0x19] = lVar1;
        lVar1 = thunk_FUN_00d62348(*unaff_x22);
        if (lVar1 == 0) goto LAB_0145ae58;
        FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_8324,0,0);
        lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar2 == 0) goto LAB_0145ae5c;
        if (0x16 < *unaff_x23) {
          unaff_x19[0x1a] = lVar1;
          lVar1 = thunk_FUN_00d62348(*unaff_x22);
          if (lVar1 == 0) goto LAB_0145ae58;
          FUN_0143e30c(lVar1,*(undefined8 *)UnityEngine_InputSystem_InputProcessor_TypeInfo,0,0);
          lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar2 == 0) goto LAB_0145ae5c;
          if (0x17 < *unaff_x23) {
            unaff_x19[0x1b] = lVar1;
            lVar1 = thunk_FUN_00d62348(*unaff_x22);
            if (lVar1 == 0) goto LAB_0145ae58;
            FUN_0143e30c(lVar1,*(undefined8 *)
                                Method_System_Collections_Generic_List<OVRBone>_get_Count__,0,0);
            lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar2 == 0) goto LAB_0145ae5c;
            if (0x18 < *unaff_x23) {
              unaff_x19[0x1c] = lVar1;
              lVar1 = thunk_FUN_00d62348(*unaff_x22);
              if (lVar1 == 0) goto LAB_0145ae58;
              FUN_0143e30c(lVar1,*(undefined8 *)
                                  Method_System_Runtime_Serialization_Formatters_Binary_BinaryConverter_WriteTypeInfo__
                           ,0,0);
              lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar2 == 0) goto LAB_0145ae5c;
              if (0x19 < *unaff_x23) {
                unaff_x19[0x1d] = lVar1;
                lVar1 = thunk_FUN_00d62348(*unaff_x22);
                if (lVar1 == 0) goto LAB_0145ae58;
                FUN_0143e30c(lVar1,*(undefined8 *)
                                    Method_System_Collections_Generic_HashSet_Enumerator<Component>_Dispose__
                             ,0,0);
                lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar2 == 0) goto LAB_0145ae5c;
                if (0x1a < *unaff_x23) {
                  unaff_x19[0x1e] = lVar1;
                  lVar1 = thunk_FUN_00d62348(*unaff_x22);
                  if (lVar1 == 0) goto LAB_0145ae58;
                  FUN_0143e30c(lVar1,*(undefined8 *)
                                      Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0,
                               0);
                  lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar2 == 0) goto LAB_0145ae5c;
                  if (0x1b < *unaff_x23) {
                    unaff_x19[0x1f] = lVar1;
                    lVar1 = thunk_FUN_00d62348(*unaff_x22);
                    if (lVar1 == 0) goto LAB_0145ae58;
                    FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_5771,0,0);
                    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar2 == 0) goto LAB_0145ae5c;
                    if (0x1c < *unaff_x23) {
                      unaff_x19[0x20] = lVar1;
                      lVar1 = thunk_FUN_00d62348(*unaff_x22);
                      if (lVar1 == 0) goto LAB_0145ae58;
                      FUN_0143e30c(lVar1,*(undefined8 *)
                                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                                   ,0,0);
                      lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar2 == 0) goto LAB_0145ae5c;
                      if (0x1d < *unaff_x23) {
                        unaff_x19[0x21] = lVar1;
                        lVar1 = thunk_FUN_00d62348(*unaff_x22);
                        if (lVar1 == 0) goto LAB_0145ae58;
                        FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_5916,0,0);
                        lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar2 == 0) goto LAB_0145ae5c;
                        if (0x1e < *unaff_x23) {
                          unaff_x19[0x22] = lVar1;
                          lVar1 = thunk_FUN_00d62348(*unaff_x22);
                          if (lVar1 == 0) goto LAB_0145ae58;
                          FUN_0143e30c(lVar1,*(undefined8 *)
                                              Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                                       ,0,0);
                          lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar2 == 0) goto LAB_0145ae5c;
                          if (0x1f < *unaff_x23) {
                            unaff_x19[0x23] = lVar1;
                            lVar1 = thunk_FUN_00d62348(*unaff_x22);
                            if (lVar1 == 0) goto LAB_0145ae58;
                            FUN_0143e30c(lVar1,*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                                         ,0,0);
                            lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar2 == 0) goto LAB_0145ae5c;
                            if (0x20 < *unaff_x23) {
                              unaff_x19[0x24] = lVar1;
                              *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
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
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0145ae58:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


