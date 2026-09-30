/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$RecordInternalEvent
ENTRY_POINT: 03e66b84
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;frame_behavior;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_4;strong_foveation_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_known_unity_or_il2cpp_false_positive_family;functionality_foveated_rendering
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__RecordInternalEvent(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF *pXVar6;
  long unaff_x29;
  MethodInfo *in_stack_00000020;
  byte bStack000000000000007f;
  
  NullCheck(param_1);
  bVar1 = XRPassUniversal_get_isLateLatchEnabled_mCFAAB2099E57226FDD74EC51E16DE26E3B7777A3_inline
                    (*(XRPassUniversal_t8D4B40107F5DBC12D39470D87D108D3D2A8FB8D1 **)
                      (unaff_x29 + -0x50),in_stack_00000020);
  *(byte *)(unaff_x29 + -0x51) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x51) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x20);
    uVar4 = CameraData_get_xrUniversal_m2D8CD187845B0A130FE01C8045F4A709ABA87364
                      (*(undefined8 *)(unaff_x29 + -0x60));
    *(undefined8 *)(unaff_x29 + -0x68) = uVar4;
    NullCheck(*(void **)(unaff_x29 + -0x68));
    XRPassUniversal_set_canMarkLateLatch_m55FD53B9F8BE99FF85F7CA356D608F042A55906F_inline
              (*(XRPassUniversal_t8D4B40107F5DBC12D39470D87D108D3D2A8FB8D1 **)(unaff_x29 + -0x68),
               true,(MethodInfo *)0x0);
  }
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x20);
  uVar4 = CameraData_get_xr_m5E9EFE56E6BABFF14ADC71E87D5A19BA7CDDF697_inline
                    (*(CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E **)(unaff_x29 + -0x70),
                     (MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x78) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x18);
  NullCheck(*(void **)(unaff_x29 + -0x78));
  XRPass_StartSinglePass_mEAB8D0365AE942CBE93BFB0DAC39E8D04ACE9F9E
            (*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x80),0);
  pvVar5 = (void *)CameraData_get_xr_m5E9EFE56E6BABFF14ADC71E87D5A19BA7CDDF697_inline
                             (*(CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E **)
                               (unaff_x29 + -0x20),(MethodInfo *)0x0);
  NullCheck(pvVar5);
  bStack000000000000007f =
       XRPass_get_supportsFoveatedRendering_mC6E13A1C877BBEE86D48AEEA9A552074C2452B73(pvVar5,0);
  bStack000000000000007f = bStack000000000000007f & 1;
  if (bStack000000000000007f != 0) {
    pvVar5 = *(void **)(unaff_x29 + -0x18);
    pXVar6 = (XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF *)
             CameraData_get_xr_m5E9EFE56E6BABFF14ADC71E87D5A19BA7CDDF697_inline
                       (*(CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E **)
                         (unaff_x29 + -0x20),(MethodInfo *)0x0);
    NullCheck(pXVar6);
    uVar4 = XRPass_get_foveatedRenderingInfo_m6F0E2EFEFFF40F47ABD3602D125C40E7CFBDE39B_inline
                      (pXVar6,(MethodInfo *)0x0);
    NullCheck(pvVar5);
    CommandBuffer_ConfigureFoveatedRendering_mCA5453D2455474AD65FBE7DC301D8C4D52308F47
              (pvVar5,uVar4,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)StringLiteral_17901);
    iVar3 = XRSystem_get_foveatedRenderingCaps_m2B4B6BD6E1BFD298DD8A66DB2294FA27A0F6F989_inline
                      ((MethodInfo *)0x0);
    bVar2 = il2cpp_codegen_enum_has_flag<int>(iVar3,2);
    if (bVar2) {
      pvVar5 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar5);
      CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A
                (pvVar5,*(undefined8 *)StringLiteral_17917,0);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x29 + -0x18);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)StringLiteral_18134);
  ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896
            (unaff_x29 + -8,uVar4);
  pvVar5 = *(void **)(unaff_x29 + -0x18);
  NullCheck(pvVar5);
  CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(pvVar5,0);
  return;
}


