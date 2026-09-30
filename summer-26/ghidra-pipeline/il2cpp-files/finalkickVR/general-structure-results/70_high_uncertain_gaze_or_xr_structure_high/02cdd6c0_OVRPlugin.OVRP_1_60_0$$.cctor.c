/*
FUNCTION_NAME: OVRPlugin.OVRP_1_60_0$$.cctor
ENTRY_POINT: 02cdd6c0
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


undefined8 OVRPlugin_OVRP_1_60_0___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  
  if (*(uint *)(unaff_x29 + -0xdc) < 0x15770370) {
    *(undefined4 *)(unaff_x29 + -0xe0) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xe0) == 0x152663b1) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Linq_JToken_<GetAncestors>d__48_System_Collections_IEnumerator_Reset__
                        );
      MessageWithAchievementProgressList__ctor_mE547DFCC9EEEBF3BA0F7B2AB2E644A8515CF1C7D
                (uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xe4) == 0x1577036f) {
      in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0x10);
      in_stack_00000138 =
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_0__)
      ;
      MessageWithRejoinDialogResult__ctor_mF50058C8BC5B7E49B65691E8F32BF40365D2364A
                (in_stack_00000138,in_stack_00000140,0);
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000138;
      goto LAB_02cdf8b4;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xe8) == 0x167d4bc2) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Schema_JsonSchemaWriter_<>c_<WriteType>b__7_0__);
      MessageWithDataStoreUnderPublicUserDataStore__ctor_m3E1784A0D4D106381013617730FCBA33A52A70B2
                (uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xec) == 0x18378bef) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16_MoveNext__)
      ;
      MessageWithLeaderboardEntryList__ctor_mEC5439E558640325310B923C22A77A92795B016B(uVar1,uVar2,0)
      ;
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
  }
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
                        Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__,uVar1)
    ;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar1,0);
  }
LAB_02cdf8b4:
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
  return *(undefined8 *)(unaff_x29 + -8);
}


