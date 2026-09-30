/*
FUNCTION_NAME: OVRSceneManager$$Awake
ENTRY_POINT: 02ceaf98
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneManager__Awake(void)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *pRVar4;
  long lVar5;
  undefined8 in_x4;
  undefined8 uVar6;
  long unaff_x29;
  ulong *in_stack_00000008;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  
  *(undefined8 *)(unaff_x29 + -0x28) = in_x4;
  if ((Challenges_GetEntries_m1D77391A21D59A79B1277E8C177E66958E75CCD1::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_41__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_42__);
    Challenges_GetEntries_m1D77391A21D59A79B1277E8C177E66958E75CCD1::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  bVar2 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  *(byte *)(unaff_x29 + -0x29) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar6,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x29 + -0x10);
    uStack0000000000000034 = *(undefined4 *)(unaff_x29 + -0x14);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x18);
    uStack000000000000002c = *(undefined4 *)(unaff_x29 + -0x1c);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar3 = CAPI_ovr_Challenges_GetEntries_mA085C920867F47BC788BE3571F6A81332C83DC20
                      (uVar6,uStack0000000000000034,uVar1,uStack000000000000002c,0);
    pRVar4 = (Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_42__);
    Request_1__ctor_m817E3B0B1C617AE840330CA1A48671FD32386F00
              (pRVar4,uVar3,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_41__);
    *(Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 **)(unaff_x29 + -8) = pRVar4;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


