/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARSession.<Install>d__37$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0243eb00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 123
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARFoundation_ARSession_<Install>d__37__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  byte bVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar21;
  long *unaff_x24;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined1 auVar27 [12];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  
  uVar18 = FUN_023c34c4(*(undefined8 *)(param_1 + 0x18),0);
  *(undefined8 *)(unaff_x19 + 0x448) = uVar18;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    uVar18 = FUN_023c34c4(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x28),0);
    *(undefined8 *)(unaff_x19 + 0x450) = uVar18;
    if (*(long *)(unaff_x20 + 0x50) != 0) {
      uVar18 = FUN_023c34c4(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x30),0);
      *(undefined8 *)(unaff_x19 + 0x468) = uVar18;
      if (*(long *)(unaff_x20 + 0x50) != 0) {
        uVar18 = FUN_023c34c4(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x58),0);
        *(undefined8 *)(unaff_x19 + 0x470) = uVar18;
        if (*(long *)(unaff_x20 + 0x50) != 0) {
          pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0x41d);
          uVar18 = FUN_023c34c4(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x60),0);
          *(undefined8 *)(unaff_x19 + 0x478) = uVar18;
          lVar26 = *(long *)(unaff_x20 + 0x68);
          auVar27 = FUN_026b4694(0);
          *pauVar1 = auVar27;
          puVar7 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          if (lVar26 != 0) {
            FUN_026b485c(pauVar1,*(undefined1 *)(lVar26 + 0x10),0);
            FUN_026b48e8(pauVar1,*(undefined4 *)(lVar26 + 0x18),0);
            FUN_026b4904(pauVar1,*(undefined4 *)(lVar26 + 0x1c),0);
            FUN_026b4920(pauVar1,*(undefined4 *)(lVar26 + 0x20),0);
            FUN_026b493c(pauVar1,*(undefined4 *)(lVar26 + 0x24),0);
            *(undefined4 *)(unaff_x19 + 0x438) = *(undefined4 *)(unaff_x20 + 0x88);
            FUN_0242be24(&stack0x00000030,0);
            in_stack_000000f0 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
            in_stack_000000f8 = in_stack_00000038;
            uStack0000000000000104 = uStack0000000000000044;
            uStack0000000000000100 = uStack0000000000000040;
            lVar19 = FUN_0244455c(0);
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar7);
            }
            uVar20 = FUN_0268b5e4(lVar19,0);
            if ((uVar20 & 1) != 0) {
              if (lVar19 == 0) goto LAB_0243f5d0;
              in_stack_000000f8 = FUN_02405134(lVar19,0);
              in_stack_000000f0 = FUN_02405364(lVar19,0);
            }
            lVar19 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4438);
            puVar7 = StringLiteral_7090;
            if (lVar19 != 0) {
              FUN_02429954(lVar19,&stack0x000000f0,0);
              *(long *)(unaff_x19 + 0x430) = lVar19;
              if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              *(undefined2 *)(unaff_x19 + 0x187) = 0x101;
              puVar8 = StringLiteral_10232;
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              bVar16 = FUN_0243e674();
              *(byte *)(unaff_x19 + 0x188) = ~bVar16 & 1;
              uVar18 = *(undefined8 *)(unaff_x19 + 0x430);
              bVar16 = *(byte *)(unaff_x20 + 0x81);
              uVar2 = *(uint *)(unaff_x20 + 0x84);
              lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
              puVar7 = Unity_Collections_NativeSlice<Color>_TypeInfo;
              if (lVar19 != 0) {
                FUN_02467f10(lVar19,uVar18,(ulong)bVar16 | (ulong)uVar2 << 0x20,0);
                *(long *)(unaff_x19 + 0x400) = lVar19;
                *(undefined8 *)(unaff_x19 + 0x410) = *(undefined8 *)(unaff_x20 + 0x74);
                *(undefined4 *)(unaff_x19 + 0x418) = *(undefined4 *)(unaff_x20 + 0x7c);
                bVar15 = false;
                if (*(char *)(unaff_x20 + 0x38) != '\0') {
                  iVar17 = FUN_02681fdc(0);
                  bVar15 = iVar17 != 8;
                }
                *(bool *)(unaff_x19 + 0x185) = bVar15;
                *(undefined1 *)(unaff_x19 + 0x41c) = 0;
                lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                puVar7 = Unity_Mathematics_quaternion_TypeInfo;
                if (lVar19 != 0) {
                  FUN_02472864(lVar19,0x32,0);
                  *(long *)(unaff_x19 + 0x1b0) = lVar19;
                  lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                  puVar7 = System_OrdinalComparer_var;
                  if (lVar19 != 0) {
                    FUN_024641a8(lVar19,0x32,0);
                    *(long *)(unaff_x19 + 0x1b8) = lVar19;
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                    puVar25 = (undefined8 *)StringLiteral_2133;
                    if (lVar19 != 0) {
                      FUN_02431aec(lVar19,0xfa);
                      *(long *)(unaff_x19 + 0x238) = lVar19;
                      uVar18 = *(undefined8 *)(unaff_x19 + 0x448);
                      lVar19 = thunk_FUN_00d62348(*puVar25);
                      puVar7 = StringLiteral_115;
                      plVar24 = (long *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Dispose__
                      ;
                      if (lVar19 != 0) {
                        FUN_0246deac(lVar19,0x3ea,uVar18,0);
                        *(long *)(unaff_x19 + 0x240) = lVar19;
                        if (*(int *)(*plVar24 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar18 = FUN_026b2fe4(0);
                        uVar3 = *(undefined4 *)(unaff_x20 + 0x5c);
                        lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                        puVar7 = OVR_OpenVR_EVRScreenshotType_TypeInfo;
                        if (lVar19 != 0) {
                          FUN_0246fa70(lVar19,0x96,uVar18,uVar3,0);
                          *(long *)(unaff_x19 + 400) = lVar19;
                          uVar18 = FUN_026b2fe4(0);
                          uVar3 = *(undefined4 *)(unaff_x20 + 0x5c);
                          lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                          puVar7 = System_Func<STMQuadData,_string>_TypeInfo;
                          if (lVar19 != 0) {
                            FUN_0246ee30(lVar19,0x96,uVar18,uVar3,0);
                            *(long *)(unaff_x19 + 0x198) = lVar19;
                            uVar18 = *(undefined8 *)(unaff_x19 + 0x470);
                            uVar21 = *(undefined8 *)(unaff_x19 + 0x478);
                            lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                            if (lVar19 != 0) {
                              FUN_024740c4(lVar19,uVar18,uVar21,0);
                              iVar17 = *(int *)(unaff_x19 + 0x410);
                              *(long *)(unaff_x19 + 0x1a8) = lVar19;
                              if (iVar17 == 0) {
                                uVar18 = *(undefined8 *)(unaff_x19 + 0x448);
                                lVar19 = thunk_FUN_00d62348(*puVar25);
                                if (lVar19 == 0) goto LAB_0243f5d0;
                                FUN_0246deac(lVar19,200,uVar18,0);
                                iVar17 = *(int *)(unaff_x19 + 0x410);
                                *(long *)(unaff_x19 + 0x1a0) = lVar19;
                              }
                              if (iVar17 == 1) {
                                uVar21 = *(undefined8 *)(unaff_x19 + 0x458);
                                uVar22 = *(undefined8 *)(unaff_x19 + 0x460);
                                uVar18 = *(undefined8 *)(unaff_x19 + 0x468);
                                uVar23 = *(undefined8 *)(unaff_x19 + 0x430);
                                cVar6 = *(char *)(unaff_x19 + 0x185);
                                lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                          
                                                  RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo
                                                  );
                                if (lVar19 == 0) goto LAB_0243f5d0;
                                in_stack_000000d0 = uVar21;
                                in_stack_000000d8 = uVar22;
                                in_stack_000000e0 = uVar18;
                                in_stack_000000e8 = uVar23;
                                FUN_02457844(lVar19,&stack0x000000d0,cVar6 != '\0',0);
                                *(long *)(unaff_x19 + 0x408) = lVar19;
                                FUN_024575c4(lVar19,*(undefined1 *)(unaff_x20 + 0x80),0);
                                if (*(long *)(unaff_x19 + 0x408) == 0) goto LAB_0243f5d0;
                                *(undefined1 *)(*(long *)(unaff_x19 + 0x408) + 0x15) = 0;
                                puVar7 = 
                                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                                ;
                                if (*(int *)(*(long *)
                                              Method_System_Collections_Generic_Dictionary_Enumerator<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Dispose__
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar18 = FUN_026b2fe4(0);
                                uVar3 = *(undefined4 *)(unaff_x20 + 0x5c);
                                uVar21 = *(undefined8 *)*pauVar1;
                                uVar4 = *(undefined4 *)(unaff_x19 + 0x425);
                                uVar5 = *(undefined4 *)(lVar26 + 0x14);
                                uVar22 = *(undefined8 *)(unaff_x19 + 0x408);
                                lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                if (lVar26 == 0) goto LAB_0243f5d0;
                                FUN_02471a80(lVar26,0xd2,uVar18,uVar3,uVar21,uVar4,uVar5,uVar22);
                                *(long *)(unaff_x19 + 0x1c0) = lVar26;
                                uVar18 = *(undefined8 *)*pauVar1;
                                uVar3 = *(undefined4 *)(unaff_x19 + 0x425);
                                if (*(int *)(*(long *)
                                              RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                FUN_0245be48(uVar18,uVar3,0x60,0);
                                lVar26 = FUN_00da4fb8(*(undefined8 *)
                                                                                                              
                                                  Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_HandleEnabled__
                                                  ,3);
                                uStack0000000000000030 = 0;
                                FUN_026b1be4(&stack0x00000030,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>_TryGetValue__
                                             ,0);
                                puVar7 = Oculus_Interaction_Input_SyntheticHand_<>c_TypeInfo;
                                if (lVar26 == 0) goto LAB_0243f5d0;
                                if (*(int *)(lVar26 + 0x18) == 0) {
LAB_0243f5d4:
                    /* WARNING: Subroutine does not return */
                                  FUN_00da5194();
                                }
                                *(undefined4 *)(lVar26 + 0x20) = uStack0000000000000030;
                                in_stack_000000c8 = 0;
                                FUN_026b1be4(&stack0x000000c8,*(undefined8 *)puVar7,0);
                                puVar7 = PTR_DAT_033ed538;
                                if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_0243f5d4;
                                *(undefined4 *)(lVar26 + 0x24) = in_stack_000000c8;
                                in_stack_000000c0 = 0;
                                FUN_026b1be4(&stack0x000000c0,*(undefined8 *)puVar7,0);
                                if (*(uint *)(lVar26 + 0x18) < 3) goto LAB_0243f5d4;
                                *(undefined4 *)(lVar26 + 0x28) = in_stack_000000c0;
                                uVar18 = *(undefined8 *)(unaff_x19 + 0x448);
                                lVar19 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2133);
                                puVar7 = 
                                Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_localPosition__
                                ;
                                if (lVar19 == 0) goto LAB_0243f5d0;
                                FUN_0246deac(lVar19,0xd3,uVar18,0);
                                *(long *)(unaff_x19 + 0x1c8) = lVar19;
                                uVar18 = *(undefined8 *)(unaff_x19 + 0x408);
                                lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                if (lVar19 == 0) goto LAB_0243f5d0;
                                FUN_0247fd7c(lVar19,0xd4,uVar18,0,0);
                                *(long *)(unaff_x19 + 0x1d0) = lVar19;
                                uVar18 = *(undefined8 *)(unaff_x19 + 0x408);
                                lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                puVar7 = 
                                DigitalOpus_MB_Core_MB3_TextureCombiner_CreateAtlasesCoroutineResult_TypeInfo
                                ;
                                if (lVar19 == 0) goto LAB_0243f5d0;
                                FUN_0247fd7c(lVar19,0xd5,uVar18,1,0);
                                *(long *)(unaff_x19 + 0x1d8) = lVar19;
                                uVar18 = *(undefined8 *)(unaff_x19 + 0x408);
                                lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                if (lVar19 == 0) goto LAB_0243f5d0;
                                FUN_0246eb5c(lVar19,0xe6,uVar18,0);
                                *(long *)(unaff_x19 + 0x1e0) = lVar19;
                                uVar18 = FUN_026b2fe4(0);
                                uVar3 = *(undefined4 *)(unaff_x20 + 0x5c);
                                lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<JToken>_TypeInfo);
                                if (lVar19 == 0) goto LAB_0243f5d0;
                                FUN_024702e4(lVar19,*(undefined8 *)
                                                                                                          
                                                  Method_AutoExtensions_CanGetComponent<HoveringObject>__
                                             ,lVar26,1,0xfa,uVar18,uVar3);
                                *(long *)(unaff_x19 + 0x1e8) = lVar19;
                                plVar24 = (long *)
                                          Method_System_Collections_Generic_Dictionary_Enumerator<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Dispose__
                                ;
                                puVar25 = (undefined8 *)StringLiteral_2133;
                              }
                              if (*(int *)(*plVar24 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar18 = FUN_026b2fe4(0);
                              uVar3 = *(undefined4 *)(unaff_x20 + 0x5c);
                              uVar21 = *(undefined8 *)*pauVar1;
                              uVar4 = *(undefined4 *)(unaff_x19 + 0x425);
                              lVar26 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                      
                                                  System_Collections_Generic_List<JToken>_TypeInfo);
                              if (lVar26 != 0) {
                                FUN_024706f8(lVar26,9,1,0xfa,uVar18,uVar3,uVar21,uVar4);
                                *(long *)(unaff_x19 + 0x1f0) = lVar26;
                                uVar18 = *(undefined8 *)(unaff_x19 + 0x448);
                                lVar26 = thunk_FUN_00d62348(*puVar25);
                                puVar7 = 
                                Method_System_Collections_Generic_List<WitEntityKeywordInfo>_get_Count__
                                ;
                                if (lVar26 != 0) {
                                  FUN_0246deac(lVar26,400,uVar18,0);
                                  *(long *)(unaff_x19 + 0x200) = lVar26;
                                  lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                  puVar7 = OVR_OpenVR_IVROverlay__GetOverlayFlag_TypeInfo;
                                  if (lVar26 != 0) {
                                    FUN_02431240(lVar26,0x15e);
                                    *(long *)(unaff_x19 + 0x1f8) = lVar26;
                                    uVar18 = *(undefined8 *)(unaff_x19 + 0x450);
                                    uVar21 = *(undefined8 *)(unaff_x19 + 0x440);
                                    lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                    puVar7 = 
                                    Method_Unity_Burst_Intrinsics_X86_Sse4_2_ComputeStrCmpIntRes2<short>__
                                    ;
                                    if (lVar26 != 0) {
                                      FUN_0246d328(lVar26,400,uVar18,uVar21,0);
                                      *(long *)(unaff_x19 + 0x208) = lVar26;
                                      cVar6 = *(char *)(unaff_x20 + 0x70);
                                      lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                      if (lVar26 != 0) {
                                        FUN_02431788(lVar26,0x1c2,cVar6 != '\0');
                                        *(long *)(unaff_x19 + 0x210) = lVar26;
                                        uVar18 = FUN_026b2fec(0);
                                        uVar3 = *(undefined4 *)(unaff_x20 + 0x60);
                                        uVar21 = *(undefined8 *)*pauVar1;
                                        uVar4 = *(undefined4 *)(unaff_x19 + 0x425);
                                        lVar26 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                          
                                                  System_Collections_Generic_List<JToken>_TypeInfo);
                                        puVar7 = 
                                        Method_UnityEngine_Rendering_Universal_Internal_TileDepthRangePass_OnCameraCleanup__
                                        ;
                                        if (lVar26 != 0) {
                                          FUN_024706f8(lVar26,10,0,0x1c2,uVar18,uVar3,uVar21,uVar4);
                                          *(long *)(unaff_x19 + 0x218) = lVar26;
                                          lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                          puVar7 = 
                                          Method_MedleyHingedComboLock_CheckPuzzleComplete__;
                                          if (lVar26 != 0) {
                                            FUN_02431698(lVar26,0x226);
                                            *(long *)(unaff_x19 + 0x220) = lVar26;
                                            uVar18 = *(undefined8 *)(unaff_x20 + 0x40);
                                            uVar21 = *(undefined8 *)(unaff_x19 + 0x440);
                                            memset(&stack0x00000030,0,0x90);
                                            FUN_02431cf8(&stack0x00000030,uVar18,uVar21);
                                            memcpy((void *)(unaff_x19 + 0x480),&stack0x00000030,0x90
                                                  );
                                            lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                            puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_7__;
                                            if (lVar26 != 0) {
                                              FUN_02430c78(lVar26,1000);
                                              *(long *)(unaff_x19 + 0x230) = lVar26;
                                              uVar18 = *(undefined8 *)(unaff_x19 + 0x440);
                                              lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                              puVar7 = 
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vabds_f32__;
                                              if (lVar26 != 0) {
                                                FUN_02470ed0(lVar26,0x3e9,uVar18,0);
                                                *(long *)(unaff_x19 + 0x228) = lVar26;
                                                lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                                                puVar14 = StringLiteral_6311;
                                                puVar13 = StringLiteral_1130;
                                                puVar12 = StringLiteral_672;
                                                puVar11 = StringLiteral_127;
                                                puVar10 = 
                                                Method_Newtonsoft_Json_Linq_JToken_WriteToAsync__;
                                                puVar9 = 
                                                Method_System_Collections_Generic_List<RectTransform>__ctor__
                                                ;
                                                puVar8 = 
                                                Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__
                                                ;
                                                puVar7 = 
                                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
                                                ;
                                                if (lVar26 != 0) {
                                                  FUN_024803cc(lVar26,*(undefined8 *)
                                                                       PTR_DAT_033f53e0,0);
                                                  *(long *)(unaff_x19 + 0x248) = lVar26;
                                                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                  }
                                                  FUN_02431dd4(unaff_x19 + 0x2e0,
                                                               *(undefined8 *)puVar14);
                                                  FUN_02431dd4(unaff_x19 + 0x310,
                                                               *(undefined8 *)puVar9);
                                                  FUN_02431dd4(unaff_x19 + 0x340,
                                                               *(undefined8 *)puVar10);
                                                  FUN_02431dd4(unaff_x19 + 0x370,
                                                               *(undefined8 *)puVar13);
                                                  FUN_02431dd4(unaff_x19 + 0x3a0,
                                                               *(undefined8 *)puVar12);
                                                  FUN_02431dd4(unaff_x19 + 0x3d0,
                                                               *(undefined8 *)puVar7);
                                                  lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar11
                                                                             );
                                                  if (lVar26 != 0) {
                                                    FUN_02423ad4(lVar26,0);
                                                    puVar7 = StringLiteral_5516;
                                                    if (*(int *)(*(long *)StringLiteral_5516 + 0xe0)
                                                        == 0) {
                                                      thunk_FUN_00d32864();
                                                    }
                                                    *(long *)(unaff_x19 + 0xe0) = lVar26;
                                                    if (*(int *)(unaff_x19 + 0x410) == 1) {
                                                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                                                        thunk_FUN_00d32864();
                                                        lVar26 = *(long *)(unaff_x19 + 0xe0);
                                                      }
                                                      puVar7 = 
                                                  System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo
                                                  ;
                                                  if (lVar26 == 0) goto LAB_0243f5d0;
                                                  *(undefined1 *)(lVar26 + 0x11) = 0;
                                                  puVar8 = 
                                                  Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<TextArea>__
                                                  ;
                                                  uVar18 = FUN_00da4fb8(*(undefined8 *)puVar7,3);
                                                  FUN_016a34e8(uVar18,*(undefined8 *)puVar8,0);
                                                  *(undefined8 *)(unaff_x19 + 0xe8) = uVar18;
                                                  }
                                                  puVar7 = 
                                                  Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                                  ;
                                                  lVar26 = *(long *)
                                                  Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                                  ;
                                                  if (*(int *)(lVar26 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar26 = *(long *)puVar7;
                                                  }
                                                  *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1c) =
                                                       DAT_028ab160;
                                                  TMPro_TMP_Dropdown__OnPointerClick(0);
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0243f5d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


