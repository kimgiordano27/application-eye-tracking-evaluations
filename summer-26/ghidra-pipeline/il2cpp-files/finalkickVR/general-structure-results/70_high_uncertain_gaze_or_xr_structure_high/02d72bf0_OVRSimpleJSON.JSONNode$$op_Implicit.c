/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$op_Implicit
ENTRY_POINT: 02d72bf0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


uint OVRSimpleJSON_JSONNode__op_Implicit(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  float *pfVar4;
  undefined1 in_w8;
  long unaff_x29;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000140;
  uint *in_stack_00000148;
  uint *in_stack_00000150;
  float in_stack_00000158;
  float fStack000000000000015c;
  float fStack0000000000000160;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001d0;
  uint *in_stack_000001d8;
  uint *in_stack_000001e0;
  float in_stack_000001e8;
  float fStack00000000000001ec;
  float in_stack_00000220;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_00000340;
  float in_stack_000003bc;
  float in_stack_0000043c;
  float in_stack_000004d8;
  float in_stack_00000568;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000688;
  float in_stack_00000708;
  float in_stack_00000788;
  
  OVRControllerBase_Update_m83F4E43964468AD8FA7FCD721B62297D8A8E18B9::s_Il2CppMethodInitialized =
       in_w8;
  memset((void *)(unaff_x29 + -0x7c),0,0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(lVar3 + 0x100);
  if ((*(int *)(unaff_x29 + -0x80) == 2) &&
     (*(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x10),
     (*(uint *)(unaff_x29 + -0x84) & 3) != 0)) {
    *(undefined4 *)(unaff_x29 + -0x88) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x10);
    OVRControllerBase_GetOpenVRControllerState_m4AE0D6657A255BE442FE628930617368339FC2BD
              (*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0x88),0);
    memcpy((void *)(unaff_x29 + -0xf4),&stack0x000008c0,0x6c);
    memcpy((void *)(unaff_x29 + -0x7c),(void *)(unaff_x29 + -0xf4),0x6c);
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetControllerState6_m4E410447FEE4F26CB21EC59EF0D9966482F1387C(uVar1,0);
    memcpy(&stack0x00000850,&stack0x000007e4,0x6c);
    memcpy((void *)(unaff_x29 + -0x7c),&stack0x00000850,0x6c);
  }
  memcpy(&stack0x00000778,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (*pfVar4 <= in_stack_00000788) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x10000000;
  }
  memcpy(&stack0x000006f0,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (*pfVar4 <= in_stack_00000708) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x20000000;
  }
  memcpy(&stack0x00000668,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (*pfVar4 <= (float)((ulong)in_stack_00000688 >> 0x20)) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x10;
  }
  memcpy(&stack0x000005d8,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if ((float)((ulong)in_stack_000005f8 >> 0x20) <= -*pfVar4) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x20;
  }
  memcpy(&stack0x00000548,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (in_stack_00000568 <= -*pfVar4) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x40;
  }
  memcpy(&stack0x000004b8,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (*pfVar4 <= in_stack_000004d8) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x80;
  }
  memcpy(&stack0x00000428,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (*pfVar4 <= in_stack_0000043c) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x4000000;
  }
  memcpy(&stack0x000003a0,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (*pfVar4 <= in_stack_000003bc) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x8000000;
  }
  memcpy(&stack0x00000318,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if (*pfVar4 <= (float)((ulong)in_stack_00000340 >> 0x20)) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x1000;
  }
  memcpy(&stack0x00000288,(void *)(unaff_x29 + -0x7c),0x6c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  if ((float)((ulong)in_stack_000002b0 >> 0x20) <= -*pfVar4) {
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x78) | 0x2000;
  }
  memcpy(&stack0x000001f8,(void *)(unaff_x29 + -0x7c),0x6c);
  fStack00000000000001ec = in_stack_00000220;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  in_stack_000001e8 = *pfVar4;
  if (fStack00000000000001ec <= -in_stack_000001e8) {
    in_stack_000001d8 = (uint *)(unaff_x29 + -0x78);
    in_stack_000001d0._4_4_ = *in_stack_000001d8;
    *in_stack_000001d8 = in_stack_000001d0._4_4_ | 0x4000;
    in_stack_000001e0 = in_stack_000001d8;
  }
  memcpy(&stack0x00000168,(void *)(unaff_x29 + -0x7c),0x6c);
  _fStack0000000000000160 = in_stack_00000190;
  uVar2 = _fStack0000000000000160;
  fStack0000000000000160 = (float)in_stack_00000190;
  fStack000000000000015c = fStack0000000000000160;
  _fStack0000000000000160 = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  pfVar4 = (float *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  in_stack_00000158 = *pfVar4;
  if (in_stack_00000158 <= fStack000000000000015c) {
    in_stack_00000148 = (uint *)(unaff_x29 + -0x78);
    in_stack_00000140._4_4_ = *in_stack_00000148;
    *in_stack_00000148 = in_stack_00000140._4_4_ | 0x8000;
    in_stack_00000150 = in_stack_00000148;
  }
  memcpy(&stack0x000000d8,(void *)(*(long *)(unaff_x29 + -8) + 0xac),0x6c);
  memcpy((void *)(*(long *)(unaff_x29 + -8) + 0x40),&stack0x000000d8,0x6c);
  memcpy(&stack0x0000006c,(void *)(unaff_x29 + -0x7c),0x6c);
  memcpy((void *)(*(long *)(unaff_x29 + -8) + 0xac),&stack0x0000006c,0x6c);
  return *(uint *)(*(long *)(unaff_x29 + -8) + 0xac) & *(uint *)(*(long *)(unaff_x29 + -8) + 0x10);
}


