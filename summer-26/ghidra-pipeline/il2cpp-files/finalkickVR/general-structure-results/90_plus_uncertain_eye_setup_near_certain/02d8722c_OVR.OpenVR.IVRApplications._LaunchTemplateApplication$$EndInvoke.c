/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchTemplateApplication$$EndInvoke
ENTRY_POINT: 02d8722c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 OVR_OpenVR_IVRApplications__LaunchTemplateApplication__EndInvoke(ulong *param_1)

{
  long lVar1;
  undefined8 uVar2;
  List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 *pLVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  int iStack000000000000002c;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_<_cctor>b__4_0__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar1 + 0x188);
  if (*(long *)(unaff_x29 + -0x18) == 0) {
    uVar2 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_BetterStreamingAssets_ApkImpl_<>c__DisplayClass7_1_<GetFiles>b__1__);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
    List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF
              (*(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(unaff_x29 + -0x20),
               *(MethodInfo **)
                Method_zonasDeMuseoManager_<procesarPosibleCambioRetrasado>d__67_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x20);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x188),*(void **)(unaff_x29 + -0x20));
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(lVar1 + 0x188);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370
            (*(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(unaff_x29 + -0x28),
             *(MethodInfo **)
              Method_System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_<_cctor>b__4_0__
            );
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  pLVar3 = *(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(lVar1 + 0x188);
  NullCheck(pLVar3);
  iStack000000000000002c =
       List_1_get_Count_mE580FBE05EB71FB41AAE62A9AD4C5A7594C8D27C_inline
                 (pLVar3,*(MethodInfo **)
                          Method_Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_<_ctor>b__4_0__
                 );
  if (iStack000000000000002c < 1) {
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    pLVar3 = *(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(lVar1 + 0x188);
    NullCheck(pLVar3);
    uVar2 = List_1_get_Item_m1C04F2A2E6107833BE00F3C7EAE72DAF048AC643
                      (pLVar3,0,*(MethodInfo **)
                                 Method_BetterStreamingAssets_ApkImpl_<>c__DisplayClass7_0_<GetFiles>b__0__
                      );
    *(undefined8 *)(unaff_x29 + -8) = uVar2;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


