/*
FUNCTION_NAME: OVRControllerTest.BoolMonitor.BoolGenerator$$BeginInvoke
ENTRY_POINT: 02d31e44
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


void OVRControllerTest_BoolMonitor_BoolGenerator__BeginInvoke(void)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  undefined8 uVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  Exception_t *pEVar6;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  bVar1 = OVRPlugin_GetSpaceBoundingBox3D_m7E0DE79DC9ACA978950D18D90A54502AE6293224
                    (*(undefined8 *)(unaff_x29 + -0x48));
  *(byte *)(unaff_x29 + -0x49) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x49) & 1) != 0) {
    in_stack_00000068 = *(undefined8 *)(unaff_x29 + -0x20);
    in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x28);
    in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000030 = in_stack_00000060;
    in_stack_00000040 = in_stack_00000070;
    OVRBounded3D_ConvertBounds_mC401CA1C8232A69D7E862B2D9F241A4DE1D0FB7E
              (&stack0x00000048,*(undefined8 *)(unaff_x29 + -8),&stack0x00000030,0);
    in_stack_00000020[1] = in_stack_00000050;
    *in_stack_00000020 = in_stack_00000048;
    in_stack_00000020[2] = in_stack_00000058;
    return;
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                     );
  uVar3 = il2cpp_codegen_object_new(pIVar2);
  *(undefined8 *)(unaff_x29 + -0x58) = uVar3;
  uVar5 = *(undefined8 *)(unaff_x29 + -0x58);
  uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass62_0_<OnStreamReady>b__1__);
  InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(uVar5,uVar3,0);
  pEVar6 = *(Exception_t **)(unaff_x29 + -0x58);
  pMVar4 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakAsync>d__63_System_Collections_IEnumerator_Reset__
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar6,pMVar4);
}


