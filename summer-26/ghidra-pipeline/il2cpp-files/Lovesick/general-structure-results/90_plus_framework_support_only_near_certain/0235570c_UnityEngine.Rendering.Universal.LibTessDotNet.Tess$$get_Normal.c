/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.Tess$$get_Normal
ENTRY_POINT: 0235570c
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

undefined8
UnityEngine_Rendering_Universal_LibTessDotNet_Tess__get_Normal(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x21;
  long lVar14;
  long unaff_x22;
  long *plVar15;
  int iVar16;
  long unaff_x28;
  undefined8 *puVar17;
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
  
  plVar15 = *(long **)(unaff_x22 + 0xf88);
  puVar17 = *(undefined8 **)(unaff_x28 + 0xf48);
  if (param_2 != 1) {
    FUN_012bf83c(&stack0x00000120,
                 *(undefined8 *)Method_System_Nullable<JsonSchemaType>_GetValueOrDefault__);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar8 = (long *)__cxa_begin_catch(param_1);
  lVar12 = *plVar8;
  __cxa_end_catch();
  FUN_012bf83c(&stack0x00000120,
               *(undefined8 *)Method_System_Nullable<JsonSchemaType>_GetValueOrDefault__);
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar12);
  }
  lVar12 = *unaff_x21;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar12);
    lVar12 = *unaff_x21;
  }
  lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  if (lVar10 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
      lVar12 = *unaff_x21;
    }
    uVar13 = **(undefined8 **)(lVar12 + 0xb8);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
    if (lVar10 == 0) goto LAB_02355414;
    FUN_012d239c(lVar10,uVar13,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18) = lVar10;
  }
  uVar13 = FUN_010dcdb8(in_stack_00000028,lVar10,
                        *(undefined8 *)
                         Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                       );
  if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__);
  }
  uVar13 = FUN_0233e5f4(in_stack_00000008,uVar13,0,0);
  uVar4 = FUN_0230bd48(in_stack_00000008,0,0);
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
  if (lVar12 != 0) {
    FUN_01320f6c(lVar12,uVar4,*(undefined8 *)StringLiteral_9754);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                               );
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)StringLiteral_11214);
      FUN_01323390();
      puVar3 = Method_System_Decimal_DecCalc_VarDecFromR4__;
      in_stack_000000c8 = in_stack_00000098;
      in_stack_000000c0 = in_stack_00000090;
      in_stack_000000d0 = in_stack_000000a0;
      while (uVar5 = FUN_012b894c(&stack0x000000c0,
                                  *(undefined8 *)UnityEngine_TextCore_Text_MaterialManager_TypeInfo)
            , (uVar5 & 1) != 0) {
        lVar6 = FUN_00ca2528(&stack0x000000c0,
                             *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1q_s16__);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (2 < *(int *)(lVar6 + 0x20)) {
          if (*(int *)(lVar6 + 0x20) == 3) {
            lVar11 = *(long *)(in_stack_00000038 + 0x20);
            if (lVar11 == 0) {
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                         );
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_012d239c(lVar11,in_stack_00000038,*(undefined8 *)PTR_DAT_033ecb58,0);
              *(long *)(in_stack_00000038 + 0x20) = lVar11;
            }
            uVar4 = FUN_010dcdb8(lVar6,lVar11,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                );
            uVar4 = FUN_010dfe04(uVar4,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                );
            uVar4 = FUN_0230bd48(in_stack_00000008,uVar4,0);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                        Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01320f6c(lVar6,uVar4,*(undefined8 *)StringLiteral_9754);
            uVar4 = FUN_0234aad8(lVar6,1);
            FUN_00ca11d0(lVar10,uVar4,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar6 = FUN_0233e20c(uVar13,lVar6,0);
            if (lVar6 != 0) {
              lVar11 = *(long *)(in_stack_00000038 + 0x28);
              if (lVar11 == 0) {
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                           );
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_012d239c(lVar11,in_stack_00000038,
                             *(undefined8 *)
                              Meta_WitAi_Json_WitResponseClass_<>c__DisplayClass15_0_TypeInfo,0);
                *(long *)(in_stack_00000038 + 0x28) = lVar11;
              }
              uVar4 = FUN_010dcdb8(lVar6,lVar11,
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                  );
              uVar4 = FUN_010dfe04(uVar4,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                  );
              uVar4 = FUN_0230bd48(in_stack_00000008,uVar4,0);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                          Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320f6c(lVar6,uVar4,*(undefined8 *)StringLiteral_9754);
              uVar4 = FUN_0234caf8(lVar6);
              FUN_01322050(lVar10,uVar4,
                           *(undefined8 *)Method_UnityEngine_Component_GetComponents<BoxCollider>__)
              ;
            }
          }
        }
      }
      FUN_012b8948(&stack0x000000c0,
                   *(undefined8 *)UnityEngine_InputSystem_InputControl<float>_TypeInfo);
      FUN_022fabf0(lVar10,in_stack_00000008,lVar12,0,0);
      uVar13 = FUN_0232e128(*(undefined8 *)(in_stack_00000008 + 0x50),0);
      FUN_0230fc64(in_stack_00000008,uVar13,0);
      puVar2 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
      lVar12 = *unaff_x21;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar12);
        lVar12 = *unaff_x21;
      }
      lVar6 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
      if (lVar6 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar12);
          lVar12 = *unaff_x21;
        }
        uVar13 = **(undefined8 **)(lVar12 + 0xb8);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
        if (lVar6 == 0) goto LAB_02355414;
        FUN_012d239c(lVar6,uVar13,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OculusTrackingReference>__
                     ,0);
        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) = lVar6;
      }
      uVar13 = FUN_010dcdb8(lVar10,lVar6,
                            *(undefined8 *)
                             Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                           );
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eefc0);
      if (lVar12 != 0) {
        FUN_012dd468(lVar12,uVar13,*(undefined8 *)StringLiteral_10898);
        FUN_012df294(lVar12,in_stack_00000048,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                    );
        FUN_01322050(in_stack_00000028,lVar10,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponents<BoxCollider>__);
        puVar1 = Method_System_Array_Empty<WitConfigurationAssetData>__;
        lVar10 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar1;
        }
        lVar6 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
        if (lVar6 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
          }
          uVar13 = **(undefined8 **)(lVar10 + 0xb8);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
          if (lVar6 == 0) goto LAB_02355414;
          FUN_012d239c(lVar6,uVar13,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__
                       ,0);
          *(long *)(*(long *)(*(long *)Method_System_Array_Empty<WitConfigurationAssetData>__ + 0xb8
                             ) + 0x28) = lVar6;
        }
        uVar13 = FUN_010dcdb8(in_stack_00000028,lVar6,
                              *(undefined8 *)
                               Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                             );
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar10);
        }
        lVar10 = FUN_0233e5f4(in_stack_00000008,uVar13,0,0);
        if (lVar10 != 0) {
          if (0 < *(int *)(lVar10 + 0x18)) {
            iVar16 = 0;
            do {
              if (*(int *)(lVar12 + 0x20) < 1) break;
              FUN_0132138c(lVar10,iVar16,&stack0x00000090,*(undefined8 *)puVar2);
              lVar6 = in_stack_00000090;
              if (in_stack_00000090 == 0) goto LAB_02355414;
              uVar5 = FUN_012ddcec(lVar12,*(undefined8 *)(in_stack_00000090 + 0x20),*puVar17);
              if ((uVar5 & 1) != 0) {
                FUN_012de18c(lVar12,*(undefined8 *)(lVar6 + 0x20),
                             *(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo);
                plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4c00);
                if (plVar8 == (long *)0x0) goto LAB_02355414;
                FUN_0233eebc(plVar8,lVar6,0);
                do {
                  uVar5 = FUN_0233eee4(plVar8,0);
                  if ((uVar5 & 1) == 0) goto LAB_023550c0;
                  lVar6 = FUN_0233ef28(plVar8,0);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                } while ((*(long *)(lVar6 + 0x38) == 0) ||
                        (uVar5 = FUN_012ddcec(lVar12,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x20)
                                              ,*puVar17), (uVar5 & 1) != 0));
                if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar11 = *(long *)(*(long *)(lVar6 + 0x38) + 0x20);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar14 = *(long *)(lVar6 + 0x20);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                *(undefined4 *)(lVar14 + 0x48) = *(undefined4 *)(lVar11 + 0x48);
                in_stack_00000068 = *(undefined8 *)(lVar11 + 0x34);
                in_stack_00000060 = *(undefined8 *)(lVar11 + 0x2c);
                in_stack_00000058 = *(undefined8 *)(lVar11 + 0x24);
                in_stack_00000050 = *(long *)(lVar11 + 0x1c);
                in_stack_00000078 = 0;
                in_stack_00000070 = 0;
                in_stack_00000088 = 0;
                in_stack_00000080 = 0;
                in_stack_00000090 = in_stack_00000050;
                in_stack_00000098 = in_stack_00000058;
                in_stack_000000a0 = in_stack_00000060;
                in_stack_000000a8 = in_stack_00000068;
                FUN_022eff30(&stack0x00000070,&stack0x00000050,0);
                *(undefined8 *)(lVar14 + 0x34) = in_stack_00000088;
                *(undefined8 *)(lVar14 + 0x2c) = in_stack_00000080;
                *(undefined8 *)(lVar14 + 0x24) = in_stack_00000078;
                *(undefined8 *)(lVar14 + 0x1c) = in_stack_00000070;
                FUN_02375014(*(undefined8 *)(lVar6 + 0x38),0);
                plVar15 = (long *)StringLiteral_10310;
LAB_023550c0:
                lVar6 = *plVar8;
                uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar5 != 0) {
                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *plVar15) {
                      puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_02355114;
                    }
                    uVar5 = uVar5 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar5 != 0);
                }
                puVar7 = (undefined8 *)FUN_00d59724(plVar8,*plVar15,0);
LAB_02355114:
                (*(code *)*puVar7)(plVar8,puVar7[1]);
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < *(int *)(lVar10 + 0x18));
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


