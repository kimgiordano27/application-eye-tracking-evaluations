/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperone._GetCalibrationState$$BeginInvoke
ENTRY_POINT: 02d8ace4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_15;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_11
*/


void OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke(Il2CppClass *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000040;
  MethodInfo *in_stack_00000048;
  long in_stack_00000380;
  undefined8 *in_stack_000003a0;
  undefined8 *in_stack_000003a8;
  
  lVar3 = il2cpp_codegen_static_fields_for(param_1);
  *(byte *)(lVar3 + 0x160) = in_stack_00000040._4_1_ & 1;
  pvVar4 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                             (in_stack_00000048);
  NullCheck(pvVar4);
  OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6(pvVar4,in_stack_00000048);
  if (*(int *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x114) !=
      *(int *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x118)) {
    *(undefined4 *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x114) =
         *(undefined4 *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x118);
    *(undefined4 *)(in_stack_00000380 + 0x304) =
         *(undefined4 *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x114);
    iVar1 = *(int *)(in_stack_00000380 + 0x304);
    if (iVar1 == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(0);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (iVar1 == 1) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (iVar1 == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (1,0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076();
  OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar2 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),uVar5,uVar2,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x101) & 1,0);
  return;
}


