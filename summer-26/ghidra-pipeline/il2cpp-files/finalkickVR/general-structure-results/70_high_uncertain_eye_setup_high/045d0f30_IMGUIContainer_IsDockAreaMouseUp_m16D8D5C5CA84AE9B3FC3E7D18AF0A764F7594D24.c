/*
FUNCTION_NAME: IMGUIContainer_IsDockAreaMouseUp_m16D8D5C5CA84AE9B3FC3E7D18AF0A764F7594D24
ENTRY_POINT: 045d0f30
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool IMGUIContainer_IsDockAreaMouseUp_m16D8D5C5CA84AE9B3FC3E7D18AF0A764F7594D24
               (Il2CppObject *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar5;
  long local_50;
  
  if ((IMGUIContainer_IsDockAreaMouseUp_m16D8D5C5CA84AE9B3FC3E7D18AF0A764F7594D24::
       s_Il2CppMethodInitialized & 1) == 0) {
                    /* try { // try from 045d0f5c to 046d100f has its CatchHandler @ 045d03d4 */
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_m40F47073954464E3544AE1C74E0B900F54A43A15_RuntimeMethod_var_048d86a8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_t9ED9D70674CFE9504A67746757FB582440278391_il2cpp_TypeInfo_var_048d86c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    IMGUIContainer_IsDockAreaMouseUp_m16D8D5C5CA84AE9B3FC3E7D18AF0A764F7594D24::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  lVar2 = VirtualFuncInvoker0<long>::Invoke(5,param_1);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_EventBase_1_t9ED9D70674CFE9504A67746757FB582440278391_il2cpp_TypeInfo_var_048d86c0
            );
  lVar3 = EventBase_1_TypeId_m40F47073954464E3544AE1C74E0B900F54A43A15
                    (*(MethodInfo **)
                      PTR_EventBase_1_TypeId_m40F47073954464E3544AE1C74E0B900F54A43A15_RuntimeMethod_var_048d86a8
                    );
  if (lVar2 == lVar3) {
    NullCheck(param_1);
    lVar2 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_1);
    NullCheck(param_1);
    pIVar4 = (Il2CppObject *)
             EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_1,0);
    pVVar5 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
             IsInstClass(pIVar4,*(Il2CppClass **)
                                 Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    if (pVVar5 == (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0) {
      local_50 = 0;
    }
    else {
      NullCheck(pVVar5);
      pIVar4 = (Il2CppObject *)
               VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline
                         (pVVar5,(MethodInfo *)0x0);
      NullCheck(pIVar4);
      local_50 = VirtualFuncInvoker0<IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26*>::
                 Invoke(0x16,pIVar4);
    }
    bVar1 = lVar2 == local_50;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


