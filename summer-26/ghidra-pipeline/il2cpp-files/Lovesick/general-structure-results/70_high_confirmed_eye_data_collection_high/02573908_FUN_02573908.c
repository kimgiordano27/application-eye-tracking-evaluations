/*
FUNCTION_NAME: FUN_02573908
ENTRY_POINT: 02573908
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_02573908(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_033efcf8;
                    /* try { // try from 0257390c to 02673917 has its CatchHandler @ 02573a04 */
                    /* try { // try from 02573918 to 0267392b has its CatchHandler @ 0257353c */
  if ((DAT_03782e49 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033efcf8);
    thunk_FUN_00d48444(StringLiteral_2971);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonReader_ReadInt32String__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Values__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb340);
    thunk_FUN_00d48444(StringLiteral_7166);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_TempDataAlloc<ushort>_SessionDone__
                      );
    thunk_FUN_00d48444(System_Data_SqlTypes_SqlBytes_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__);
    thunk_FUN_00d48444(PTR_DAT_033f7040);
    thunk_FUN_00d48444(StringLiteral_9563);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InternedString>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_Exception>_Clear__);
    thunk_FUN_00d48444(Obi_ObiActorBlueprint_BlueprintCallback_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s32__);
    thunk_FUN_00d48444(StringLiteral_10930);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__
                      );
    thunk_FUN_00d48444(OVRFaceExpressions_FaceExpression___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4977);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Last<Edge>__);
    thunk_FUN_00d48444(Method_UnityEngine_RenderTexture_ValidateRenderTextureDesc__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TypeIdentifier>__ctor__);
    DAT_03782e49 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_021167a0(lVar3,*(undefined8 *)
                        Method_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_TempDataAlloc<ushort>_SessionDone__
                 ,0,0,0,0,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<Guid,_Exception>_Clear__,0);
    uStack_50 = 0;
    local_48 = 0;
    local_58 = 0;
    FUN_0212733c(&local_58,lVar3,0);
    *(undefined8 *)(param_1 + 0xb0) = local_48;
    *(undefined8 *)(param_1 + 0xa8) = uStack_50;
    *(undefined8 *)(param_1 + 0xa0) = local_58;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_021167a0(lVar3,*(undefined8 *)StringLiteral_9563,0,0,0,0,
                   *(undefined8 *)Method_Newtonsoft_Json_JsonReader_ReadInt32String__,0);
      uStack_68 = 0;
      local_60 = 0;
      local_70 = 0;
      FUN_0212733c(&local_70,lVar3,0);
      *(undefined8 *)(param_1 + 200) = local_60;
      *(undefined8 *)(param_1 + 0xc0) = uStack_68;
      *(undefined8 *)(param_1 + 0xb8) = local_70;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_021167a0(lVar3,*(undefined8 *)
                            Method_UnityEngine_RenderTexture_ValidateRenderTextureDesc__,1,0,0,0,0,0
                    );
        FUN_02116740(lVar3,1,0);
        uStack_80 = 0;
        local_78 = 0;
        local_88 = 0;
        FUN_0212733c(&local_88,lVar3,0);
        *(undefined8 *)(param_1 + 0xe0) = local_78;
        *(undefined8 *)(param_1 + 0xd8) = uStack_80;
        *(undefined8 *)(param_1 + 0xd0) = local_88;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          FUN_021167a0(lVar3,*(undefined8 *)PTR_DAT_033f7040,0,0,0,0,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__
                       ,0);
          uStack_98 = 0;
          local_90 = 0;
          local_a0 = 0;
          FUN_0212733c(&local_a0,lVar3,0);
          *(undefined8 *)(param_1 + 0xf8) = local_90;
          *(undefined8 *)(param_1 + 0xf0) = uStack_98;
          *(undefined8 *)(param_1 + 0xe8) = local_a0;
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            FUN_021167a0(lVar3,*(undefined8 *)
                                Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Values__
                         ,1,0,0,0,0,0);
            uStack_b0 = 0;
            local_a8 = 0;
            local_b8 = 0;
            FUN_0212733c(&local_b8,lVar3,0);
            *(undefined8 *)(param_1 + 0x110) = local_a8;
            *(undefined8 *)(param_1 + 0x108) = uStack_b0;
            *(undefined8 *)(param_1 + 0x100) = local_b8;
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar2 = StringLiteral_4977;
            if (lVar3 != 0) {
              FUN_021167a0(lVar3,*(undefined8 *)StringLiteral_7166,0,0,0,0,
                           *(undefined8 *)StringLiteral_4977,0);
              uStack_c8 = 0;
              local_c0 = 0;
              local_d0 = 0;
              FUN_0212733c(&local_d0,lVar3,0);
              *(undefined8 *)(param_1 + 0x128) = local_c0;
              *(undefined8 *)(param_1 + 0x120) = uStack_c8;
              *(undefined8 *)(param_1 + 0x118) = local_d0;
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                FUN_021167a0(lVar3,*(undefined8 *)
                                    Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__
                             ,1,0,0,0,0,0);
                uStack_e0 = 0;
                local_d8 = 0;
                local_e8 = 0;
                FUN_0212733c(&local_e8,lVar3,0);
                *(undefined8 *)(param_1 + 0x140) = local_d8;
                *(undefined8 *)(param_1 + 0x138) = uStack_e0;
                *(undefined8 *)(param_1 + 0x130) = local_e8;
                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar3 != 0) {
                  FUN_021167a0(lVar3,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo,0,0
                               ,0,0,*(undefined8 *)puVar2,0);
                  uStack_f8 = 0;
                  local_f0 = 0;
                  local_100 = 0;
                  FUN_0212733c(&local_100,lVar3,0);
                  *(undefined8 *)(param_1 + 0x158) = local_f0;
                  *(undefined8 *)(param_1 + 0x150) = uStack_f8;
                  *(undefined8 *)(param_1 + 0x148) = local_100;
                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar3 != 0) {
                    FUN_021167a0(lVar3,*(undefined8 *)Method_System_Linq_Enumerable_Last<Edge>__,1,0
                                 ,0,0,0,0);
                    uStack_110 = 0;
                    local_108 = 0;
                    local_118 = 0;
                    FUN_0212733c(&local_118,lVar3,0);
                    *(undefined8 *)(param_1 + 0x170) = local_108;
                    *(undefined8 *)(param_1 + 0x168) = uStack_110;
                    *(undefined8 *)(param_1 + 0x160) = local_118;
                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar3 != 0) {
                      FUN_021167a0(lVar3,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s32__,0,0,0,0
                                   ,*(undefined8 *)puVar2,0);
                      uStack_128 = 0;
                      local_120 = 0;
                      local_130 = 0;
                      FUN_0212733c(&local_130,lVar3,0);
                      *(undefined8 *)(param_1 + 0x188) = local_120;
                      *(undefined8 *)(param_1 + 0x180) = uStack_128;
                      *(undefined8 *)(param_1 + 0x178) = local_130;
                      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      puVar2 = StringLiteral_10930;
                      if (lVar3 != 0) {
                        FUN_021167a0(lVar3,*(undefined8 *)PTR_DAT_033eb340,0,0,0,0,
                                     *(undefined8 *)StringLiteral_10930,0);
                        uStack_140 = 0;
                        local_138 = 0;
                        local_148 = 0;
                        FUN_0212733c(&local_148,lVar3,0);
                        *(undefined8 *)(param_1 + 0x1a0) = local_138;
                        *(undefined8 *)(param_1 + 0x198) = uStack_140;
                        *(undefined8 *)(param_1 + 400) = local_148;
                        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        if (lVar3 != 0) {
                          FUN_021167a0(lVar3,*(undefined8 *)System_Data_SqlTypes_SqlBytes_TypeInfo,2
                                       ,0,0,0,0,0);
                          uStack_158 = 0;
                          local_150 = 0;
                          local_160 = 0;
                          FUN_0212733c(&local_160,lVar3,0);
                          *(undefined8 *)(param_1 + 0x1b8) = local_150;
                          *(undefined8 *)(param_1 + 0x1b0) = uStack_158;
                          *(undefined8 *)(param_1 + 0x1a8) = local_160;
                          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                          if (lVar3 != 0) {
                            FUN_021167a0(lVar3,*(undefined8 *)
                                                Method_System_Collections_Generic_List<TypeIdentifier>__ctor__
                                         ,0,0,0,0,*(undefined8 *)puVar2,0);
                            uStack_170 = 0;
                            local_168 = 0;
                            local_178 = 0;
                            FUN_0212733c(&local_178,lVar3,0);
                            *(undefined8 *)(param_1 + 0x1d0) = local_168;
                            *(undefined8 *)(param_1 + 0x1c8) = uStack_170;
                            *(undefined8 *)(param_1 + 0x1c0) = local_178;
                            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                            if (lVar3 != 0) {
                              FUN_021167a0(lVar3,*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                                           ,0,0,0,0,*(undefined8 *)puVar2,0);
                              uStack_188 = 0;
                              local_180 = 0;
                              local_190 = 0;
                              FUN_0212733c(&local_190,lVar3,0);
                              *(undefined8 *)(param_1 + 0x1e8) = local_180;
                              *(undefined8 *)(param_1 + 0x1e0) = uStack_188;
                              *(undefined8 *)(param_1 + 0x1d8) = local_190;
                              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                              if (lVar3 != 0) {
                                FUN_021167a0(lVar3,*(undefined8 *)
                                                    Obi_ObiActorBlueprint_BlueprintCallback_TypeInfo
                                             ,0,0,0,0,*(undefined8 *)puVar2,0);
                                uStack_1a0 = 0;
                                local_198 = 0;
                                local_1a8 = 0;
                                FUN_0212733c(&local_1a8,lVar3,0);
                                *(undefined8 *)(param_1 + 0x200) = local_198;
                                *(undefined8 *)(param_1 + 0x1f8) = uStack_1a0;
                                *(undefined8 *)(param_1 + 0x1f0) = local_1a8;
                                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                if (lVar3 != 0) {
                                  FUN_021167a0(lVar3,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InternedString>_Dispose__
                                               ,1,0,0,0,0,0);
                                  uStack_1b8 = 0;
                                  local_1b0 = 0;
                                  local_1c0 = 0;
                                  FUN_0212733c(&local_1c0,lVar3,0);
                                  *(undefined8 *)(param_1 + 0x218) = local_1b0;
                                  *(undefined8 *)(param_1 + 0x210) = uStack_1b8;
                                  *(undefined8 *)(param_1 + 0x208) = local_1c0;
                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                  if (lVar3 != 0) {
                                    FUN_021167a0(lVar3,*(undefined8 *)StringLiteral_2971,0,0,0,0,
                                                 *(undefined8 *)puVar2,0);
                                    uStack_1d0 = 0;
                                    local_1c8 = 0;
                                    local_1d8 = 0;
                                    FUN_0212733c(&local_1d8,lVar3,0);
                                    *(undefined1 *)(param_1 + 0x80) = 1;
                                    *(undefined4 *)(param_1 + 0x23c) = 0x3f000000;
                                    *(undefined2 *)(param_1 + 0x1c) = 0x101;
                                    *(undefined8 *)(param_1 + 0x230) = local_1c8;
                                    *(undefined8 *)(param_1 + 0x228) = uStack_1d0;
                                    *(undefined8 *)(param_1 + 0x220) = local_1d8;
                                    *(undefined1 *)(param_1 + 0x91) = 1;
                                    thunk_FUN_0268a01c(param_1,0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


