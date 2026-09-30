/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0411445c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 127
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  byte in_w8;
  undefined8 uVar2;
  List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 *pLVar3;
  Il2CppObject *pIVar4;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  byte bStack0000000000000057;
  
  bStack0000000000000057 = in_w8 & 1;
  if (bStack0000000000000057 == 0) {
    uVar1 = XRDirectInteractor_get_unsortedValidTargets_m3F187FD1D01B26250B2BE851DCD1AE186D7C3B5F_inline
                      (*(XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B **)
                        (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x2f8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Nullable<Required>_GetValueOrDefault__);
    SortingHelpers_SortByDistanceToInteractor_m970FA77B7D9A9BAEEB975B5281829D0C989D3EE2
              (*(undefined8 *)(unaff_x29 + -8),uVar1,uVar2,0);
    pLVar3 = *(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 **)(unaff_x29 + -0x10);
    pIVar4 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x2f8);
    NullCheck(pLVar3);
    List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C
              (pLVar3,pIVar4,(MethodInfo *)*in_stack_00000018);
    *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2f1) = 1;
  }
  else {
    pLVar3 = *(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 **)(unaff_x29 + -0x10);
    pIVar4 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x2f8);
    NullCheck(pLVar3);
    List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C
              (pLVar3,pIVar4,(MethodInfo *)*in_stack_00000018);
  }
  return;
}


