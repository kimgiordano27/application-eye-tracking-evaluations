/*
FUNCTION_NAME: LegTrackingModeSceneManager_AlignGround_m54511B08340AC6C98B1615F72FDD2640097F1A76
ENTRY_POINT: 01f1d580
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_possible_biometrics_hits_8
*/


void LegTrackingModeSceneManager_AlignGround_m54511B08340AC6C98B1615F72FDD2640097F1A76
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  void *local_120;
  void *local_118;
  undefined8 local_110;
  String_t *local_108;
  long local_100;
  void *local_f8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_f0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_e8;
  String_t *local_e0;
  long local_d8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_d0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_c8;
  String_t *local_c0;
  long local_b8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_b0;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_a8;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_a0;
  float local_94;
  void *local_90;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  void *local_60;
  void *local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<IClippable>_get_Current__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_30 = param_5;
  local_28 = param_4;
  if ((LegTrackingModeSceneManager_AlignGround_m54511B08340AC6C98B1615F72FDD2640097F1A76::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ProbeReferenceVolume_CellInfo>_set_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__);
    LegTrackingModeSceneManager_AlignGround_m54511B08340AC6C98B1615F72FDD2640097F1A76::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_48 = *(undefined8 *)(local_28 + 0x60);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  local_49 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_48,0);
  local_49 = local_49 & 1;
  if (local_49 == 0) {
    *(undefined4 *)(local_28 + 0x50) = 0;
    local_58 = *(void **)(local_28 + 0x28);
    NullCheck(local_58);
    local_60 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(local_58);
    NullCheck(local_60);
    local_7c = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(local_60,0);
    local_70 = CONCAT44(param_2,local_7c);
    local_80 = *(float *)(local_28 + 0x54);
    local_84 = *(float *)(local_28 + 0x50);
    local_90 = *(void **)(local_28 + 0x48);
    uStack_78 = param_2;
    local_74 = param_3;
    local_68 = param_3;
    local_40 = local_70;
    local_38 = param_3;
    NullCheck(local_90);
    fVar3 = local_80;
    local_94 = *(float *)((long)local_90 + 0x48);
    fVar5 = (float)il2cpp_codegen_subtract<float,float>(local_84,local_94);
    uVar6 = il2cpp_codegen_add<float,float>(fVar3,-fVar5);
    local_40._4_4_ = uVar6;
    local_a8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
               SZArrayNew(*(Il2CppClass **)
                           Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                          ,6);
    local_a0 = local_a8;
    NullCheck(local_a8);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              (local_a8,0,
               *(String_t **)
                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__);
    local_b0 = local_a8;
    local_b8 = local_28 + 0x54;
    local_c0 = (String_t *)Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(local_b8,0);
    NullCheck(local_b0);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(local_b0,1,local_c0);
    local_c8 = local_b0;
    NullCheck(local_b0);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(local_c8,2,*(String_t **)puVar2);
    local_d0 = local_c8;
    local_d8 = local_28 + 0x50;
    local_e0 = (String_t *)Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(local_d8,0);
    NullCheck(local_d0);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(local_d0,3,local_e0);
    local_e8 = local_d0;
    NullCheck(local_d0);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(local_e8,4,*(String_t **)puVar2);
    local_f0 = local_e8;
    local_f8 = *(void **)(local_28 + 0x48);
    NullCheck(local_f8);
    local_100 = (long)local_f8 + 0x48;
    local_108 = (String_t *)Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(local_100,0);
    NullCheck(local_f0);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(local_f0,5,local_108);
    local_110 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(local_f0,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(local_110,0);
    local_118 = *(void **)(local_28 + 0x28);
    NullCheck(local_118);
    local_120 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                  (local_118,0);
    local_130 = (undefined4)local_40;
    uStack_12c = local_40._4_4_;
    local_128 = local_38;
    NullCheck(local_120);
    local_140 = local_130;
    uStack_13c = uStack_12c;
    local_138 = local_128;
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (local_130,uStack_12c,local_128,local_120,0);
    local_150 = (undefined4)local_40;
    uStack_14c = local_40._4_4_;
    local_148 = local_38;
    local_154 = local_40._4_4_;
    *(undefined4 *)(local_28 + 0x54) = local_40._4_4_;
    local_15c = *(undefined4 *)(local_28 + 0x50);
    local_158 = local_15c;
    local_168 = Box(*(Il2CppClass **)
                     Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
                    ,&local_15c);
    local_178 = (undefined4)local_40;
    uStack_174 = local_40._4_4_;
    local_170 = local_38;
    local_188 = (undefined4)local_40;
    uStack_184 = local_40._4_4_;
    local_180 = local_38;
    uVar4 = Box(*(Il2CppClass **)
                 Method_System_Collections_Generic_Dictionary<int,_ProbeReferenceVolume_CellInfo>_set_Item__
                ,&local_188);
    uVar4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987
                      (*(undefined8 *)
                        Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                       ,local_168,uVar4,0);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar4,0);
    MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB
              (0x3a83126f,local_28,
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__,0);
  }
  return;
}


