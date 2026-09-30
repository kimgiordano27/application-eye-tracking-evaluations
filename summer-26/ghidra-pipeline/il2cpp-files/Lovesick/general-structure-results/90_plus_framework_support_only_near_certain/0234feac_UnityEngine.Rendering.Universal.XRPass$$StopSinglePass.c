/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.XRPass$$StopSinglePass
ENTRY_POINT: 0234feac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 176
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0235006c) */
/* WARNING: Removing unreachable block (ram,0x023507dc) */
/* WARNING: Removing unreachable block (ram,0x02350878) */

undefined8 UnityEngine_Rendering_Universal_XRPass__StopSinglePass(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long unaff_x19;
  int iVar20;
  int unaff_w20;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  float unaff_s8;
  undefined1 auVar21 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  int in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  int iStack0000000000000168;
  int iStack000000000000016c;
  undefined8 in_stack_00000188;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  int iStack00000000000001b4;
  int iStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  int iStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  undefined8 in_stack_000001c8;
  int in_stack_000001d0;
  int iStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  int in_stack_000001fc;
  int in_stack_00000204;
  int in_stack_0000020c;
  int in_stack_00000214;
  int in_stack_00000220;
  int in_stack_00000228;
  int in_stack_00000230;
  int in_stack_00000238;
  undefined4 in_stack_0000024c;
  
  do {
    FUN_01299bc0(in_stack_00000070,(long)&stack0x000001c0 + 4,&stack0x000001c0,*param_1);
    if (unaff_w26 != iStack00000000000001c0) goto LAB_0234ff44;
    iVar20 = 0;
    do {
      FUN_0132138c(unaff_x29,iVar20,&stack0x000001c8,
                   *(undefined8 *)
                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                  );
      FUN_00ca0af8(unaff_x25,in_stack_000001c8,*(undefined8 *)OVRManager_XrApi_TypeInfo);
      puVar7 = StringLiteral_4747;
      FUN_00ac20f0(unaff_x24,in_stack_00000078 + iVar20,*(undefined8 *)StringLiteral_4747);
      FUN_00ac20f0(unaff_x27,0xffffffff,*(undefined8 *)puVar7);
      iVar20 = iVar20 + 1;
    } while (unaff_w23 != iVar20);
LAB_02350020:
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w20) {
      do {
        if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(in_stack_00000128 + 0x18) = unaff_x25;
        *(long *)(in_stack_00000128 + 0x20) = unaff_x24;
        *(long *)(in_stack_00000128 + 0x28) = unaff_x27;
        while( true ) {
          while( true ) {
            uVar12 = FUN_012b894c(&stack0x00000140,*(undefined8 *)PTR_DAT_033f0610);
            if ((uVar12 & 1) != 0) break;
            FUN_012b8948(&stack0x00000140,
                         *(undefined8 *)
                          Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                        );
            in_stack_00000078 = in_stack_00000078 + unaff_w23;
            uVar12 = FUN_012b894c(&stack0x00000170,
                                  *(undefined8 *)
                                   UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo);
            if ((uVar12 & 1) == 0) {
              FUN_012b8948(&stack0x00000170,*(undefined8 *)Method_System_SByte_Parse__);
              uVar15 = FUN_012998a8(in_stack_00000040,*(undefined8 *)StringLiteral_14358);
              lVar13 = FUN_010dfe04(uVar15,*(undefined8 *)StringLiteral_2051);
              uVar15 = FUN_01299a34(in_stack_00000040,*(undefined8 *)StringLiteral_12114);
              lVar14 = FUN_010dfe04(uVar15,*(undefined8 *)Method_System_Decimal_ToInt64__);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11831);
              if (lVar16 == 0) goto LAB_02350870;
              FUN_01320e50(lVar16,*(undefined8 *)
                                   Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__0__
                          );
              puVar7 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
              if (lVar13 == 0) goto LAB_02350870;
              if (*(int *)(lVar13 + 0x18) < 1) goto LAB_023506e0;
              iVar20 = 0;
              goto LAB_02350418;
            }
            uVar15 = FUN_00ca14c4(&stack0x00000170,
                                  *(undefined8 *)ContextMenuItemList_<>c__DisplayClass4_0_TypeInfo);
            uVar12 = UnityEngine_Rendering_Universal_RendererLighting__DisableAllKeywords
                               (in_stack_00000020,uVar15,0);
            unaff_x29 = thunk_FUN_00d62348(*(undefined8 *)
                                            Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
            if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01320ebc(unaff_x29,unaff_w23,*(undefined8 *)PTR_DAT_033eec38);
            for (iVar20 = 1;
                puVar7 = 
                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                , iVar20 + -1 < unaff_w23; iVar20 = iVar20 + 1) {
              FUN_0132138c(in_stack_00000060,uVar12 & 0xffffffff,&stack0x000000c0,
                           *(undefined8 *)
                            Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                          );
              uVar15 = _uStack00000000000000c0;
              FUN_0132138c(in_stack_00000060,uVar12 >> 0x20,&stack0x000000c0,*(undefined8 *)puVar7);
              uVar15 = FUN_0233bc34((float)iVar20 / unaff_s8,uVar15,_uStack00000000000000c0,0);
              FUN_00ca0af8(unaff_x29,uVar15,*(undefined8 *)OVRManager_XrApi_TypeInfo);
            }
            if (*(int *)(*(long *)StringLiteral_14183 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar13 = FUN_0234e084(in_stack_00000020,uVar12);
            puVar7 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
            uStack00000000000000c0 = (int)uVar12;
            FUN_01299bc0(in_stack_00000070,&stack0x000000c0,(long)&stack0x00000188 + 4,
                         *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
            uVar2 = in_stack_00000188._4_4_;
            _uStack00000000000000c0 = CONCAT44(uStack00000000000000c4,(int)(uVar12 >> 0x20));
            FUN_01299bc0(in_stack_00000070,&stack0x000000c0,(long)&stack0x00000188 + 4,
                         *(undefined8 *)puVar7);
            uVar3 = in_stack_00000188._4_4_;
            if (*(int *)(*(long *)
                          Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_022f6fa4(&stack0x00000168,uVar2,uVar3,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01323390(lVar13,&stack0x000000e0,*(undefined8 *)StringLiteral_11168);
            in_stack_00000148 = in_stack_000000e8;
            in_stack_00000140 = _uStack00000000000000e0;
            in_stack_00000158 = in_stack_000000f8;
            in_stack_00000150 = in_stack_000000f0;
          }
          auVar21 = FUN_00ca15cc(&stack0x00000140,
                                 *(undefined8 *)
                                  Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                                );
          _in_stack_00000130 = auVar21;
          lVar13 = FUN_00ca13c0(&stack0x00000130,
                                *(undefined8 *)
                                 Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                               );
          uVar12 = FUN_0129eff4(in_stack_00000040,lVar13,&stack0x00000128,
                                *(undefined8 *)StringLiteral_11630);
          if ((uVar12 & 1) == 0) break;
          if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar13 = *(long *)(in_stack_00000128 + 0x18);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar14 = *(long *)(in_stack_00000128 + 0x20);
          lVar16 = *(long *)(in_stack_00000128 + 0x28);
          if (0 < *(int *)(lVar13 + 0x18)) {
            iVar20 = 0;
            do {
              FUN_0132138c(lVar13,iVar20,&stack0x000001e8,
                           *(undefined8 *)
                            Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                          );
              iVar10 = FUN_01323730(in_stack_00000060,in_stack_000001e8,
                                    *(undefined8 *)System_Collections_IComparer_TypeInfo);
              iVar11 = *(int *)(lVar13 + 0x18);
              iVar1 = iVar20 + 1;
              iVar6 = 0;
              if (iVar11 != 0) {
                iVar6 = iVar1 / iVar11;
              }
              FUN_0132138c(lVar13,iVar1 - iVar6 * iVar11,&stack0x000001f0,
                           *(undefined8 *)
                            Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                          );
              iVar11 = FUN_01323730(in_stack_00000060,in_stack_000001f0,
                                    *(undefined8 *)System_Collections_IComparer_TypeInfo);
              puVar7 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
              if ((iVar10 != -1) && (iVar11 != -1)) {
                FUN_01299bc0(in_stack_00000070,&stack0x00000200,&stack0x000001fc,
                             *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                FUN_01299bc0(in_stack_00000070,&stack0x00000208,&stack0x00000204,
                             *(undefined8 *)puVar7);
                puVar7 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                unaff_w23 = iStack000000000000004c;
                if (in_stack_000001fc == in_stack_00000204) {
                  FUN_01299bc0(in_stack_00000070,&stack0x00000210,&stack0x0000020c,
                               *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                  FUN_01299bc0(in_stack_00000070,&stack0x00000218,&stack0x00000214,
                               *(undefined8 *)puVar7);
                  if (in_stack_0000020c == in_stack_00000214) {
                    FUN_01323e24(lVar13,iVar1,unaff_x29,*(undefined8 *)Mono_X509PalImpl_TypeInfo);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar11 = 0;
                    do {
                      FUN_01323a14(lVar14,iVar20 + iVar11 + 1,&stack0x0000021c,
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                  );
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_00ac20f0(lVar16,0xffffffff,*(undefined8 *)StringLiteral_4747);
                      iVar11 = iVar11 + 1;
                    } while (iStack000000000000004c != iVar11);
                    goto LAB_0234f9d0;
                  }
                }
                puVar7 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                FUN_01299bc0(in_stack_00000070,&stack0x00000224,&stack0x00000220,
                             *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                FUN_01299bc0(in_stack_00000070,&stack0x0000022c,&stack0x00000228,
                             *(undefined8 *)puVar7);
                puVar7 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                if (in_stack_00000220 == in_stack_00000228) {
                  FUN_01299bc0(in_stack_00000070,&stack0x00000234,&stack0x00000230,
                               *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                  FUN_01299bc0(in_stack_00000070,&stack0x0000023c,&stack0x00000238,
                               *(undefined8 *)puVar7);
                  if (in_stack_00000230 == in_stack_00000238) {
                    FUN_01324d60(unaff_x29,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_Add__
                                );
                    FUN_01323e24(lVar13,iVar1,unaff_x29,*(undefined8 *)Mono_X509PalImpl_TypeInfo);
                    iVar20 = iStack000000000000004c;
                    while (0 < iVar20) {
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01323a14(lVar14,iVar1,&stack0x00000248,
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                  );
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_00ac20f0(lVar16,0xffffffff,*(undefined8 *)StringLiteral_4747);
                      iVar20 = iVar20 + -1;
                    }
                  }
                }
              }
LAB_0234f9d0:
              unaff_x22 = in_stack_00000068;
              iVar20 = iVar1;
            } while (iVar1 < *(int *)(lVar13 + 0x18));
          }
          if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(long *)(in_stack_00000128 + 0x18) = lVar13;
          *(long *)(in_stack_00000128 + 0x20) = lVar14;
          *(long *)(in_stack_00000128 + 0x28) = lVar16;
        }
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_022fb2d8(lVar14,0);
        in_stack_00000128 = lVar14;
        uVar15 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,0)
        ;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar2 = *(undefined4 *)(lVar13 + 0x48);
        in_stack_000000b8 = *(undefined8 *)(lVar13 + 0x34);
        in_stack_000000b0 = *(undefined8 *)(lVar13 + 0x2c);
        in_stack_000000a8 = *(undefined8 *)(lVar13 + 0x24);
        in_stack_000000a0 = *(long *)(lVar13 + 0x1c);
        in_stack_000000c8 = 0;
        _uStack00000000000000c0 = 0;
        in_stack_000000d8 = 0;
        in_stack_000000d0 = 0;
        _uStack00000000000000e0 = in_stack_000000a0;
        in_stack_000000e8 = in_stack_000000a8;
        in_stack_000000f0 = in_stack_000000b0;
        in_stack_000000f8 = in_stack_000000b8;
        FUN_022eff30(&stack0x000000c0,&stack0x000000a0,0);
        uVar3 = *(undefined4 *)(lVar13 + 0x18);
        uVar4 = *(undefined4 *)(lVar13 + 0x54);
        cVar5 = *(char *)(lVar13 + 0x4c);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000088 = in_stack_000000c8;
        in_stack_00000080 = _uStack00000000000000c0;
        in_stack_00000098 = in_stack_000000d8;
        in_stack_00000090 = in_stack_000000d0;
        FUN_022f986c(lVar16,uVar15,uVar2,&stack0x00000080,uVar3,uVar4,0xffffffff,cVar5 != '\0');
        lVar18 = in_stack_00000128;
        *(long *)(lVar14 + 0x10) = lVar16;
        uVar15 = FUN_022f8990(lVar13,0);
        uVar15 = FUN_010b973c(in_stack_00000060,uVar15,
                              *(undefined8 *)
                               System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                     Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320f6c(lVar14,uVar15,*(undefined8 *)StringLiteral_9754);
        lVar16 = in_stack_00000128;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar18 + 0x18) = lVar14;
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                     UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033f6e48);
        lVar18 = in_stack_00000128;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar16 + 0x20) = lVar14;
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                     UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033f6e48);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar18 + 0x28) = lVar14;
        lVar14 = FUN_022f8990(lVar13,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
          uVar12 = 0;
          uVar19 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
          do {
            if (uVar19 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar2 = *(undefined4 *)(lVar14 + 0x20 + uVar12 * 4);
            uStack0000000000000190 = uVar2;
            uVar19 = FUN_0129eff4(in_stack_00000070,&stack0x00000190,(long)&stack0x00000120 + 4,
                                  *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
            if ((uVar19 & 1) != 0) {
              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(in_stack_00000128 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00ac20f0(*(long *)(in_stack_00000128 + 0x20),uStack0000000000000124,
                           *(undefined8 *)StringLiteral_4747);
            }
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uStack0000000000000194 = uVar2;
            uVar19 = FUN_0129eff4(unaff_x22,(long)&stack0x00000190 + 4,(long)&stack0x00000120 + 4,
                                  *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
            if ((uVar19 & 1) != 0) {
              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(in_stack_00000128 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00ac20f0(*(long *)(in_stack_00000128 + 0x28),uStack0000000000000124,
                           *(undefined8 *)StringLiteral_4747);
            }
            uVar19 = (ulong)*(uint *)(lVar14 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar14 + 0x18));
        }
        uVar15 = FUN_022f8990(lVar13,0);
        FUN_01322050(in_stack_00000030,uVar15,*(undefined8 *)StringLiteral_2811);
        FUN_0129a054(in_stack_00000040,lVar13,in_stack_00000128,*(undefined8 *)StringLiteral_5269);
        unaff_x25 = thunk_FUN_00d62348(*(undefined8 *)
                                        Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(unaff_x25,*(undefined8 *)PTR_DAT_033ee588);
        unaff_x24 = thunk_FUN_00d62348(*(undefined8 *)
                                        UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(unaff_x24,*(undefined8 *)PTR_DAT_033f6e48);
        unaff_x27 = thunk_FUN_00d62348(*(undefined8 *)
                                        UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
        if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(unaff_x27,*(undefined8 *)PTR_DAT_033f6e48);
        if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        unaff_x19 = FUN_0233dbd8(lVar13,0);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      } while (*(int *)(unaff_x19 + 0x18) < 1);
      unaff_w20 = 0;
    }
    puVar7 = Method_System_Collections_Generic_List<Grabbable>_Contains__;
    FUN_0132138c(unaff_x19,unaff_w20,&stack0x00000198,
                 *(undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__);
    unaff_w28 = in_stack_00000198;
    FUN_0132138c(unaff_x19,unaff_w20,&stack0x000001a0,*(undefined8 *)puVar7);
    uVar2 = in_stack_000001a0._4_4_;
    FUN_0132138c(in_stack_00000060,unaff_w28,&stack0x000001a8,
                 *(undefined8 *)
                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                );
    FUN_00ca0af8(unaff_x25,in_stack_000001a8,*(undefined8 *)OVRManager_XrApi_TypeInfo);
    uStack00000000000001b0 = unaff_w28;
    uVar12 = FUN_0129eff4(in_stack_00000070,&stack0x000001b0,&stack0x00000120,
                          *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    if ((uVar12 & 1) != 0) {
      FUN_00ac20f0(unaff_x24,uStack0000000000000120,*(undefined8 *)StringLiteral_4747);
    }
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iStack00000000000001b4 = unaff_w20;
    uVar12 = FUN_0129eff4(unaff_x22,(long)&stack0x000001b0 + 4,&stack0x00000120,
                          *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    if ((uVar12 & 1) != 0) {
      if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_00000128 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ac20f0(*(long *)(in_stack_00000128 + 0x28),uStack0000000000000120,
                   *(undefined8 *)StringLiteral_4747);
    }
    iVar20 = iStack0000000000000168;
    uStack00000000000001bc = unaff_w28;
    FUN_01299bc0(in_stack_00000070,(long)&stack0x000001b8 + 4,&stack0x000001b8,
                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    if (iVar20 != iStack00000000000001b8) {
LAB_0234ff44:
      iVar20 = iStack0000000000000168;
      FUN_01299bc0(in_stack_00000070,&stack0x000001d4,&stack0x000001d0,
                   *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
      iVar1 = iStack000000000000016c;
      if (iVar20 == in_stack_000001d0) {
        uStack00000000000001dc = unaff_w28;
        FUN_01299bc0(in_stack_00000070,(long)&stack0x000001d8 + 4,&stack0x000001d8,
                     *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
        iVar20 = iStack0000000000000048;
        if (iVar1 == iStack00000000000001d8) {
          for (; 0 < iVar20 + 1; iVar20 = iVar20 + -1) {
            FUN_0132138c(unaff_x29,iVar20,&stack0x000001e0,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            FUN_00ca0af8(unaff_x25,in_stack_000001e0,*(undefined8 *)OVRManager_XrApi_TypeInfo);
            puVar7 = StringLiteral_4747;
            FUN_00ac20f0(unaff_x24,in_stack_00000078 + iVar20,*(undefined8 *)StringLiteral_4747);
            FUN_00ac20f0(unaff_x27,0xffffffff,*(undefined8 *)puVar7);
          }
        }
      }
      goto LAB_02350020;
    }
    uStack00000000000001c4 = uVar2;
    param_1 = (undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
    unaff_w26 = iStack000000000000016c;
  } while( true );
LAB_02350418:
  do {
    FUN_0132138c(lVar13,iVar20,&stack0x000000e0,*(undefined8 *)StringLiteral_10196);
    lVar18 = _uStack00000000000000e0;
    if (lVar14 == 0) goto LAB_02350870;
    FUN_0132138c(lVar14,iVar20,&stack0x000000e0,*(undefined8 *)StringLiteral_4463);
    lVar9 = _uStack00000000000000e0;
    if (_uStack00000000000000e0 == 0) goto LAB_02350870;
    iVar1 = *(int *)(in_stack_00000060 + 0x18);
    uVar12 = FUN_0237620c(*(undefined8 *)(_uStack00000000000000e0 + 0x18),&stack0x00000118,0,0,0);
    uVar15 = in_stack_00000118;
    if ((uVar12 & 1) != 0) {
      lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
      if (lVar17 == 0) goto LAB_02350870;
      FUN_022f9708(lVar17,uVar15,0);
      *(long *)(lVar9 + 0x10) = lVar17;
      puVar8 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
      if (lVar18 == 0) goto LAB_02350870;
      *(undefined4 *)(lVar17 + 0x48) = *(undefined4 *)(lVar18 + 0x48);
      FUN_022fa0bc(lVar17,iVar1,0);
      FUN_022f9954(lVar18,*(undefined8 *)(lVar9 + 0x10),0);
      lVar17 = *(long *)(lVar9 + 0x18);
      if (lVar17 == 0) goto LAB_02350870;
      iVar11 = 0;
      while (iVar6 = *(int *)(lVar17 + 0x18), iVar11 < iVar6) {
        if (*(long *)(lVar9 + 0x20) == 0) goto LAB_02350870;
        FUN_0132138c(*(long *)(lVar9 + 0x20),iVar11,&stack0x000000e0,*(undefined8 *)puVar8);
        in_stack_0000024c = uStack00000000000000e0;
        _uStack00000000000000e0 = CONCAT44(uStack00000000000000e4,iVar1 + iVar11);
        FUN_0129a054(in_stack_00000070,&stack0x000000e0,&stack0x0000024c,
                     *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
        lVar17 = *(long *)(lVar9 + 0x18);
        iVar11 = iVar11 + 1;
        if (lVar17 == 0) goto LAB_02350870;
      }
      if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02350870;
      if ((*(int *)(*(long *)(lVar9 + 0x28) + 0x18) == iVar6) && (0 < iVar6)) {
        iVar11 = 0;
        do {
          if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02350870;
          FUN_0132138c(*(long *)(lVar9 + 0x28),iVar11,&stack0x000000e0,*(undefined8 *)puVar8);
          if (in_stack_00000068 == 0) goto LAB_02350870;
          in_stack_0000024c = uStack00000000000000e0;
          _uStack00000000000000e0 = CONCAT44(uStack00000000000000e4,iVar1 + iVar11);
          FUN_0129a054(in_stack_00000068,&stack0x000000e0,&stack0x0000024c,
                       *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
          lVar17 = *(long *)(lVar9 + 0x18);
          if (lVar17 == 0) goto LAB_02350870;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar17 + 0x18));
      }
      FUN_01322050(in_stack_00000060,lVar17,
                   *(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
      lVar18 = FUN_022f8edc(lVar18,0);
      if (lVar18 == 0) goto LAB_02350870;
      if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
        uVar12 = 0;
        uVar19 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
        do {
          if (uVar19 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar15 = *(undefined8 *)(lVar18 + 0x20 + uVar12 * 8);
          uStack00000000000000e0 = (int)uVar15;
          FUN_01299bc0(in_stack_00000070,&stack0x000000e0,&stack0x0000024c,*(undefined8 *)puVar7);
          _uStack00000000000000e0 = CONCAT44(uStack00000000000000e4,(int)((ulong)uVar15 >> 0x20));
          FUN_01299bc0(in_stack_00000070,&stack0x000000e0,&stack0x0000024c,*(undefined8 *)puVar7);
          _uStack00000000000000e0 = 0;
          FUN_022f6fa4(&stack0x000000e0,in_stack_0000024c,in_stack_0000024c,0);
          FUN_022f7b50(&stack0x00000108,_uStack00000000000000e0,uVar15,0);
          if ((in_stack_00000028._4_4_ <= (int)in_stack_00000110) ||
             (in_stack_00000028._4_4_ <= (int)((ulong)in_stack_00000110 >> 0x20))) {
            FUN_00ca16d4(lVar16,in_stack_00000108,in_stack_00000110,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo);
          }
          uVar19 = (ulong)*(uint *)(lVar18 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar18 + 0x18));
      }
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 < *(int *)(lVar13 + 0x18));
LAB_023506e0:
  uVar15 = FUN_010d96e0(in_stack_00000030,*(undefined8 *)PTR_DAT_033eb5c8);
  lVar13 = FUN_010dfe04(uVar15,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                       );
  if (lVar13 != 0) {
    *(undefined4 *)(in_stack_00000018 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    uVar15 = FUN_010d96e0(lVar16,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                         );
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4424);
    if (lVar14 != 0) {
      FUN_012d239c(lVar14,in_stack_00000018,
                   *(undefined8 *)
                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_16__,0);
      uVar15 = FUN_010dcdb8(uVar15,lVar14,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
      uVar15 = FUN_010dfe04(uVar15,*(undefined8 *)
                                    Method_UnityEngine_Object_Instantiate<GameObject>__);
      FUN_02310a38(in_stack_00000020,in_stack_00000060,0,0);
      FUN_0230ff4c(in_stack_00000020,in_stack_00000070,0);
      FUN_02310070(in_stack_00000020,in_stack_00000068,0);
      FUN_02350998(in_stack_00000020,lVar13);
      return uVar15;
    }
  }
LAB_02350870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


