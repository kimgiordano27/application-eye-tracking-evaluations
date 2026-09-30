/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.Tess$$RemoveDegenerateEdges
ENTRY_POINT: 02355234
PROGRAM: Lovesick-libil2cpp.so
SCORE: 128
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023554dc) */
/* WARNING: Removing unreachable block (ram,0x0235512c) */
/* WARNING: Removing unreachable block (ram,0x02355588) */

undefined8 UnityEngine_Rendering_Universal_LibTessDotNet_Tess__RemoveDegenerateEdges(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long lVar13;
  int unaff_w20;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long in_stack_00000008;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  FUN_012b8948(&stack0x000000f0,*(undefined8 *)System_Xml_XmlNamedNodeMap_TypeInfo);
  plVar16 = (long *)StringLiteral_10310;
  puVar2 = Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__;
  puVar1 = Method_System_Array_Empty<WitConfigurationAssetData>__;
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778();
  }
  if (unaff_w20 != 1) {
    FUN_012bf83c(&stack0x00000120,
                 *(undefined8 *)Method_System_Nullable<JsonSchemaType>_GetValueOrDefault__);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar13 = *plVar9;
  __cxa_end_catch();
  FUN_012bf83c(&stack0x00000120,
               *(undefined8 *)Method_System_Nullable<JsonSchemaType>_GetValueOrDefault__);
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar13);
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar13);
    lVar13 = *(long *)puVar1;
  }
  lVar11 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
  if (lVar11 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar13);
      lVar13 = *(long *)puVar1;
    }
    uVar14 = **(undefined8 **)(lVar13 + 0xb8);
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
    if (lVar11 == 0) goto LAB_02355414;
    FUN_012d239c(lVar11,uVar14,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar11;
  }
  uVar14 = FUN_010dcdb8(in_stack_00000028,lVar11,
                        *(undefined8 *)
                         Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                       );
  if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__);
  }
  uVar14 = FUN_0233e5f4(in_stack_00000008,uVar14,0,0);
  uVar5 = FUN_0230bd48(in_stack_00000008,0,0);
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
  if (lVar13 != 0) {
    FUN_01320f6c(lVar13,uVar5,*(undefined8 *)StringLiteral_9754);
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                               );
    if (lVar11 != 0) {
      FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_11214);
      FUN_01323390();
      puVar4 = Method_System_Decimal_DecCalc_VarDecFromR4__;
      in_stack_000000c8 = in_stack_00000098;
      in_stack_000000c0 = in_stack_00000090;
      in_stack_000000d0 = in_stack_000000a0;
      while (uVar6 = FUN_012b894c(&stack0x000000c0,
                                  *(undefined8 *)UnityEngine_TextCore_Text_MaterialManager_TypeInfo)
            , (uVar6 & 1) != 0) {
        lVar7 = FUN_00ca2528(&stack0x000000c0,
                             *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1q_s16__);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (2 < *(int *)(lVar7 + 0x20)) {
          if (*(int *)(lVar7 + 0x20) == 3) {
            lVar12 = *(long *)(in_stack_00000038 + 0x20);
            if (lVar12 == 0) {
              lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                         );
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_012d239c(lVar12,in_stack_00000038,*(undefined8 *)PTR_DAT_033ecb58,0);
              *(long *)(in_stack_00000038 + 0x20) = lVar12;
            }
            uVar5 = FUN_010dcdb8(lVar7,lVar12,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                );
            uVar5 = FUN_010dfe04(uVar5,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                );
            uVar5 = FUN_0230bd48(in_stack_00000008,uVar5,0);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                        Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01320f6c(lVar7,uVar5,*(undefined8 *)StringLiteral_9754);
            uVar5 = FUN_0234aad8(lVar7,1);
            FUN_00ca11d0(lVar11,uVar5,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
          }
          else {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar7 = FUN_0233e20c(uVar14,lVar7,0);
            if (lVar7 != 0) {
              lVar12 = *(long *)(in_stack_00000038 + 0x28);
              if (lVar12 == 0) {
                lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                           );
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_012d239c(lVar12,in_stack_00000038,
                             *(undefined8 *)
                              Meta_WitAi_Json_WitResponseClass_<>c__DisplayClass15_0_TypeInfo,0);
                *(long *)(in_stack_00000038 + 0x28) = lVar12;
              }
              uVar5 = FUN_010dcdb8(lVar7,lVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                  );
              uVar5 = FUN_010dfe04(uVar5,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                  );
              uVar5 = FUN_0230bd48(in_stack_00000008,uVar5,0);
              lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                          Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320f6c(lVar7,uVar5,*(undefined8 *)StringLiteral_9754);
              uVar5 = FUN_0234caf8(lVar7);
              FUN_01322050(lVar11,uVar5,
                           *(undefined8 *)Method_UnityEngine_Component_GetComponents<BoxCollider>__)
              ;
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000c0,
                   *(undefined8 *)UnityEngine_InputSystem_InputControl<float>_TypeInfo);
      FUN_022fabf0(lVar11,in_stack_00000008,lVar13,0,0);
      uVar14 = FUN_0232e128(*(undefined8 *)(in_stack_00000008 + 0x50),0);
      FUN_0230fc64(in_stack_00000008,uVar14,0);
      puVar3 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
      lVar13 = *(long *)puVar1;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar13);
        lVar13 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
      if (lVar7 == 0) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar13);
          lVar13 = *(long *)puVar1;
        }
        uVar14 = **(undefined8 **)(lVar13 + 0xb8);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
        if (lVar7 == 0) goto LAB_02355414;
        FUN_012d239c(lVar7,uVar14,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OculusTrackingReference>__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar7;
      }
      uVar14 = FUN_010dcdb8(lVar11,lVar7,
                            *(undefined8 *)
                             Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                           );
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eefc0);
      if (lVar13 != 0) {
        FUN_012dd468(lVar13,uVar14,*(undefined8 *)StringLiteral_10898);
        FUN_012df294(lVar13,in_stack_00000048,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                    );
        FUN_01322050(in_stack_00000028,lVar11,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponents<BoxCollider>__);
        puVar1 = Method_System_Array_Empty<WitConfigurationAssetData>__;
        lVar11 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar1;
        }
        lVar7 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
        if (lVar7 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
          }
          uVar14 = **(undefined8 **)(lVar11 + 0xb8);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
          if (lVar7 == 0) goto LAB_02355414;
          FUN_012d239c(lVar7,uVar14,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__
                       ,0);
          *(long *)(*(long *)(*(long *)Method_System_Array_Empty<WitConfigurationAssetData>__ + 0xb8
                             ) + 0x28) = lVar7;
        }
        uVar14 = FUN_010dcdb8(in_stack_00000028,lVar7,
                              *(undefined8 *)
                               Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                             );
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
        }
        lVar11 = FUN_0233e5f4(in_stack_00000008,uVar14,0,0);
        if (lVar11 != 0) {
          if (0 < *(int *)(lVar11 + 0x18)) {
            iVar17 = 0;
            do {
              if (*(int *)(lVar13 + 0x20) < 1) break;
              FUN_0132138c(lVar11,iVar17,&stack0x00000090,*(undefined8 *)puVar3);
              lVar7 = in_stack_00000090;
              if (in_stack_00000090 == 0) goto LAB_02355414;
              uVar6 = FUN_012ddcec(lVar13,*(undefined8 *)(in_stack_00000090 + 0x20),
                                   *(undefined8 *)puVar2);
              if ((uVar6 & 1) != 0) {
                FUN_012de18c(lVar13,*(undefined8 *)(lVar7 + 0x20),
                             *(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo);
                plVar9 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4c00);
                if (plVar9 == (long *)0x0) goto LAB_02355414;
                FUN_0233eebc(plVar9,lVar7,0);
                do {
                  uVar6 = FUN_0233eee4(plVar9,0);
                  if ((uVar6 & 1) == 0) goto LAB_023550c0;
                  lVar7 = FUN_0233ef28(plVar9,0);
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                } while ((*(long *)(lVar7 + 0x38) == 0) ||
                        (uVar6 = FUN_012ddcec(lVar13,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x20)
                                              ,*(undefined8 *)puVar2), (uVar6 & 1) != 0));
                if (*(long *)(lVar7 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar12 = *(long *)(*(long *)(lVar7 + 0x38) + 0x20);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar15 = *(long *)(lVar7 + 0x20);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(lVar12 + 0x48);
                in_stack_00000068 = *(undefined8 *)(lVar12 + 0x34);
                in_stack_00000060 = *(undefined8 *)(lVar12 + 0x2c);
                in_stack_00000058 = *(undefined8 *)(lVar12 + 0x24);
                in_stack_00000050 = *(long *)(lVar12 + 0x1c);
                in_stack_00000078 = 0;
                in_stack_00000070 = 0;
                in_stack_00000088 = 0;
                in_stack_00000080 = 0;
                in_stack_00000090 = in_stack_00000050;
                in_stack_00000098 = in_stack_00000058;
                in_stack_000000a0 = in_stack_00000060;
                in_stack_000000a8 = in_stack_00000068;
                FUN_022eff30(&stack0x00000070,&stack0x00000050,0);
                *(undefined8 *)(lVar15 + 0x34) = in_stack_00000088;
                *(undefined8 *)(lVar15 + 0x2c) = in_stack_00000080;
                *(undefined8 *)(lVar15 + 0x24) = in_stack_00000078;
                *(undefined8 *)(lVar15 + 0x1c) = in_stack_00000070;
                FUN_02375014(*(undefined8 *)(lVar7 + 0x38),0);
                plVar16 = (long *)StringLiteral_10310;
LAB_023550c0:
                lVar7 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar6 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *plVar16) {
                      puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_02355114;
                    }
                    uVar6 = uVar6 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar6 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar9,*plVar16,0);
LAB_02355114:
                (*(code *)*puVar8)(plVar9,puVar8[1]);
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(lVar11 + 0x18));
          }
          FUN_023135a0(in_stack_00000008,0,0);
          return in_stack_00000048;
        }
      }
    }
  }
LAB_02355414:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


