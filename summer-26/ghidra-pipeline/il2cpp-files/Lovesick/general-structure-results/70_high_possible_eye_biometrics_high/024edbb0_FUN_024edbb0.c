/*
FUNCTION_NAME: FUN_024edbb0
ENTRY_POINT: 024edbb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;negative_generic_rendering_without_foveation_or_eye_source
*/


void FUN_024edbb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = UnityEngine_InputSystem_Controls_AxisControl_TypeInfo;
  if ((DAT_037827ea & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Array_Find<MetaXRAcousticMaterialMapping_Pair>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                      );
    thunk_FUN_00d48444(Method_Sirenix_Serialization_CustomGenericFormatterAttribute__ctor__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_AxisControl_TypeInfo);
    DAT_037827ea = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_Sirenix_Serialization_CustomGenericFormatterAttribute__ctor__;
  if (lVar2 != 0) {
    FUN_01320e50(lVar2,*(undefined8 *)
                        Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                );
    *(long *)(param_1 + 0xb0) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      FUN_01320e50(lVar2,*(undefined8 *)
                          Method_System_Array_Find<MetaXRAcousticMaterialMapping_Pair>__);
      *(long *)(param_1 + 0xc0) = lVar2;
      UnityEngine_XR_Interaction_Toolkit_XRRayInteractor_SamplePoint__set_position(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


