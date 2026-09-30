/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation
ENTRY_POINT: 0411d984
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 218
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_2
*/


byte Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation(long param_1)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  long in_x9;
  long unaff_x29;
  long in_stack_00000038;
  long in_stack_00000040;
  Il2CppObject *pIStack0000000000000068;
  Il2CppObject *pIStack0000000000000070;
  Il2CppObject *pIStack0000000000000078;
  
  do {
    pIStack0000000000000078 = *(Il2CppObject **)(*(long *)(in_x9 + 0x30) + 0x40);
    pIStack0000000000000070 = *(Il2CppObject **)(in_x9 + 0x28);
    pIStack0000000000000068 = *(Il2CppObject **)(param_1 + 0xd0);
    NullCheck(pIStack0000000000000078);
    uVar1 = VirtualFuncInvoker2<bool,Il2CppObject*,Il2CppObject*>::Invoke
                      (0x10,pIStack0000000000000078,pIStack0000000000000070,pIStack0000000000000068)
    ;
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x29 + -0x49) = 1;
      *(undefined4 *)(in_stack_00000040 + 0x24) = 5;
LAB_0411d944:
      il2cpp::utils::
      FinallyHelper<XRInteractionGroup_CanStartOrContinueAnySelect_m42A0AED7CA78570F41D96436AE36CF419497CA2D::$_21,false>
      ::~FinallyHelper((FinallyHelper<XRInteractionGroup_CanStartOrContinueAnySelect_m42A0AED7CA78570F41D96436AE36CF419497CA2D::__21,false>
                        *)&stack0x00000098);
      if ((*(int *)(in_stack_00000040 + 0x24) == 0) || (*(int *)(in_stack_00000040 + 0x24) != 5)) {
        *(undefined1 *)(unaff_x29 + -1) = 0;
      }
      else {
        *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x49) & 1;
      }
      return *(byte *)(unaff_x29 + -1) & 1;
    }
    do {
      uVar1 = Enumerator_MoveNext_mFA0CD3249649865B04C91FE04E85091C0105935E
                        ((Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275 *)(unaff_x29 + -0x70)
                         ,*(MethodInfo **)
                           PTR_Enumerator_MoveNext_mFA0CD3249649865B04C91FE04E85091C0105935E_RuntimeMethod_var_048cf920
                        );
      if ((uVar1 & 1) == 0) {
        *(undefined4 *)(in_stack_00000040 + 0x24) = 8;
        goto LAB_0411d944;
      }
      pIVar2 = (Il2CppObject *)
               Enumerator_get_Current_m5A723821D45562AEA6CF9D3057317CC1601A688C_inline
                         ((Enumerator_t09D43999A353BEFF0532A0A8596DD0B04A916275 *)
                          (unaff_x29 + -0x70),
                          *(MethodInfo **)
                           PTR_Enumerator_get_Current_m5A723821D45562AEA6CF9D3057317CC1601A688C_RuntimeMethod_var_048cf928
                         );
      uVar3 = IsInst(pIVar2,*(Il2CppClass **)
                             PTR_IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var_048cfc88
                    );
      *(undefined8 *)(in_stack_00000040 + 0xd0) = uVar3;
      param_1 = in_stack_00000040;
      in_x9 = in_stack_00000038;
    } while (*(long *)(in_stack_00000040 + 0xd0) == 0);
  } while( true );
}


