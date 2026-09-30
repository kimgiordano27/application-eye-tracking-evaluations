/*
FUNCTION_NAME: VisualElement_InvokeGenerateVisualContent_m7882F56F4FFEA0E26B9BE1109BF930B5EE43F2DF
ENTRY_POINT: 04647a78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void VisualElement_InvokeGenerateVisualContent_m7882F56F4FFEA0E26B9BE1109BF930B5EE43F2DF
               (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_1,
               MeshGenerationContext_tD1BD8DB52C7126A7987DE5DF1A4AF47A906EAF62 *param_2,
               undefined8 param_3)

{
  undefined *puVar1;
  MeshGenerationContext_tD1BD8DB52C7126A7987DE5DF1A4AF47A906EAF62 *pMVar2;
  long lVar3;
  Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B *pAVar4;
  undefined1 auVar5 [16];
  undefined8 *local_b8;
  FinallyHelper<VisualElement_InvokeGenerateVisualContent_m7882F56F4FFEA0E26B9BE1109BF930B5EE43F2DF::__19,false>
  aFStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_71;
  long local_70;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  MeshGenerationContext_tD1BD8DB52C7126A7987DE5DF1A4AF47A906EAF62 *local_30;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((VisualElement_InvokeGenerateVisualContent_m7882F56F4FFEA0E26B9BE1109BF930B5EE43F2DF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement_InvokeGenerateVisualContent_m7882F56F4FFEA0E26B9BE1109BF930B5EE43F2DF::
    s_Il2CppMethodInitialized = 1;
  }
  local_39 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_68);
  local_70 = VisualElement_get_generateVisualContent_m11390D5634144E49934046B08681F7B7F0A94986_inline
                       (local_28,(MethodInfo *)0x0);
  local_71 = local_70 != 0;
  if ((bool)local_71) {
    local_39 = local_71;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_90 = *(undefined8 *)(lVar3 + 0x30);
    local_50 = local_90;
    auVar5 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline
                       ((ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD *)&local_50,
                        (MethodInfo *)0x0);
    local_a0 = auVar5._0_8_;
    local_b8 = &local_48;
    local_98 = local_a0;
    local_48 = local_a0;
    il2cpp::utils::
    Finally<VisualElement_InvokeGenerateVisualContent_m7882F56F4FFEA0E26B9BE1109BF930B5EE43F2DF::__19>
              ((utils *)&local_b8,auVar5._8_8_);
    pAVar4 = (Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B *)
             VisualElement_get_generateVisualContent_m11390D5634144E49934046B08681F7B7F0A94986_inline
                       (local_28,(MethodInfo *)0x0);
    pMVar2 = local_30;
    NullCheck(pAVar4);
    Action_1_Invoke_m4D0BA6C0108268AB1524B27391FAA40BDC65EF6C_inline
              (pAVar4,pMVar2,(MethodInfo *)0x0);
    il2cpp::utils::
    FinallyHelper<VisualElement_InvokeGenerateVisualContent_m7882F56F4FFEA0E26B9BE1109BF930B5EE43F2DF::$_19,false>
    ::~FinallyHelper(aFStack_b0);
  }
  return;
}


