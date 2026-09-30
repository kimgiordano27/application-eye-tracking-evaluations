/*
FUNCTION_NAME: OVRSceneManager$$UpdateSomeSceneAnchors
ENTRY_POINT: 02cf022c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneManager__UpdateSomeSceneAnchors(long param_1)

{
  byte bVar1;
  ulong uVar2;
  Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 *pRVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xe98));
  il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_59__);
  GroupPresence_GetInvitableUsers_m6A8832D669FC2C99B6326285C0BCE9ED23D373B0::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bVar1 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
    uVar5 = InviteOptions_op_Explicit_m31A394D1C8AC244DF7A3EFBF78463D2731F4F095
                      (*(undefined8 *)(unaff_x29 + -0x28));
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar2 = CAPI_ovr_GroupPresence_GetInvitableUsers_m4F48BD2BBED140651092DD2A6F017D698307D89C
                      (uVar5,0);
    pRVar3 = (Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_59__);
    Request_1__ctor_m029D713284EB47C08C4139CC986ED7BF3348F0DC
              (pRVar3,uVar2,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_58__);
    *(Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 **)(unaff_x29 + -8) = pRVar3;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


