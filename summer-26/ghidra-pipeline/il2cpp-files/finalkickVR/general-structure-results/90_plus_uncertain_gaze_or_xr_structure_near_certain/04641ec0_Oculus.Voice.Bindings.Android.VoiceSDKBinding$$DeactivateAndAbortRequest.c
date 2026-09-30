/*
FUNCTION_NAME: Oculus.Voice.Bindings.Android.VoiceSDKBinding$$DeactivateAndAbortRequest
ENTRY_POINT: 04641ec0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Voice_Bindings_Android_VoiceSDKBinding__DeactivateAndAbortRequest(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  uint uStack0000000000000044;
  byte bStack000000000000004d;
  byte bStack000000000000004e;
  int iStack0000000000000054;
  
  *(undefined1 *)(unaff_x29 + -0x11) = 0;
  *(undefined4 *)(unaff_x29 + -0x18) = 0;
  do {
    iStack0000000000000054 = *(int *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    piVar5 = (int *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
    *(bool *)(unaff_x29 + -0x2a) = iStack0000000000000054 < *piVar5;
    if ((*(byte *)(unaff_x29 + -0x2a) & 1) == 0) {
LAB_0464205c:
      bStack000000000000004e = *(byte *)(unaff_x29 + -0x11) & 1;
      *(byte *)(unaff_x29 + -0x2b) = bStack000000000000004e;
      bStack000000000000004d = *(byte *)(unaff_x29 + -0x2b) & 1;
      if (bStack000000000000004d == 0) {
        uStack0000000000000044 =
             VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E
                       (*in_stack_00000030);
        VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB
                  (*in_stack_00000030,uStack0000000000000044 & 0xfffffffd,0);
      }
      else {
        uVar3 = VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E
                          (*in_stack_00000030);
        VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB
                  (*in_stack_00000030,uVar3 | 2,0);
      }
      return;
    }
    uVar2 = VisualElement_get_containedPointerIds_m84803849BB0BF517C919A0BCA8C2DD95442C23C3_inline
                      ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)*in_stack_00000030
                       ,(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0x4c) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x18);
    *(bool *)(unaff_x29 + -0x19) =
         (*(uint *)(unaff_x29 + -0x4c) & 1 << (ulong)(*(uint *)(unaff_x29 + -0x50) & 0x1f)) != 0;
    *(byte *)(unaff_x29 + -0x51) = *(byte *)(unaff_x29 + -0x19) & 1;
    if ((*(byte *)(unaff_x29 + -0x51) & 1) != 0) {
      uVar4 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(*in_stack_00000030);
      *(undefined8 *)(unaff_x29 + -0x60) = uVar4;
      *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x18);
      uVar4 = PointerCaptureHelper_GetCapturingElement_m30DED02760CA5544CF35162656E2E3959DC8103E
                        (*(undefined8 *)(unaff_x29 + -0x60),*(undefined4 *)(unaff_x29 + -100),0);
      *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
      bVar1 = VisualElement_IsPartOfCapturedChain_m4C6695E59C6F40016706E70FD3891A8F99CF525F
                        (*in_stack_00000030,unaff_x29 + -0x28,0);
      *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x29) & 1) != 0) {
        *(undefined1 *)(unaff_x29 + -0x11) = 1;
        goto LAB_0464205c;
      }
    }
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x18),1);
    *(undefined4 *)(unaff_x29 + -0x18) = uVar2;
  } while( true );
}


