/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 02cb5494
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel(void)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9 *pMVar3;
  void *pvVar4;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  int iStack000000000000002c;
  byte bStack000000000000003f;
  ulong in_stack_00000050;
  
  if ((in_stack_00000050 & 0x1000000) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    bStack000000000000003f = *(byte *)(lVar1 + 0x10) & 1;
    if (bStack000000000000003f == 0) {
      pMVar3 = *(Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9 **)(unaff_x29 + -8);
      NullCheck(pMVar3);
      iStack000000000000002c =
           Message_get_Type_mAA37DEAB3B9C5278D6EE831DFD730AFDEE8A3F2F_inline
                     (pMVar3,(MethodInfo *)0x0);
      if (iStack000000000000002c == 0x773889f6) {
        pvVar4 = *(void **)(unaff_x29 + -8);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
        lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
        *(void **)(lVar1 + 0x18) = pvVar4;
        lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
        Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x18),pvVar4);
      }
    }
  }
  else {
    pIVar2 = *(Il2CppObject **)(unaff_x29 + -0x20);
    pMVar3 = *(Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9 **)(unaff_x29 + -8);
    NullCheck(pIVar2);
    VirtualActionInvoker1<Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9*>::Invoke
              (4,pIVar2,pMVar3);
  }
  return;
}


