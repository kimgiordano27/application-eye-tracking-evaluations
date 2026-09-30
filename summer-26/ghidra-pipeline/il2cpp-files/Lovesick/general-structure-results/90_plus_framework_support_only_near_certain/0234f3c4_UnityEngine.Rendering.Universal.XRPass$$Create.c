/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.XRPass$$Create
ENTRY_POINT: 0234f3c4
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


/* WARNING: Removing unreachable block (ram,0x02350878) */
/* WARNING: Removing unreachable block (ram,0x0235006c) */
/* WARNING: Removing unreachable block (ram,0x023507dc) */

undefined8 UnityEngine_Rendering_Universal_XRPass__Create(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long unaff_x20;
  undefined8 *puVar21;
  int iVar22;
  long unaff_x21;
  undefined8 *puVar23;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *puVar24;
  long unaff_x26;
  undefined1 auVar25 [16];
  long in_stack_00000018;
  undefined8 uStack0000000000000030;
  int iStack0000000000000048;
  int iStack000000000000004c;
  long in_stack_00000068;
  long in_stack_00000070;
  int iStack0000000000000078;
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
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
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
  int iStack00000000000001d0;
  undefined4 uStack00000000000001d4;
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
  
  puVar21 = *(undefined8 **)(unaff_x20 + 0x620);
  puVar24 = *(undefined8 **)(unaff_x23 + 0x398);
  puVar23 = *(undefined8 **)(unaff_x21 + 0x668);
  uStack0000000000000030 = param_1;
  FUN_01320e50();
  uVar11 = FUN_022f8518();
  uVar11 = FUN_010d96e0(uVar11,*puVar21);
  lVar12 = FUN_010dfe04(uVar11,*puVar24);
  lVar13 = thunk_FUN_00d62348(*puVar23);
  if (lVar13 != 0) {
    FUN_01298da0(lVar13,*(undefined8 *)StringLiteral_8681);
    if (in_stack_00000070 != 0) {
      iVar8 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                        (in_stack_00000070,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                        );
      if (lVar12 != 0) {
        FUN_01323390(lVar12,&stack0x000000e0,*(undefined8 *)StringLiteral_2447);
        in_stack_00000178 = in_stack_000000e8;
        in_stack_00000170 = _uStack00000000000000e0;
        in_stack_00000180 = in_stack_000000f0;
        iStack0000000000000078 = iVar8;
        while( true ) {
          uVar14 = FUN_012b894c(&stack0x00000170,
                                *(undefined8 *)
                                 UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo);
          if ((uVar14 & 1) == 0) break;
          uVar11 = FUN_00ca14c4(&stack0x00000170,
                                *(undefined8 *)ContextMenuItemList_<>c__DisplayClass4_0_TypeInfo);
          uVar14 = UnityEngine_Rendering_Universal_RendererLighting__DisableAllKeywords
                             (unaff_x22,uVar11,0);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                       Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320ebc(lVar12,iStack000000000000004c,*(undefined8 *)PTR_DAT_033eec38);
          for (iVar20 = 1;
              puVar6 = 
              Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
              , iVar20 + -1 < iStack000000000000004c; iVar20 = iVar20 + 1) {
            FUN_0132138c(unaff_x26,uVar14 & 0xffffffff,&stack0x000000c0,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            uVar11 = _uStack00000000000000c0;
            FUN_0132138c(unaff_x26,uVar14 >> 0x20,&stack0x000000c0,*(undefined8 *)puVar6);
            uVar11 = FUN_0233bc34((float)iVar20 / ((float)iStack000000000000004c + 1.0),uVar11,
                                  _uStack00000000000000c0,0);
            FUN_00ca0af8(lVar12,uVar11,*(undefined8 *)OVRManager_XrApi_TypeInfo);
          }
          if (*(int *)(*(long *)StringLiteral_14183 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar15 = FUN_0234e084(unaff_x22,uVar14);
          puVar6 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
          uStack00000000000000c0 = (int)uVar14;
          FUN_01299bc0(in_stack_00000070,&stack0x000000c0,(long)&stack0x00000188 + 4,
                       *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
          uVar1 = in_stack_00000188._4_4_;
          _uStack00000000000000c0 = CONCAT44(uStack00000000000000c4,(int)(uVar14 >> 0x20));
          FUN_01299bc0(in_stack_00000070,&stack0x000000c0,(long)&stack0x00000188 + 4,
                       *(undefined8 *)puVar6);
          uVar2 = in_stack_00000188._4_4_;
          if (*(int *)(*(long *)
                        Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__ +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_022f6fa4(&stack0x00000168,uVar1,uVar2,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01323390(lVar15,&stack0x000000e0,*(undefined8 *)StringLiteral_11168);
          in_stack_00000148 = in_stack_000000e8;
          in_stack_00000140 = _uStack00000000000000e0;
          in_stack_00000158 = in_stack_000000f8;
          in_stack_00000150 = in_stack_000000f0;
          while( true ) {
            uVar14 = FUN_012b894c(&stack0x00000140,*(undefined8 *)PTR_DAT_033f0610);
            if ((uVar14 & 1) == 0) break;
            auVar25 = FUN_00ca15cc(&stack0x00000140,
                                   *(undefined8 *)
                                    Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                                  );
            _in_stack_00000130 = auVar25;
            lVar15 = FUN_00ca13c0(&stack0x00000130,
                                  *(undefined8 *)
                                   Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                                 );
            uVar14 = FUN_0129eff4(lVar13,lVar15,&stack0x00000128,*(undefined8 *)StringLiteral_11630)
            ;
            if ((uVar14 & 1) == 0) {
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_022fb2d8(lVar16,0);
              in_stack_00000128 = lVar16;
              uVar11 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar1 = *(undefined4 *)(lVar15 + 0x48);
              in_stack_000000b8 = *(undefined8 *)(lVar15 + 0x34);
              in_stack_000000b0 = *(undefined8 *)(lVar15 + 0x2c);
              in_stack_000000a8 = *(undefined8 *)(lVar15 + 0x24);
              in_stack_000000a0 = *(long *)(lVar15 + 0x1c);
              in_stack_000000c8 = 0;
              _uStack00000000000000c0 = 0;
              in_stack_000000d8 = 0;
              in_stack_000000d0 = 0;
              _uStack00000000000000e0 = in_stack_000000a0;
              in_stack_000000e8 = in_stack_000000a8;
              in_stack_000000f0 = in_stack_000000b0;
              in_stack_000000f8 = in_stack_000000b8;
              FUN_022eff30(&stack0x000000c0,&stack0x000000a0,0);
              uVar2 = *(undefined4 *)(lVar15 + 0x18);
              uVar3 = *(undefined4 *)(lVar15 + 0x54);
              cVar4 = *(char *)(lVar15 + 0x4c);
              lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                         );
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              in_stack_00000088 = in_stack_000000c8;
              in_stack_00000080 = _uStack00000000000000c0;
              in_stack_00000098 = in_stack_000000d8;
              in_stack_00000090 = in_stack_000000d0;
              FUN_022f986c(lVar17,uVar11,uVar1,&stack0x00000080,uVar2,uVar3,0xffffffff,cVar4 != '\0'
                          );
              lVar18 = in_stack_00000128;
              *(long *)(lVar16 + 0x10) = lVar17;
              uVar11 = FUN_022f8990(lVar15,0);
              uVar11 = FUN_010b973c(unaff_x26,uVar11,
                                    *(undefined8 *)
                                     System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo)
              ;
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                           Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320f6c(lVar16,uVar11,*(undefined8 *)StringLiteral_9754);
              lVar17 = in_stack_00000128;
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              *(long *)(lVar18 + 0x18) = lVar16;
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                           UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                         );
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320e50(lVar16,*(undefined8 *)PTR_DAT_033f6e48);
              lVar18 = in_stack_00000128;
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              *(long *)(lVar17 + 0x20) = lVar16;
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                           UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                         );
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320e50(lVar16,*(undefined8 *)PTR_DAT_033f6e48);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              *(long *)(lVar18 + 0x28) = lVar16;
              lVar16 = FUN_022f8990(lVar15,0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
                uVar14 = 0;
                uVar19 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                do {
                  if (uVar19 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  uVar1 = *(undefined4 *)(lVar16 + 0x20 + uVar14 * 4);
                  uStack0000000000000190 = uVar1;
                  uVar19 = FUN_0129eff4(in_stack_00000070,&stack0x00000190,
                                        (long)&stack0x00000120 + 4,
                                        *(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
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
                  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uStack0000000000000194 = uVar1;
                  uVar19 = FUN_0129eff4(in_stack_00000068,(long)&stack0x00000190 + 4,
                                        (long)&stack0x00000120 + 4,
                                        *(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
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
                  uVar19 = (ulong)*(uint *)(lVar16 + 0x18);
                  uVar14 = uVar14 + 1;
                } while ((long)uVar14 < (long)(int)*(uint *)(lVar16 + 0x18));
              }
              uVar11 = FUN_022f8990(lVar15,0);
              FUN_01322050(uStack0000000000000030,uVar11,*(undefined8 *)StringLiteral_2811);
              FUN_0129a054(lVar13,lVar15,in_stack_00000128,*(undefined8 *)StringLiteral_5269);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                           Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320e50(lVar16,*(undefined8 *)PTR_DAT_033ee588);
              lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                           UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                         );
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320e50(lVar17,*(undefined8 *)PTR_DAT_033f6e48);
              lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                           UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                         );
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320e50(lVar18,*(undefined8 *)PTR_DAT_033f6e48);
              if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar15 = FUN_0233dbd8(lVar15,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (0 < *(int *)(lVar15 + 0x18)) {
                iVar20 = 0;
                do {
                  puVar6 = Method_System_Collections_Generic_List<Grabbable>_Contains__;
                  FUN_0132138c(lVar15,iVar20,&stack0x00000198,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<Grabbable>_Contains__);
                  uVar1 = in_stack_00000198;
                  FUN_0132138c(lVar15,iVar20,&stack0x000001a0,*(undefined8 *)puVar6);
                  uVar2 = in_stack_000001a0._4_4_;
                  FUN_0132138c(unaff_x26,uVar1,&stack0x000001a8,
                               *(undefined8 *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                              );
                  FUN_00ca0af8(lVar16,in_stack_000001a8,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                  uStack00000000000001b0 = uVar1;
                  uVar14 = FUN_0129eff4(in_stack_00000070,&stack0x000001b0,&stack0x00000120,
                                        *(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                  if ((uVar14 & 1) != 0) {
                    FUN_00ac20f0(lVar17,uStack0000000000000120,*(undefined8 *)StringLiteral_4747);
                  }
                  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  iStack00000000000001b4 = iVar20;
                  uVar14 = FUN_0129eff4(in_stack_00000068,(long)&stack0x000001b0 + 4,
                                        &stack0x00000120,
                                        *(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                  if ((uVar14 & 1) != 0) {
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
                  iVar22 = iStack0000000000000168;
                  uStack00000000000001bc = uVar1;
                  FUN_01299bc0(in_stack_00000070,(long)&stack0x000001b8 + 4,&stack0x000001b8,
                               *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                  iVar10 = iStack000000000000016c;
                  if (iVar22 == iStack00000000000001b8) {
                    uStack00000000000001c4 = uVar2;
                    FUN_01299bc0(in_stack_00000070,(long)&stack0x000001c0 + 4,&stack0x000001c0,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    if (iVar10 != iStack00000000000001c0) goto LAB_0234ff44;
                    iVar22 = 0;
                    do {
                      FUN_0132138c(lVar12,iVar22,&stack0x000001c8,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                  );
                      FUN_00ca0af8(lVar16,in_stack_000001c8,*(undefined8 *)OVRManager_XrApi_TypeInfo
                                  );
                      puVar6 = StringLiteral_4747;
                      FUN_00ac20f0(lVar17,iStack0000000000000078 + iVar22,
                                   *(undefined8 *)StringLiteral_4747);
                      FUN_00ac20f0(lVar18,0xffffffff,*(undefined8 *)puVar6);
                      iVar22 = iVar22 + 1;
                    } while (iStack000000000000004c != iVar22);
                  }
                  else {
LAB_0234ff44:
                    iVar22 = iStack0000000000000168;
                    uStack00000000000001d4 = uVar2;
                    FUN_01299bc0(in_stack_00000070,(long)&stack0x000001d0 + 4,&stack0x000001d0,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    iVar10 = iStack000000000000016c;
                    if (iVar22 == iStack00000000000001d0) {
                      uStack00000000000001dc = uVar1;
                      FUN_01299bc0(in_stack_00000070,(long)&stack0x000001d8 + 4,&stack0x000001d8,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      iVar22 = iStack0000000000000048;
                      if (iVar10 == iStack00000000000001d8) {
                        for (; 0 < iVar22 + 1; iVar22 = iVar22 + -1) {
                          FUN_0132138c(lVar12,iVar22,&stack0x000001e0,
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                      );
                          FUN_00ca0af8(lVar16,in_stack_000001e0,
                                       *(undefined8 *)OVRManager_XrApi_TypeInfo);
                          puVar6 = StringLiteral_4747;
                          FUN_00ac20f0(lVar17,iStack0000000000000078 + iVar22,
                                       *(undefined8 *)StringLiteral_4747);
                          FUN_00ac20f0(lVar18,0xffffffff,*(undefined8 *)puVar6);
                        }
                      }
                    }
                  }
                  iVar20 = iVar20 + 1;
                } while (iVar20 < *(int *)(lVar15 + 0x18));
              }
              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              *(long *)(in_stack_00000128 + 0x18) = lVar16;
              *(long *)(in_stack_00000128 + 0x20) = lVar17;
              *(long *)(in_stack_00000128 + 0x28) = lVar18;
            }
            else {
              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar15 = *(long *)(in_stack_00000128 + 0x18);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar16 = *(long *)(in_stack_00000128 + 0x20);
              lVar17 = *(long *)(in_stack_00000128 + 0x28);
              if (0 < *(int *)(lVar15 + 0x18)) {
                iVar20 = 0;
                do {
                  FUN_0132138c(lVar15,iVar20,&stack0x000001e8,
                               *(undefined8 *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                              );
                  iVar9 = FUN_01323730(unaff_x26,in_stack_000001e8,
                                       *(undefined8 *)System_Collections_IComparer_TypeInfo);
                  iVar10 = *(int *)(lVar15 + 0x18);
                  iVar22 = iVar20 + 1;
                  iVar5 = 0;
                  if (iVar10 != 0) {
                    iVar5 = iVar22 / iVar10;
                  }
                  FUN_0132138c(lVar15,iVar22 - iVar5 * iVar10,&stack0x000001f0,
                               *(undefined8 *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                              );
                  iVar10 = FUN_01323730(unaff_x26,in_stack_000001f0,
                                        *(undefined8 *)System_Collections_IComparer_TypeInfo);
                  puVar6 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                  if ((iVar9 != -1) && (iVar10 != -1)) {
                    FUN_01299bc0(in_stack_00000070,&stack0x00000200,&stack0x000001fc,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    FUN_01299bc0(in_stack_00000070,&stack0x00000208,&stack0x00000204,
                                 *(undefined8 *)puVar6);
                    puVar6 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                    if (in_stack_000001fc == in_stack_00000204) {
                      FUN_01299bc0(in_stack_00000070,&stack0x00000210,&stack0x0000020c,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      FUN_01299bc0(in_stack_00000070,&stack0x00000218,&stack0x00000214,
                                   *(undefined8 *)puVar6);
                      if (in_stack_0000020c == in_stack_00000214) {
                        FUN_01323e24(lVar15,iVar22,lVar12,*(undefined8 *)Mono_X509PalImpl_TypeInfo);
                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        iVar10 = 0;
                        do {
                          FUN_01323a14(lVar16,iVar20 + iVar10 + 1,&stack0x0000021c,
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                      );
                          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_00ac20f0(lVar17,0xffffffff,*(undefined8 *)StringLiteral_4747);
                          iVar10 = iVar10 + 1;
                        } while (iStack000000000000004c != iVar10);
                        goto LAB_0234f9d0;
                      }
                    }
                    puVar6 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                    FUN_01299bc0(in_stack_00000070,&stack0x00000224,&stack0x00000220,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    FUN_01299bc0(in_stack_00000070,&stack0x0000022c,&stack0x00000228,
                                 *(undefined8 *)puVar6);
                    puVar6 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                    if (in_stack_00000220 == in_stack_00000228) {
                      FUN_01299bc0(in_stack_00000070,&stack0x00000234,&stack0x00000230,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      FUN_01299bc0(in_stack_00000070,&stack0x0000023c,&stack0x00000238,
                                   *(undefined8 *)puVar6);
                      if (in_stack_00000230 == in_stack_00000238) {
                        FUN_01324d60(lVar12,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_Add__
                                    );
                        FUN_01323e24(lVar15,iVar22,lVar12,*(undefined8 *)Mono_X509PalImpl_TypeInfo);
                        iVar20 = iStack000000000000004c;
                        while (0 < iVar20) {
                          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01323a14(lVar16,iVar22,&stack0x00000248,
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                      );
                          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_00ac20f0(lVar17,0xffffffff,*(undefined8 *)StringLiteral_4747);
                          iVar20 = iVar20 + -1;
                        }
                      }
                    }
                  }
LAB_0234f9d0:
                  iVar20 = iVar22;
                } while (iVar22 < *(int *)(lVar15 + 0x18));
              }
              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              *(long *)(in_stack_00000128 + 0x18) = lVar15;
              *(long *)(in_stack_00000128 + 0x20) = lVar16;
              *(long *)(in_stack_00000128 + 0x28) = lVar17;
            }
          }
          FUN_012b8948(&stack0x00000140,
                       *(undefined8 *)
                        Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                      );
          iStack0000000000000078 = iStack0000000000000078 + iStack000000000000004c;
        }
        FUN_012b8948(&stack0x00000170,*(undefined8 *)Method_System_SByte_Parse__);
        uVar11 = FUN_012998a8(lVar13,*(undefined8 *)StringLiteral_14358);
        lVar12 = FUN_010dfe04(uVar11,*(undefined8 *)StringLiteral_2051);
        uVar11 = FUN_01299a34(lVar13,*(undefined8 *)StringLiteral_12114);
        lVar13 = FUN_010dfe04(uVar11,*(undefined8 *)Method_System_Decimal_ToInt64__);
        lVar15 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11831);
        if (lVar15 != 0) {
          FUN_01320e50(lVar15,*(undefined8 *)
                               Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__0__
                      );
          puVar6 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
          if (lVar12 != 0) {
            if (0 < *(int *)(lVar12 + 0x18)) {
              iVar20 = 0;
              do {
                FUN_0132138c(lVar12,iVar20,&stack0x000000e0,*(undefined8 *)StringLiteral_10196);
                lVar16 = _uStack00000000000000e0;
                if (lVar13 == 0) goto LAB_02350870;
                FUN_0132138c(lVar13,iVar20,&stack0x000000e0,*(undefined8 *)StringLiteral_4463);
                lVar17 = _uStack00000000000000e0;
                if (_uStack00000000000000e0 == 0) goto LAB_02350870;
                iVar22 = *(int *)(unaff_x26 + 0x18);
                uVar14 = FUN_0237620c(*(undefined8 *)(_uStack00000000000000e0 + 0x18),
                                      &stack0x00000118,0,0,0);
                uVar11 = in_stack_00000118;
                if ((uVar14 & 1) != 0) {
                  lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                             );
                  if (lVar18 == 0) goto LAB_02350870;
                  FUN_022f9708(lVar18,uVar11,0);
                  *(long *)(lVar17 + 0x10) = lVar18;
                  puVar7 = 
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                  ;
                  if (lVar16 == 0) goto LAB_02350870;
                  *(undefined4 *)(lVar18 + 0x48) = *(undefined4 *)(lVar16 + 0x48);
                  FUN_022fa0bc(lVar18,iVar22,0);
                  FUN_022f9954(lVar16,*(undefined8 *)(lVar17 + 0x10),0);
                  lVar18 = *(long *)(lVar17 + 0x18);
                  if (lVar18 == 0) goto LAB_02350870;
                  iVar10 = 0;
                  while (iVar5 = *(int *)(lVar18 + 0x18), iVar10 < iVar5) {
                    if (*(long *)(lVar17 + 0x20) == 0) goto LAB_02350870;
                    FUN_0132138c(*(long *)(lVar17 + 0x20),iVar10,&stack0x000000e0,
                                 *(undefined8 *)puVar7);
                    in_stack_0000024c = uStack00000000000000e0;
                    _uStack00000000000000e0 = CONCAT44(uStack00000000000000e4,iVar22 + iVar10);
                    FUN_0129a054(in_stack_00000070,&stack0x000000e0,&stack0x0000024c,
                                 *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    lVar18 = *(long *)(lVar17 + 0x18);
                    iVar10 = iVar10 + 1;
                    if (lVar18 == 0) goto LAB_02350870;
                  }
                  if (*(long *)(lVar17 + 0x28) == 0) goto LAB_02350870;
                  if ((*(int *)(*(long *)(lVar17 + 0x28) + 0x18) == iVar5) && (0 < iVar5)) {
                    iVar10 = 0;
                    do {
                      if (*(long *)(lVar17 + 0x28) == 0) goto LAB_02350870;
                      FUN_0132138c(*(long *)(lVar17 + 0x28),iVar10,&stack0x000000e0,
                                   *(undefined8 *)puVar7);
                      if (in_stack_00000068 == 0) goto LAB_02350870;
                      in_stack_0000024c = uStack00000000000000e0;
                      _uStack00000000000000e0 = CONCAT44(uStack00000000000000e4,iVar22 + iVar10);
                      FUN_0129a054(in_stack_00000068,&stack0x000000e0,&stack0x0000024c,
                                   *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                      lVar18 = *(long *)(lVar17 + 0x18);
                      if (lVar18 == 0) goto LAB_02350870;
                      iVar10 = iVar10 + 1;
                    } while (iVar10 < *(int *)(lVar18 + 0x18));
                  }
                  FUN_01322050(unaff_x26,lVar18,
                               *(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Touch>__)
                  ;
                  lVar16 = FUN_022f8edc(lVar16,0);
                  if (lVar16 == 0) goto LAB_02350870;
                  if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
                    uVar14 = 0;
                    uVar19 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                    do {
                      if (uVar19 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      uVar11 = *(undefined8 *)(lVar16 + 0x20 + uVar14 * 8);
                      uStack00000000000000e0 = (int)uVar11;
                      FUN_01299bc0(in_stack_00000070,&stack0x000000e0,&stack0x0000024c,
                                   *(undefined8 *)puVar6);
                      _uStack00000000000000e0 =
                           CONCAT44(uStack00000000000000e4,(int)((ulong)uVar11 >> 0x20));
                      FUN_01299bc0(in_stack_00000070,&stack0x000000e0,&stack0x0000024c,
                                   *(undefined8 *)puVar6);
                      _uStack00000000000000e0 = 0;
                      FUN_022f6fa4(&stack0x000000e0,in_stack_0000024c,in_stack_0000024c,0);
                      FUN_022f7b50(&stack0x00000108,_uStack00000000000000e0,uVar11,0);
                      if ((iVar8 <= (int)in_stack_00000110) ||
                         (iVar8 <= (int)((ulong)in_stack_00000110 >> 0x20))) {
                        FUN_00ca16d4(lVar15,in_stack_00000108,in_stack_00000110,
                                     *(undefined8 *)
                                      System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo
                                    );
                      }
                      uVar19 = (ulong)*(uint *)(lVar16 + 0x18);
                      uVar14 = uVar14 + 1;
                    } while ((long)uVar14 < (long)(int)*(uint *)(lVar16 + 0x18));
                  }
                }
                iVar20 = iVar20 + 1;
              } while (iVar20 < *(int *)(lVar12 + 0x18));
            }
            uVar11 = FUN_010d96e0(uStack0000000000000030,*(undefined8 *)PTR_DAT_033eb5c8);
            lVar12 = FUN_010dfe04(uVar11,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                 );
            if (lVar12 != 0) {
              *(undefined4 *)(in_stack_00000018 + 0x10) = *(undefined4 *)(lVar12 + 0x18);
              uVar11 = FUN_010d96e0(lVar15,*(undefined8 *)
                                            Method_System_Collections_Generic_List_Enumerator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                                   );
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4424);
              if (lVar13 != 0) {
                FUN_012d239c(lVar13,in_stack_00000018,
                             *(undefined8 *)
                              Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_16__
                             ,0);
                uVar11 = FUN_010dcdb8(uVar11,lVar13,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__
                                     );
                uVar11 = FUN_010dfe04(uVar11,*(undefined8 *)
                                              Method_UnityEngine_Object_Instantiate<GameObject>__);
                FUN_02310a38(unaff_x22,unaff_x26,0,0);
                FUN_0230ff4c(unaff_x22,in_stack_00000070,0);
                FUN_02310070(unaff_x22,in_stack_00000068,0);
                FUN_02350998(unaff_x22,lVar12);
                return uVar11;
              }
            }
          }
        }
      }
    }
  }
LAB_02350870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


