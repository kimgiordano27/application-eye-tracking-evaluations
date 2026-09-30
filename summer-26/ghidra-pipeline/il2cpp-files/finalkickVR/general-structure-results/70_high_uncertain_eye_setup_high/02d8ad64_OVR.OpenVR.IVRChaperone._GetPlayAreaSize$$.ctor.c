/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperone._GetPlayAreaSize$$.ctor
ENTRY_POINT: 02d8ad64
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_12;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


void OVR_OpenVR_IVRChaperone__GetPlayAreaSize___ctor(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iStack0000000000000040;
  long in_stack_00000380;
  undefined8 *in_stack_000003a0;
  undefined8 *in_stack_000003a8;
  
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(*(long *)(param_1 + 0x3a0) + 0x114);
  iStack0000000000000040 = *(int *)(param_1 + 0x304);
  if (iStack0000000000000040 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
    OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(0);
    OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E(0,0);
  }
  else if (iStack0000000000000040 == 1) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
    OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
    OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E(0,0);
  }
  else if (iStack0000000000000040 == 2) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
    OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
    OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E(1,0);
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076();
  OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar1 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),uVar2,uVar1,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x101) & 1,0);
  return;
}


