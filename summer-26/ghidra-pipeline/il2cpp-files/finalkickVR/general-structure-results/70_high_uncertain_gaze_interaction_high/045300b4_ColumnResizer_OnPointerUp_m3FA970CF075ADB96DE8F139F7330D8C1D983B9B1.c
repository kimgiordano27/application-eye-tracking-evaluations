/*
FUNCTION_NAME: ColumnResizer_OnPointerUp_m3FA970CF075ADB96DE8F139F7330D8C1D983B9B1
ENTRY_POINT: 045300b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void ColumnResizer_OnPointerUp_m3FA970CF075ADB96DE8F139F7330D8C1D983B9B1
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               PointerEventBase_1_t2DFB78320E5810F8163F6CF5D3C5537CF40B2496 *param_5)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>__ctor__;
  if ((ColumnResizer_OnPointerUp_m3FA970CF075ADB96DE8F139F7330D8C1D983B9B1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_PointerEventBase_1_get_localPosition_m3941BBAAC0355C583681F3A5ECBA8FCAB5F1DACC_RuntimeMethod_var_048d8368
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    ColumnResizer_OnPointerUp_m3FA970CF075ADB96DE8F139F7330D8C1D983B9B1::s_Il2CppMethodInitialized =
         1;
  }
  if ((*(byte *)(param_4 + 0x38) & 1) != 0) {
    uVar5 = Manipulator_get_target_m2B0E5AA5012E1DCACBC74A10E582733128E7935B(param_4);
    NullCheck(param_5);
    uVar7 = PointerEventBase_1_get_pointerId_m494A184CC32780C69FAE61D8361DE5F4A53FF2C6_inline
                      (param_5,*(MethodInfo **)puVar1);
    bVar3 = PointerCaptureHelper_HasPointerCapture_m8BEDFC90CB6DD9DE7931AB704454A43559A03C36
                      (uVar5,uVar7,0);
    if ((bVar3 & 1) != 0) {
      bVar3 = PointerManipulator_CanStopManipulation_mD4ECC120E2162AE51EA28C5292C97203D3C0A48E
                        (param_4,param_5,0);
      bVar2 = (bVar3 & 1) == 0;
      goto LAB_045301e0;
    }
  }
  bVar2 = true;
LAB_045301e0:
  if (!bVar2) {
    NullCheck(param_5);
    pIVar4 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,(Il2CppObject *)param_5);
    uVar5 = IsInstClass(pIVar4,*(Il2CppClass **)
                                Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    uVar6 = *(undefined8 *)(param_4 + 0x40);
    NullCheck(param_5);
    uVar7 = PointerEventBase_1_get_localPosition_m3941BBAAC0355C583681F3A5ECBA8FCAB5F1DACC_inline
                      (param_5,*(MethodInfo **)
                                PTR_PointerEventBase_1_get_localPosition_m3941BBAAC0355C583681F3A5ECBA8FCAB5F1DACC_RuntimeMethod_var_048d8368
                      );
    uVar7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                      (uVar7,param_2,param_3);
    uVar7 = VisualElementExtensions_ChangeCoordinatesTo_m6FB5F30A653A5BA54E0C5BFBDE9602B83FFB8A20
                      (uVar7,uVar5,uVar6,0);
    ColumnResizer_EndDragResize_mD17EA39598B0DE59C3327A8795A57647A9340780(uVar7,param_4,0,0);
    *(undefined1 *)(param_4 + 0x38) = 0;
    uVar5 = Manipulator_get_target_m2B0E5AA5012E1DCACBC74A10E582733128E7935B(param_4,0);
    NullCheck(param_5);
    uVar7 = PointerEventBase_1_get_pointerId_m494A184CC32780C69FAE61D8361DE5F4A53FF2C6_inline
                      (param_5,*(MethodInfo **)puVar1);
    PointerCaptureHelper_ReleasePointer_m0FF47D46D610A94601B72E011344700B0EA7E1B9(uVar5,uVar7,0);
    NullCheck(param_5);
    EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(param_5,0);
  }
  return;
}


