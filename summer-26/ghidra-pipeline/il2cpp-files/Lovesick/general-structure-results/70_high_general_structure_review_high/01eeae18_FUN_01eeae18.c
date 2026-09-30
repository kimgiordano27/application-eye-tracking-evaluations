/*
FUNCTION_NAME: FUN_01eeae18
ENTRY_POINT: 01eeae18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


long * FUN_01eeae18(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  if ((DAT_037800c9 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8955);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6597);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_037800c9 = 1;
  }
  puVar6 = StringLiteral_6597;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar16 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec5b8(uVar7,uVar16,0);
    uVar16 = thunk_FUN_00d48444(PTR_DAT_033f6e90);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar16);
  }
  uVar7 = thunk_FUN_00d93c64(param_2,0);
  lVar15 = *(long *)puVar6;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar15);
    lVar15 = *(long *)puVar6;
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = Method_System_Collections_Generic_List<Type>_Add__;
  uVar8 = FUN_01789ac0(uVar7,uVar16,0);
  puVar2 = StringLiteral_9958;
  if ((uVar8 & 1) == 0) {
    lVar15 = *(long *)puVar6;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *(long *)puVar6;
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x60);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    uVar8 = FUN_01789ac0(uVar7,uVar16,0);
    puVar2 = UnityEngine_Texture2D___TypeInfo;
    if ((uVar8 & 1) == 0) {
      lVar15 = *(long *)puVar6;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar6;
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0xc0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar8 = FUN_01789ac0(uVar7,uVar16,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      if ((uVar8 & 1) != 0) {
        uVar7 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
        lVar15 = thunk_FUN_00d6225c(param_2,uVar7);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_2,uVar7);
        }
        plVar10 = (long *)FUN_01edb268(lVar15,0);
        return plVar10;
      }
      uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xa8);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01789ac0(uVar7,uVar16,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      if ((uVar8 & 1) == 0) {
        uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xb0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01789ac0(uVar7,uVar16,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        if ((uVar8 & 1) == 0) {
          uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_01789ac0(uVar7,uVar16,0);
          puVar2 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
          if ((uVar8 & 1) == 0) {
            lVar15 = *(long *)puVar6;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar6;
            }
            uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x98);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar4);
            }
            uVar8 = FUN_01789ac0(uVar7,uVar16,0);
            puVar2 = PTR_DAT_033f2f78;
            if ((uVar8 & 1) == 0) {
              lVar15 = *(long *)puVar6;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar6;
              }
              uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x68);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar4);
              }
              uVar8 = FUN_01789ac0(uVar7,uVar16,0);
              puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
              if ((uVar8 & 1) == 0) {
                lVar15 = *(long *)puVar6;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar15 = *(long *)puVar6;
                }
                uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x38);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar4);
                }
                uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
                if ((uVar8 & 1) == 0) {
                  lVar15 = *(long *)puVar6;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar15 = *(long *)puVar6;
                  }
                  uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x40);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar4);
                  }
                  uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                  puVar2 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
                  if ((uVar8 & 1) == 0) {
                    lVar15 = *(long *)puVar6;
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar15 = *(long *)puVar6;
                    }
                    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x70);
                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar4);
                    }
                    uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                    puVar2 = StringLiteral_7239;
                    if ((uVar8 & 1) == 0) {
                      lVar15 = *(long *)puVar6;
                      if (*(int *)(lVar15 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar15 = *(long *)puVar6;
                      }
                      uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0xa0);
                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)puVar4);
                      }
                      uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                      puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                      if ((uVar8 & 1) == 0) {
                        lVar15 = *(long *)puVar6;
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar15 = *(long *)puVar6;
                        }
                        uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x48);
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864(*(long *)puVar4);
                        }
                        puVar2 = 
                        System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        ;
                        uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                        if ((uVar8 & 1) == 0) {
                          lVar15 = *(long *)puVar6;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar15 = *(long *)puVar6;
                          }
                          uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0xd8);
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar4);
                          }
                          uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar6);
                          }
                          if ((uVar8 & 1) != 0) {
                            if (*(long *)(*param_2 + 0x40) ==
                                *(long *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0x40)) {
                              puVar11 = (undefined8 *)thunk_FUN_00d624a0(param_2);
                              plVar10 = (long *)FUN_01edb430(*puVar11,0);
                              return plVar10;
                            }
                            goto LAB_01eebbac;
                          }
                          uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x78);
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                          puVar5 = 
                          Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                          ;
                          if ((uVar8 & 1) != 0) {
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar5 + 0x40)) {
                              puVar12 = (undefined2 *)thunk_FUN_00d624a0(param_2);
                              plVar10 = (long *)FUN_01f6baa0(*puVar12,0);
                              return plVar10;
                            }
                            goto LAB_01eebbac;
                          }
                          lVar15 = *(long *)puVar6;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar15 = *(long *)puVar6;
                          }
                          uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x80);
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar4);
                          }
                          uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                          puVar5 = Method_TMPro_SetPropertyUtility_SetStruct<char>__;
                          if ((uVar8 & 1) != 0) {
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar5 + 0x40)) {
                              puVar13 = (undefined4 *)thunk_FUN_00d624a0(param_2);
                              plVar10 = (long *)FUN_01f6bacc(*puVar13,0);
                              return plVar10;
                            }
                            goto LAB_01eebbac;
                          }
                          lVar15 = *(long *)puVar6;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar15 = *(long *)puVar6;
                          }
                          uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x88);
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar4);
                          }
                          uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                          puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
                          if ((uVar8 & 1) != 0) {
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar5 + 0x40)) {
                              puVar11 = (undefined8 *)thunk_FUN_00d624a0(param_2);
                              plVar10 = (long *)FUN_01f6baf8(*puVar11,0);
                              return plVar10;
                            }
                            goto LAB_01eebbac;
                          }
                          lVar15 = *(long *)puVar6;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar15 = *(long *)puVar6;
                          }
                          uVar8 = FUN_01eda168(uVar7,*(undefined8 *)
                                                      (*(long *)(lVar15 + 0xb8) + 0xd0),0);
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar6);
                          }
                          if ((uVar8 & 1) != 0) {
                            bVar1 = *(byte *)(*(long *)
                                               Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__
                                             + 300);
                            if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
                               (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
                                *(long *)
                                 Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__
                               )) {
                              plVar10 = (long *)FUN_01edb254(param_2,0);
                              return plVar10;
                            }
                            goto LAB_01eebbac;
                          }
                          uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x50);
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar8 = FUN_01789ac0(uVar7,uVar16,0);
                          lVar15 = *(long *)puVar6;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_00d32864(lVar15);
                            lVar15 = *(long *)puVar6;
                          }
                          if ((uVar8 & 1) == 0) {
                            uVar8 = FUN_01eda168(uVar7,*(undefined8 *)
                                                        (*(long *)(lVar15 + 0xb8) + 200),0);
                            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)puVar6);
                            }
                            if ((uVar8 & 1) != 0) {
                              bVar1 = *(byte *)(*(long *)
                                                 Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__
                                               + 300);
                              if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
                                 (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
                                  *(long *)Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__
                                 )) {
                                plVar10 = (long *)FUN_01edbb60(param_2,param_3,0);
                                return plVar10;
                              }
                              goto LAB_01eebbac;
                            }
                            param_2 = (long *)FUN_01ee98d4(param_1,param_2,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)puVar6 + 0xb8) +
                                                            0x48),param_3);
                          }
                          else {
                            lVar14 = *(long *)
                                      Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_TypeInfo
                            ;
                            if (*param_2 != lVar14) goto LAB_01eebbac;
                            param_2 = (long *)(**(code **)(lVar14 + 0x218))
                                                        (param_2,*(undefined8 *)
                                                                  (*(long *)(lVar15 + 0xb8) + 0x48),
                                                         param_3,*(undefined8 *)(lVar14 + 0x220));
                          }
                          if (param_2 == (long *)0x0) {
                            return (long *)0x0;
                          }
                        }
                        if (*param_2 == *(long *)puVar2) {
                          return param_2;
                        }
                      }
                      else {
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
                          puVar13 = (undefined4 *)thunk_FUN_00d624a0(param_2);
                          plVar10 = (long *)FUN_01f6bb24(*puVar13,0);
                          return plVar10;
                        }
                      }
                    }
                    else {
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
                        puVar9 = (undefined1 *)thunk_FUN_00d624a0(param_2);
                        plVar10 = (long *)FUN_01f6b9c4(*puVar9,0);
                        return plVar10;
                      }
                    }
                  }
                  else {
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
                      puVar11 = (undefined8 *)thunk_FUN_00d624a0(param_2);
                      plVar10 = (long *)FUN_01f6ba48(*puVar11,0);
                      return plVar10;
                    }
                  }
                }
                else {
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
                    puVar13 = (undefined4 *)thunk_FUN_00d624a0(param_2);
                    plVar10 = (long *)FUN_01f6ba1c(*puVar13,0);
                    return plVar10;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
                  puVar12 = (undefined2 *)thunk_FUN_00d624a0(param_2);
                  plVar10 = (long *)FUN_01f6b9f0(*puVar12,0);
                  return plVar10;
                }
              }
            }
            else {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
                puVar11 = (undefined8 *)thunk_FUN_00d624a0(param_2);
                plVar10 = (long *)FUN_01f6bc94(*puVar11,0);
                return plVar10;
              }
            }
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
              puVar11 = (undefined8 *)thunk_FUN_00d624a0(param_2);
              plVar10 = (long *)FUN_01f6b928(*puVar11,puVar11[1],0);
              return plVar10;
            }
          }
        }
        else if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)StringLiteral_8955 + 0x40)) {
          puVar11 = (undefined8 *)thunk_FUN_00d624a0(param_2);
          plVar10 = (long *)FUN_01edb7d0(*puVar11,puVar11[1],0);
          return plVar10;
        }
      }
      else if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)StringLiteral_2672 + 0x40)) {
        puVar11 = (undefined8 *)thunk_FUN_00d624a0(param_2);
        plVar10 = (long *)FUN_01edb348(*puVar11,0);
        return plVar10;
      }
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
        puVar9 = (undefined1 *)thunk_FUN_00d624a0(param_2);
        plVar10 = (long *)FUN_01f6ba74(*puVar9,0);
        return plVar10;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
      puVar9 = (undefined1 *)thunk_FUN_00d624a0(param_2);
      plVar10 = (long *)FUN_01f6b860(*puVar9,0);
      return plVar10;
    }
  }
LAB_01eebbac:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(param_2);
}


