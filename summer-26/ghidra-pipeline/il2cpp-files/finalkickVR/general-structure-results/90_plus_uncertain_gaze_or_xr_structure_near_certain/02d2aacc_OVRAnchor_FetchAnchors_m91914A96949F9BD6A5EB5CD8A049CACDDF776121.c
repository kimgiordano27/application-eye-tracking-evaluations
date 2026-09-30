/*
FUNCTION_NAME: OVRAnchor_FetchAnchors_m91914A96949F9BD6A5EB5CD8A049CACDDF776121
ENTRY_POINT: 02d2aacc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
OVRAnchor_FetchAnchors_m91914A96949F9BD6A5EB5CD8A049CACDDF776121
          (Il2CppObject *param_1,void *param_2,undefined8 param_3)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [71];
  byte local_b9;
  undefined1 auStack_b8 [64];
  Il2CppObject *local_78;
  Exception_t *local_70;
  Il2CppObject *local_68;
  undefined1 local_60 [16];
  ulong local_48;
  undefined8 local_40;
  Il2CppObject *local_38;
  undefined1 local_30 [16];
  
  local_40 = param_3;
  local_38 = param_1;
  if ((OVRAnchor_FetchAnchors_m91914A96949F9BD6A5EB5CD8A049CACDDF776121::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt64_Run__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt16_Run__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
              );
    OVRAnchor_FetchAnchors_m91914A96949F9BD6A5EB5CD8A049CACDDF776121::s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = local_38;
  if (local_38 != (Il2CppObject *)0x0) {
    local_78 = local_38;
    NullCheck(local_38);
    InterfaceActionInvoker0::Invoke
              (3,*(Il2CppClass **)
                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt64_Run__,
               local_78);
    memcpy(auStack_b8,param_2,0x40);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    memcpy(auStack_100,auStack_b8,0x40);
    local_b9 = OVRPlugin_QuerySpaces_m3DF782A5086FFA9842F03A455BB969848CBF2560
                         (auStack_100,&local_48,0);
    local_b9 = local_b9 & 1;
    if (local_b9 == 0) {
      uVar5 = OVRTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA8BCDD3EF6E2CAB6F5DDEB087F558B23A216FF81
                        (false,*(MethodInfo **)
                                Method_Virtence_VText_Demo_SunController_<ChangeColor>d__9_System_Collections_IEnumerator_Reset__
                        );
                    /* WARNING: Ignoring partial resolution of indirect */
      local_30._0_8_ = uVar5;
    }
    else {
      local_60 = OVRTask_FromRequest_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE08CE38277CFE673A66D22E4B21F3CCCB0BAE660
                           (local_48,*(MethodInfo **)
                                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                           );
      pIVar1 = local_38;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__);
      OVRTask_1_SetInternalData_TisIList_1_tB130684BE5FB6167021D7ACBD7160B58B1644696_mC695C62E1F454126D469C9241687C166B03EDFA0
                ((OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 *)local_60,pIVar1,
                 *(MethodInfo **)
                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt16_Run__);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_30._0_8_ = local_60._0_8_;
    }
    return local_30;
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
  local_70 = pEVar3;
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_System_Nullable<long>_GetValueOrDefault__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar3,uVar5,0);
  pEVar3 = local_70;
  pMVar4 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Threading_Tasks_SynchronizationContextAwaitTaskContinuation_<>c_<_cctor>b__7_0__
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar4);
}


