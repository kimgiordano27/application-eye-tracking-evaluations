/*
FUNCTION_NAME: Unity.XR.CoreUtils.GeometryUtils$$ClosestTimesOnTwoLinesXZ
ENTRY_POINT: 024689c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_known_unity_or_il2cpp_false_positive_family;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


/* WARNING: Removing unreachable block (ram,0x02469778) */
/* WARNING: Removing unreachable block (ram,0x02469788) */

void Unity_XR_CoreUtils_GeometryUtils__ClosestTimesOnTwoLinesXZ(void)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w23;
  int unaff_w24;
  ulong uVar14;
  long *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  double unaff_d8;
  float unaff_s9;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 uStack000000000000009c;
  undefined8 uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  float in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  float in_stack_000000e8;
  float fStack00000000000000ec;
  undefined4 in_stack_000000f0;
  float fStack00000000000000f4;
  float in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  float in_stack_00000100;
  float fStack0000000000000104;
  undefined4 in_stack_00000108;
  float fStack000000000000010c;
  float in_stack_00000110;
  undefined4 in_stack_00000168;
  undefined8 uStack000000000000016c;
  undefined8 uStack0000000000000174;
  undefined4 uStack000000000000017c;
  float in_stack_00000180;
  undefined4 uStack0000000000000184;
  float in_stack_00000188;
  float fStack000000000000018c;
  undefined4 in_stack_00000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined4 uStack000000000000019c;
  float in_stack_000001a0;
  float fStack00000000000001a4;
  undefined4 in_stack_000001a8;
  float fStack00000000000001ac;
  float in_stack_000001b0;
  long in_stack_000008f8;
  
  thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
  *(undefined1 *)(unaff_x28 + 0x918) = 1;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar15 = SQRT(unaff_s9) * *(float *)(unaff_x19 + 0x68);
  iVar26 = -0x80000000;
  if (fVar15 != INFINITY) {
    iVar26 = (int)fVar15;
  }
  *(int *)(unaff_x19 + 0x6c) = iVar26;
  fVar15 = (float)FUN_02683ee4();
  if (*(char *)(unaff_x28 + 0x918) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x28 + 0x918) = 1;
  }
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar15 = SQRT(fVar15) * *(float *)(unaff_x19 + 0x68);
  iVar26 = -0x80000000;
  if (fVar15 != INFINITY) {
    iVar26 = (int)fVar15;
  }
  iVar26 = iVar26 - *(int *)(unaff_x19 + 0x6c);
  uVar12 = iVar26 + 3;
  uVar4 = iVar26 + 6;
  if (-1 < (int)uVar12) {
    uVar4 = uVar12;
  }
  uVar12 = FUN_02443540(0);
  if ((int)(uVar4 & 0xfffffffc) <= (int)uVar12) {
    uVar12 = uVar4 & 0xfffffffc;
  }
  FUN_013421d4(&stack0x00000790,uVar12,3,1,
               *(undefined8 *)Method_UnityEngine_Events_UnityEvent<WitResponseNode>__ctor__);
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  FUN_013421d4(&stack0x00000760,unaff_w21,3,1,
               *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Exception>_Add__);
  FUN_013421d4(&stack0x00000790,unaff_w21 << 1,3,1,*(undefined8 *)PTR_DAT_033ebb50);
  FUN_0244ccfc(&stack0x00000790,in_stack_00000048,0,0);
  FUN_0228623c(&stack0x00000790,&stack0x00000480,0);
  auVar29 = FUN_010ec3a8(&stack0x00000410,unaff_w21,0x20,0,0,
                         *(undefined8 *)Method_Sirenix_Utilities_DeepReflection_GetStepMember__);
  FUN_013421d4(&stack0x00000790,unaff_w21 << 1,3,1,*(undefined8 *)PTR_DAT_033ed4b8);
  FUN_0109f294(&stack0x00000750,
               *(undefined8 *)
                UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
  auVar29 = FUN_010ec2cc(&stack0x000003f0,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)
                          Method_System_Reflection_CustomAttributeExtensions_GetCustomAttributes<InputControlAttribute>__
                        );
  FUN_013421d4(&stack0x000003e0,unaff_w21,3,1,*(undefined8 *)StringLiteral_13811);
  FUN_013421d4(&stack0x000003d0,unaff_w21,3,1,
               *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Exception>_Add__);
  auVar30 = FUN_010ec3a8(&stack0x000003a0,unaff_w21,0x20,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)
                          Method_System_Threading_Tasks_Task<VoiceServiceRequest>_GetAwaiter__);
  auVar29 = FUN_010ec3a8(&stack0x00000370,unaff_w21,0x20,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)
                          Method_System_Buffers_TlsOverPerCoreLockedStacksArrayPool<__Il2CppFullySharedGenericType>_Rent__
                        );
  auVar29 = FUN_0265e26c(auVar30._0_8_,auVar30._8_8_,auVar29._0_8_,auVar29._8_8_,0);
  puVar8 = Oculus_Interaction_Body_Input_OVRSkeletonMapping_TypeInfo;
  FUN_0265e244(0);
  FUN_013421d4(&stack0x00000360,unaff_w21,3,1,*(undefined8 *)StringLiteral_4922);
  FUN_013421d4(&stack0x00000340,unaff_w21,3,1,*(undefined8 *)PTR_DAT_033ebb50);
  FUN_013421d4(&stack0x00000320,unaff_w21,3,1,*(undefined8 *)puVar8);
  FUN_013421d4(&stack0x00000300,unaff_w21,3,1,*(undefined8 *)puVar8);
  FUN_013421d4(&stack0x000002e0,unaff_w21,3,1,*(undefined8 *)PTR_DAT_033ebb50);
  memcpy(&stack0x00000270,&stack0x00000670,0x60);
  auVar30 = FUN_010ec3a8(&stack0x00000270,unaff_w21,0x20,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<InternedString,_string>_set_Item__
                        );
  uVar25 = *(undefined8 *)(unaff_x19 + 0x68);
  iVar26 = uVar12 + 0x7e;
  if (-1 < (int)(uVar12 + 0x3f)) {
    iVar26 = uVar12 + 0x3f;
  }
  NEON_rev64(uVar25,4);
  auVar29 = FUN_010ec3a8(&stack0x00000240,iVar26 >> 6,1,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)PTR_DAT_033f4650);
  fVar15 = (float)uVar25;
  FUN_01342b50(&stack0x000006e0,auVar29._0_8_,auVar29._8_8_,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<uint,_TMP_GlyphPairAdjustmentRecord>_Add__
              );
  puVar8 = Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo;
  uVar25 = *(undefined8 *)(unaff_x19 + 0x5c);
  iVar26 = unaff_w24 * (int)((ulong)uVar25 >> 0x20);
  uVar12 = iVar26 + 3;
  uVar4 = iVar26 + 6;
  if (-1 < (int)uVar12) {
    uVar4 = uVar12;
  }
  FUN_013421d4(&stack0x00000230,uVar4 & 0xfffffffc,3,1,
               *(undefined8 *)Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo);
  iVar26 = unaff_w24 * (int)uVar25;
  uVar12 = iVar26 + 3;
  uVar4 = iVar26 + 6;
  if (-1 < (int)uVar12) {
    uVar4 = uVar12;
  }
  FUN_013421d4(&stack0x00000220,uVar4 & 0xfffffffc,3,1,*(undefined8 *)puVar8);
  fVar21 = 0.0;
  iVar26 = *(int *)(unaff_x19 + 0x58);
  lVar13 = FUN_0268fd10(in_stack_00000058,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0269f578(lVar13,0);
  uVar16 = FUN_022743a4(0);
  fVar22 = fVar21;
  fStack0000000000000044 = fVar15;
  lVar13 = FUN_0268fd10(in_stack_00000058,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0269fb58(lVar13,0);
  uVar17 = FUN_022743a4(0);
  fStack0000000000000034 = fVar15;
  fStack000000000000003c = fVar22;
  lVar13 = FUN_0268fd10(in_stack_00000058,0);
  if (lVar13 != 0) {
    fVar18 = (float)FUN_0269f9e8(lVar13,0);
    fVar27 = (float)unaff_d8;
    fVar28 = ((float)unaff_w23 * fVar27) / (float)unaff_w29;
    fVar22 = fVar28 * fVar22;
    fVar15 = fVar28 * fVar15;
    uVar19 = FUN_022743a4(fVar28 * fVar18,0);
    fVar18 = fVar22;
    fVar23 = fVar15;
    lVar13 = FUN_0268fd10(in_stack_00000058,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fStack000000000000000c = (float)unaff_w29;
    fStack0000000000000014 = fVar15;
    fVar15 = (float)FUN_0269fa60(lVar13,0);
    fVar18 = fVar18 * fVar27;
    fVar23 = fVar23 * fVar27;
    uVar20 = FUN_022743a4(fVar15 * fVar27,0);
    fVar15 = 0.0;
    fVar24 = 0.0;
    memcpy(&stack0x00000790,&stack0x00000820,0x54);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x5c);
    fStack000000000000018c = fStack0000000000000044;
    in_stack_00000198 = fStack0000000000000034;
    fStack0000000000000194 = fStack000000000000003c;
    fStack00000000000001a4 = fStack0000000000000014;
    in_stack_00000180 = (float)iVar26 / (float)unaff_w23;
    uStack0000000000000184 = uVar16;
    in_stack_00000188 = fVar21;
    in_stack_00000190 = uVar17;
    uStack000000000000019c = uVar19;
    in_stack_000001a0 = fVar22;
    in_stack_000001a8 = uVar20;
    fStack00000000000001ac = fVar18;
    in_stack_000001b0 = fVar23;
    memcpy(&stack0x000001b4,&stack0x00000820,0x54);
    auVar31 = FUN_010ec3a8(&stack0x00000180,uVar5,1,auVar30._0_8_,auVar30._8_8_,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<IInteractorView>__ctor__);
    memcpy(&stack0x000008a0,&stack0x00000790,0x54);
    iVar26 = *(int *)(unaff_x19 + 0x58);
    lVar13 = FUN_0268fd10(in_stack_00000058,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar22 = (float)FUN_0269fa60(lVar13,0);
    fVar15 = fVar15 * fVar27;
    fVar24 = fVar24 * fVar27;
    uVar19 = FUN_022743a4(fVar22 * fVar27,0);
    fVar22 = fVar15;
    fVar18 = fVar24;
    lVar13 = FUN_0268fd10(in_stack_00000058,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar23 = (float)FUN_0269f9e8(lVar13,0);
    fStack000000000000010c = -(fVar28 * fVar22);
    fVar22 = -(fVar28 * fVar18);
    in_stack_00000108 = FUN_022743a4(-(fVar28 * fVar23),0);
    in_stack_00000110 = fVar22;
    uVar5 = *(undefined4 *)(unaff_x19 + 0x60);
    in_stack_000000e0 = (float)iVar26 / fStack000000000000000c;
    fStack00000000000000ec = fStack0000000000000044;
    in_stack_000000f8 = fStack0000000000000034;
    fStack00000000000000f4 = fStack000000000000003c;
    uStack00000000000000e4 = uVar16;
    in_stack_000000e8 = fVar21;
    in_stack_000000f0 = uVar17;
    uStack00000000000000fc = uVar19;
    in_stack_00000100 = fVar15;
    fStack0000000000000104 = fVar24;
    memcpy(&stack0x00000114,&stack0x000008a0,0x54);
    uStack0000000000000174 = 0;
    uStack000000000000016c = 0;
    uStack000000000000017c = 0;
    auVar30 = FUN_010ec3a8(&stack0x000000e0,uVar5,1,auVar30._0_8_,auVar30._8_8_,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<IInteractorView>__ctor__);
    auVar30 = FUN_0265e26c(auVar30._0_8_,auVar30._8_8_,auVar31._0_8_,auVar31._8_8_,0);
    puVar9 = UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo;
    puVar8 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    iVar26 = *(int *)(unaff_x19 + 0x5c) * unaff_w24 * *(int *)(unaff_x19 + 0x60);
    uVar12 = iVar26 + 3;
    uVar4 = iVar26 + 6;
    if (-1 < (int)uVar12) {
      uVar4 = uVar12;
    }
    FUN_013421d4(&stack0x000000d0,uVar4 & 0xfffffffc,3,1,
                 *(undefined8 *)Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x98) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x90) = in_stack_000000d0;
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x5c);
    uStack00000000000000ac = 0;
    uStack00000000000000a4 = 0;
    uStack000000000000009c = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_000000c8 = in_stack_000000d8;
    in_stack_000000c0 = in_stack_000000d0;
    auVar30 = FUN_010ec3a8(&stack0x00000090,*(undefined4 *)(unaff_x19 + 0x60),1,auVar30._0_8_,
                           auVar30._8_8_,
                           *(undefined8 *)
                            Method_Sirenix_Serialization_Utilities_DoubleLookupDictionary<ISerializationPolicy,_Type,_Dictionary<string,_MemberInfo>>__ctor__
                          );
    auVar29 = FUN_0265e26c(auVar30._0_8_,auVar30._8_8_,auVar29._0_8_,auVar29._8_8_,0);
    puVar7 = PTR_DAT_033ed4b8;
    *(undefined1 (*) [16])(unaff_x19 + 0x70) = auVar29;
    FUN_0265e038(&stack0x000006d0,0);
    FUN_01343a6c(0,0,0,*(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                 in_stack_00000020._4_4_,unaff_w21,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__);
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    FUN_013421d4(&stack0x00000080,unaff_w21,2,1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>_Add__);
    lVar11 = in_stack_00000080;
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    FUN_013421d4(&stack0x00000070,unaff_w21,2,1,*(undefined8 *)puVar7);
    lVar2 = in_stack_00000070;
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    FUN_013421d4(&stack0x00000060,unaff_w21,2,1,*(undefined8 *)puVar7);
    lVar13 = in_stack_00000060;
    if (0 < (int)unaff_w21) {
      uVar14 = 0;
      do {
        if (*(long *)(unaff_x20 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar26 = *(int *)(uVar14 * 4);
        uVar3 = in_stack_00000020._4_4_ + uVar14;
        FUN_0132138c(*(long *)(unaff_x20 + 0x1e8),uVar3 & 0xffffffff,&stack0x00000790,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector4>__
                    );
        puVar6 = (undefined8 *)(lVar11 + (long)iVar26 * 0x10);
        puVar6[1] = 0;
        *puVar6 = 0;
        if (*(long *)(unaff_x20 + 0x1f0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar26 = *(int *)(uVar14 * 4);
        FUN_0132138c(*(long *)(unaff_x20 + 0x1f0),uVar3 & 0xffffffff,&stack0x00000790,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                    );
        *(undefined4 *)(lVar2 + (long)iVar26 * 4) = 0;
        piVar1 = (int *)(uVar14 * 4);
        uVar14 = uVar14 + 1;
        *(int *)(lVar13 + (long)*piVar1 * 4) = (int)uVar3;
      } while (unaff_w21 != uVar14);
      if (0 < (int)unaff_w21) {
        uVar14 = 0;
        do {
          if (*(long *)(unaff_x20 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar3 = in_stack_00000020._4_4_ + uVar14;
          FUN_0132149c(*(long *)(unaff_x20 + 0x1e8),uVar3 & 0xffffffff,&stack0x00000790,
                       *(undefined8 *)puVar8);
          if (*(long *)(unaff_x20 + 0x1f0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132149c(*(long *)(unaff_x20 + 0x1f0),uVar3 & 0xffffffff,&stack0x00000790,
                       *(undefined8 *)puVar9);
          lVar2 = uVar14 * 4;
          uVar14 = uVar14 + 1;
          *(undefined4 *)(*(long *)(unaff_x20 + 0x198) + (long)(int)uVar3 * 4) =
               *(undefined4 *)(lVar13 + lVar2);
        } while (unaff_w21 != uVar14);
      }
    }
    puVar7 = StringLiteral_4340;
    FUN_01342a94(&stack0x000005f0,
                 *(undefined8 *)Method_Mono_Security_Cryptography_KeyPairPersistence__ctor__);
    FUN_01342a94(&stack0x000005e0,*(undefined8 *)puVar7);
    FUN_01342a94(&stack0x000005d0,*(undefined8 *)puVar7);
    FUN_01342b50(&stack0x00000660,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)Obi_ObiColliderHandle_TypeInfo);
    puVar10 = StringLiteral_9345;
    puVar9 = Method_Obi_ObiNativeList<Vector2>_Clear__;
    puVar8 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_Start<WitTTSVRequest_<RequestStreamFromDisk>d__23>__
    ;
    FUN_01342b50(&stack0x00000650,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),
                 *(undefined8 *)Method_Obi_ObiNativeList<Vector2>_Clear__);
    FUN_01342b50(&stack0x00000640,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)puVar8);
    FUN_01342b50(&stack0x00000630,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)puVar8);
    FUN_01342b50(&stack0x00000620,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)puVar9);
    FUN_01342b50(&stack0x000006f0,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),
                 *(undefined8 *)Method_Meta_XR_MRUtilityKit_MRUK_GetTrackables__);
    FUN_01342b50(&stack0x00000610,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)puVar10);
    FUN_01342b50(&stack0x00000600,*(undefined8 *)(unaff_x19 + 0x70),
                 *(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)puVar10);
    FUN_0265e244(0);
    FUN_01342a94(&stack0x00000700,*(undefined8 *)puVar7);
    FUN_01342a94(&stack0x00000750,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_STMWaveData>__ctor__);
    FUN_01342a94(&stack0x00000760,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ManifestEntity>_GetEnumerator__);
    if (*(long *)(in_stack_00000028 + 0x28) != in_stack_000008f8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


