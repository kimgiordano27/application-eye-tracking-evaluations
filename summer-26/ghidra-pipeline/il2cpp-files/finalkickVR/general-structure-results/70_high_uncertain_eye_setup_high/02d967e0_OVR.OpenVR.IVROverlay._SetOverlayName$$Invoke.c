/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetOverlayName$$Invoke
ENTRY_POINT: 02d967e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVROverlay__SetOverlayName__Invoke(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(in_stack_00000008);
  *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
              (*(undefined8 *)(unaff_x29 + -8),0,0);
    return;
  }
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1f8) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(lVar3 + 0x100);
  if (*(int *)(unaff_x29 + -0x20) == 2) {
    uVar4 = OpenVR_get_Overlay_m5EC60FDA4DA7BEC8A260FF9BA611F437E0953672(0,0);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x28);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
    if (*(long *)(unaff_x29 + -0x30) == 0) {
      Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
                (*(undefined8 *)(unaff_x29 + -8),0,0);
      return;
    }
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
              );
    uVar4 = OVROverlay_get_OpenVROverlayKey_mA6EFD0D14077D0B125F7EAC089FB07DA6B461C27();
    *(undefined8 *)(unaff_x29 + -0x40) = uVar4;
    pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                               (*(undefined8 *)(unaff_x29 + -8),0);
    NullCheck(pvVar5);
    uVar4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(pvVar5,0);
    uVar4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)(unaff_x29 + -0x40),uVar4,0);
    pvVar5 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                               (*(undefined8 *)(unaff_x29 + -8),0);
    NullCheck(pvVar5);
    uVar6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(pvVar5,0);
    lVar3 = *(long *)(unaff_x29 + -8);
    NullCheck(*(void **)(unaff_x29 + -0x38));
    iVar2 = CVROverlay_CreateOverlay_m971CF579F222B3D7CB64C28AB6CF543883BD49C9
                      (*(undefined8 *)(unaff_x29 + -0x38),uVar4,uVar6,lVar3 + 0x1d8,0);
    if (iVar2 != 0) {
      Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
                (*(undefined8 *)(unaff_x29 + -8),0,0);
      return;
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1f8) = *(undefined4 *)(lVar3 + 0x100);
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x1fc) = 1;
  return;
}


