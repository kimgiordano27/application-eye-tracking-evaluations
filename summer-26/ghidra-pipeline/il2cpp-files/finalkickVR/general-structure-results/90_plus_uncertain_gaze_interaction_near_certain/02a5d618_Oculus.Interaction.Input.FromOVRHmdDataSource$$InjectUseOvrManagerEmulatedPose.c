/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 02a5d618
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 183
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


void Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose(void)

{
  uint uVar1;
  void *pvVar2;
  __10 *extraout_x1;
  undefined8 uVar3;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_stack_00000010;
  undefined4 uStack000000000000001c;
  long in_stack_00000070;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  in_stack_00000010[6] = 0;
  in_stack_00000010[7] = 0;
  in_stack_00000010[8] = 0;
  in_stack_00000010[5] = *(undefined8 *)(in_stack_00000010[0xb] + 0x40);
  if (in_stack_00000010[5] != 0) {
    in_stack_00000010[4] = *(undefined8 *)(in_stack_00000010[0xb] + 0x40);
    NullCheck((void *)in_stack_00000010[4]);
    List_1_GetEnumerator_m08CB5E84BC9B6F1648355B1883E29C3BC6BCCD7E
              ((List_1_t542BD37C49F7B57F9AF6D3202FA3DCB192FF9132 *)in_stack_00000010[4],
               *(MethodInfo **)
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnKeyboardZTranslatePerformed__
              );
    in_stack_00000010[1] = in_stack_00000090;
    *in_stack_00000010 = in_stack_00000088;
    in_stack_00000010[2] = in_stack_00000098;
    in_stack_00000070 = unaff_x29 + -0x40;
    in_stack_00000010[7] = in_stack_00000010[1];
    in_stack_00000010[6] = *in_stack_00000010;
    in_stack_00000010[8] = in_stack_00000010[2];
    il2cpp::utils::
    Finally<JsonContract_InvokeOnSerialized_mF3C287F02D40385559E8B7439BED3DCB312E0828::__10>
              ((utils *)&stack0x00000070,extraout_x1);
    while (uVar1 = Enumerator_MoveNext_mAAF4952FA8BAB304D43AE201FADF9BF6A2E29297
                             ((Enumerator_tB099F3B18E42257044AC45DFBE37169FA6E32BFF *)
                              (unaff_x29 + -0x40),
                              *(MethodInfo **)
                               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnKeyboardYTranslatePerformed__
                             ), (uVar1 & 1) != 0) {
      pvVar2 = (void *)Enumerator_get_Current_m09459176AC93D11F2E4359255C15D37A336E4145_inline
                                 ((Enumerator_tB099F3B18E42257044AC45DFBE37169FA6E32BFF *)
                                  (unaff_x29 + -0x40),
                                  *(MethodInfo **)
                                   Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnKeyboardZTranslateCanceled__
                                 );
      uVar3 = in_stack_00000010[10];
      uVar5 = in_stack_00000010[0xd];
      uVar4 = in_stack_00000010[0xc];
      NullCheck(pvVar2);
      SerializationCallback_Invoke_m8409A73F0B02AD97D8044C018E80784BF4F39995_inline
                (pvVar2,uVar3,uVar4,uVar5,0);
    }
    uStack000000000000001c = 2;
    il2cpp::utils::
    FinallyHelper<JsonContract_InvokeOnSerialized_mF3C287F02D40385559E8B7439BED3DCB312E0828::$_10,false>
    ::~FinallyHelper((FinallyHelper<JsonContract_InvokeOnSerialized_mF3C287F02D40385559E8B7439BED3DCB312E0828::__10,false>
                      *)&stack0x00000078);
  }
  return;
}


