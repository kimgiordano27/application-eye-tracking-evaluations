/*
FUNCTION_NAME: OVRSharable_SetEnabledAsync_m72427C45659017AD93BE3A9A049171044BD24AB8
ENTRY_POINT: 02d2fe90
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16]
OVRSharable_SetEnabledAsync_m72427C45659017AD93BE3A9A049171044BD24AB8
          (undefined8 param_1,OVRSharable_t2D2CE2E56126A35AB31B449381CBF3328C51A216 *param_2,
          byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_29;
  OVRSharable_t2D2CE2E56126A35AB31B449381CBF3328C51A216 *local_28;
  
  local_29 = param_3 & 1;
  local_40 = param_4;
  local_38 = param_1;
  local_28 = param_2;
  if ((OVRSharable_SetEnabledAsync_m72427C45659017AD93BE3A9A049171044BD24AB8::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
              );
    OVRSharable_SetEnabledAsync_m72427C45659017AD93BE3A9A049171044BD24AB8::s_Il2CppMethodInitialized
         = 1;
  }
  local_48 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__);
  uVar4 = OVRSharable_get_Handle_m06783C47C8D24CC40041D4FA712F198FDFDE568D_inline
                    (local_28,(MethodInfo *)0x0);
  uVar3 = OVRSharable_get_Type_m0597E6A6D4EB5B82BFD3AEF0FFED1D48497E37BB(local_28,0);
  uVar1 = local_38;
  bVar2 = local_29 & 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar2 = OVRPlugin_SetSpaceComponentStatus_mE711659BA25197948D2C6B71962FA6CE54FD08CF
                    (uVar1,uVar4,uVar3,bVar2,&local_48,0);
  if ((bVar2 & 1) == 0) {
    auVar5 = OVRTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA8BCDD3EF6E2CAB6F5DDEB087F558B23A216FF81
                       (false,*(MethodInfo **)
                               Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
                       );
  }
  else {
    auVar5 = OVRTask_FromRequest_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE08CE38277CFE673A66D22E4B21F3CCCB0BAE660
                       (local_48,*(MethodInfo **)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                       );
  }
  return auVar5;
}


