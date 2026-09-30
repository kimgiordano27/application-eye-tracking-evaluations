/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StartKeyboardTracking
ENTRY_POINT: 02cde7e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_68_0__ovrp_StartKeyboardTracking(void)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 uVar2;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  if (in_w8 == 0x6ad44ef8) {
    uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Newtonsoft_Json_JsonTextReader_<ParseConstructorAsync>d__25_MoveNext__
                      );
    MessageWithLeaderboardList__ctor_mEEBF53FD0EAE33BAD4A63905BC2D2A9505630C03(uVar1,uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  else if (*(int *)(unaff_x29 + -0x24) == 0x6bcf9e47) {
    in_stack_000000e0 = *(undefined8 *)(unaff_x29 + -0x10);
    in_stack_000000d8 =
         il2cpp_codegen_object_new
                   (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__);
    MessageWithUser__ctor_mB03B2FC17D28C913511406D71F8CE7B57A0C667F
              (in_stack_000000d8,in_stack_000000e0,0);
    *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000d8;
  }
  else if (*(int *)(unaff_x29 + -0x24) == 0x6c8a8228) {
    uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__1__
                      );
    MessageWithDataStoreUnderPrivateUserDataStore__ctor_mBEBA644C5CEFBAD3274D11BEDBD89CFCEC6FE912
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


