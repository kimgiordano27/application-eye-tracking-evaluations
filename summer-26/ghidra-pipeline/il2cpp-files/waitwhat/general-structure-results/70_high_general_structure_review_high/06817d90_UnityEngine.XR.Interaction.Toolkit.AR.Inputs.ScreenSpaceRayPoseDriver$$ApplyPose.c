/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRayPoseDriver$$ApplyPose
ENTRY_POINT: 06817d90
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_XR_Interaction_Toolkit_AR_Inputs_ScreenSpaceRayPoseDriver__ApplyPose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  FUN_03188a78(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_PostfixBurstDelegate_TypeInfo
              );
  FUN_03188a78(System_Xml_Serialization_XmlTypeSerializationSource_TypeInfo);
  FUN_03188a78(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000354_BurstDirectCall_TypeInfo
              );
  FUN_03188a78(
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000358_BurstDirectCall_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0xa92) = 1;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000358_BurstDirectCall_TypeInfo
  ;
  lVar4 = *(long *)(unaff_x19 + 0xb0);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) {
    lVar2 = *(long *)
             UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000358_BurstDirectCall_TypeInfo
    ;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
    lVar5 = puVar3[2];
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar6 = *puVar3;
      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_PostfixBurstDelegate_TypeInfo
                        );
      FUN_03dff3f4(lVar5,uVar6,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000354_BurstDirectCall_TypeInfo
                   ,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar5;
    }
    uVar6 = FUN_03a8270c(lVar4,lVar5,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000358_PostfixBurstDelegate_TypeInfo
                        );
    uVar6 = FUN_03a924f4(uVar6,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_BurstDirectCall_TypeInfo
                        );
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar6;
  }
  return;
}


