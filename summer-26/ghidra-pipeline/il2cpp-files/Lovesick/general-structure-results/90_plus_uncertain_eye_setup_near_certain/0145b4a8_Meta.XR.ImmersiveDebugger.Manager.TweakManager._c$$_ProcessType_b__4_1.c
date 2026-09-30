/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager.<>c$$<ProcessType>b__4_1
ENTRY_POINT: 0145b4a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 120
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakManager_<>c__<ProcessType>b__4_1(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  char cVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong *puVar32;
  int *piVar33;
  long unaff_x19;
  undefined8 uVar34;
  long *plVar35;
  long lVar36;
  long unaff_x24;
  int iVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  ulong uVar41;
  long *plStack0000000000000020;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000cc;
  long in_stack_000000d0;
  undefined1 uStack00000000000000d8;
  undefined7 uStack00000000000000d9;
  
  thunk_FUN_00d48444(PTR_DAT_033f4f00);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>__ctor__
                    );
  thunk_FUN_00d48444(StringLiteral_14312);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<SerializationFieldInfo>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033f38b8);
  thunk_FUN_00d48444(
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                    );
  thunk_FUN_00d48444(
                    Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass8_0_<DOLocalPath>b__0__
                    );
  thunk_FUN_00d48444(System_Func<double>_TypeInfo);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                    );
  thunk_FUN_00d48444(StringLiteral_3316);
  thunk_FUN_00d48444(Method_Oculus_Platform_Message<CowatchingState>_get_Data__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f32__);
  thunk_FUN_00d48444(PTR_DAT_033f6398);
  thunk_FUN_00d48444(System_Linq_Expressions_IArgumentProvider_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__);
  thunk_FUN_00d48444(StringLiteral_12992);
  thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_Run<int>__);
  thunk_FUN_00d48444(UnityEngine_XR_InputTrackingState_TypeInfo);
  thunk_FUN_00d48444(System_Collections_Generic_IList<string>_TypeInfo);
  thunk_FUN_00d48444(System_TimeZoneInfo_AdjustmentRule___var);
  thunk_FUN_00d48444(Method_System_Diagnostics_Contracts_Contract_ForAll<Type>__);
  *(undefined1 *)(unaff_x19 + 0xa9c) = 1;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_CIELabColor>_Add__;
  in_stack_000000d0 = 0;
  uStack00000000000000cc = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000098 = 0;
  if (*(int *)(unaff_x24 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(unaff_x24 + 0x10) = 0xffffffff;
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  puVar5 = System_Nullable<short>_TypeInfo;
  if (lVar15 != 0) {
    FUN_017b46ec(lVar15,0);
    *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(unaff_x24 + 0x20);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    puVar5 = UnityEngine_UIElements_StyleSheets_Syntax_Expression___TypeInfo;
    if (lVar16 != 0) {
      FUN_02040640(lVar16,0);
      FUN_02040900(lVar16,0);
      lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar17 != 0) {
        FUN_01298da0(lVar17,*(undefined8 *)Method_System_Nullable<char>_get_Value__);
        puVar4 = StringLiteral_11624;
        puVar5 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
        lVar29 = *(long *)(lVar15 + 0x10);
        if (lVar29 != 0) {
          bVar10 = false;
          plStack0000000000000020 = (long *)0x0;
          iVar37 = 0;
          while (puVar7 = StringLiteral_7763, puVar6 = StringLiteral_302, puVar3 = PTR_DAT_033ee2d8,
                lVar18 = *(long *)(lVar29 + 0x60), lVar18 != 0) {
            if (*(int *)(lVar18 + 0x18) <= iVar37) {
              if (3 < *(int *)(unaff_x24 + 0x30)) {
                if (*(long *)(lVar29 + 0x58) == 0) break;
                in_stack_00000070 =
                     (long *)CONCAT44(in_stack_00000070._4_4_,
                                      *(undefined4 *)(*(long *)(lVar29 + 0x58) + 0x18));
                uVar34 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                            ,&stack0x00000070);
                puVar5 = StringLiteral_9958;
                if (*(long *)(lVar15 + 0x10) == 0) break;
                uStack00000000000000d8 = *(undefined1 *)(*(long *)(lVar15 + 0x10) + 0x27);
                uVar19 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x000000d8);
                if (*(long *)(lVar15 + 0x10) == 0) break;
                in_stack_00000068._4_1_ = *(undefined1 *)(*(long *)(lVar15 + 0x10) + 0x49);
                uVar38 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,(long)&stack0x00000068 + 4);
                uVar34 = FUN_01600ba0(*(undefined8 *)Method_System_Threading_Tasks_Task_Run<int>__,
                                      uVar34,uVar19,uVar38,0);
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar6);
                }
                FUN_02660dac(uVar34,0);
                lVar29 = *(long *)(lVar15 + 0x10);
                if (lVar29 == 0) break;
              }
              if (*(long *)(lVar29 + 0x58) == 0) break;
              if (*(int *)(*(long *)(lVar29 + 0x58) + 0x18) == 0) {
                if ((*(long *)(lVar29 + 0x68) != 0) &&
                   (plVar26 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,
                                                   *(undefined4 *)(*(long *)(lVar29 + 0x68) + 0x18))
                   , puVar4 = 
                     Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
                   , puVar5 = UnityEngine_XR_InputTrackingState_TypeInfo, plVar26 != (long *)0x0)) {
                  if ((int)plVar26[3] < 1) goto LAB_0145cee8;
                  uVar20 = 0;
                  goto LAB_0145ce80;
                }
                break;
              }
              cVar27 = *(char *)(lVar29 + 0x49);
              uVar34 = *(undefined8 *)(lVar29 + 0x50);
              cVar2 = *(char *)(lVar29 + 0x27);
              uVar11 = *(undefined4 *)(unaff_x24 + 0x30);
              lVar17 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0098);
              if (lVar17 == 0) break;
              FUN_014467b4(lVar17,cVar27 != '\0',uVar34,cVar2 != '\0',uVar11,0);
              if (*(long *)(lVar15 + 0x10) == 0) break;
              FUN_0144680c(lVar17,*(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x58),0);
              lVar29 = *(long *)(lVar15 + 0x10);
              if (lVar29 == 0) break;
              if (*(char *)(lVar29 + 0x4a) != '\0') {
                iVar37 = *(int *)(lVar29 + 0x20);
                if (*(int *)(lVar29 + 0x20) <= *(int *)(lVar29 + 0x1c)) {
                  iVar37 = *(int *)(lVar29 + 0x1c);
                }
                FUN_01448250(lVar17,*(undefined8 *)(lVar29 + 0x58),iVar37,0);
                lVar29 = *(long *)(lVar15 + 0x10);
                if (lVar29 == 0) break;
              }
              uVar20 = 0;
              goto LAB_0145cd00;
            }
            FUN_0132138c(lVar18,iVar37,&stack0x00000070,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
            plVar26 = in_stack_00000070;
            lVar29 = *(long *)(unaff_x24 + 0x28);
            if (lVar29 != 0) {
              uVar34 = *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_TryGetValue__
              ;
              if (in_stack_00000070 == (long *)0x0) {
                uVar19 = 0;
              }
              else {
                if (in_stack_00000070 == (long *)0x0) break;
                uVar19 = (**(code **)(*in_stack_00000070 + 0x168))
                                   (in_stack_00000070,*(undefined8 *)(*in_stack_00000070 + 0x170));
              }
              uVar34 = FUN_015f5b28(uVar34,uVar19,0);
              if ((*(long *)(lVar15 + 0x10) == 0) ||
                 (lVar18 = *(long *)(*(long *)(lVar15 + 0x10) + 0x60), lVar18 == 0)) break;
              (**(code **)(lVar29 + 0x18))
                        (((float)iVar37 / (float)*(int *)(lVar18 + 0x18)) * 0.5,
                         *(undefined8 *)(lVar29 + 0x40),uVar34,*(undefined8 *)(lVar29 + 0x28));
            }
            if (3 < *(int *)(unaff_x24 + 0x30)) {
              uVar34 = *(undefined8 *)PTR_DAT_033f4f00;
              if (plVar26 == (long *)0x0) {
                uVar19 = 0;
              }
              else {
                if (plVar26 == (long *)0x0) break;
                uVar19 = (**(code **)(*plVar26 + 0x168))(plVar26,*(undefined8 *)(*plVar26 + 0x170));
              }
              uVar34 = FUN_015f5b28(uVar34,uVar19,0);
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar6);
              }
              FUN_02660dac(uVar34,0);
            }
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_0268b4e0(plVar26,0,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar34 = *(undefined8 *)StringLiteral_14312;
              goto LAB_0145c940;
            }
            lVar29 = FUN_0142fbb8(plVar26,0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar20 = FUN_0268b4e0(lVar29,0,0);
            if ((uVar20 & 1) != 0) {
              if (plVar26 != (long *)0x0) {
                uVar34 = FUN_0268b6ac(plVar26,0);
                uVar19 = *(undefined8 *)StringLiteral_3316;
                puVar25 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>__ctor__
                ;
LAB_0145c910:
                uVar34 = FUN_01600424(uVar19,uVar34,*puVar25,0);
                lVar15 = *(long *)puVar6;
LAB_0145c928:
                iVar37 = *(int *)(lVar15 + 0xe0);
                goto joined_r0x0145d048;
              }
              break;
            }
            lVar18 = FUN_01433b54(plVar26,0);
            if (lVar18 == 0) break;
            if (*(long *)(lVar18 + 0x18) == 0) {
              if (plVar26 != (long *)0x0) {
                uVar34 = FUN_0268b6ac(plVar26,0);
                uVar19 = *(undefined8 *)StringLiteral_3316;
                puVar25 = (undefined8 *)
                          Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
                ;
                goto LAB_0145c910;
              }
              break;
            }
            if (lVar29 == 0) break;
            uVar11 = FUN_02681c0c(lVar29,0);
            in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar11);
            uVar20 = FUN_0129eff4(lVar17,&stack0x00000070,&stack0x000000d0,
                                  *(undefined8 *)
                                   System_Collections_Generic_ICollection<Vertex>_TypeInfo);
            if ((uVar20 & 1) == 0) {
              uVar11 = FUN_02666048(lVar29,0);
              in_stack_000000d0 =
                   FUN_00da4fb8(*(undefined8 *)
                                 Method_System_Collections_Generic_List<VolumeComponent>_Add__,
                                uVar11);
              iVar12 = FUN_02666048(lVar29,0);
              if (0 < iVar12) {
                lVar36 = 0;
                uVar20 = 0;
                do {
                  if (in_stack_000000d0 == 0) goto LAB_0145d050;
                  if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar20) goto LAB_0145d054;
                  FUN_014344d8(lVar29,in_stack_000000d0 + lVar36 + 0x20,uVar20 & 0xffffffff,0,0);
                  lVar31 = in_stack_000000d0;
                  lVar30 = *(long *)(lVar15 + 0x10);
                  if (lVar30 == 0) goto LAB_0145d050;
                  if (*(char *)(lVar30 + 0x48) != '\0') {
                    if (in_stack_000000d0 == 0) goto LAB_0145d050;
                    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                                0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar11 = Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture
                                       (lVar29,uVar20 & 0xffffffff);
                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_0145d054;
                    *(undefined4 *)(lVar31 + lVar36 + 0x34) = uVar11;
                    lVar30 = *(long *)(lVar15 + 0x10);
                    if (lVar30 == 0) goto LAB_0145d050;
                  }
                  lVar31 = in_stack_000000d0;
                  if (*(char *)(lVar30 + 0x27) != '\0') {
                    if (in_stack_000000d0 == 0) goto LAB_0145d050;
                    if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar20) goto LAB_0145d054;
                    if (*(char *)(in_stack_000000d0 + lVar36 + 0x32) == '\0') {
                      in_stack_00000070 = (long *)0x0;
                      in_stack_00000078 = 0;
                      FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000070,0);
                      if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_0145d054;
                      lVar31 = lVar31 + lVar36;
                      *(undefined8 *)(lVar31 + 0x28) = in_stack_00000078;
                      *(long **)(lVar31 + 0x20) = in_stack_00000070;
                      uVar34 = *(undefined8 *)System_Linq_Expressions_IArgumentProvider_TypeInfo;
                      if (plVar26 == (long *)0x0) {
                        uVar19 = 0;
                      }
                      else {
                        if (plVar26 == (long *)0x0) goto LAB_0145d050;
                        uVar19 = (**(code **)(*plVar26 + 0x168))
                                           (plVar26,*(undefined8 *)(*plVar26 + 0x170));
                      }
                      uVar34 = FUN_01600424(uVar34,uVar19,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_List<SerializationFieldInfo>_Add__
                                            ,0);
                      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)puVar6);
                      }
                      FUN_02661754(uVar34,0);
                    }
                  }
                  uVar20 = uVar20 + 1;
                  iVar12 = FUN_02666048(lVar29,0);
                  lVar36 = lVar36 + 0x18;
                } while ((long)uVar20 < (long)iVar12);
              }
              uVar11 = FUN_02681c0c(lVar29,0);
              in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar11);
              FUN_0129a054(lVar17,&stack0x00000070,in_stack_000000d0,
                           *(undefined8 *)StringLiteral_5001);
            }
            if (*(long *)(lVar15 + 0x10) == 0) break;
            if ((*(char *)(*(long *)(lVar15 + 0x10) + 0x27) != '\0') &&
               (4 < *(int *)(unaff_x24 + 0x30))) {
              plVar21 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
              if (plVar21 == (long *)0x0) break;
              if ((*(long *)PTR_DAT_033f6398 != 0) &&
                 (lVar29 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6398,
                                              *(undefined8 *)(*plVar21 + 0x40)), lVar29 == 0))
              goto LAB_0145d058;
              if ((int)plVar21[3] == 0) goto LAB_0145d054;
              if (plVar26 != (long *)0x0) {
                plStack0000000000000020 = plVar26;
              }
              plVar21[4] = *(long *)PTR_DAT_033f6398;
              lVar29 = 0;
              if (plVar26 != (long *)0x0) {
                if (plStack0000000000000020 == (long *)0x0) break;
                lVar29 = (**(code **)(*plStack0000000000000020 + 0x168))
                                   (plStack0000000000000020,
                                    *(undefined8 *)(*plStack0000000000000020 + 0x170));
                if ((lVar29 != 0) &&
                   (lVar36 = thunk_FUN_00d6225c(lVar29,*(undefined8 *)(*plVar21 + 0x40)),
                   lVar36 == 0)) goto LAB_0145d058;
              }
              uVar13 = *(uint *)(plVar21 + 3);
              if (uVar13 < 2) goto LAB_0145d054;
              plVar21[5] = lVar29;
              if (*(long *)
                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                  != 0) {
                lVar29 = thunk_FUN_00d6225c(*(long *)
                                             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                                            ,*(undefined8 *)(*plVar21 + 0x40));
                if (lVar29 == 0) goto LAB_0145d058;
                uVar13 = *(uint *)(plVar21 + 3);
              }
              if (uVar13 < 3) goto LAB_0145d054;
              plVar21[6] = *(long *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
              ;
              if (in_stack_000000d0 == 0) break;
              uStack00000000000000cc = (undefined4)*(undefined8 *)(in_stack_000000d0 + 0x18);
              lVar29 = FUN_0176eb1c(&stack0x000000cc,0);
              if ((lVar29 != 0) &&
                 (lVar36 = thunk_FUN_00d6225c(lVar29,*(undefined8 *)(*plVar21 + 0x40)), lVar36 == 0)
                 ) goto LAB_0145d058;
              uVar13 = *(uint *)(plVar21 + 3);
              if (uVar13 < 4) goto LAB_0145d054;
              plVar21[7] = lVar29;
              if (*(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__ != 0)
              {
                lVar29 = thunk_FUN_00d6225c(*(long *)
                                             Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__
                                            ,*(undefined8 *)(*plVar21 + 0x40));
                if (lVar29 == 0) goto LAB_0145d058;
                uVar13 = *(uint *)(plVar21 + 3);
              }
              if (uVar13 < 5) goto LAB_0145d054;
              plVar21[8] = *(long *)
                            Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__;
              if (in_stack_000000d0 == 0) break;
              if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
              lVar29 = in_stack_000000d0 + 0x30;
              if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar29 = FUN_016f5f58(lVar29,0);
              if ((lVar29 != 0) &&
                 (lVar36 = thunk_FUN_00d6225c(lVar29,*(undefined8 *)(*plVar21 + 0x40)), lVar36 == 0)
                 ) goto LAB_0145d058;
              uVar13 = *(uint *)(plVar21 + 3);
              if (uVar13 < 6) goto LAB_0145d054;
              plVar21[9] = lVar29;
              if (*(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__ != 0) {
                lVar29 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__
                                            ,*(undefined8 *)(*plVar21 + 0x40));
                if (lVar29 == 0) goto LAB_0145d058;
                uVar13 = *(uint *)(plVar21 + 3);
              }
              if (uVar13 < 7) goto LAB_0145d054;
              plVar21[10] = *(long *)
                             Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__;
              if (in_stack_000000d0 == 0) break;
              if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
              in_stack_000000b8 = *(undefined8 *)(in_stack_000000d0 + 0x28);
              in_stack_000000b0 = *(undefined8 *)(in_stack_000000d0 + 0x20);
              lVar29 = FUN_02688894(&stack0x000000b0,0);
              if ((lVar29 != 0) &&
                 (lVar36 = thunk_FUN_00d6225c(lVar29,*(undefined8 *)(*plVar21 + 0x40)), lVar36 == 0)
                 ) goto LAB_0145d058;
              if (*(uint *)(plVar21 + 3) < 8) goto LAB_0145d054;
              plVar21[0xb] = lVar29;
              uVar34 = FUN_01600844(plVar21,0);
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar6);
              }
              FUN_02660dac(uVar34,0);
            }
            if (0 < *(int *)(lVar18 + 0x18)) {
              uVar20 = 0;
              do {
                lVar29 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_Obi_ObiConstraints<ObiAerodynamicConstraintsBatch>_GetBatchCount__
                                           );
                if (lVar29 == 0) goto LAB_0145d050;
                FUN_017b46ec(lVar29,0);
                *(long *)(lVar29 + 0x18) = lVar15;
                lVar36 = *(long *)(unaff_x24 + 0x28);
                if (lVar36 != 0) {
                  in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,(int)uVar20);
                  uVar34 = thunk_FUN_00d61fa0(*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                              ,&stack0x00000070);
                  uVar34 = FUN_01600b5c(*(undefined8 *)
                                         System_Collections_Generic_IList<string>_TypeInfo,plVar26,
                                        uVar34,0);
                  if (((*(long *)(lVar29 + 0x18) == 0) ||
                      (lVar31 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar31 == 0)) ||
                     (lVar31 = *(long *)(lVar31 + 0x60), lVar31 == 0)) goto LAB_0145d050;
                  (**(code **)(lVar36 + 0x18))
                            (((float)iVar37 / (float)*(int *)(lVar31 + 0x18)) * 0.5,
                             *(undefined8 *)(lVar36 + 0x40),uVar34,*(undefined8 *)(lVar36 + 0x28));
                }
                if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_0145d054;
                if ((*(long *)(lVar29 + 0x18) == 0) ||
                   (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0))
                goto LAB_0145d050;
                lVar36 = *(long *)(lVar36 + 0x68);
                lVar31 = *(long *)(lVar18 + uVar20 * 8 + 0x20);
                if ((lVar36 == 0) ||
                   (uVar22 = FUN_01322618(lVar36,lVar31,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerable<KeyValuePair<int,_int>>_TypeInfo
                                         ), (uVar22 & 1) != 0)) {
                  if (bVar10) {
                    cVar27 = '\x01';
                  }
                  else {
                    if (in_stack_000000d0 == 0) goto LAB_0145d050;
                    if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar20) goto LAB_0145d054;
                    cVar27 = *(char *)(in_stack_000000d0 + uVar20 * 0x18 + 0x30);
                  }
                  bVar10 = cVar27 != '\0';
                  if ((lVar31 == 0) || (lVar36 = FUN_0268b6ac(lVar31,0), lVar36 == 0))
                  goto LAB_0145d050;
                  uVar22 = FUN_0160472c(lVar36,*(undefined8 *)
                                                Method_TMPro_TMP_TextProcessingStack<MaterialReference>__ctor__
                                        ,0);
                  if ((uVar22 & 1) != 0) {
                    if (plVar26 == (long *)0x0) goto LAB_0145d050;
                    uVar34 = FUN_0268b6ac(plVar26,0);
                    uVar34 = FUN_01600424(*(undefined8 *)
                                           Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass8_0_<DOLocalPath>b__0__
                                          ,uVar34,*(undefined8 *)
                                                                                                      
                                                  Method_Oculus_Platform_Message<CowatchingState>_get_Data__
                                          ,0);
                    lVar15 = *(long *)StringLiteral_302;
                    goto LAB_0145c928;
                  }
                  if ((*(long *)(lVar29 + 0x18) == 0) ||
                     (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0))
                  goto LAB_0145d050;
                  if ((*(char *)(lVar36 + 0x27) != '\0') &&
                     ((uVar22 = FUN_01434ca8(lVar18,0), (uVar22 & 1) == 0 &&
                      (1 < *(int *)(unaff_x24 + 0x30))))) {
                    if (plVar26 == (long *)0x0) goto LAB_0145d050;
                    uVar34 = FUN_0268b6ac(plVar26,0);
                    uVar34 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar34,
                                          *(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f32__,
                                          0);
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)StringLiteral_302);
                    }
                    FUN_02661754(uVar34,0);
                  }
                  if (((*(long *)(lVar29 + 0x18) == 0) ||
                      (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0)) ||
                     (lVar36 = *(long *)(lVar36 + 0x70), lVar36 == 0)) goto LAB_0145d050;
                  plVar21 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                  Method_UnityEngine_XR_ARSubsystems_XRCpuImage_ValidateConversionParamsAndThrow__
                                                 ,*(undefined4 *)(lVar36 + 0x18));
                  lVar36 = *(long *)(lVar29 + 0x18);
                  if (lVar36 == 0) goto LAB_0145d050;
                  uVar22 = 0;
                  while( true ) {
                    lVar36 = *(long *)(lVar36 + 0x10);
                    if ((lVar36 == 0) || (*(long *)(lVar36 + 0x70) == 0)) goto LAB_0145d050;
                    if ((long)*(int *)(*(long *)(lVar36 + 0x70) + 0x18) <= (long)uVar22) break;
                    if (DAT_03774e1e == '\0') {
                      thunk_FUN_00d48444(puVar5);
                      DAT_03774e1e = '\x01';
                    }
                    puVar32 = *(ulong **)(*(long *)puVar5 + 0xb8);
                    in_stack_000000a8 = puVar32[1];
                    if (DAT_03774d77 == '\0') {
                      thunk_FUN_00d48444(puVar5);
                      DAT_03774d77 = '\x01';
                      puVar32 = *(ulong **)(*(long *)puVar5 + 0xb8);
                    }
                    in_stack_000000a0 = *puVar32;
                    if ((((*(long *)(lVar29 + 0x18) == 0) ||
                         (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0)) ||
                        (lVar36 = *(long *)(lVar36 + 0x70), lVar36 == 0)) ||
                       (FUN_0132138c(lVar36,uVar22 & 0xffffffff,&stack0x00000070,
                                     *(undefined8 *)puVar4), in_stack_00000070 == (long *)0x0))
                    goto LAB_0145d050;
                    uVar23 = FUN_0267e21c(lVar31,in_stack_00000070[2],0);
                    if ((uVar23 & 1) == 0) {
                      uVar11 = 0;
                      plVar24 = (long *)0x0;
                      fVar40 = 0.0;
                    }
                    else {
                      if (((*(long *)(lVar29 + 0x18) == 0) ||
                          (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0)) ||
                         ((lVar36 = *(long *)(lVar36 + 0x90), lVar36 == 0 ||
                          (lVar36 = FUN_02666a34(lVar36,0), lVar36 == 0)))) goto LAB_0145d050;
                      uVar34 = FUN_0268b6ac(lVar36,0);
                      if (((*(long *)(lVar29 + 0x18) == 0) ||
                          (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0)) ||
                         ((lVar36 = *(long *)(lVar36 + 0x70), lVar36 == 0 ||
                          (FUN_0132138c(lVar36,uVar22 & 0xffffffff,&stack0x00000070,
                                        *(undefined8 *)puVar4), in_stack_00000070 == (long *)0x0))))
                      goto LAB_0145d050;
                      lVar36 = in_stack_00000070[2];
                      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                                  0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      plVar24 = (long *)FUN_014578b8(uVar34,lVar31,lVar36);
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)
                                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                          );
                      }
                      uVar23 = FUN_02681b9c(plVar24,0,0);
                      if ((uVar23 & 1) == 0) {
                        uVar11 = 0;
                        plVar24 = (long *)0x0;
                      }
                      else {
                        if ((plVar24 == (long *)0x0) ||
                           (*plVar24 !=
                            *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
                          if (plVar26 == (long *)0x0) goto LAB_0145d050;
                          uVar34 = FUN_0268b6ac(plVar26,0);
                          uVar34 = FUN_01600424(*(undefined8 *)
                                                 UnityEngine_UIElements_VisualElement_TypeData_TypeInfo
                                                ,uVar34,*(undefined8 *)
                                                                                                                  
                                                  Method_System_Diagnostics_Contracts_Contract_ForAll<Type>__
                                                ,0);
                          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)StringLiteral_302);
                          }
                          FUN_026610e4(uVar34,0);
                          lVar15 = *(long *)(unaff_x24 + 0x38);
                          goto joined_r0x0145c834;
                        }
                        uVar13 = FUN_026709f8(plVar24,0);
                        uVar23 = FUN_0269e56c(0);
                        if ((uVar23 & 1) == 0) {
                          plVar35 = *(long **)(unaff_x24 + 0x40);
                          if (plVar35 == (long *)0x0) {
                            uVar23 = 0;
                            uVar11 = 0;
                          }
                          else {
                            if (*plVar24 !=
                                *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)
                            goto Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint;
                            lVar36 = *plVar35;
                            uVar23 = (ulong)*(ushort *)(lVar36 + 0x12a);
                            if (uVar23 != 0) {
                              piVar33 = (int *)(*(long *)(lVar36 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar33 + -2) == *(long *)StringLiteral_2590) {
                                  puVar25 = (undefined8 *)
                                            (lVar36 + (long)(*piVar33 + 7) * 0x10 + 0x138);
                                  goto LAB_0145c1b8;
                                }
                                uVar23 = uVar23 - 1;
                                piVar33 = piVar33 + 4;
                              } while (uVar23 != 0);
                            }
                            puVar25 = (undefined8 *)
                                      FUN_00d59724(plVar35,*(long *)StringLiteral_2590,7);
LAB_0145c1b8:
                            uVar23 = (*(code *)*puVar25)(plVar35,plVar24,puVar25[1]);
                            uVar11 = 1;
                            if ((uVar23 & 1) != 0) {
                              uVar11 = 0xffffffff;
                            }
                          }
                        }
                        else {
                          uVar23 = 0;
                          uVar11 = 0;
                        }
                        if (((uVar23 & 1) != 0) ||
                           ((uVar13 | 2) != 3 && (uVar13 != 0xe && (uVar13 | 1) != 5))) {
                          uVar23 = FUN_0269e56c(0);
                          lVar36 = *(long *)(lVar29 + 0x18);
                          if ((uVar23 & 1) == 0) {
                            if (lVar36 == 0) goto LAB_0145d050;
                          }
                          else {
                            if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x10), lVar30 == 0))
                            goto LAB_0145d050;
                            if ((*(int *)(lVar30 + 0x88) == 0) &&
                               ((*(int *)(lVar30 + 0x30) != 2 && (*(int *)(lVar30 + 0x30) != 5)))) {
                              plVar21 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                              puVar5 = StringLiteral_302;
                              if (plVar21 == (long *)0x0) goto LAB_0145d050;
                              if ((*(long *)StringLiteral_3316 != 0) &&
                                 (lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_3316,
                                                              *(undefined8 *)(*plVar21 + 0x40)),
                                 lVar15 == 0)) goto LAB_0145d058;
                              if ((int)plVar21[3] == 0) goto LAB_0145d054;
                              plVar21[4] = *(long *)StringLiteral_3316;
                              if (plVar26 == (long *)0x0) goto LAB_0145d050;
                              lVar15 = FUN_0268b6ac(plVar26,0);
                              if ((lVar15 != 0) &&
                                 (lVar16 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)
                                                                      (*plVar21 + 0x40)),
                                 lVar16 == 0)) goto LAB_0145d058;
                              uVar28 = *(uint *)(plVar21 + 3);
                              if (uVar28 < 2) goto LAB_0145d054;
                              plVar21[5] = lVar15;
                              puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__;
                              if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__ != 0)
                              {
                                lVar15 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__
                                                  ,*(undefined8 *)(*plVar21 + 0x40));
                                if (lVar15 == 0) goto LAB_0145d058;
                                uVar28 = *(uint *)(plVar21 + 3);
                              }
                              if (uVar28 < 3) goto LAB_0145d054;
                              plVar21[6] = *(long *)puVar4;
                              lVar15 = FUN_0268b6ac(plVar24,0);
                              if ((lVar15 != 0) &&
                                 (lVar16 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)
                                                                      (*plVar21 + 0x40)),
                                 lVar16 == 0)) goto LAB_0145d058;
                              uVar28 = *(uint *)(plVar21 + 3);
                              if (uVar28 < 4) goto LAB_0145d054;
                              plVar21[7] = lVar15;
                              puVar4 = System_TimeZoneInfo_AdjustmentRule___var;
                              if (*(long *)System_TimeZoneInfo_AdjustmentRule___var != 0) {
                                lVar15 = thunk_FUN_00d6225c(*(long *)
                                                  System_TimeZoneInfo_AdjustmentRule___var,
                                                  *(undefined8 *)(*plVar21 + 0x40));
                                if (lVar15 == 0) goto LAB_0145d058;
                                uVar28 = *(uint *)(plVar21 + 3);
                              }
                              if (uVar28 < 5) goto LAB_0145d054;
                              plVar21[8] = *(long *)puVar4;
                              in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,uVar13);
                              in_stack_00000070 =
                                   *(long **)
                                    Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                              in_stack_00000078 = 0xffffffffffffffff;
                              lVar15 = FUN_017a7f78(&stack0x00000070,0);
                              if ((lVar15 != 0) &&
                                 (lVar16 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)
                                                                      (*plVar21 + 0x40)),
                                 lVar16 == 0)) goto LAB_0145d058;
                              uVar13 = *(uint *)(plVar21 + 3);
                              if (uVar13 < 6) goto LAB_0145d054;
                              plVar21[9] = lVar15;
                              puVar4 = System_Func<double>_TypeInfo;
                              if (*(long *)System_Func<double>_TypeInfo != 0) {
                                lVar15 = thunk_FUN_00d6225c(*(long *)System_Func<double>_TypeInfo,
                                                            *(undefined8 *)(*plVar21 + 0x40));
                                if (lVar15 == 0) goto LAB_0145d058;
                                uVar13 = *(uint *)(plVar21 + 3);
                              }
                              if (uVar13 < 7) goto LAB_0145d054;
                              plVar21[10] = *(long *)puVar4;
                              uVar34 = FUN_01600844(plVar21,0);
                              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                thunk_FUN_00d32864(*(long *)puVar5);
                              }
                              FUN_026610e4(uVar34,0);
                              lVar15 = *(long *)(unaff_x24 + 0x38);
                              goto joined_r0x0145c834;
                            }
                          }
                          if (((*(long *)(lVar36 + 0x10) == 0) ||
                              (lVar36 = *(long *)(*(long *)(lVar36 + 0x10) + 0x70), lVar36 == 0)) ||
                             (FUN_0132138c(lVar36,uVar22 & 0xffffffff,&stack0x00000070,
                                           *(undefined8 *)puVar4), in_stack_00000070 == (long *)0x0)
                             ) goto LAB_0145d050;
                          plVar24 = (long *)FUN_0267dbbc(lVar31,in_stack_00000070[2],0);
                          if ((plVar24 != (long *)0x0) &&
                             (*plVar24 !=
                              *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint:
                    /* WARNING: Subroutine does not return */
                            FUN_00da544c(plVar24);
                          }
                        }
                      }
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar23 = FUN_02681b9c(plVar24,0,0);
                      fVar40 = 0.0;
                      if ((uVar23 & 1) != 0) {
                        if ((*(long *)(lVar29 + 0x18) == 0) ||
                           (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0))
                        goto LAB_0145d050;
                        if (*(char *)(lVar36 + 0x48) != '\0') {
                          if (in_stack_000000d0 == 0) goto LAB_0145d050;
                          if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar22) goto LAB_0145d054;
                          if (*(float *)(in_stack_000000d0 + uVar22 * 0x18 + 0x34) != 0.0) {
                            if (plVar24 == (long *)0x0) goto LAB_0145d050;
                            iVar12 = (**(code **)(*plVar24 + 0x188))
                                               (plVar24,*(undefined8 *)(*plVar24 + 400));
                            iVar14 = (**(code **)(*plVar24 + 0x1a8))
                                               (plVar24,*(undefined8 *)(*plVar24 + 0x1b0));
                            if (in_stack_000000d0 == 0) goto LAB_0145d050;
                            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar22) goto LAB_0145d054;
                            fVar40 = (float)(iVar14 * iVar12) /
                                     *(float *)(in_stack_000000d0 + uVar22 * 0x18 + 0x34);
                          }
                        }
                      }
                      if ((((*(long *)(lVar29 + 0x18) == 0) ||
                           (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0)) ||
                          (lVar36 = *(long *)(lVar36 + 0x70), lVar36 == 0)) ||
                         (FUN_0132138c(lVar36,uVar22 & 0xffffffff,&stack0x00000070,
                                       *(undefined8 *)puVar4), in_stack_00000070 == (long *)0x0))
                      goto LAB_0145d050;
                      lVar36 = in_stack_00000070[2];
                      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                                  0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_01459f0c(lVar31,lVar36,&stack0x000000a0,&stack0x000000a8);
                    }
                    uVar23 = in_stack_000000a0 & 0xffffffff;
                    uVar8 = in_stack_000000a0._4_4_;
                    uVar41 = in_stack_000000a8 & 0xffffffff;
                    uVar9 = in_stack_000000a8._4_4_;
                    lVar36 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2762);
                    if ((lVar36 == 0) ||
                       (FUN_01443e40(uVar23,uVar8,uVar41,uVar9,fVar40,lVar36,plVar24,uVar11,0),
                       plVar21 == (long *)0x0)) goto LAB_0145d050;
                    lVar30 = thunk_FUN_00d6225c(lVar36,*(undefined8 *)(*plVar21 + 0x40));
                    if (lVar30 == 0) goto LAB_0145d058;
                    if (*(uint *)(plVar21 + 3) <= uVar22) goto LAB_0145d054;
                    plVar21[uVar22 + 4] = lVar36;
                    lVar36 = *(long *)(lVar29 + 0x18);
                    uVar22 = uVar22 + 1;
                    if (lVar36 == 0) goto LAB_0145d050;
                  }
                  if ((*(long *)(lVar36 + 0x50) == 0) ||
                     (FUN_01449654(*(long *)(lVar36 + 0x50),*(undefined8 *)(lVar36 + 0x90),lVar31,0)
                     , in_stack_000000d0 == 0)) goto LAB_0145d050;
                  if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar20) goto LAB_0145d054;
                  uVar34 = FUN_026884c4(in_stack_000000d0 + uVar20 * 0x18 + 0x20,0);
                  if (in_stack_000000d0 == 0) goto LAB_0145d050;
                  if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar20) goto LAB_0145d054;
                  uVar19 = FUN_026884d4(in_stack_000000d0 + uVar20 * 0x18 + 0x20,0);
                  if (in_stack_000000d0 == 0) goto LAB_0145d050;
                  if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar20) goto LAB_0145d054;
                  uVar38 = FUN_02688390(in_stack_000000d0 + uVar20 * 0x18 + 0x20,0);
                  if (in_stack_000000d0 == 0) goto LAB_0145d050;
                  if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar20) goto LAB_0145d054;
                  uVar39 = FUN_026883a0(in_stack_000000d0 + uVar20 * 0x18 + 0x20,0);
                  if ((*(long *)(lVar29 + 0x18) == 0) ||
                     (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0))
                  goto LAB_0145d050;
                  uVar1 = *(undefined1 *)(lVar36 + 0x27);
                  lVar36 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13654);
                  if (lVar36 == 0) goto LAB_0145d050;
                  FUN_01444820(uVar38,uVar39,uVar34,uVar19,lVar36,plVar21,uVar1,0);
                  *(long *)(lVar29 + 0x10) = lVar36;
                  in_stack_00000078 = 0;
                  in_stack_00000070 = (long *)0x0;
                  in_stack_00000088 = 0;
                  in_stack_00000080 = 0;
                  FUN_01431554(uVar38,uVar39,uVar34,uVar19,&stack0x00000070,0);
                  if ((*(long *)(lVar29 + 0x18) == 0) ||
                     (lVar36 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar36 == 0))
                  goto LAB_0145d050;
                  cVar27 = *(char *)(lVar36 + 0x27);
                  lVar36 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                             );
                  if (lVar36 == 0) goto LAB_0145d050;
                  FUN_01444454(in_stack_00000070,in_stack_00000078,in_stack_00000080,
                               in_stack_00000088,lVar36,cVar27 != '\0',lVar31,0);
                  if (((*(long *)(lVar29 + 0x10) == 0) ||
                      (lVar31 = *(long *)(*(long *)(lVar29 + 0x10) + 0x18), lVar31 == 0)) ||
                     (lVar31 = *(long *)(lVar31 + 0x10), lVar31 == 0)) goto LAB_0145d050;
                  FUN_00bc03b0(lVar31,lVar36,*(undefined8 *)PTR_DAT_033eb210);
                  if ((*(long *)(lVar29 + 0x18) == 0) ||
                     (lVar31 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar31 == 0))
                  goto LAB_0145d050;
                  lVar30 = *(long *)(lVar31 + 0x58);
                  lVar31 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                                             );
                  if ((lVar31 == 0) ||
                     (FUN_0136b58c(lVar31,lVar29,
                                   *(undefined8 *)Method_PhoneDialtoneController_MuteDialtone__,0),
                     lVar30 == 0)) goto LAB_0145d050;
                  FUN_01322b20(lVar30,lVar31,&stack0x000000d8,
                               *(undefined8 *)
                                Method_ShowPromptWhenTeleportPadsUsed_TeleportPointEntered__);
                  lVar31 = CONCAT71(uStack00000000000000d9,uStack00000000000000d8);
                  if (lVar31 == 0) {
                    if (((*(long *)(lVar29 + 0x18) == 0) ||
                        (lVar31 = *(long *)(*(long *)(lVar29 + 0x18) + 0x10), lVar31 == 0)) ||
                       (lVar31 = *(long *)(lVar31 + 0x58), lVar31 == 0)) goto LAB_0145d050;
                    FUN_00bc0938(lVar31,*(undefined8 *)(lVar29 + 0x10),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_TryGetValue__
                                );
                    lVar31 = *(long *)(lVar29 + 0x10);
                    if (lVar31 == 0) goto LAB_0145d050;
                  }
                  else {
                    *(long *)(lVar29 + 0x10) = lVar31;
                  }
                  if ((*(long *)(lVar31 + 0x18) == 0) ||
                     (lVar31 = *(long *)(*(long *)(lVar31 + 0x18) + 0x10), lVar31 == 0))
                  goto LAB_0145d050;
                  uVar22 = FUN_01322618(lVar31,lVar36,
                                        *(undefined8 *)
                                         Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedStream__
                                       );
                  if ((uVar22 & 1) == 0) {
                    if (((*(long *)(lVar29 + 0x10) == 0) ||
                        (lVar31 = *(long *)(*(long *)(lVar29 + 0x10) + 0x18), lVar31 == 0)) ||
                       (lVar31 = *(long *)(lVar31 + 0x10), lVar31 == 0)) goto LAB_0145d050;
                    FUN_00bc03b0(lVar31,lVar36,*(undefined8 *)PTR_DAT_033eb210);
                  }
                  if (((*(long *)(lVar29 + 0x10) == 0) ||
                      (lVar36 = *(long *)(*(long *)(lVar29 + 0x10) + 0x18), lVar36 == 0)) ||
                     (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)) goto LAB_0145d050;
                  uVar22 = FUN_01322618(lVar36,plVar26,
                                        *(undefined8 *)
                                         Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                       );
                  if ((uVar22 & 1) == 0) {
                    if (((*(long *)(lVar29 + 0x10) == 0) ||
                        (lVar29 = *(long *)(*(long *)(lVar29 + 0x10) + 0x18), lVar29 == 0)) ||
                       (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_0145d050;
                    FUN_00ac8520(lVar29,plVar26,*(undefined8 *)StringLiteral_1415);
                    if (*(long *)(unaff_x24 + 0x48) == 0) goto LAB_0145d050;
                    uVar22 = FUN_01322618(*(long *)(unaff_x24 + 0x48),plVar26,
                                          *(undefined8 *)
                                           Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                         );
                    if ((uVar22 & 1) == 0) {
                      if (*(long *)(unaff_x24 + 0x48) == 0) goto LAB_0145d050;
                      FUN_00ac8520(*(long *)(unaff_x24 + 0x48),plVar26,
                                   *(undefined8 *)StringLiteral_1415);
                    }
                  }
                }
                uVar20 = uVar20 + 1;
              } while ((long)uVar20 < (long)*(int *)(lVar18 + 0x18));
            }
            lVar29 = *(long *)(lVar15 + 0x10);
            iVar37 = iVar37 + 1;
            if (lVar29 == 0) break;
          }
        }
      }
    }
  }
  goto LAB_0145d050;
  while( true ) {
    lVar16 = FUN_0268b6ac(in_stack_00000070,0);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar26 + 0x40)), lVar17 == 0))
    goto LAB_0145d058;
    uVar13 = *(uint *)(plVar26 + 3);
    if (uVar13 <= uVar20) goto LAB_0145d054;
    plVar26[uVar20 + 4] = lVar16;
    uVar20 = uVar20 + 1;
    if ((long)(int)uVar13 <= (long)uVar20) break;
