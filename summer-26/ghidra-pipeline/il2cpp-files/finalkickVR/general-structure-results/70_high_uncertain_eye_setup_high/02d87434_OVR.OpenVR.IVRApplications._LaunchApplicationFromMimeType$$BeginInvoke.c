/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchApplicationFromMimeType$$BeginInvoke
ENTRY_POINT: 02d87434
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType__BeginInvoke(void)

{
  long lVar1;
  undefined8 uVar2;
  List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 *pLVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  int iStack000000000000002c;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_Meta_WitAi_CoroutineUtility_CoroutinePerformer_<CoroutineIterateEnumerator>d__9_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  OVRManager_GetCurrentDisplaySubsystemDescriptor_m774D6D4F85D85E72BCF228C576EAAF55E3CD978E::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar1 + 400);
  if (*(long *)(unaff_x29 + -0x18) == 0) {
    uVar2 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass5_0_<CompatibleInvocationContext>b__0__
                      );
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
    List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773
              (*(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(unaff_x29 + -0x20),
               *(MethodInfo **)
                Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_TransformChangeListener_<>c_<_ctor>b__4_0__
              );
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x20);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    Il2CppCodeGenWriteBarrier((void **)(lVar1 + 400),*(void **)(unaff_x29 + -0x20));
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(lVar1 + 400);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  SubsystemManager_GetSubsystemDescriptors_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_mE88F154272DC98DD50249B29599ABD64EA6DDC55
            (*(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(unaff_x29 + -0x28),
             *(MethodInfo **)
              Method_Meta_WitAi_CoroutineUtility_CoroutinePerformer_<CoroutineIterateEnumerator>d__9_System_Collections_IEnumerator_Reset__
            );
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  pLVar3 = *(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(lVar1 + 400);
  NullCheck(pLVar3);
  iStack000000000000002c =
       List_1_get_Count_mDFAC96AD60DE7FED9378059AEE6864673962A7B8_inline
                 (pLVar3,*(MethodInfo **)
                          Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_ConvertNull__
                 );
  if (iStack000000000000002c < 1) {
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    pLVar3 = *(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(lVar1 + 400);
    NullCheck(pLVar3);
    uVar2 = List_1_get_Item_mBE983C6BF89F37B1D3390A1F3CF1B689D080701E
                      (pLVar3,0,*(MethodInfo **)
                                 Method_Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass4_0_<ResolveInvocationContexts>b__0__
                      );
    *(undefined8 *)(unaff_x29 + -8) = uVar2;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


