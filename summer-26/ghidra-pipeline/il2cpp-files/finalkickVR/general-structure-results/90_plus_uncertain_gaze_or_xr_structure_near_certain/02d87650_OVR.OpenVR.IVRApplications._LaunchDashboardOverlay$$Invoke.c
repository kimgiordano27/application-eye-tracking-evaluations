/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchDashboardOverlay$$Invoke
ENTRY_POINT: 02d87650
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVR_OpenVR_IVRApplications__LaunchDashboardOverlay__Invoke(void)

{
  long lVar1;
  undefined8 uVar2;
  List_1_t90832B88D7207769654164CC28440CF594CC397D *pLVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  int iStack000000000000002c;
  
  OVRManager_GetCurrentInputSubsystem_m6343BBB6BBB22C59B70C2502CCFF5D0073B7272D::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar1 + 0x198);
  if (*(long *)(unaff_x29 + -0x18) == 0) {
    uVar2 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<string>_Remove__);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
    List_1__ctor_mC249FC827BC3BE999A938F8B5BD884F8AA0CB7FA
              (*(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(unaff_x29 + -0x20),
               *(MethodInfo **)Method_System_Collections_Generic_HashSet<string>_GetEnumerator__);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x20);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x198),*(void **)(unaff_x29 + -0x20));
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(lVar1 + 0x198);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE4E3C5739928E93E572D92105A4D3BAC7FC877AF
            (*(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(unaff_x29 + -0x28),
             *(MethodInfo **)
              Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_get_Count__);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  pLVar3 = *(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(lVar1 + 0x198);
  NullCheck(pLVar3);
  iStack000000000000002c =
       List_1_get_Count_mF8DDB0BDC273D655115D5E62307ADF657EC28DE5_inline
                 (pLVar3,*(MethodInfo **)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsCommon_SettingsPanel_<>c__DisplayClass3_0_<_ctor>b__0__
                 );
  if (iStack000000000000002c < 1) {
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    pLVar3 = *(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(lVar1 + 0x198);
    NullCheck(pLVar3);
    uVar2 = List_1_get_Item_m69C3B0FCDB85116A8F7AB368DC33EBCC27556F0E
                      (pLVar3,0,*(MethodInfo **)
                                 Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsCommon_WidgetFactory_<>c_<CreateMissingDebugShadersWarning>b__0_0__
                      );
    *(undefined8 *)(unaff_x29 + -8) = uVar2;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