LAB_0145ce80:
    if (((*(long *)(lVar15 + 0x10) == 0) ||
        (lVar16 = *(long *)(*(long *)(lVar15 + 0x10) + 0x68), lVar16 == 0)) ||
       (FUN_0132138c(lVar16,uVar20 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7),
       in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
  }
LAB_0145cee8:
  lVar16 = FUN_01600f98(*(undefined8 *)PTR_DAT_033f38b8,plVar26,0);
  plVar26 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  if (plVar26 != (long *)0x0) {
    lVar17 = *(long *)puVar5;
    if ((lVar17 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar26 + 0x40)), lVar17 == 0)) {
LAB_0145d058:
      uVar34 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar34,0);
    }
    if ((int)plVar26[3] != 0) {
      plVar26[4] = *(long *)puVar5;
      if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0145d050;
      plVar21 = *(long **)(*(long *)(lVar15 + 0x10) + 0x90);
      if (plVar21 == (long *)0x0) {
        lVar15 = 0;
      }
      else {
        lVar15 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
        if ((lVar15 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar26 + 0x40)), lVar17 == 0))
        goto LAB_0145d058;
      }
      uVar13 = *(uint *)(plVar26 + 3);
      if (1 < uVar13) {
        plVar26[5] = lVar15;
        lVar15 = *(long *)puVar4;
        if (lVar15 != 0) {
          lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar26 + 0x40));
          if (lVar15 == 0) goto LAB_0145d058;
          uVar13 = *(uint *)(plVar26 + 3);
        }
        puVar5 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
        ;
        if (2 < uVar13) {
          plVar26[6] = *(long *)puVar4;
          if (lVar16 != 0) {
            lVar15 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar26 + 0x40));
            if (lVar15 == 0) goto LAB_0145d058;
            uVar13 = *(uint *)(plVar26 + 3);
          }
          if (3 < uVar13) {
            plVar26[7] = lVar16;
            lVar15 = *(long *)puVar5;
            if (lVar15 != 0) {
              lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar26 + 0x40));
              if (lVar15 == 0) goto LAB_0145d058;
              uVar13 = *(uint *)(plVar26 + 3);
            }
            if (4 < uVar13) {
              plVar26[8] = *(long *)puVar5;
              uVar34 = FUN_01600844(plVar26,0);
              lVar15 = *(long *)puVar6;
              iVar37 = *(int *)(lVar15 + 0xe0);
joined_r0x0145d048:
              if (iVar37 == 0) {
                thunk_FUN_00d32864(lVar15);
              }
LAB_0145c940:
              FUN_026610e4(uVar34,0);
              lVar15 = *(long *)(unaff_x24 + 0x38);
joined_r0x0145c834:
              if (lVar15 != 0) {
                *(undefined1 *)(lVar15 + 0x10) = 0;
                return 0;
              }
              goto LAB_0145d050;
            }
          }
        }
      }
    }
