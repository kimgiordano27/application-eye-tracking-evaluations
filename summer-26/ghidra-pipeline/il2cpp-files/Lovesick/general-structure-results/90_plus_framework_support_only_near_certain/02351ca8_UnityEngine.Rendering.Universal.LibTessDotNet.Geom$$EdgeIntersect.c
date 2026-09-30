/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.Geom$$EdgeIntersect
ENTRY_POINT: 02351ca8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02351ecc) */

undefined8 UnityEngine_Rendering_Universal_LibTessDotNet_Geom__EdgeIntersect(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  long unaff_x20;
  undefined8 *puVar25;
  undefined8 *unaff_x22;
  int iVar26;
  bool bVar27;
  undefined8 unaff_x25;
  ulong unaff_x27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float unaff_s8;
  float fVar33;
  float unaff_s10;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_s14;
  float fVar38;
  undefined1 auVar39 [16];
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  int iStack0000000000000120;
  int iStack0000000000000124;
  int iStack0000000000000128;
  undefined4 uStack000000000000012c;
  
  FUN_01320f6c();
  lVar12 = FUN_0230fea8();
  lVar13 = FUN_0230ffd0();
  lVar14 = thunk_FUN_00d62348(*unaff_x22);
  puVar7 = System_Collections_Generic_List<ulong>_TypeInfo;
  if (lVar14 != 0) {
    FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033f6e48);
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar15 != 0) {
      FUN_01298da0(lVar15,*(undefined8 *)StringLiteral_8681);
      puVar7 = 
      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
      ;
      if (lVar12 != 0) {
        uVar11 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                           (lVar12,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                           );
        FUN_0132138c();
        if (_uStack00000000000000b0 != 0) {
          fVar35 = *(float *)(_uStack00000000000000b0 + 0x10);
          fVar38 = *(float *)(_uStack00000000000000b0 + 0x14);
          fVar36 = *(float *)(_uStack00000000000000b0 + 0x18);
          FUN_0132138c();
          if (_uStack00000000000000b0 != 0) {
            fVar28 = *(float *)(_uStack00000000000000b0 + 0x10);
            fVar29 = *(float *)(_uStack00000000000000b0 + 0x14);
            fVar30 = *(float *)(_uStack00000000000000b0 + 0x18);
            FUN_0132138c();
            if (_uStack00000000000000b0 != 0) {
              fVar37 = *(float *)(_uStack00000000000000b0 + 0x10);
              fVar33 = *(float *)(_uStack00000000000000b0 + 0x14);
              fVar34 = *(float *)(_uStack00000000000000b0 + 0x18);
              if (DAT_0377518c == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_0377518c = '\x01';
              }
              puVar8 = System_Threading_Timer_TimerComparer_TypeInfo;
              fVar35 = unaff_s10 - fVar35;
              fVar38 = unaff_s8 - fVar38;
              fVar36 = unaff_s14 - fVar36;
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              fVar28 = fVar28 - fVar37;
              fVar29 = fVar29 - fVar33;
              fVar30 = fVar30 - fVar34;
              if (DAT_03775508 == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_03775508 = '\x01';
              }
              fVar34 = fVar36 * fVar36 + fVar35 * fVar35 + fVar38 * fVar38;
              fVar33 = fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29;
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              fVar37 = SQRT(fVar34 * fVar33);
              fVar32 = 0.0;
              if (DAT_028aa5c8 <= fVar37) {
                fVar37 = (fVar36 * fVar30 + fVar35 * fVar28 + fVar38 * fVar29) / fVar37;
                if (fVar37 < -1.0) {
                  fVar37 = -1.0;
                }
                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                dVar31 = acos((double)fVar37);
                fVar32 = (float)dVar31 * DAT_028aa158;
              }
              fVar36 = cosf(fVar32 * DAT_028aa044);
              if (DAT_0377518c == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_0377518c = '\x01';
              }
              puVar10 = StringLiteral_14183;
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              puVar9 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__;
              puVar8 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
              FUN_0132138c(unaff_x20,unaff_x27 & 0xffffffff,&stack0x000000b0,*(undefined8 *)puVar7);
              lVar17 = _uStack00000000000000b0;
              FUN_0132138c(unaff_x20,unaff_x27 >> 0x20,&stack0x000000b0,*(undefined8 *)puVar7);
              uVar16 = FUN_0233bc34((SQRT(fVar34) * fVar36) / SQRT(fVar33),lVar17,
                                    _uStack00000000000000b0,0);
              if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar10);
              }
              lVar17 = FUN_0234e084();
              uStack00000000000000b0 = (int)unaff_x27;
              FUN_01299bc0(lVar12,&stack0x000000b0,&stack0x00000090,*(undefined8 *)puVar8);
              uVar18 = _uStack0000000000000090;
              _uStack00000000000000b0 = CONCAT44(uStack00000000000000b4,(int)(unaff_x27 >> 0x20));
              FUN_01299bc0(lVar12,&stack0x000000b0,&stack0x00000090,*(undefined8 *)puVar8);
              uVar23 = _uStack0000000000000090;
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_022f6fa4(&stack0x00000120,uVar18 & 0xffffffff,uVar23 & 0xffffffff,0);
              puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__;
              if (lVar17 != 0) {
                FUN_01323390(lVar17,&stack0x000000b0,*(undefined8 *)StringLiteral_11168);
                in_stack_00000108 = in_stack_000000b8;
                in_stack_00000100 = _uStack00000000000000b0;
                in_stack_00000118 = in_stack_000000c8;
                in_stack_00000110 = in_stack_000000c0;
                while( true ) {
                  uVar18 = FUN_012b894c(&stack0x00000100,*(undefined8 *)PTR_DAT_033f0610);
                  if ((uVar18 & 1) == 0) break;
                  auVar39 = FUN_00ca15cc(&stack0x00000100,
                                         *(undefined8 *)
                                          Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                                        );
                  _in_stack_000000f0 = auVar39;
                  lVar17 = FUN_00ca13c0(&stack0x000000f0,
                                        *(undefined8 *)
                                         Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                                       );
                  uVar18 = FUN_0129eff4(lVar15,lVar17,&stack0x000000e8,
                                        *(undefined8 *)StringLiteral_11630);
                  if ((uVar18 & 1) == 0) {
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_022fb2d8(lVar19,0);
                    in_stack_000000e8 = lVar19;
                    uVar20 = FUN_00da4fb8(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,0);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar1 = *(undefined4 *)(lVar17 + 0x48);
                    in_stack_00000088 = *(undefined8 *)(lVar17 + 0x34);
                    in_stack_00000080 = *(undefined8 *)(lVar17 + 0x2c);
                    in_stack_00000078 = *(undefined8 *)(lVar17 + 0x24);
                    in_stack_00000070 = *(long *)(lVar17 + 0x1c);
                    in_stack_00000098 = 0;
                    _uStack0000000000000090 = 0;
                    in_stack_000000a8 = 0;
                    in_stack_000000a0 = 0;
                    _uStack00000000000000b0 = in_stack_00000070;
                    in_stack_000000b8 = in_stack_00000078;
                    in_stack_000000c0 = in_stack_00000080;
                    in_stack_000000c8 = in_stack_00000088;
                    FUN_022eff30(&stack0x00000090,&stack0x00000070,0);
                    uVar2 = *(undefined4 *)(lVar17 + 0x18);
                    uVar3 = *(undefined4 *)(lVar17 + 0x54);
                    cVar6 = *(char *)(lVar17 + 0x4c);
                    lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                               );
                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    in_stack_00000058 = in_stack_00000098;
                    in_stack_00000050 = _uStack0000000000000090;
                    in_stack_00000068 = in_stack_000000a8;
                    in_stack_00000060 = in_stack_000000a0;
                    FUN_022f986c(lVar21,uVar20,uVar1,&stack0x00000050,uVar2,uVar3,0xffffffff,
                                 cVar6 != '\0');
                    lVar22 = in_stack_000000e8;
                    *(long *)(lVar19 + 0x10) = lVar21;
                    uVar20 = FUN_022f8990(lVar17,0);
                    uVar20 = FUN_010b973c(unaff_x20,uVar20,
                                          *(undefined8 *)
                                           System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo
                                         );
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo)
                    ;
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01320f6c(lVar19,uVar20,*(undefined8 *)StringLiteral_9754);
                    lVar21 = in_stack_000000e8;
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    *(long *)(lVar22 + 0x18) = lVar19;
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                 UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                               );
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01320e50(lVar19,*(undefined8 *)PTR_DAT_033f6e48);
                    lVar22 = in_stack_000000e8;
                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    *(long *)(lVar21 + 0x20) = lVar19;
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                 UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                               );
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01320e50(lVar19,*(undefined8 *)PTR_DAT_033f6e48);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    *(long *)(lVar22 + 0x28) = lVar19;
                    lVar19 = FUN_022f8990(lVar17,0);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (0 < (int)*(ulong *)(lVar19 + 0x18)) {
                      uVar18 = 0;
                      uVar23 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
                      do {
                        if (uVar23 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        uVar1 = *(undefined4 *)(lVar19 + 0x20 + uVar18 * 4);
                        _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
                        uVar23 = FUN_0129eff4(lVar12,&stack0x00000090,(long)&stack0x000000e0 + 4,
                                              *(undefined8 *)puVar7);
                        if ((uVar23 & 1) != 0) {
                          if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x20),uStack00000000000000e4,
                                       *(undefined8 *)StringLiteral_4747);
                        }
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
                        uVar23 = FUN_0129eff4(lVar13,&stack0x00000090,(long)&stack0x000000e0 + 4,
                                              *(undefined8 *)puVar7);
                        if ((uVar23 & 1) != 0) {
                          if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (*(long *)(in_stack_000000e8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x28),uStack00000000000000e4,
                                       *(undefined8 *)StringLiteral_4747);
                        }
                        uVar23 = (ulong)*(uint *)(lVar19 + 0x18);
                        uVar18 = uVar18 + 1;
                      } while ((long)uVar18 < (long)(int)*(uint *)(lVar19 + 0x18));
                    }
                    uVar20 = FUN_022f8990(lVar17,0);
                    FUN_01322050(lVar14,uVar20,*(undefined8 *)StringLiteral_2811);
                    FUN_0129a054(lVar15,lVar17,in_stack_000000e8,*(undefined8 *)StringLiteral_5269);
                  }
                  puVar25 = (undefined8 *)
                            Method_System_Collections_Generic_List<Grabbable>_Contains__;
                  if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(long *)(in_stack_000000e8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_00ca0af8(*(long *)(in_stack_000000e8 + 0x18),uVar16,
                               *(undefined8 *)OVRManager_XrApi_TypeInfo);
                  if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x20),uVar11,
                               *(undefined8 *)StringLiteral_4747);
                  if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(long *)(in_stack_000000e8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_00ac20f0(*(long *)(in_stack_000000e8 + 0x28),0xffffffff,
                               *(undefined8 *)StringLiteral_4747);
                  lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                               Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01320e50(lVar19,*(undefined8 *)PTR_DAT_033ee588);
                  lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                               UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                             );
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01320e50(lVar21,*(undefined8 *)PTR_DAT_033f6e48);
                  if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar17 = FUN_0233dbd8(lVar17,0);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (0 < *(int *)(lVar17 + 0x18)) {
                    iVar24 = 0;
                    bVar27 = true;
                    do {
                      FUN_0132138c(lVar17,iVar24,&stack0x00000090,*puVar25);
                      uVar18 = _uStack0000000000000090;
                      uVar1 = uStack0000000000000090;
                      FUN_0132138c(lVar17,iVar24,&stack0x00000090,*puVar25);
                      uVar2 = uStack0000000000000094;
                      FUN_0132138c(unaff_x20,uVar18 & 0xffffffff,&stack0x00000090,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                  );
                      FUN_00ca0af8(lVar19,_uStack0000000000000090,
                                   *(undefined8 *)OVRManager_XrApi_TypeInfo);
                      _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
                      uVar18 = FUN_0129eff4(lVar12,&stack0x00000090,&stack0x000000e0,
                                            *(undefined8 *)puVar7);
                      if ((uVar18 & 1) != 0) {
                        FUN_00ac20f0(lVar21,uStack00000000000000e0,*(undefined8 *)StringLiteral_4747
                                    );
                      }
                      iVar4 = iStack0000000000000120;
                      if (bVar27) {
                        _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
                        FUN_01299bc0(lVar12,&stack0x00000090,&stack0x00000128,*(undefined8 *)puVar8)
                        ;
                        iVar26 = iStack0000000000000124;
                        if (iVar4 != iStack0000000000000128) goto LAB_0235257c;
                        _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar2);
                        FUN_01299bc0(lVar12,&stack0x00000090,&stack0x00000128,*(undefined8 *)puVar8)
                        ;
                        if (iVar26 != iStack0000000000000128) goto LAB_0235257c;
LAB_023525cc:
                        if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        lVar22 = *(long *)(in_stack_000000e8 + 0x18);
                        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_0132138c(lVar22,*(int *)(lVar22 + 0x18) + -1,&stack0x00000090,
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                    );
                        FUN_00ca0af8(lVar19,_uStack0000000000000090,
                                     *(undefined8 *)OVRManager_XrApi_TypeInfo);
                        FUN_00ac20f0(lVar21,uVar11,*(undefined8 *)StringLiteral_4747);
                        bVar27 = false;
                      }
                      else {
LAB_0235257c:
                        iVar4 = iStack0000000000000120;
                        _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar2);
                        FUN_01299bc0(lVar12,&stack0x00000090,&stack0x00000128,*(undefined8 *)puVar8)
                        ;
                        iVar26 = iStack0000000000000124;
                        if (iVar4 == iStack0000000000000128) {
                          _uStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar1);
                          FUN_01299bc0(lVar12,&stack0x00000090,&stack0x00000128,
                                       *(undefined8 *)puVar8);
                          if (iVar26 == iStack0000000000000128) goto LAB_023525cc;
                        }
                      }
                      iVar24 = iVar24 + 1;
                      puVar25 = (undefined8 *)
                                Method_System_Collections_Generic_List<Grabbable>_Contains__;
                    } while (iVar24 < *(int *)(lVar17 + 0x18));
                  }
                  if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  *(long *)(in_stack_000000e8 + 0x18) = lVar19;
                  *(long *)(in_stack_000000e8 + 0x20) = lVar21;
                }
                FUN_012b8948(&stack0x00000100,
                             *(undefined8 *)
                              Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                            );
                uVar20 = FUN_012998a8(lVar15,*(undefined8 *)StringLiteral_14358);
                lVar17 = FUN_010dfe04(uVar20,*(undefined8 *)StringLiteral_2051);
                uVar20 = FUN_01299a34(lVar15,*(undefined8 *)StringLiteral_12114);
                lVar15 = FUN_010dfe04(uVar20,*(undefined8 *)Method_System_Decimal_ToInt64__);
                if (lVar17 != 0) {
                  if (0 < *(int *)(lVar17 + 0x18)) {
                    iVar24 = 0;
                    do {
                      FUN_0132138c(lVar17,iVar24,&stack0x000000b0,*(undefined8 *)StringLiteral_10196
                                  );
                      lVar19 = _uStack00000000000000b0;
                      if (lVar15 == 0) goto LAB_02352944;
                      FUN_0132138c(lVar15,iVar24,&stack0x000000b0,*(undefined8 *)StringLiteral_4463)
                      ;
                      lVar21 = _uStack00000000000000b0;
                      if (_uStack00000000000000b0 == 0) goto LAB_02352944;
                      iVar4 = *(int *)(unaff_x20 + 0x18);
                      uVar18 = FUN_0237620c(*(undefined8 *)(_uStack00000000000000b0 + 0x18),
                                            &stack0x000000d8,0,0,0);
                      uVar20 = in_stack_000000d8;
                      if ((uVar18 & 1) != 0) {
                        lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                                  );
                        if (lVar22 == 0) goto LAB_02352944;
                        FUN_022f9708(lVar22,uVar20,0);
                        *(long *)(lVar21 + 0x10) = lVar22;
                        if (lVar19 == 0) goto LAB_02352944;
                        *(undefined4 *)(lVar22 + 0x48) = *(undefined4 *)(lVar19 + 0x48);
                        FUN_022fa0bc(lVar22,iVar4,0);
                        FUN_022f9954(lVar19,*(undefined8 *)(lVar21 + 0x10),0);
                        puVar8 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                        puVar7 = 
                        Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                        ;
                        lVar19 = *(long *)(lVar21 + 0x18);
                        if (lVar19 == 0) goto LAB_02352944;
                        iVar26 = 0;
                        while (iVar5 = *(int *)(lVar19 + 0x18), iVar26 < iVar5) {
                          if (*(long *)(lVar21 + 0x20) == 0) goto LAB_02352944;
                          FUN_0132138c(*(long *)(lVar21 + 0x20),iVar26,&stack0x000000b0,
                                       *(undefined8 *)puVar7);
                          uStack000000000000012c = uStack00000000000000b0;
                          _uStack00000000000000b0 = CONCAT44(uStack00000000000000b4,iVar4 + iVar26);
                          FUN_0129a054(lVar12,&stack0x000000b0,(long)&stack0x00000128 + 4,
                                       *(undefined8 *)puVar8);
                          lVar19 = *(long *)(lVar21 + 0x18);
                          iVar26 = iVar26 + 1;
                          if (lVar19 == 0) goto LAB_02352944;
                        }
                        if (*(long *)(lVar21 + 0x28) == 0) goto LAB_02352944;
                        if ((*(int *)(*(long *)(lVar21 + 0x28) + 0x18) == iVar5) && (0 < iVar5)) {
                          iVar26 = 0;
                          do {
                            if (*(long *)(lVar21 + 0x28) == 0) goto LAB_02352944;
                            FUN_0132138c(*(long *)(lVar21 + 0x28),iVar26,&stack0x000000b0,
                                         *(undefined8 *)puVar7);
                            if (lVar13 == 0) goto LAB_02352944;
                            uStack000000000000012c = uStack00000000000000b0;
                            _uStack00000000000000b0 =
                                 CONCAT44(uStack00000000000000b4,iVar4 + iVar26);
                            FUN_0129a054(lVar13,&stack0x000000b0,(long)&stack0x00000128 + 4,
                                         *(undefined8 *)puVar8);
                            lVar19 = *(long *)(lVar21 + 0x18);
                            if (lVar19 == 0) goto LAB_02352944;
                            iVar26 = iVar26 + 1;
                          } while (iVar26 < *(int *)(lVar19 + 0x18));
                        }
                        FUN_01322050(unaff_x20,lVar19,
                                     *(undefined8 *)
                                      Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
                      }
                      iVar24 = iVar24 + 1;
                    } while (iVar24 < *(int *)(lVar17 + 0x18));
                  }
                  uVar20 = FUN_010d96e0(lVar14,*(undefined8 *)PTR_DAT_033eb5c8);
                  uVar20 = FUN_010dfe04(uVar20,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                       );
                  FUN_02310a38(unaff_x25,unaff_x20,0,0);
                  FUN_0230ff4c(unaff_x25,lVar12,0);
                  FUN_02310070(unaff_x25,lVar13,0);
                  FUN_02350998(unaff_x25,uVar20);
                  return uVar16;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02352944:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


