/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor$$CanHover
ENTRY_POINT: 024996d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 140
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__CanHover(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__);
  thunk_FUN_00d48444(Method_System_Char_System_IConvertible_ToDecimal__);
  thunk_FUN_00d48444(Mono_Security_Interface_MonoTlsProvider_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_13859);
  *(undefined1 *)(unaff_x20 + 0x5e5) = 1;
  lVar2 = thunk_FUN_00d62348(*unaff_x21);
  puVar1 = Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__;
  if (lVar2 != 0) {
    FUN_01298da0(lVar2,*(undefined8 *)
                        Method_UnityEngine_InputSystem_Controls_TouchPressControl_FinishSetup__);
    *(long *)(unaff_x19 + 0x10) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Char_System_IConvertible_ToDecimal__;
    if (lVar2 != 0) {
      FUN_01298da0(lVar2,*(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_12__
                  );
      *(long *)(unaff_x19 + 0x18) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Mono_Security_Interface_MonoTlsProvider_TypeInfo;
      if (lVar2 != 0) {
        FUN_01298da0(lVar2,*(undefined8 *)StringLiteral_12675);
        *(long *)(unaff_x19 + 0x20) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_01298da0(lVar2,*(undefined8 *)Method_Obi_ObiNativeList<Vector4>_ResizeUninitialized__)
          ;
          *(long *)(unaff_x19 + 0x28) = lVar2;
          FUN_017b46ec();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


