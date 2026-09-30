/*
FUNCTION_NAME: OVRPlugin.OVRP_1_64_0$$.cctor
ENTRY_POINT: 02cde070
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_64_0___cctor(void)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  
  if (!in_CY || in_ZR) {
    if (*(uint *)(unaff_x29 + -0x24) < 0x44fc006f) {
      if (*(int *)(unaff_x29 + -0x24) == 0x446aecfa) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeEnum>b__14_0__);
        MessageWithAssetFileDownloadCancelResult__ctor_m39956DF547D0F94367D316B45E9D185D8621E2AD
                  (uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x44fc006e) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c_<Awake>b__32_0__
                          );
        MessageWithAppDownloadResult__ctor_m9E91D2860A2BDE5C9759D8D1EEC3CC90EFBBB4B8(uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x453fc9aa) {
        in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_000000e8 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
        MessageWithSystemVoipState__ctor_m0C3EC0CE847837D8BEC905086E0869F60ECFD81B
                  (in_stack_000000e8,in_stack_000000f0,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000e8;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x4737ea1d) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_0__
                          );
        MessageWithGroupPresenceLeaveIntent__ctor_m8A022A95004362652CFBF0437D322DC8C3F2E033
                  (uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x47933761) {
    if (*(int *)(unaff_x29 + -0x24) == 0x47570a95) {
      in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0x10);
      in_stack_00000148 =
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_<GetCreator>b__22_1__
                     );
      MessageWithPurchaseList__ctor_mF165BF37BB45CC99A14AE4E8778C65B5136D71F9
                (in_stack_00000148,in_stack_00000150,0);
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000148;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x47933760) {
      in_stack_000001a0 = *(undefined8 *)(unaff_x29 + -0x10);
      in_stack_00000198 =
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_Newtonsoft_Json_JsonTextReader_<ReadFromFinishedAsync>d__5_MoveNext__)
      ;
      MessageWithPartyUnderCurrentParty__ctor_mC826C6CD125895FEDF1B33F9F9D691445BA62936
                (in_stack_00000198,in_stack_000001a0,0);
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000198;
      goto LAB_02cdf8b4;
    }
  }
  else {
    if (*(int *)(unaff_x29 + -0x24) == 0x48ff55be) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
      Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x4901dac0) {
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
    if (*(int *)(unaff_x29 + -0x24) == 0x4afc6f74) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass58_0_<CreateSerializationErrorCallback>b__0__
                        );
      MessageWithAssetDetailsList__ctor_mC917393B5FA4E0F7CADA6F9B096920F3BED70AB3(uVar1,uVar2,0);
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


