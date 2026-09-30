/*
FUNCTION_NAME: DragEventsProcessor_OnPointerDownEvent_m31C5CCA6113B74A71639CF6F86CE9E1E81F675B3
ENTRY_POINT: 0458aac8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void DragEventsProcessor_OnPointerDownEvent_m31C5CCA6113B74A71639CF6F86CE9E1E81F675B3
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               PointerEventBase_1_t7591EB7533D2DA4AE63C7E535343F090911843C9 *param_5)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  void *pvVar5;
  undefined4 uVar6;
  
  puVar1 = 
  PTR_PointerEventBase_1_get_position_m62A6C6E4573AD8DEA94462498F258D10792B8E86_RuntimeMethod_var_048d94d0
  ;
  if ((DragEventsProcessor_OnPointerDownEvent_m31C5CCA6113B74A71639CF6F86CE9E1E81F675B3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>__ctor__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    DragEventsProcessor_OnPointerDownEvent_m31C5CCA6113B74A71639CF6F86CE9E1E81F675B3::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_5);
  iVar3 = PointerEventBase_1_get_button_m8755F333A13AC01D9DA0259489107C45A8527BC4_inline
                    (param_5,*(MethodInfo **)
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>__ctor__
                    );
  if (iVar3 == 0) {
    NullCheck(param_5);
    pIVar4 = (Il2CppObject *)
             EventBase_get_leafTarget_m04359C6A144D1D92913C96EA6410ED01955D438E_inline
                       ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_5,
                        (MethodInfo *)0x0);
    pvVar5 = (void *)IsInstClass(pIVar4,*(Il2CppClass **)
                                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                );
    if (pvVar5 == (void *)0x0) {
      bVar2 = 0;
    }
    else {
      NullCheck(pvVar5);
      bVar2 = *(byte *)((long)pvVar5 + 0x10) & 1;
    }
  }
  else {
    bVar2 = 1;
  }
  if (bVar2 == 0) {
    NullCheck(param_5);
    uVar6 = PointerEventBase_1_get_position_m62A6C6E4573AD8DEA94462498F258D10792B8E86_inline
                      (param_5,*(MethodInfo **)puVar1);
    bVar2 = VirtualFuncInvoker1<bool,Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>::Invoke
                      (uVar6,6,param_4);
    if ((bVar2 & 1) != 0) {
      *(undefined4 *)(param_4 + 0x14) = 1;
      NullCheck(param_5);
      uVar6 = PointerEventBase_1_get_position_m62A6C6E4573AD8DEA94462498F258D10792B8E86_inline
                        (param_5,*(MethodInfo **)puVar1);
      *(ulong *)(param_4 + 0x18) = CONCAT44(param_2,uVar6);
      *(undefined4 *)(param_4 + 0x20) = param_3;
    }
  }
  else {
    *(undefined4 *)(param_4 + 0x14) = 0;
  }
  return;
}


