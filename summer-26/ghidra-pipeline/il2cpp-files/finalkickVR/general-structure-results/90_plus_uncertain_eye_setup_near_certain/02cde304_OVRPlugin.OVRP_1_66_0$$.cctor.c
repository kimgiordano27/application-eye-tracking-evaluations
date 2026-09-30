/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$.cctor
ENTRY_POINT: 02cde304
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_66_0___cctor(void)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 uVar2;
  int in_w9;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  
  if (in_w8 == in_w9) {
    uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Newtonsoft_Json_Linq_JToken_<GetAncestors>d__48_System_Collections_IEnumerator_Reset__
                      );
    MessageWithAchievementProgressList__ctor_mE547DFCC9EEEBF3BA0F7B2AB2E644A8515CF1C7D
              (uVar1,uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  else if (*(int *)(unaff_x29 + -0x24) == 0x51659514) {
    uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeEnum>b__14_0__);
    MessageWithAssetFileDownloadCancelResult__ctor_m39956DF547D0F94367D316B45E9D185D8621E2AD
              (uVar1,uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
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


