/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLivePhysicalBoundsInfo$$EndInvoke
ENTRY_POINT: 02d8ec54
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


void OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo__EndInvoke(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x29;
  float fStack000000000000001c;
  float fStack0000000000000024;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  
  OVRManager__cctor_mF1E19AAD77D4814E8B25D6BC99781E284D145226::s_Il2CppMethodInitialized = 1;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0xe8) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0xe9) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0xea) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0xeb) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0xec) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0xed) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0xee) = 1;
  uVar3 = *in_stack_00000078;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0xf0) = uVar3;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0xf0),(void *)*in_stack_00000078);
  uVar3 = *in_stack_00000068;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0xf8) = uVar3;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0xf8),(void *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined4 *)(unaff_x29 + -0x10) = 0;
  fStack000000000000001c = 0.0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)(unaff_x29 + -0x18),40.0,0.0,0.0,
             (MethodInfo *)0x0);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x104) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined4 *)(lVar1 + 0x10c) = *(undefined4 *)(unaff_x29 + -0x10);
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x20) = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)(unaff_x29 + -0x28),40.0,
             fStack000000000000001c,fStack000000000000001c,(MethodInfo *)0x0);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)(unaff_x29 + -0x28);
  *(undefined4 *)(lVar1 + 0x118) = *(undefined4 *)(unaff_x29 + -0x20);
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  fStack0000000000000024 = -0.0525;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)(unaff_x29 + -0x38),0.0075,-0.005,
             -0.0525,(MethodInfo *)0x0);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x11c) = *(undefined8 *)(unaff_x29 + -0x38);
  *(undefined4 *)(lVar1 + 0x124) = *(undefined4 *)(unaff_x29 + -0x30);
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x40) = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)(unaff_x29 + -0x48),-0.0075,-0.005
             ,fStack0000000000000024,(MethodInfo *)0x0);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(unaff_x29 + -0x48);
  *(undefined4 *)(lVar1 + 0x130) = *(undefined4 *)(unaff_x29 + -0x40);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x144) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x145) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x146) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x147) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x148) = 0;
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  *(undefined8 *)(unaff_x29 + -0x50) = *puVar2;
  uVar3 = *(undefined8 *)(unaff_x29 + -0x50);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x150) = uVar3;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x150),*(void **)(unaff_x29 + -0x50));
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  *(undefined8 *)(unaff_x29 + -0x58) = *puVar2;
  uVar3 = *(undefined8 *)(unaff_x29 + -0x58);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x158) = uVar3;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x158),*(void **)(unaff_x29 + -0x58));
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x160) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  il2cpp_codegen_initobj((void *)(lVar1 + 0x168),0x10);
  uVar3 = *in_stack_00000070;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x178) = uVar3;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x178),(void *)*in_stack_00000070);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x180) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x1a0) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x1a1) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x1a8) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x1a8),(void *)0x0);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x1b0) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x1b1) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x1b8) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x1b8),(void *)0x0);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined1 *)(lVar1 + 0x1c0) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined8 *)(unaff_x29 + -0x60) = *puVar2;
  uVar3 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__1__
                    );
  *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
  Action_1__ctor_mC64ED16DDEE3BD4CE8A8209F78359038745E9C72
            (*(Action_1_t8E09560EA733B8CD752762F5B9B6AB6BD1C4F253 **)(unaff_x29 + -0x68),
             *(Il2CppObject **)(unaff_x29 + -0x60),
             *(long *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass10_0_<CreatePixelValidationMode>b__0__
             ,(MethodInfo *)0x0);
  uVar3 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__3__
                    );
  *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
  Observable_1__ctor_m3C21A1038CB432EB63113112053B1E8C771C8182
            (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(unaff_x29 + -0x70),0,
             *(Action_1_t8E09560EA733B8CD752762F5B9B6AB6BD1C4F253 **)(unaff_x29 + -0x68),
             *(MethodInfo **)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
            );
  uVar3 = *(undefined8 *)(unaff_x29 + -0x70);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar1 + 0x1d0) = uVar3;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x1d0),*(void **)(unaff_x29 + -0x70));
  return;
}


