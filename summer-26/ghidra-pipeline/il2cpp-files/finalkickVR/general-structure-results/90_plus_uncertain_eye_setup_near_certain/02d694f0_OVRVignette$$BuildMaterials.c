/*
FUNCTION_NAME: OVRVignette$$BuildMaterials
ENTRY_POINT: 02d694f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRVignette__BuildMaterials(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x29;
  double dVar4;
  undefined4 uStack000000000000000c;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  uVar1 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x14) = uVar1;
  if (*(int *)(unaff_x29 + -0x14) != 3) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    uStack000000000000000c = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    *(undefined4 *)(unaff_x29 + -0x18) = *(undefined4 *)(lVar2 + 0x1c);
    uVar1 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381();
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar1;
    uVar1 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(0);
    *(undefined4 *)(unaff_x29 + -0x20) = uVar1;
    uVar1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                      (*(float *)(unaff_x29 + -0x20),1e-06,(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0x24) = uVar1;
    dVar4 = (double)il2cpp_codegen_multiply<double,double>
                              ((double)(long)*(int *)(unaff_x29 + -0x18),
                               (double)*(float *)(unaff_x29 + -0x1c));
    *(double *)(unaff_x29 + -0x10) = dVar4 / (double)*(float *)(unaff_x29 + -0x24);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(lVar2 + 0x1c);
    uVar1 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x28),1);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    *(undefined4 *)(lVar2 + 0x1c) = uVar1;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C
              (uVar3,uStack000000000000000c,0);
  }
  return;
}


