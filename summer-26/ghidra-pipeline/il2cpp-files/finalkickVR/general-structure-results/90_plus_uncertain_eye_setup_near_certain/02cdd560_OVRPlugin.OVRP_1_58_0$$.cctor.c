/*
FUNCTION_NAME: OVRPlugin.OVRP_1_58_0$$.cctor
ENTRY_POINT: 02cdd560
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_58_0___cctor(void)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xb4) == 0xf9ecf9f) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
                        );
      MessageWithInvitePanelResultInfo__ctor_m927C9D955E90ED77A77DFAB4AAD92EB119428321
                (uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xb8) == 0x11449fc5) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_Equals__);
      MessageWithAssetFileDownloadResult__ctor_m6182BB02044EFCD0699CCF88FD133CC4284D6D72
                (uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0xbc) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xbc) == 0x1175be60) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__0__
                        );
      MessageWithChallenge__ctor_mF3DB35873189900D182C82271103685B7332DAC4(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0xc0) == 0x117fc8fe) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_JsonTextReader_<MatchAndSetAsync>d__21_MoveNext__);
      MessageWithLeaderboardDidUpdate__ctor_m01307625359BA0D58C9CDD2CA49D458403414538(uVar1,uVar2,0)
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


