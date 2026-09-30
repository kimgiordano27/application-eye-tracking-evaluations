/*
FUNCTION_NAME: OVRVignette$$GetTriangleCount
ENTRY_POINT: 02d6861c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRVignette__GetTriangleCount(void)

{
  undefined4 uVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  byte in_w8;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000024;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  int iStack000000000000007c;
  undefined4 uStack0000000000000084;
  byte bStack000000000000008f;
  
  if ((in_w8 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
    pvVar3 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar3);
    bVar2 = OVRManager_get_IsSimultaneousHandsAndControllersSupported_m62BA8A989B3EF086155F8E401601D7764020E5A5
                      (pvVar3,0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
      *(bool *)(unaff_x29 + -9) = *(int *)(lVar4 + 0x100) == 1;
    }
  }
  bStack000000000000008f = *(byte *)(unaff_x29 + -9) & 1;
  if (bStack000000000000008f == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
    if (*(int *)(lVar4 + 0x100) == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
      uStack000000000000000c = *(undefined4 *)(lVar4 + 0x14);
      uStack000000000000006c = uStack000000000000000c;
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
      *(undefined4 *)(lVar4 + 0x10) = uStack000000000000000c;
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(lVar4 + 0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uStack0000000000000014 =
         OVRPlugin_GetConnectedControllers_m32CC5DB7DC0C5AD45529BD1A6A9CE6BA80E0E3B5();
    uStack0000000000000084 = uStack0000000000000014;
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined4 *)(lVar4 + 0x14) = uStack0000000000000014;
    uStack0000000000000024 =
         OVRPlugin_GetActiveController_mB51206F4C3221D56F5D78602D98A765A57E6A14C(0);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined4 *)(lVar4 + 0x10) = uStack0000000000000024;
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    iStack000000000000007c = *(int *)(lVar4 + 0x10);
    if ((iStack000000000000007c == 0) && ((*(uint *)(unaff_x29 + -0x20) & 0x60) != 0)) {
      uStack0000000000000074 = *(undefined4 *)(unaff_x29 + -0x20);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
      uVar1 = uStack0000000000000074;
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
      *(undefined4 *)(lVar4 + 0x10) = uVar1;
    }
  }
  return;
}


