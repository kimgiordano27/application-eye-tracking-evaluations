/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetDashboardOverlaySceneProcess$$Invoke
ENTRY_POINT: 02da0864
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess__Invoke(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  void *in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined1 *puStack0000000000000048;
  size_t in_stack_00000060;
  MethodInfo *in_stack_00000068;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  byte bStack00000000000000ef;
  undefined8 in_stack_000000f0;
  undefined4 uStack000000000000014c;
  byte bStack000000000000015f;
  undefined4 uStack000000000000017c;
  
  uStack0000000000000040 = in_stack_00000090[0x59];
  puStack0000000000000048 = &stack0x00000188;
  memcpy(puStack0000000000000048,in_stack_00000038,in_stack_00000060);
  OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B
            (uStack0000000000000040,puStack0000000000000048,in_stack_00000068);
  memcpy(&stack0x00000208,&stack0x000001c8,in_stack_00000060);
  memcpy((void *)(unaff_x29 + -0x90),&stack0x00000208,in_stack_00000060);
  in_stack_00000090[9] = *(undefined8 *)(in_stack_00000090[0x59] + 0xd0);
  NullCheck((void *)in_stack_00000090[9]);
  uStack000000000000017c =
       OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                 ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)in_stack_00000090[9],
                  in_stack_00000068);
  in_stack_00000090[7] = in_stack_00000090[0x52];
  in_stack_00000090[6] = in_stack_00000090[0x51];
  in_stack_00000090[5] = in_stack_00000090[0x57];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a0);
  bStack000000000000015f =
       OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375
                 (uStack000000000000017c,in_stack_00000090[7],in_stack_00000090[6],
                  in_stack_00000090[5],in_stack_00000068);
  bStack000000000000015f = bStack000000000000015f & 1;
  if (bStack000000000000015f == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000098);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_3_<CreateVolumeTable>b__10__
               ,0);
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    in_stack_00000090[3] = *(undefined8 *)(in_stack_00000090[0x59] + 0xd0);
    NullCheck((void *)in_stack_00000090[3]);
    uStack000000000000014c =
         OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                   ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)in_stack_00000090[3],
                    (MethodInfo *)0x0);
    in_stack_00000090[1] = in_stack_00000090[0x57];
    *in_stack_00000090 = *(undefined8 *)in_stack_00000090[1];
    memcpy(&stack0x000000f8,(void *)(unaff_x29 + -0x90),0x40);
    in_stack_000000f0 = in_stack_00000090[0x56];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a0);
    uStack000000000000001c = uStack000000000000014c;
    uVar1 = *in_stack_00000090;
    memcpy(&stack0x000000ac,&stack0x000000f8,0x40);
    bStack00000000000000ef =
         OVRPlugin_AddInsightPassthroughSurfaceGeometry_m30C6149BFD3DE003AE132D31362DB09050F0AE03
                   (uStack000000000000001c,uVar1,&stack0x000000ac,in_stack_000000f0,0);
    bStack00000000000000ef = bStack00000000000000ef & 1;
    if (bStack00000000000000ef == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000098);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_1_<CreateVolumeTable>b__5__
                 ,0);
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 1;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


