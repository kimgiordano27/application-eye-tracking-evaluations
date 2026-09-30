/*
FUNCTION_NAME: UnboundAnchor_LocalizeAsync_m158FD5ED451B7FCB7C87DF2ADF35E14AD6F2540A
ENTRY_POINT: 02e0a05c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16]
UnboundAnchor_LocalizeAsync_m158FD5ED451B7FCB7C87DF2ADF35E14AD6F2540A
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((UnboundAnchor_LocalizeAsync_m158FD5ED451B7FCB7C87DF2ADF35E14AD6F2540A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
              );
    UnboundAnchor_LocalizeAsync_m158FD5ED451B7FCB7C87DF2ADF35E14AD6F2540A::s_Il2CppMethodInitialized
         = 1;
  }
  local_40 = 0;
  UnboundAnchor_ValidateLocalization_mE3EA7D5F5EAD207D4BED6A121F003141DC59645F(local_28);
  uVar3 = OVRSpace_op_Implicit_m1F9D1045BC491FB6F551F3F2317DC526B2574AE0(*local_28,0);
  uVar1 = local_30;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
                    /* try { // try from 02e0a128 to 02f0ae0b has its CatchHandler @ 02e0a128
                       catch() { ... } // from try @ 02e0a128 with catch @ 02e0a128
                       catch() { ... } // from try @ 02e0aeb8 with catch @ 02e0a128
                       catch() { ... } // from try @ 02e0af10 with catch @ 02e0a128
                       catch() { ... } // from try @ 02e0b068 with catch @ 02e0a128 */
  bVar2 = OVRPlugin_SetSpaceComponentStatus_mE711659BA25197948D2C6B71962FA6CE54FD08CF
                    (uVar1,uVar3,0,1,&local_40,0);
  if ((bVar2 & 1) == 0) {
    auVar4 = OVRTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA8BCDD3EF6E2CAB6F5DDEB087F558B23A216FF81
                       (false,*(MethodInfo **)
                               Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
                       );
  }
  else {
    UnboundAnchor_AddStorableAndShareableComponents_m00A884A91EA05A8559FBD99594D9A443A1EAD0AE
              (local_28,0);
    auVar4 = OVRTask_FromRequest_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE08CE38277CFE673A66D22E4B21F3CCCB0BAE660
                       (local_40,*(MethodInfo **)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                       );
  }
  return auVar4;
}


