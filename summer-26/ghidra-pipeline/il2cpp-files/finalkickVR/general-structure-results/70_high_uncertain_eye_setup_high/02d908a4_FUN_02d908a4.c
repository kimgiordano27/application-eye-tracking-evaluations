/*
FUNCTION_NAME: FUN_02d908a4
ENTRY_POINT: 02d908a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte FUN_02d908a4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOVar9;
  long unaff_x29;
  MethodInfo *pMStack0000000000000050;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000078;
  undefined4 uStack000000000000008c;
  byte bStack0000000000000093;
  undefined4 uStack0000000000000094;
  int iStack0000000000000114;
  Il2CppObject *in_stack_00000118;
  long in_stack_00000120;
  byte bStack00000000000001a7;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  
  *(undefined4 *)(unaff_x29 + -0xbc) = 1;
  if (*(int *)(unaff_x29 + -0xbc) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    uVar6 = *(undefined4 *)(unaff_x29 + -0x2c);
    pMStack0000000000000050 = (MethodInfo *)0x0;
    uVar5 = OVROverlay_get_layout_m4893928952320613F6AAD4E58DCEBDD373B621C8
                      (*(undefined8 *)(unaff_x29 + -0x18));
    uVar8 = *in_stack_00000060;
    uVar1 = *(undefined4 *)(unaff_x29 + -0x1c);
    uVar2 = *(undefined4 *)(unaff_x29 + -0x20);
    uVar3 = *(undefined4 *)(unaff_x29 + -0x24);
    uVar4 = *(undefined4 *)(unaff_x29 + -0x28);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
    OVRPlugin_CalculateLayerDesc_m1C5C994D88D2EB1BC56103558F7DB7AFDFDF04C9
              (uVar6,uVar5,uVar8,uVar1,uVar2,uVar3,uVar4,pMStack0000000000000050);
    memcpy(&stack0x000002b4,&stack0x00000238,0x7c);
    memcpy((void *)(unaff_x29 + -0xb4),&stack0x000002b4,0x7c);
    memcpy(&stack0x000001b4,(void *)(unaff_x29 + -0xb4),0x7c);
    in_stack_000001b0 = *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xdc);
    in_stack_000001a8 = *(undefined8 *)(*(long *)(unaff_x29 + -0x18) + 0x1c0);
    memcpy(&stack0x00000128,&stack0x000001b4,0x7c);
    bStack00000000000001a7 =
         OVRPlugin_EnqueueSetupLayer_mA1D5C761EE406503F0AA37B6C55C0AC87D61023F
                   (&stack0x00000128,in_stack_000001b0,in_stack_000001a8,pMStack0000000000000050);
    bStack00000000000001a7 = bStack00000000000001a7 & 1;
    in_stack_00000120 = *(long *)(unaff_x29 + -0x18) + 0x1b8;
    in_stack_00000118 =
         (Il2CppObject *)
         GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5
                   (in_stack_00000120,pMStack0000000000000050);
    pOVar9 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18);
    piVar7 = (int *)UnBox(in_stack_00000118,(Il2CppClass *)*in_stack_00000068);
    OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline
              (pOVar9,*piVar7,pMStack0000000000000050);
    iStack0000000000000114 =
         OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                   (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18),
                    pMStack0000000000000050);
    if (0 < iStack0000000000000114) {
      memcpy(&stack0x00000098,(void *)(unaff_x29 + -0xb4),0x7c);
      memcpy((void *)(*(long *)(unaff_x29 + -0x18) + 0x130),&stack0x00000098,0x7c);
      uStack0000000000000094 = *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xdc);
      *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xe0) = uStack0000000000000094;
      bStack0000000000000093 = *(byte *)(*(long *)(unaff_x29 + -0x18) + 0xd3) & 1;
      if (bStack0000000000000093 == 0) {
        uStack000000000000008c =
             OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                       (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)
                         (unaff_x29 + -0x18),(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
        uVar6 = OVRPlugin_GetLayerTextureStageCount_m7ACFF1E9AA4708B227460BB30021AA34347ED874
                          (uStack000000000000008c,0);
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0x1ac) = uVar6;
      }
      else {
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0x1ac) = 1;
      }
    }
    *(undefined1 *)(*(long *)(unaff_x29 + -0x18) + 0x120) = 0;
    *(undefined1 *)(unaff_x29 + -1) = 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


