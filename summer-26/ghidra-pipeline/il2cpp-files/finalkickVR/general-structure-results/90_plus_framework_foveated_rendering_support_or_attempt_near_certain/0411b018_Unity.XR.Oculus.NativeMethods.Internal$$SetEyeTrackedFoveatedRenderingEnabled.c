/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0411b018
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 122
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  InteractionGroupUnregisteredEventArgs_tE8296380EA59257C7AB4EE943E3880A70C577CF3 *pIVar3;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  
  uVar1 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C
                    (param_1,param_2,in_stack_00000050,in_stack_00000040);
  uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)
                      PTR__stringLiteral9039C3EB88C85D23741B681E790D951E5EF90EA3_048d0b30,uVar1,
                     in_stack_00000008);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB
            (uVar1,*(undefined8 *)(unaff_x29 + -8),in_stack_00000008);
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x40) = 0;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x40),(void *)0x0);
  lVar2 = *(long *)(*(long *)(unaff_x29 + -8) + 0x28);
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
  }
  else {
    *(long *)(unaff_x29 + -0x20) = lVar2;
    pIVar3 = *(InteractionGroupUnregisteredEventArgs_tE8296380EA59257C7AB4EE943E3880A70C577CF3 **)
              (unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x20));
    Action_1_Invoke_m79C2039F377C2C2994EA92B9AA01C6907619CE13_inline
              (*(Action_1_t253935EBEC6470ADBF9515523E953BB179550B28 **)(unaff_x29 + -0x20),pIVar3,
               (MethodInfo *)0x0);
  }
  return;
}


