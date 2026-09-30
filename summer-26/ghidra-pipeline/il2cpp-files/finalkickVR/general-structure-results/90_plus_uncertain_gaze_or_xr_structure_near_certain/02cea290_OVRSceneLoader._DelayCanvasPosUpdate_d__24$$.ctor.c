/*
FUNCTION_NAME: OVRSceneLoader.<DelayCanvasPosUpdate>d__24$$.ctor
ENTRY_POINT: 02cea290
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneLoader_<DelayCanvasPosUpdate>d__24___ctor(ulong *param_1)

{
  byte bVar1;
  ulong uVar2;
  Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *pRVar3;
  long lVar4;
  DeserializableList_1_tB82AA8F424C78DB053A4F1D077E8013795B1ECD3 *pDVar5;
  undefined8 uVar6;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  Leaderboards_GetNextLeaderboardListPage_m8BD835BBB434B4A4F354088562249EE629891081::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x20));
  bVar1 = DeserializableList_1_get_HasNextPage_m1DD46982DD41FAB63EAC0A6363135B2A89612A8E
                    (*(DeserializableList_1_tB82AA8F424C78DB053A4F1D077E8013795B1ECD3 **)
                      (unaff_x29 + -0x20),*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_38__);
  *(byte *)(unaff_x29 + -0x21) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_4__,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
    bVar1 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
    *(byte *)(unaff_x29 + -0x22) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x22) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
      uVar6 = *(undefined8 *)(lVar4 + 8);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar6,0);
      *(undefined8 *)(unaff_x29 + -8) = 0;
    }
    else {
      pDVar5 = *(DeserializableList_1_tB82AA8F424C78DB053A4F1D077E8013795B1ECD3 **)
                (unaff_x29 + -0x10);
      NullCheck(pDVar5);
      uVar6 = DeserializableList_1_get_NextUrl_mE73BC77B5F08324BBCD4C2EDF9E8EE3894FA4963_inline
                        (pDVar5,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_39__);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
                );
      uVar2 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                        (uVar6,0x35f6769b,0);
      pRVar3 = (Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_35__);
      Request_1__ctor_mA1EBBE61C4DDF7B3B543A5B0388E0C91800B6EFA
                (pRVar3,uVar2,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_34__);
      *(Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 **)(unaff_x29 + -8) = pRVar3;
    }
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


