/*
FUNCTION_NAME: OVRPlugin.OVRP_1_64_0$$ovrp_LocateSpace
ENTRY_POINT: 02cddfc0
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


undefined8 OVRPlugin_OVRP_1_64_0__ovrp_LocateSpace(void)

{
  undefined8 uVar1;
  uint in_w8;
  undefined8 uVar2;
  uint in_w9;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  if ((in_w9 & 0xffff | 0x420a0000) < in_w8) {
    if (*(int *)(unaff_x29 + -0x24) == 0x43264356) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
      MessageWithChallengeList__ctor_m52B35FC654DBB6AA2193AED50814C4F323A4F77D(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x436f345d) {
      in_stack_000000e0 = *(undefined8 *)(unaff_x29 + -0x10);
      in_stack_000000d8 =
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__);
      MessageWithUser__ctor_mB03B2FC17D28C913511406D71F8CE7B57A0C667F
                (in_stack_000000d8,in_stack_000000e0,0);
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000d8;
      goto LAB_02cdf8b4;
    }
  }
  else {
    if (*(int *)(unaff_x29 + -0x24) == 0x41d2828b) {
      in_stack_000000a0 = *(undefined8 *)(unaff_x29 + -0x10);
      in_stack_00000098 =
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_Newtonsoft_Json_JsonWriter_<WriteConstructorDateAsync>d__32_MoveNext__
                     );
      MessageWithUserDataStoreUpdateResponse__ctor_m5B0C948C140D76149C4117093B05452505859694
                (in_stack_00000098,in_stack_000000a0,0);
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000098;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x420ac1cf) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_1__);
      MessageWithAssetFileDeleteResult__ctor_mD1DF1F17A175EFEF235BABD9018D8E8A6A6AE833
                (uVar1,uVar2,0);
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


