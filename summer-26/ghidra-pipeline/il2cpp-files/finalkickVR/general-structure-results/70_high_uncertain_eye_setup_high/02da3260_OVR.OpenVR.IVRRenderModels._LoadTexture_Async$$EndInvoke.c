/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._LoadTexture_Async$$EndInvoke
ENTRY_POINT: 02da3260
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte OVR_OpenVR_IVRRenderModels__LoadTexture_Async__EndInvoke(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *__src;
  long unaff_x29;
  int iStack000000000000001c;
  int *in_stack_00000048;
  void *in_stack_00000050;
  ulong *in_stack_00000058;
  ulong *in_stack_00000060;
  ulong *in_stack_00000068;
  undefined4 uStack00000000000000a4;
  int iStack00000000000000d0;
  int iStack00000000000000d4;
  int in_stack_000000f0;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x390));
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000058);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000060);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000068);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<FromLayout>b__15_0__
            );
  OVRPlugin_SetInsightPassthroughStyle_mDD737201356AD80BB6537361636E232C311D4D04::
  s_Il2CppMethodInitialized = 1;
  memset((void *)(unaff_x29 + -0x38),0,0x28);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(in_stack_00000048 + 0x1d) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined8 *)(in_stack_00000048 + 0x1b) = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(in_stack_00000048 + 0x1d),
                     *(undefined8 *)(in_stack_00000048 + 0x1b),0);
  *(byte *)(unaff_x29 + -0x49) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x49) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(in_stack_00000048 + 0x15) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined8 *)(in_stack_00000048 + 0x13) = *puVar4;
    bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                      (*(undefined8 *)(in_stack_00000048 + 0x15),
                       *(undefined8 *)(in_stack_00000048 + 0x13),0);
    *(byte *)(unaff_x29 + -0x69) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x69) & 1) == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      memcpy((void *)(unaff_x29 + -0xb0),in_stack_00000050,0x40);
      *in_stack_00000048 = in_stack_00000048[7];
      if (*in_stack_00000048 != 6) {
        memcpy(&stack0x000000d8,in_stack_00000050,0x40);
        iStack00000000000000d4 = in_stack_000000f0;
        if (in_stack_000000f0 != 7) {
          __src = (void *)(unaff_x29 + -0x38);
          il2cpp_codegen_initobj(__src,0x28);
          InsightPassthroughStyle2_CopyTo_m9CBE1B93A65DB9716EE9E073DD07733985DC99B3
                    (in_stack_00000050,__src);
          iStack00000000000000d0 = in_stack_00000048[0x2b];
          memcpy(&stack0x000000a8,__src,0x28);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
          iStack000000000000001c = iStack00000000000000d0;
          memcpy(&stack0x00000078,&stack0x000000a8,0x28);
          uStack00000000000000a4 =
               OVRP_1_63_0_ovrp_SetInsightPassthroughStyle_m6FB7611B50B6759CEC8F2AD92B7A8D1EDA754AC6
                         (iStack000000000000001c,&stack0x00000078,0);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
          bVar1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68
                            (uStack00000000000000a4,0);
          *(byte *)(unaff_x29 + -1) = bVar1 & 1;
          goto LAB_02da3534;
        }
      }
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<FromLayout>b__15_0__
                 ,0);
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  else {
    in_stack_00000048[0x19] = in_stack_00000048[0x2b];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
    iVar2 = OVRP_1_84_0_ovrp_SetInsightPassthroughStyle2_m184A6C4F9E66EFD583808BB76C63B26E532842A6
                      (in_stack_00000048[0x19],in_stack_00000050);
    in_stack_00000048[0x18] = iVar2;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
    bVar1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(in_stack_00000048[0x18],0)
    ;
    *(byte *)(unaff_x29 + -0x55) = bVar1 & 1;
    *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x55) & 1;
  }
LAB_02da3534:
  return *(byte *)(unaff_x29 + -1) & 1;
}


