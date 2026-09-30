/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 02caee14
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_9;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRPlugin__GetNodePoseStateAtTime(void)

{
  byte bVar1;
  ulong uVar2;
  Request_1_t0C74A5C7761CE8EEE75516AEB71768B9FCE654A8 *pRVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionState_BindingState_set_interactionCount__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionState_BindingState_set_interactionStartIndex__
            );
  GroupPresence_LaunchInvitePanel_m90F91E624036619DA0009F628270D43AFFAF4672::
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
    uVar2 = CAPI_ovr_GroupPresence_LaunchInvitePanel_m18209B66917623F71B369A3F3E095C700D1CFB55
                      (uVar5,0);
    pRVar3 = (Request_1_t0C74A5C7761CE8EEE75516AEB71768B9FCE654A8 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_InputSystem_InputActionState_BindingState_set_interactionStartIndex__
                       );
    Request_1__ctor_mEA3CDCDB773DE2D7102B8868236C15B4FADE8529
              (pRVar3,uVar2,
               *(MethodInfo **)
                Method_UnityEngine_InputSystem_InputActionState_BindingState_set_interactionCount__)
    ;
    *(Request_1_t0C74A5C7761CE8EEE75516AEB71768B9FCE654A8 **)(unaff_x29 + -8) = pRVar3;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


