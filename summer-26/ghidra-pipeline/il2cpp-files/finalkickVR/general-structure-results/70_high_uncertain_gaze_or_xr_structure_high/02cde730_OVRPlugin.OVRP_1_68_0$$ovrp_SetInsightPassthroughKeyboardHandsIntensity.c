/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 02cde730
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_68_0__ovrp_SetInsightPassthroughKeyboardHandsIntensity(void)

{
  bool in_ZR;
  undefined8 uVar1;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  
  if (in_ZR) {
    in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0x10);
    in_stack_00000128 =
         il2cpp_codegen_object_new
                   (*(Il2CppClass **)
                     Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_1__);
    MessageWithSdkAccountList__ctor_m7169E710AA1E928B9247F00556367246E98E1C3E
              (in_stack_00000128,in_stack_00000130,0);
    *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000128;
  }
  else {
    in_stack_00000050 = *(undefined8 *)(unaff_x29 + -0x10);
    uStack000000000000004c = *(undefined4 *)(unaff_x29 + -0x24);
    in_stack_00000040 =
         PlatformInternal_ParseMessageHandle_m5F7FF1235E90049C795C4B11965FD7383DBFB844
                   (in_stack_00000050,uStack000000000000004c,0);
    *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000040;
    in_stack_00000038 = *(long *)(unaff_x29 + -0x20);
    if (in_stack_00000038 == 0) {
      in_stack_00000030 = *(undefined4 *)(unaff_x29 + -0x24);
      uStack0000000000000034 = in_stack_00000030;
      uVar1 = Box(*(Il2CppClass **)
                   Method_Newtonsoft_Json_Linq_JToken_<Annotations>d__186_System_Collections_IEnumerator_Reset__
                  ,&stack0x00000030);
      uVar1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                        (*(undefined8 *)
                          Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__,
                         uVar1);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar1,0);
    }
  }
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
  return *(undefined8 *)(unaff_x29 + -8);
}


