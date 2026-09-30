/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 04114310
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 150
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;gaze_retrieval;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction
*/


void Unity_XR_Oculus_Utils__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 *pLVar3;
  undefined8 uVar4;
  List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 *pLVar5;
  Il2CppObject *pIVar6;
  long unaff_x29;
  ulong *in_stack_00000010;
  ulong *in_stack_00000018;
  byte bStack0000000000000057;
  
  if ((*(byte *)(param_1 + 0x9c2) & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var_048cf940
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<Required>_GetValueOrDefault__);
    XRDirectInteractor_GetValidTargets_mA400D3C7DA91720BCD4ED266D4C904C830ADE99E::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x28));
  List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_inline
            (*(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 **)(unaff_x29 + -0x28),
             *(MethodInfo **)
              PTR_List_1_Clear_mD21F1ADC7CA3E9150419E830D32CDA2B2CDFD357_RuntimeMethod_var_048cf940)
  ;
  bVar1 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A
                    (*(undefined8 *)(unaff_x29 + -8),0);
  *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) != 0) {
    uVar2 = XRBaseInteractor_get_targetFilter_mCA4841567DCB847C123D614AA18100C445D2CE2F
                      (*(undefined8 *)(unaff_x29 + -8),0);
    *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x20);
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x20);
      NullCheck(*(void **)(unaff_x29 + -0x48));
      bVar1 = InterfaceFuncInvoker0<bool>::Invoke
                        (0,(Il2CppClass *)*in_stack_00000010,*(Il2CppObject **)(unaff_x29 + -0x48));
      *(byte *)(unaff_x29 + -0x49) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x49) & 1) != 0) {
        *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x20);
        pLVar5 = (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 *)
                 XRDirectInteractor_get_unsortedValidTargets_m3F187FD1D01B26250B2BE851DCD1AE186D7C3B5F_inline
                           (*(XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B **)
                             (unaff_x29 + -8),(MethodInfo *)0x0);
        pLVar3 = *(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 **)(unaff_x29 + -0x10);
        NullCheck(*(void **)(unaff_x29 + -0x58));
        InterfaceActionInvoker3<Il2CppObject*,List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*,List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*>
        ::Invoke(3,(Il2CppClass *)*in_stack_00000010,*(Il2CppObject **)(unaff_x29 + -0x58),
                 *(Il2CppObject **)(unaff_x29 + -8),pLVar5,pLVar3);
        return;
      }
    }
    bStack0000000000000057 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x2f1) & 1;
    if (bStack0000000000000057 == 0) {
      uVar2 = XRDirectInteractor_get_unsortedValidTargets_m3F187FD1D01B26250B2BE851DCD1AE186D7C3B5F_inline
                        (*(XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2f8);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_System_Nullable<Required>_GetValueOrDefault__);
      SortingHelpers_SortByDistanceToInteractor_m970FA77B7D9A9BAEEB975B5281829D0C989D3EE2
                (*(undefined8 *)(unaff_x29 + -8),uVar2,uVar4,0);
      pLVar5 = *(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 **)(unaff_x29 + -0x10);
      pIVar6 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x2f8);
      NullCheck(pLVar5);
      List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C
                (pLVar5,pIVar6,(MethodInfo *)*in_stack_00000018);
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2f1) = 1;
    }
    else {
      pLVar5 = *(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 **)(unaff_x29 + -0x10);
      pIVar6 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x2f8);
      NullCheck(pLVar5);
      List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C
                (pLVar5,pIVar6,(MethodInfo *)*in_stack_00000018);
    }
  }
  return;
}


