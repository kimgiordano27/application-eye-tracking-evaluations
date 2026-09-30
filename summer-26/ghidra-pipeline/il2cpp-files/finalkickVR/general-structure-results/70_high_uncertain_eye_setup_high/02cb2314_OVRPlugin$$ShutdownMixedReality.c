/*
FUNCTION_NAME: OVRPlugin$$ShutdownMixedReality
ENTRY_POINT: 02cb2314
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShutdownMixedReality(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  long unaff_x29;
  undefined4 uVar4;
  undefined8 *in_stack_00000010;
  ulong *in_stack_00000018;
  int iStack0000000000000024;
  byte bStack000000000000004f;
  float fStack000000000000005c;
  
  if ((*(byte *)(param_1 + 0x2ec) & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_InteractableGroupView_<>c_<Awake>b__39_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_InteractableGroupView_<>c_<InjectInteractables>b__50_0__);
    BufferedAudioStream_Update_m1B4DA7098A9A333FDD4EE245342D551AE6974141::s_Il2CppMethodInitialized
         = 1;
  }
  *in_stack_00000010 = 0;
  *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(in_stack_00000010[2] + 0x28);
  if (0.0 < *(float *)(unaff_x29 + -0x1c)) {
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(in_stack_00000010[2] + 0x10);
    NullCheck(*(void **)(unaff_x29 + -0x28));
    bVar1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC
                      (*(undefined8 *)(unaff_x29 + -0x28),0);
    *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
    if (((*(byte *)(unaff_x29 + -0x29) & 1) == 0) &&
       (*(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(in_stack_00000010[2] + 0x28),
       0.05 < *(float *)(unaff_x29 + -0x30))) {
      *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(in_stack_00000010[2] + 0x24);
      uVar4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
      *(undefined4 *)(unaff_x29 + -0x38) = uVar4;
      uVar4 = il2cpp_codegen_subtract<float,float>
                        (*(float *)(unaff_x29 + -0x34),*(float *)(unaff_x29 + -0x38));
      *(undefined4 *)(in_stack_00000010[2] + 0x24) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(in_stack_00000010[2] + 0x24);
      if (*(float *)(unaff_x29 + -0x3c) <= 0.0) {
        *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(in_stack_00000010[2] + 0x10);
        NullCheck(*(void **)(unaff_x29 + -0x48));
        AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3
                  (*(undefined8 *)(unaff_x29 + -0x48),0);
      }
    }
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(in_stack_00000010[2] + 0x10);
    NullCheck(*(void **)(unaff_x29 + -0x50));
    bVar1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC
                      (*(undefined8 *)(unaff_x29 + -0x50),0);
    *(byte *)(unaff_x29 + -0x51) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x51) & 1) != 0) {
      *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(in_stack_00000010[2] + 0x28);
      uVar4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar4;
      uVar4 = il2cpp_codegen_subtract<float,float>
                        (*(float *)(unaff_x29 + -0x58),*(float *)(unaff_x29 + -0x5c));
      *(undefined4 *)(in_stack_00000010[2] + 0x28) = uVar4;
      if (*(float *)(in_stack_00000010[2] + 0x28) < 0.0) {
        *(undefined4 *)(in_stack_00000010[2] + 0x28) = 0;
      }
    }
  }
  fStack000000000000005c = *(float *)(in_stack_00000010[2] + 0x28);
  if (fStack000000000000005c <= 0.0) {
    pvVar3 = *(void **)(in_stack_00000010[2] + 0x10);
    NullCheck(pvVar3);
    bStack000000000000004f =
         AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(pvVar3,0);
    bStack000000000000004f = bStack000000000000004f & 1;
    if (bStack000000000000004f == 0) {
      iStack0000000000000024 = *(int *)(in_stack_00000010[2] + 0x20);
      if (iStack0000000000000024 != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Method_Oculus_Interaction_InteractableGroupView_<>c_<InjectInteractables>b__50_0__
                   ,0);
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
      uVar2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C();
      *in_stack_00000010 = uVar2;
      uVar2 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(unaff_x29 + -0x18,0);
      uVar2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)
                          Method_Oculus_Interaction_InteractableGroupView_<>c_<Awake>b__39_0__,uVar2
                         ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar2,0);
      BufferedAudioStream_Stop_mF9550CD70CF85EFF4D826D9793C02DA254C743F4(in_stack_00000010[2],0);
    }
  }
  return;
}