LAB_0145d054:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  goto LAB_0145d050;
  while( true ) {
    if ((long)*(int *)(lVar17 + 0x18) <= (long)uVar20) {
      if (*(int *)(unaff_x24 + 0x30) < 4) {
        return 0;
      }
      in_stack_00000098 = FUN_020407b0(lVar16,0);
      uVar34 = FUN_01770034(&stack0x00000098,*(undefined8 *)StringLiteral_12992,0);
      uVar34 = FUN_015f5b28(*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                            ,uVar34,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      FUN_02660dac(uVar34,0);
      return 0;
    }
    FUN_0132138c(lVar17,uVar20 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar4);
    plVar26 = in_stack_00000070;
    if (in_stack_00000070 == (long *)0x0) break;
    lVar29 = *(long *)(lVar15 + 0x10);
    if (*(char *)((long)in_stack_00000070 + 0x19) != '\0') {
      if (lVar29 == 0) break;
      iVar12 = 0;
      iVar37 = 0;
      while( true ) {
        lVar17 = *(long *)(lVar29 + 0x58);
        if (lVar17 == 0) goto LAB_0145d050;
        if (*(int *)(lVar17 + 0x18) <= iVar37) break;
        FUN_0132138c(lVar17,iVar37,&stack0x00000070,*(undefined8 *)puVar3);
        if ((in_stack_00000070 == (long *)0x0) || (lVar17 = in_stack_00000070[2], lVar17 == 0))
        goto LAB_0145d050;
        if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_0145d054;
        lVar17 = *(long *)(lVar17 + uVar20 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_0145d050;
        lVar29 = *(long *)(lVar15 + 0x10);
        iVar37 = iVar37 + 1;
        iVar12 = *(int *)(lVar17 + 0x60) + iVar12;
        if (lVar29 == 0) goto LAB_0145d050;
      }
      *(byte *)(plVar26 + 3) = (byte)((uint)iVar12 >> 0x1f);
      *(undefined1 *)((long)plVar26 + 0x19) = 0;
    }
    uVar20 = uVar20 + 1;
    if (lVar29 == 0) break;
LAB_0145cd00:
    lVar17 = *(long *)(lVar29 + 0x70);
    if (lVar17 == 0) break;
  }
LAB_0145d050:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


