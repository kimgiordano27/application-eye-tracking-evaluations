/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$GetHighQualityOverlay
ENTRY_POINT: 02db5da4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVR_OpenVR_CVROverlay__GetHighQualityOverlay(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  long unaff_x29;
  ulong *in_stack_00000050;
  ulong *in_stack_00000058;
  ulong *puStack0000000000000060;
  
  puStack0000000000000060 =
       (ulong *)Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__;
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((OVRPlugin_get_systemDisplayFrequenciesAvailable_m0C8838572B37964AD96032AA4F4C021F077AE68D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_0__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000050);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000058);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000060);
    OVRPlugin_get_systemDisplayFrequenciesAvailable_m0C8838572B37964AD96032AA4F4C021F077AE68D::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  *(undefined4 *)(unaff_x29 + -0x10) = 0;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  *(undefined4 *)(unaff_x29 + -0x18) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(lVar3 + 0x78);
  if (*(long *)(unaff_x29 + -0x20) == 0) {
    uVar4 = SZArrayNew((Il2CppClass *)*puStack0000000000000060,0);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x28);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined8 *)(lVar3 + 0x78) = uVar4;
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x78),*(void **)(unaff_x29 + -0x28));
    uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(unaff_x29 + -0x30) = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
    *(undefined8 *)(unaff_x29 + -0x38) = *puVar5;
    bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                      (*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x38),0);
    *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x39) & 1) != 0) {
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
      uVar2 = OVRP_1_21_0_ovrp_GetSystemDisplayAvailableFrequencies_m9A84A93A8B5F5A5EC6E9386018B0C5470637E0F3
                        (0,unaff_x29 + -0xc,0);
      *(undefined4 *)(unaff_x29 + -0x40) = uVar2;
      if ((*(int *)(unaff_x29 + -0x40) == 0) &&
         (*(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(unaff_x29 + -0xc),
         0 < *(int *)(unaff_x29 + -0x44))) {
        *(undefined4 *)(unaff_x29 + -0x48) = *(undefined4 *)(unaff_x29 + -0xc);
        *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x48);
        *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x10);
        uVar4 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_0__)
        ;
        *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
        uVar4 = *(undefined8 *)(unaff_x29 + -0x58);
        uVar2 = il2cpp_codegen_multiply<int,int>(4,*(int *)(unaff_x29 + -0x4c));
        OVRNativeBuffer__ctor_m49B59D113EB19FB7AB2111CBCD8AC8D2D0EF4285(uVar4,uVar2);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
        uVar4 = *(undefined8 *)(unaff_x29 + -0x58);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
        *(undefined8 *)(lVar3 + 0x70) = uVar4;
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
        Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x70),*(void **)(unaff_x29 + -0x58));
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
        *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(lVar3 + 0x70);
        NullCheck(*(void **)(unaff_x29 + -0x60));
        uVar4 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7
                          (*(undefined8 *)(unaff_x29 + -0x60),0,0);
        *(undefined8 *)(unaff_x29 + -0x68) = uVar4;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        uVar2 = OVRP_1_21_0_ovrp_GetSystemDisplayAvailableFrequencies_m9A84A93A8B5F5A5EC6E9386018B0C5470637E0F3
                          (*(undefined8 *)(unaff_x29 + -0x68),unaff_x29 + -0xc,0);
        *(undefined4 *)(unaff_x29 + -0x6c) = uVar2;
        if (*(int *)(unaff_x29 + -0x6c) == 0) {
          *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0xc);
          *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0x10);
          if (*(int *)(unaff_x29 + -0x74) < *(int *)(unaff_x29 + -0x70)) {
            *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x10);
            *(undefined4 *)(unaff_x29 + -0x18) = *(undefined4 *)(unaff_x29 + -0x78);
          }
          else {
            *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0xc);
            *(undefined4 *)(unaff_x29 + -0x18) = *(undefined4 *)(unaff_x29 + -0x7c);
          }
          *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0x18);
          *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x14);
          if (0 < *(int *)(unaff_x29 + -0x80)) {
            *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x14);
            pvVar6 = (void *)SZArrayNew((Il2CppClass *)*puStack0000000000000060,
                                        *(uint *)(unaff_x29 + -0x84));
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
            lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
            *(void **)(lVar3 + 0x78) = pvVar6;
            lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
            Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x78),pvVar6);
            lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
            pvVar6 = *(void **)(lVar3 + 0x70);
            NullCheck(pvVar6);
            uVar4 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7(pvVar6);
            lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
            uVar7 = *(undefined8 *)(lVar3 + 0x78);
            uVar2 = *(undefined4 *)(unaff_x29 + -0x14);
            il2cpp_codegen_runtime_class_init_inline
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__
                      );
            Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(uVar4,uVar7,0,uVar2,0);
          }
        }
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  return *(undefined8 *)(lVar3 + 0x78);
}


