/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetOverlayNeighbor$$EndInvoke
ENTRY_POINT: 02d9e370
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVROverlay__SetOverlayNeighbor__EndInvoke(undefined8 *param_1)

{
  void *pvVar1;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar2;
  Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *pDVar3;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  byte bStack0000000000000077;
  undefined8 uStack0000000000000078;
  undefined8 in_stack_00000080;
  
  uStack0000000000000078 = in_stack_00000080;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  bStack0000000000000077 =
       OVRPlugin_DestroyInsightTriangleMesh_m47FE862A94B72A6A0123B456373C6E96F424CA5A
                 (uStack0000000000000078,0);
  bStack0000000000000077 = bStack0000000000000077 & 1;
  if (bStack0000000000000077 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_11__
               ,0);
  }
  else {
    pDVar3 = *(Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 **)
              (*(long *)(in_stack_00000018 + 0x108) + 0xd8);
    pvVar1 = *(void **)(in_stack_00000018 + 0xf0);
    NullCheck(pvVar1);
    pGVar2 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)pvVar1 + 0x10);
    NullCheck(pDVar3);
    Dictionary_2_Remove_m610665550A1C14B71031C93C0303AF829B354C94
              (pDVar3,pGVar2,
               *(MethodInfo **)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__0__
              );
  }
  return;
}


