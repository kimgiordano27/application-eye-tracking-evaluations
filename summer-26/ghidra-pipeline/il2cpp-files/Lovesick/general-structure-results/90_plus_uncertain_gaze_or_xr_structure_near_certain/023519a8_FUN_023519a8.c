/*
FUNCTION_NAME: FUN_023519a8
ENTRY_POINT: 023519a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 249
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02351ecc) */

undefined8 FUN_023519a8(float param_1,float param_2,float param_3,long param_4,ulong param_5)

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
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  ulong local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined1 local_e0 [16];
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_a8;
  undefined4 local_a4;
  
  puVar7 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d27 & 1) == 0) {
    thunk_FUN_00d48444(System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5269);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(StringLiteral_11630);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    thunk_FUN_00d48444(StringLiteral_8681);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                      );
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14358);
    thunk_FUN_00d48444(StringLiteral_12114);
    thunk_FUN_00d48444(System_Collections_Generic_List<ulong>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__);
    thunk_FUN_00d48444(StringLiteral_14183);
    thunk_FUN_00d48444(PTR_DAT_033eb5c8);
    thunk_FUN_00d48444(Method_System_Decimal_ToInt64__);
    thunk_FUN_00d48444(StringLiteral_2051);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
    thunk_FUN_00d48444(
                      Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0610);
    thunk_FUN_00d48444(
                      Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_2811);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11168);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector2>_Equals__);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(StringLiteral_10196);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_4463);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                      );
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d27 = 1;
  }
  local_b0 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_0268b4e0(param_4,0,0);
  puVar7 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if ((uVar12 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar21 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                               );
    FUN_016ec5b8(uVar13,uVar21,0);
    uVar21 = thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARInputManager_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar21);
  }
  if (param_4 != 0) {
    uVar13 = FUN_0230bd48(param_4,0,0);
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    puVar7 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
    if (lVar14 != 0) {
      FUN_01320f6c(lVar14,uVar13,*(undefined8 *)StringLiteral_9754);
      lVar15 = FUN_0230fea8(param_4,0);
      lVar16 = FUN_0230ffd0(param_4,0);
      lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
      puVar7 = System_Collections_Generic_List<ulong>_TypeInfo;
      if (lVar17 != 0) {
        FUN_01320e50(lVar17,*(undefined8 *)PTR_DAT_033f6e48);
        lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
        if (lVar18 != 0) {
          FUN_01298da0(lVar18,*(undefined8 *)StringLiteral_8681);
          puVar7 = 
          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
          ;
          if (lVar15 != 0) {
            uVar11 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                               (lVar15,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                               );
            FUN_0132138c(lVar14,param_5 & 0xffffffff,&local_120,*(undefined8 *)puVar7);
            if (local_120 != 0) {
              fVar35 = *(float *)(local_120 + 0x10);
              fVar38 = *(float *)(local_120 + 0x14);
              fVar36 = *(float *)(local_120 + 0x18);
              FUN_0132138c(lVar14,param_5 >> 0x20,&local_120,*(undefined8 *)puVar7);
              if (local_120 != 0) {
                fVar29 = *(float *)(local_120 + 0x10);
                fVar30 = *(float *)(local_120 + 0x14);
                fVar31 = *(float *)(local_120 + 0x18);
                FUN_0132138c(lVar14,param_5 & 0xffffffff,&local_120,*(undefined8 *)puVar7);
                if (local_120 != 0) {
                  fVar37 = *(float *)(local_120 + 0x10);
                  fVar33 = *(float *)(local_120 + 0x14);
                  fVar34 = *(float *)(local_120 + 0x18);
                  if (DAT_0377518c == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_0377518c = '\x01';
                  }
                  puVar8 = System_Threading_Timer_TimerComparer_TypeInfo;
                  param_1 = param_1 - fVar35;
                  param_2 = param_2 - fVar38;
                  param_3 = param_3 - fVar36;
                  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0)
                  {
                    thunk_FUN_00d32864();
                  }
                  fVar29 = fVar29 - fVar37;
                  fVar30 = fVar30 - fVar33;
                  fVar31 = fVar31 - fVar34;
                  if (DAT_03775508 == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_03775508 = '\x01';
                  }
                  fVar36 = param_3 * param_3 + param_1 * param_1 + param_2 * param_2;
                  fVar35 = fVar31 * fVar31 + fVar29 * fVar29 + fVar30 * fVar30;
                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  fVar38 = SQRT(fVar36 * fVar35);
                  fVar33 = 0.0;
                  if (DAT_028aa5c8 <= fVar38) {
                    fVar38 = (param_3 * fVar31 + param_1 * fVar29 + param_2 * fVar30) / fVar38;
                    if (fVar38 < -1.0) {
                      fVar38 = -1.0;
                    }
                    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    dVar32 = acos((double)fVar38);
                    fVar33 = (float)dVar32 * DAT_028aa158;
                  }
                  fVar38 = cosf(fVar33 * DAT_028aa044);
                  if (DAT_0377518c == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_0377518c = '\x01';
                  }
                  puVar10 = StringLiteral_14183;
                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  puVar9 = 
                  Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__;
                  puVar8 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                  FUN_0132138c(lVar14,param_5 & 0xffffffff,&local_120,*(undefined8 *)puVar7);
                  lVar19 = local_120;
                  FUN_0132138c(lVar14,param_5 >> 0x20,&local_120,*(undefined8 *)puVar7);
                  uVar13 = FUN_0233bc34((SQRT(fVar36) * fVar38) / SQRT(fVar35),lVar19,local_120,0);
                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar10);
                  }
                  lVar19 = FUN_0234e084(param_4,param_5);
                  local_120._0_4_ = (undefined4)param_5;
                  FUN_01299bc0(lVar15,&local_120,&local_140,*(undefined8 *)puVar8);
                  uVar12 = local_140;
                  local_120 = CONCAT44(local_120._4_4_,(int)(param_5 >> 0x20));
                  FUN_01299bc0(lVar15,&local_120,&local_140,*(undefined8 *)puVar8);
                  uVar24 = local_140;
                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_022f6fa4(&local_b0,uVar12 & 0xffffffff,uVar24 & 0xffffffff,0);
                  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__;
                  if (lVar19 != 0) {
                    FUN_01323390(lVar19,&local_120,*(undefined8 *)StringLiteral_11168);
                    uStack_c8 = uStack_118;
                    local_d0 = local_120;
                    uStack_b8 = uStack_108;
                    uStack_c0 = uStack_110;
                    while( true ) {
                      uVar12 = FUN_012b894c(&local_d0,*(undefined8 *)PTR_DAT_033f0610);
                      if ((uVar12 & 1) == 0) break;
                      auVar39 = FUN_00ca15cc(&local_d0,
                                             *(undefined8 *)
                                              Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                                            );
                      local_e0 = auVar39;
                      lVar19 = FUN_00ca13c0(local_e0,*(undefined8 *)
                                                                                                            
                                                  Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                                           );
                      uVar12 = FUN_0129eff4(lVar18,lVar19,&local_e8,
                                            *(undefined8 *)StringLiteral_11630);
                      if ((uVar12 & 1) == 0) {
                        lVar20 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_022fb2d8(lVar20,0);
                        local_e8 = lVar20;
                        uVar21 = FUN_00da4fb8(*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                              0);
                        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar1 = *(undefined4 *)(lVar19 + 0x48);
                        uStack_148 = *(undefined8 *)(lVar19 + 0x34);
                        uStack_150 = *(undefined8 *)(lVar19 + 0x2c);
                        uStack_158 = *(undefined8 *)(lVar19 + 0x24);
                        local_160 = *(long *)(lVar19 + 0x1c);
                        uStack_138 = 0;
                        local_140 = 0;
                        uStack_128 = 0;
                        uStack_130 = 0;
                        local_120 = local_160;
                        uStack_118 = uStack_158;
                        uStack_110 = uStack_150;
                        uStack_108 = uStack_148;
                        FUN_022eff30(&local_140,&local_160,0);
                        uVar2 = *(undefined4 *)(lVar19 + 0x18);
                        uVar3 = *(undefined4 *)(lVar19 + 0x54);
                        cVar6 = *(char *)(lVar19 + 0x4c);
                        lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                                  );
                        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uStack_178 = uStack_138;
                        local_180 = local_140;
                        uStack_168 = uStack_128;
                        uStack_170 = uStack_130;
                        FUN_022f986c(lVar22,uVar21,uVar1,&local_180,uVar2,uVar3,0xffffffff,
                                     cVar6 != '\0',0);
                        lVar23 = local_e8;
                        *(long *)(lVar20 + 0x10) = lVar22;
                        uVar21 = FUN_022f8990(lVar19,0);
                        uVar21 = FUN_010b973c(lVar14,uVar21,
                                              *(undefined8 *)
                                               System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo
                                             );
                        lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo
                                                  );
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01320f6c(lVar20,uVar21,*(undefined8 *)StringLiteral_9754);
                        lVar22 = local_e8;
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        *(long *)(lVar23 + 0x18) = lVar20;
                        lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01320e50(lVar20,*(undefined8 *)PTR_DAT_033f6e48);
                        lVar23 = local_e8;
                        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        *(long *)(lVar22 + 0x20) = lVar20;
                        lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01320e50(lVar20,*(undefined8 *)PTR_DAT_033f6e48);
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        *(long *)(lVar23 + 0x28) = lVar20;
                        lVar20 = FUN_022f8990(lVar19,0);
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                          uVar12 = 0;
                          uVar24 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                          do {
                            if (uVar24 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            uVar1 = *(undefined4 *)(lVar20 + 0x20 + uVar12 * 4);
                            local_140 = CONCAT44(local_140._4_4_,uVar1);
                            uVar24 = FUN_0129eff4(lVar15,&local_140,(long)&local_f0 + 4,
                                                  *(undefined8 *)puVar7);
                            if ((uVar24 & 1) != 0) {
                              if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(long *)(local_e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00ac20f0(*(long *)(local_e8 + 0x20),local_f0._4_4_,
                                           *(undefined8 *)StringLiteral_4747);
                            }
                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            local_140 = CONCAT44(local_140._4_4_,uVar1);
                            uVar24 = FUN_0129eff4(lVar16,&local_140,(long)&local_f0 + 4,
                                                  *(undefined8 *)puVar7);
                            if ((uVar24 & 1) != 0) {
                              if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(long *)(local_e8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00ac20f0(*(long *)(local_e8 + 0x28),local_f0._4_4_,
                                           *(undefined8 *)StringLiteral_4747);
                            }
                            uVar24 = (ulong)*(uint *)(lVar20 + 0x18);
                            uVar12 = uVar12 + 1;
                          } while ((long)uVar12 < (long)(int)*(uint *)(lVar20 + 0x18));
                        }
                        uVar21 = FUN_022f8990(lVar19,0);
                        FUN_01322050(lVar17,uVar21,*(undefined8 *)StringLiteral_2811);
                        FUN_0129a054(lVar18,lVar19,local_e8,*(undefined8 *)StringLiteral_5269);
                      }
                      puVar26 = (undefined8 *)
                                Method_System_Collections_Generic_List<Grabbable>_Contains__;
                      if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(local_e8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_00ca0af8(*(long *)(local_e8 + 0x18),uVar13,
                                   *(undefined8 *)OVRManager_XrApi_TypeInfo);
                      if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(local_e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_00ac20f0(*(long *)(local_e8 + 0x20),uVar11,
                                   *(undefined8 *)StringLiteral_4747);
                      if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(local_e8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_00ac20f0(*(long *)(local_e8 + 0x28),0xffffffff,
                                   *(undefined8 *)StringLiteral_4747);
                      lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo
                                                 );
                      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01320e50(lVar20,*(undefined8 *)PTR_DAT_033ee588);
                      lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                 );
                      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01320e50(lVar22,*(undefined8 *)PTR_DAT_033f6e48);
                      if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) ==
                          0) {
                        thunk_FUN_00d32864();
                      }
                      lVar19 = FUN_0233dbd8(lVar19,0);
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (0 < *(int *)(lVar19 + 0x18)) {
                        iVar25 = 0;
                        bVar28 = true;
                        do {
                          FUN_0132138c(lVar19,iVar25,&local_140,*puVar26);
                          uVar12 = local_140;
                          uVar1 = (undefined4)local_140;
                          FUN_0132138c(lVar19,iVar25,&local_140,*puVar26);
                          uVar2 = local_140._4_4_;
                          FUN_0132138c(lVar14,uVar12 & 0xffffffff,&local_140,
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                      );
                          FUN_00ca0af8(lVar20,local_140,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                          local_140 = CONCAT44(local_140._4_4_,uVar1);
                          uVar12 = FUN_0129eff4(lVar15,&local_140,&local_f0,*(undefined8 *)puVar7);
                          if ((uVar12 & 1) != 0) {
                            FUN_00ac20f0(lVar22,local_f0 & 0xffffffff,
                                         *(undefined8 *)StringLiteral_4747);
                          }
                          if (bVar28) {
                            iVar4 = (int)local_b0;
                            local_140 = CONCAT44(local_140._4_4_,uVar1);
                            FUN_01299bc0(lVar15,&local_140,&local_a8,*(undefined8 *)puVar8);
                            if (iVar4 != local_a8) goto LAB_0235257c;
                            iVar4 = local_b0._4_4_;
                            local_140 = CONCAT44(local_140._4_4_,uVar2);
                            FUN_01299bc0(lVar15,&local_140,&local_a8,*(undefined8 *)puVar8);
                            if (iVar4 != local_a8) goto LAB_0235257c;
LAB_023525cc:
                            if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar23 = *(long *)(local_e8 + 0x18);
                            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_0132138c(lVar23,*(int *)(lVar23 + 0x18) + -1,&local_140,
                                         *(undefined8 *)
                                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                        );
                            FUN_00ca0af8(lVar20,local_140,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                            FUN_00ac20f0(lVar22,uVar11,*(undefined8 *)StringLiteral_4747);
                            bVar28 = false;
                          }
                          else {
LAB_0235257c:
                            iVar4 = (int)local_b0;
                            local_140 = CONCAT44(local_140._4_4_,uVar2);
                            FUN_01299bc0(lVar15,&local_140,&local_a8,*(undefined8 *)puVar8);
                            if (iVar4 == local_a8) {
                              iVar4 = local_b0._4_4_;
                              local_140 = CONCAT44(local_140._4_4_,uVar1);
                              FUN_01299bc0(lVar15,&local_140,&local_a8,*(undefined8 *)puVar8);
                              if (iVar4 == local_a8) goto LAB_023525cc;
                            }
                          }
                          iVar25 = iVar25 + 1;
                          puVar26 = (undefined8 *)
                                    Method_System_Collections_Generic_List<Grabbable>_Contains__;
                        } while (iVar25 < *(int *)(lVar19 + 0x18));
                      }
                      if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      *(long *)(local_e8 + 0x18) = lVar20;
                      *(long *)(local_e8 + 0x20) = lVar22;
                    }
                    FUN_012b8948(&local_d0,
                                 *(undefined8 *)
                                  Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                                );
                    uVar21 = FUN_012998a8(lVar18,*(undefined8 *)StringLiteral_14358);
                    lVar19 = FUN_010dfe04(uVar21,*(undefined8 *)StringLiteral_2051);
                    uVar21 = FUN_01299a34(lVar18,*(undefined8 *)StringLiteral_12114);
                    lVar18 = FUN_010dfe04(uVar21,*(undefined8 *)Method_System_Decimal_ToInt64__);
                    if (lVar19 != 0) {
                      if (0 < *(int *)(lVar19 + 0x18)) {
                        iVar25 = 0;
                        do {
                          FUN_0132138c(lVar19,iVar25,&local_120,*(undefined8 *)StringLiteral_10196);
                          lVar20 = local_120;
                          if (lVar18 == 0) goto LAB_02352944;
                          FUN_0132138c(lVar18,iVar25,&local_120,*(undefined8 *)StringLiteral_4463);
                          lVar22 = local_120;
                          if (local_120 == 0) goto LAB_02352944;
                          iVar4 = *(int *)(lVar14 + 0x18);
                          uVar12 = FUN_0237620c(*(undefined8 *)(local_120 + 0x18),&local_f8,0,0,0);
                          uVar21 = local_f8;
                          if ((uVar12 & 1) != 0) {
                            lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                  
                                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                                  );
                            if (lVar23 == 0) goto LAB_02352944;
                            FUN_022f9708(lVar23,uVar21,0);
                            *(long *)(lVar22 + 0x10) = lVar23;
                            if (lVar20 == 0) goto LAB_02352944;
                            *(undefined4 *)(lVar23 + 0x48) = *(undefined4 *)(lVar20 + 0x48);
                            FUN_022fa0bc(lVar23,iVar4,0);
                            FUN_022f9954(lVar20,*(undefined8 *)(lVar22 + 0x10),0);
                            puVar8 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                            puVar7 = 
                            Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                            ;
                            lVar20 = *(long *)(lVar22 + 0x18);
                            if (lVar20 == 0) goto LAB_02352944;
                            iVar27 = 0;
                            while (iVar5 = *(int *)(lVar20 + 0x18), iVar27 < iVar5) {
                              if (*(long *)(lVar22 + 0x20) == 0) goto LAB_02352944;
                              FUN_0132138c(*(long *)(lVar22 + 0x20),iVar27,&local_120,
                                           *(undefined8 *)puVar7);
                              local_a4 = (undefined4)local_120;
                              local_120 = CONCAT44(local_120._4_4_,iVar4 + iVar27);
                              FUN_0129a054(lVar15,&local_120,&local_a4,*(undefined8 *)puVar8);
                              lVar20 = *(long *)(lVar22 + 0x18);
                              iVar27 = iVar27 + 1;
                              if (lVar20 == 0) goto LAB_02352944;
                            }
                            if (*(long *)(lVar22 + 0x28) == 0) goto LAB_02352944;
                            if ((*(int *)(*(long *)(lVar22 + 0x28) + 0x18) == iVar5) && (0 < iVar5))
                            {
                              iVar27 = 0;
                              do {
                                if (*(long *)(lVar22 + 0x28) == 0) goto LAB_02352944;
                                FUN_0132138c(*(long *)(lVar22 + 0x28),iVar27,&local_120,
                                             *(undefined8 *)puVar7);
                                if (lVar16 == 0) goto LAB_02352944;
                                local_a4 = (undefined4)local_120;
                                local_120 = CONCAT44(local_120._4_4_,iVar4 + iVar27);
                                FUN_0129a054(lVar16,&local_120,&local_a4,*(undefined8 *)puVar8);
                                lVar20 = *(long *)(lVar22 + 0x18);
                                if (lVar20 == 0) goto LAB_02352944;
                                iVar27 = iVar27 + 1;
                              } while (iVar27 < *(int *)(lVar20 + 0x18));
                            }
                            FUN_01322050(lVar14,lVar20,
                                         *(undefined8 *)
                                          Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
                          }
                          iVar25 = iVar25 + 1;
                        } while (iVar25 < *(int *)(lVar19 + 0x18));
                      }
                      uVar21 = FUN_010d96e0(lVar17,*(undefined8 *)PTR_DAT_033eb5c8);
                      uVar21 = FUN_010dfe04(uVar21,*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                           );
                      FUN_02310a38(param_4,lVar14,0,0);
                      FUN_0230ff4c(param_4,lVar15,0);
                      FUN_02310070(param_4,lVar16,0);
                      FUN_02350998(param_4,uVar21);
                      return uVar13;
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
LAB_02352944:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


