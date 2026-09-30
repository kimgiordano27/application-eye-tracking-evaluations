/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperone._GetPlayAreaRect$$Invoke
ENTRY_POINT: 02d8b1b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRChaperone__GetPlayAreaRect__Invoke(Il2CppClass *param_1)

{
  byte bVar1;
  long lVar2;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *pOVar3;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  il2cpp_codegen_runtime_class_init_inline(param_1);
  bVar1 = OVRPlugin_ShutdownInsightPassthrough_m8BD5F14E5C47D98E1E78889BEDC2D32DE96C9F96(0);
  *(byte *)(unaff_x29 + -0x16) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x16) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    bVar1 = OVRPlugin_IsInsightPassthroughInitialized_m1637AFD376CCC2D63B5C34475FD012FD7DF3EB36(0);
    *(byte *)(unaff_x29 + -0x21) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
      lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
      pOVar3 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar2 + 0x1d0);
      NullCheck(pOVar3);
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (pOVar3,0,(MethodInfo *)*in_stack_00000010);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__3__
                 ,0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(lVar2 + 0x1d0);
    NullCheck(*(void **)(unaff_x29 + -0x20));
    Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
              (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(unaff_x29 + -0x20),0,
               (MethodInfo *)*in_stack_00000010);
  }
  return;
}


