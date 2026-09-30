/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState$$InjectOptionalTimeProvider
ENTRY_POINT: 0522b0b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Oculus_Interaction_Body_PoseDetection_BodyPoseComparerActiveState__InjectOptionalTimeProvider
               (ulong param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x23;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_ICollection<object>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
    *(undefined1 *)(unaff_x25 + 0x855) = 1;
  }
  uVar2 = FUN_051b9374();
  if ((uVar2 & 1) != 0) {
    uVar3 = thunk_FUN_02f6ef30(System_Nullable<double>_TypeInfo);
    uVar3 = FUN_0515d378(param_3,uVar3,0);
    uVar4 = thunk_FUN_02f6ef30(System_Nullable<Guid>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,uVar4);
  }
  cVar1 = *(char *)(param_2 + 0x1a);
  uVar2 = FUN_0522d478(uVar2,param_3);
  if (cVar1 == '\0') {
    if ((uVar2 & 1) != 0) {
      FUN_0522d4bc(param_2,param_3);
    }
    FUN_051b3a7c();
    uVar2 = FUN_051ba030();
    if ((uVar2 & 1) != 0) {
      if (unaff_x23 != 0) {
        uVar3 = FUN_04f73508();
        FUN_051b3a7c(uVar3,0);
LAB_0522b1fc:
        if (*(int *)(*(long *)
                      UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)
                              UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_TypeInfo
                            );
        }
        FUN_0522dab4(param_3);
        return;
      }
      goto LAB_0522b3c8;
    }
    uVar2 = FUN_051ba030();
    if ((uVar2 & 1) != 0) {
      uVar2 = thunk_FUN_04f6d944();
      if ((uVar2 & 1) == 0) {
        uVar2 = thunk_FUN_04f6d944();
        if (((((uVar2 & 1) != 0) || (uVar2 = thunk_FUN_04f6d944(), (uVar2 & 1) != 0)) ||
            (uVar2 = thunk_FUN_04f6d944(), (uVar2 & 1) != 0)) ||
           (uVar2 = thunk_FUN_04f6d944(), (uVar2 & 1) != 0)) {
          if ((unaff_x23 != 0) && (FUN_04f73508(), unaff_x19 != (long *)0x0)) {
            (**(code **)(*unaff_x19 + 0x248))();
            goto LAB_0522b1fc;
          }
LAB_0522b3c8:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        if ((unaff_x23 == 0) || (FUN_04f73508(), unaff_x19 == (long *)0x0)) goto LAB_0522b3c8;
        (**(code **)(*unaff_x19 + 0x248))();
      }
    }
  }
  else if ((uVar2 & 1) != 0) {
    if (param_3 == 0) goto LAB_0522b3c8;
    FUN_05163f1c(param_3,0);
  }
  FUN_0522de30(param_2,param_3);
  return;
}


