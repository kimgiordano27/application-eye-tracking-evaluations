/*
FUNCTION_NAME: OVRPlugin_RetrieveSpaceQueryResults_m814F7704ED5C17471CCC683F49EBF032742C4ACA
ENTRY_POINT: 02dc2b98
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined1
OVRPlugin_RetrieveSpaceQueryResults_m814F7704ED5C17471CCC683F49EBF032742C4ACA
          (undefined8 param_1,NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *param_2,
          int param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *local_a8;
  undefined4 local_9c;
  NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  int local_7c;
  NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *local_78;
  int local_70;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *local_58;
  int local_4c;
  undefined8 local_48;
  int local_3c;
  NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  local_48 = param_4;
  local_3c = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_RetrieveSpaceQueryResults_m814F7704ED5C17471CCC683F49EBF032742C4ACA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_CA429BF0192CDE307B67FF8A501B0ED5E4C74E6E4D46D6CD1A23CF1C4E7E9C0E
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TMPro_TMP_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_DB71692FF06933747FB0438F36AD22F283D01377EA4140CF4090FA26CB1446B1
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_RetrieveSpaceQueryResults_m814F7704ED5C17471CCC683F49EBF032742C4ACA::
    s_Il2CppMethodInitialized = 1;
  }
  local_4c = 0;
  local_58 = local_38;
  il2cpp_codegen_initobj(local_38,0x10);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_60 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_68 = *puVar3;
  local_69 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_60,local_68,0);
  local_69 = local_69 & 1;
  if (local_69 == 0) {
    local_4c = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_70 = OVRP_1_72_0_ovrp_RetrieveSpaceQueryResults_m3DA7C85DF1E171AD9541B8D6EF42560655491865
                         (&local_30,0,&local_4c,0,0);
    if (local_70 == 0) {
      local_78 = local_38;
      local_7c = local_4c;
      local_80 = local_3c;
      local_90 = 0;
      uStack_88 = 0;
      NativeArray_1__ctor_m36748835C3731E19A05C95B0E44F695229EB831B
                ((NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *)&local_90,local_4c,
                 local_3c,1,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_DB71692FF06933747FB0438F36AD22F283D01377EA4140CF4090FA26CB1446B1
                );
      *(undefined8 *)(local_78 + 8) = uStack_88;
      *(undefined8 *)local_78 = local_90;
      local_98 = local_38;
      local_9c = *(undefined4 *)(local_38 + 8);
      local_a8 = local_38;
      uStack_d8 = *(undefined8 *)(local_38 + 8);
      local_e0 = *(undefined8 *)local_38;
      local_c0 = local_e0;
      uStack_b8 = uStack_d8;
      local_c8 = (void *)NativeArrayUnsafeUtility_GetUnsafePtr_TisSpaceQueryResult_tBBBE74AF0A11892832ABF0A46E2B5E9A9E375DB7_m69CBB56766A477B87CB8D769DB606DC23E39A6AD
                                   (local_e0,uStack_d8,
                                    *(undefined8 *)
                                     Field_<PrivateImplementationDetails>_CA429BF0192CDE307B67FF8A501B0ED5E4C74E6E4D46D6CD1A23CF1C4E7E9C0E
                                   );
      local_e8 = 0;
      IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline
                (&local_e8,local_c8,(MethodInfo *)0x0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      iVar2 = OVRP_1_72_0_ovrp_RetrieveSpaceQueryResults_m3DA7C85DF1E171AD9541B8D6EF42560655491865
                        (&local_30,local_9c,&local_4c,local_e8,0);
      if (iVar2 == 0) {
        local_21 = 1;
      }
      else {
        NativeArray_1_Dispose_m830401D26CD815000A993757313890E07051AEE7
                  (local_38,*(MethodInfo **)
                             Method_TMPro_TMP_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_0__
                  );
        local_21 = 0;
      }
    }
    else {
      local_21 = 0;
    }
  }
  else {
    local_21 = 0;
  }
  return local_21;
}


