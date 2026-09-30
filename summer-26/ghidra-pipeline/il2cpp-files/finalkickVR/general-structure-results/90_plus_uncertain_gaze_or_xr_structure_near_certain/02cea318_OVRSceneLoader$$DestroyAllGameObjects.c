/*
FUNCTION_NAME: OVRSceneLoader$$DestroyAllGameObjects
ENTRY_POINT: 02cea318
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneLoader__DestroyAllGameObjects(byte param_1)

{
  ulong uVar1;
  Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *pRVar2;
  long lVar3;
  DeserializableList_1_tB82AA8F424C78DB053A4F1D077E8013795B1ECD3 *pDVar4;
  undefined8 uVar5;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  *(byte *)(unaff_x29 + -0x22) = param_1 & 1;
  if ((*(byte *)(unaff_x29 + -0x22) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
    uVar5 = *(undefined8 *)(lVar3 + 8);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    pDVar4 = *(DeserializableList_1_tB82AA8F424C78DB053A4F1D077E8013795B1ECD3 **)(unaff_x29 + -0x10)
    ;
    NullCheck(pDVar4);
    uVar5 = DeserializableList_1_get_NextUrl_mE73BC77B5F08324BBCD4C2EDF9E8EE3894FA4963_inline
                      (pDVar4,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_39__);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar1 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                      (uVar5,0x35f6769b,0);
    pRVar2 = (Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_35__);
    Request_1__ctor_mA1EBBE61C4DDF7B3B543A5B0388E0C91800B6EFA
              (pRVar2,uVar1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_34__);
    *(Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 **)(unaff_x29 + -8) = pRVar2;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


