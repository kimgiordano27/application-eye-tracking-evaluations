/*
FUNCTION_NAME: UnityEngine.Texture3D$$SetPixels
ENTRY_POINT: 02573928
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Texture3D__SetPixels(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0xcf8);
                    /* try { // try from 0257392c to 0267393b has its CatchHandler @ 02573a00 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0257393c to 026739c3 has its CatchHandler @ 0257353c */
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
    *(undefined1 *)(unaff_x20 + 0xe49) = 1;
  }
  lVar2 = thunk_FUN_00d62348(*puVar3);
  if (lVar2 != 0) {
    FUN_021167a0(lVar2,*(undefined8 *)
                        Method_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_TempDataAlloc<ushort>_SessionDone__
                 ,0,0,0,0,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<Guid,_Exception>_Clear__,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = 0;
    in_stack_00000188 = 0;
    FUN_0212733c(&stack0x00000188,lVar2,0);
    *(undefined8 *)(param_2 + 0xb0) = in_stack_00000198;
    *(undefined8 *)(param_2 + 0xa8) = in_stack_00000190;
    *(undefined8 *)(param_2 + 0xa0) = in_stack_00000188;
    lVar2 = thunk_FUN_00d62348(*puVar3);
    if (lVar2 != 0) {
      FUN_021167a0(lVar2,*(undefined8 *)StringLiteral_9563,0,0,0,0,
                   *(undefined8 *)Method_Newtonsoft_Json_JsonReader_ReadInt32String__,0);
      in_stack_00000178 = 0;
      in_stack_00000180 = 0;
      in_stack_00000170 = 0;
      FUN_0212733c(&stack0x00000170,lVar2,0);
      *(undefined8 *)(param_2 + 200) = in_stack_00000180;
      *(undefined8 *)(param_2 + 0xc0) = in_stack_00000178;
      *(undefined8 *)(param_2 + 0xb8) = in_stack_00000170;
      lVar2 = thunk_FUN_00d62348(*puVar3);
      if (lVar2 != 0) {
        FUN_021167a0(lVar2,*(undefined8 *)
                            Method_UnityEngine_RenderTexture_ValidateRenderTextureDesc__,1,0,0,0,0,0
                    );
        FUN_02116740(lVar2,1,0);
        in_stack_00000160 = 0;
        in_stack_00000168 = 0;
        in_stack_00000158 = 0;
        FUN_0212733c(&stack0x00000158,lVar2,0);
        *(undefined8 *)(param_2 + 0xe0) = in_stack_00000168;
        *(undefined8 *)(param_2 + 0xd8) = in_stack_00000160;
        *(undefined8 *)(param_2 + 0xd0) = in_stack_00000158;
        lVar2 = thunk_FUN_00d62348(*puVar3);
        if (lVar2 != 0) {
          FUN_021167a0(lVar2,*(undefined8 *)PTR_DAT_033f7040,0,0,0,0,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__
                       ,0);
          in_stack_00000148 = 0;
          in_stack_00000150 = 0;
          in_stack_00000140 = 0;
          FUN_0212733c(&stack0x00000140,lVar2,0);
          *(undefined8 *)(param_2 + 0xf8) = in_stack_00000150;
          *(undefined8 *)(param_2 + 0xf0) = in_stack_00000148;
          *(undefined8 *)(param_2 + 0xe8) = in_stack_00000140;
          lVar2 = thunk_FUN_00d62348(*puVar3);
          if (lVar2 != 0) {
            FUN_021167a0(lVar2,*(undefined8 *)
                                Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Values__
                         ,1,0,0,0,0,0);
            in_stack_00000130 = 0;
            in_stack_00000138 = 0;
            in_stack_00000128 = 0;
            FUN_0212733c(&stack0x00000128,lVar2,0);
            *(undefined8 *)(param_2 + 0x110) = in_stack_00000138;
            *(undefined8 *)(param_2 + 0x108) = in_stack_00000130;
            *(undefined8 *)(param_2 + 0x100) = in_stack_00000128;
            lVar2 = thunk_FUN_00d62348(*puVar3);
            puVar1 = StringLiteral_4977;
            if (lVar2 != 0) {
              FUN_021167a0(lVar2,*(undefined8 *)StringLiteral_7166,0,0,0,0,
                           *(undefined8 *)StringLiteral_4977,0);
              in_stack_00000118 = 0;
              in_stack_00000120 = 0;
              in_stack_00000110 = 0;
              FUN_0212733c(&stack0x00000110,lVar2,0);
              *(undefined8 *)(param_2 + 0x128) = in_stack_00000120;
              *(undefined8 *)(param_2 + 0x120) = in_stack_00000118;
              *(undefined8 *)(param_2 + 0x118) = in_stack_00000110;
              lVar2 = thunk_FUN_00d62348(*puVar3);
              if (lVar2 != 0) {
                FUN_021167a0(lVar2,*(undefined8 *)
                                    Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__
                             ,1,0,0,0,0,0);
                in_stack_00000100 = 0;
                in_stack_00000108 = 0;
                in_stack_000000f8 = 0;
                FUN_0212733c(&stack0x000000f8,lVar2,0);
                *(undefined8 *)(param_2 + 0x140) = in_stack_00000108;
                *(undefined8 *)(param_2 + 0x138) = in_stack_00000100;
                *(undefined8 *)(param_2 + 0x130) = in_stack_000000f8;
                lVar2 = thunk_FUN_00d62348(*puVar3);
                if (lVar2 != 0) {
                  FUN_021167a0(lVar2,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo,0,0
                               ,0,0,*(undefined8 *)puVar1,0);
                  in_stack_000000e8 = 0;
                  in_stack_000000f0 = 0;
                  in_stack_000000e0 = 0;
                  FUN_0212733c(&stack0x000000e0,lVar2,0);
                  *(undefined8 *)(param_2 + 0x158) = in_stack_000000f0;
                  *(undefined8 *)(param_2 + 0x150) = in_stack_000000e8;
                  *(undefined8 *)(param_2 + 0x148) = in_stack_000000e0;
                  lVar2 = thunk_FUN_00d62348(*puVar3);
                  if (lVar2 != 0) {
                    FUN_021167a0(lVar2,*(undefined8 *)Method_System_Linq_Enumerable_Last<Edge>__,1,0
                                 ,0,0,0,0);
                    in_stack_000000d0 = 0;
                    in_stack_000000d8 = 0;
                    in_stack_000000c8 = 0;
                    FUN_0212733c(&stack0x000000c8,lVar2,0);
                    *(undefined8 *)(param_2 + 0x170) = in_stack_000000d8;
                    *(undefined8 *)(param_2 + 0x168) = in_stack_000000d0;
                    *(undefined8 *)(param_2 + 0x160) = in_stack_000000c8;
                    lVar2 = thunk_FUN_00d62348(*puVar3);
                    if (lVar2 != 0) {
                      FUN_021167a0(lVar2,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s32__,0,0,0,0
                                   ,*(undefined8 *)puVar1,0);
                      in_stack_000000b8 = 0;
                      in_stack_000000c0 = 0;
                      in_stack_000000b0 = 0;
                      FUN_0212733c(&stack0x000000b0,lVar2,0);
                      *(undefined8 *)(param_2 + 0x188) = in_stack_000000c0;
                      *(undefined8 *)(param_2 + 0x180) = in_stack_000000b8;
                      *(undefined8 *)(param_2 + 0x178) = in_stack_000000b0;
                      lVar2 = thunk_FUN_00d62348(*puVar3);
                      puVar1 = StringLiteral_10930;
                      if (lVar2 != 0) {
                        FUN_021167a0(lVar2,*(undefined8 *)PTR_DAT_033eb340,0,0,0,0,
                                     *(undefined8 *)StringLiteral_10930,0);
                        in_stack_000000a0 = 0;
                        in_stack_000000a8 = 0;
                        in_stack_00000098 = 0;
                        FUN_0212733c(&stack0x00000098,lVar2,0);
                        *(undefined8 *)(param_2 + 0x1a0) = in_stack_000000a8;
                        *(undefined8 *)(param_2 + 0x198) = in_stack_000000a0;
                        *(undefined8 *)(param_2 + 400) = in_stack_00000098;
                        lVar2 = thunk_FUN_00d62348(*puVar3);
                        if (lVar2 != 0) {
                          FUN_021167a0(lVar2,*(undefined8 *)System_Data_SqlTypes_SqlBytes_TypeInfo,2
                                       ,0,0,0,0,0);
                          in_stack_00000088 = 0;
                          in_stack_00000090 = 0;
                          in_stack_00000080 = 0;
                          FUN_0212733c(&stack0x00000080,lVar2,0);
                          *(undefined8 *)(param_2 + 0x1b8) = in_stack_00000090;
                          *(undefined8 *)(param_2 + 0x1b0) = in_stack_00000088;
                          *(undefined8 *)(param_2 + 0x1a8) = in_stack_00000080;
                          lVar2 = thunk_FUN_00d62348(*puVar3);
                          if (lVar2 != 0) {
                            FUN_021167a0(lVar2,*(undefined8 *)
                                                Method_System_Collections_Generic_List<TypeIdentifier>__ctor__
                                         ,0,0,0,0,*(undefined8 *)puVar1,0);
                            in_stack_00000070 = 0;
                            in_stack_00000078 = 0;
                            in_stack_00000068 = 0;
                            FUN_0212733c(&stack0x00000068,lVar2,0);
                            *(undefined8 *)(param_2 + 0x1d0) = in_stack_00000078;
                            *(undefined8 *)(param_2 + 0x1c8) = in_stack_00000070;
                            *(undefined8 *)(param_2 + 0x1c0) = in_stack_00000068;
                            lVar2 = thunk_FUN_00d62348(*puVar3);
                            if (lVar2 != 0) {
                              FUN_021167a0(lVar2,*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                                           ,0,0,0,0,*(undefined8 *)puVar1,0);
                              in_stack_00000058 = 0;
                              in_stack_00000060 = 0;
                              in_stack_00000050 = 0;
                              FUN_0212733c(&stack0x00000050,lVar2,0);
                              *(undefined8 *)(param_2 + 0x1e8) = in_stack_00000060;
                              *(undefined8 *)(param_2 + 0x1e0) = in_stack_00000058;
                              *(undefined8 *)(param_2 + 0x1d8) = in_stack_00000050;
                              lVar2 = thunk_FUN_00d62348(*puVar3);
                              if (lVar2 != 0) {
                                FUN_021167a0(lVar2,*(undefined8 *)
                                                    Obi_ObiActorBlueprint_BlueprintCallback_TypeInfo
                                             ,0,0,0,0,*(undefined8 *)puVar1,0);
                                in_stack_00000040 = 0;
                                in_stack_00000048 = 0;
                                in_stack_00000038 = 0;
                                FUN_0212733c(&stack0x00000038,lVar2,0);
                                *(undefined8 *)(param_2 + 0x200) = in_stack_00000048;
                                *(undefined8 *)(param_2 + 0x1f8) = in_stack_00000040;
                                *(undefined8 *)(param_2 + 0x1f0) = in_stack_00000038;
                                lVar2 = thunk_FUN_00d62348(*puVar3);
                                if (lVar2 != 0) {
                                  FUN_021167a0(lVar2,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InternedString>_Dispose__
                                               ,1,0,0,0,0,0);
                                  in_stack_00000028 = 0;
                                  in_stack_00000030 = 0;
                                  in_stack_00000020 = 0;
                                  FUN_0212733c(&stack0x00000020,lVar2,0);
                                  *(undefined8 *)(param_2 + 0x218) = in_stack_00000030;
                                  *(undefined8 *)(param_2 + 0x210) = in_stack_00000028;
                                  *(undefined8 *)(param_2 + 0x208) = in_stack_00000020;
                                  lVar2 = thunk_FUN_00d62348(*puVar3);
                                  if (lVar2 != 0) {
                                    FUN_021167a0(lVar2,*(undefined8 *)StringLiteral_2971,0,0,0,0,
                                                 *(undefined8 *)puVar1,0);
                                    in_stack_00000010 = 0;
                                    in_stack_00000018 = 0;
                                    in_stack_00000008 = 0;
                                    FUN_0212733c(&stack0x00000008,lVar2,0);
                                    *(undefined1 *)(param_2 + 0x80) = 1;
                                    *(undefined4 *)(param_2 + 0x23c) = 0x3f000000;
                                    *(undefined2 *)(param_2 + 0x1c) = 0x101;
                                    *(undefined8 *)(param_2 + 0x230) = in_stack_00000018;
                                    *(undefined8 *)(param_2 + 0x228) = in_stack_00000010;
                                    *(undefined8 *)(param_2 + 0x220) = in_stack_00000008;
                                    *(undefined1 *)(param_2 + 0x91) = 1;
                                    thunk_FUN_0268a01c(param_2,0);
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


