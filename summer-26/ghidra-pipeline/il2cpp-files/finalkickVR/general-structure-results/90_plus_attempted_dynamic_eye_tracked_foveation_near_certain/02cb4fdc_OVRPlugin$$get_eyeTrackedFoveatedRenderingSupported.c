/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 02cb4fdc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 181
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_9;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_9
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Dictionary_2_t10B97F51B700966A5FF3B7F1BDAE4E9C65535D8A *pDVar4;
  Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B *pRVar5;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  Callback_AddRequest_m75C53DEDEF38D1DEB5ECA1420074B58D7D675B79::s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -8);
  NullCheck(*(void **)(unaff_x29 + -0x18));
  uVar1 = Request_get_RequestID_mF42A2339D42B23C7680017C87D31B1A043841359_inline
                    (*(Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B **)(unaff_x29 + -0x18),
                     (MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  if (*(long *)(unaff_x29 + -0x20) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)Method_Oculus_Interaction_InteractorGroup_<>c_<Awake>b__60_0__,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
    pDVar4 = (Dictionary_2_t10B97F51B700966A5FF3B7F1BDAE4E9C65535D8A *)*puVar2;
    pRVar5 = *(Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B **)(unaff_x29 + -8);
    NullCheck(pRVar5);
    uVar3 = Request_get_RequestID_mF42A2339D42B23C7680017C87D31B1A043841359_inline
                      (pRVar5,(MethodInfo *)0x0);
    pRVar5 = *(Request_t0773858FF1AC67C0D8B43058CC7119DDD1202D3B **)(unaff_x29 + -8);
    NullCheck(pDVar4);
    Dictionary_2_set_Item_mD09E60A3C41EE56CC799AD1DC3E15C5364A93B03
              (pDVar4,uVar3,pRVar5,
               *(MethodInfo **)Method_Oculus_Interaction_InteractorGroup_<>c_<_ctor>b__84_3__);
  }
  return;
}


