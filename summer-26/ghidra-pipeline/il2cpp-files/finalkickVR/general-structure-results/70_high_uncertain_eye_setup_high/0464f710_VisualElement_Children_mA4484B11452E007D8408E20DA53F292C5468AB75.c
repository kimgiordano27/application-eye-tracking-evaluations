/*
FUNCTION_NAME: VisualElement_Children_mA4484B11452E007D8408E20DA53F292C5468AB75
ENTRY_POINT: 0464f710
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long VisualElement_Children_mA4484B11452E007D8408E20DA53F292C5468AB75
               (Il2CppObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar2;
  void *pvVar3;
  long lVar4;
  long local_58;
  long local_50;
  long local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  Il2CppObject *local_18;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_20 = param_2;
  local_18 = param_1;
  if ((VisualElement_Children_mA4484B11452E007D8408E20DA53F292C5468AB75::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement_Children_mA4484B11452E007D8408E20DA53F292C5468AB75::s_Il2CppMethodInitialized = 1;
  }
  local_21 = 0;
  local_30 = 0;
  pVVar2 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
           VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::Invoke
                     (99,local_18);
  local_21 = pVVar2 == (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_18;
  if ((bool)local_21) {
    local_30 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_18,
                          (MethodInfo *)0x0);
    local_38 = Hierarchy_Children_m4F2285A3354C0A1F20BE922B848C5715EB232217(&local_30,0);
  }
  else {
    pvVar3 = (void *)VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::
                     Invoke(99,local_18);
    if (pvVar3 == (void *)0x0) {
      local_50 = 0;
    }
    else {
                    /* try { // try from 0464f840 to 0474f893 has its CatchHandler @ 0464e710 */
      NullCheck(pvVar3);
      local_50 = VisualElement_Children_mA4484B11452E007D8408E20DA53F292C5468AB75(pvVar3,0);
    }
                    /* catch() { ... } // from try @ 0464f66c with catch @ 0464f85c */
    if (local_50 == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
                    /* try { // try from 0464f894 to 0474f89b has its CatchHandler @ 0464f9a0 */
      lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_58 = *(long *)(lVar4 + 0x48);
                    /* try { // try from 0464f89c to 0474f89f has its CatchHandler @ 0464f9bc */
                    /* try { // try from 0464f8a0 to 0474f9b3 has its CatchHandler @ 0464e710 */
    }
    else {
      local_58 = local_50;
    }
    local_38 = local_58;
  }
  return local_38;
}


