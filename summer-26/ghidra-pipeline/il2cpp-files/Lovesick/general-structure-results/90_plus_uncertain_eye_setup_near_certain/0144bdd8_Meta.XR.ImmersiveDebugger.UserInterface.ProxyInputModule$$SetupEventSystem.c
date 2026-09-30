/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyInputModule$$SetupEventSystem
ENTRY_POINT: 0144bdd8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_15;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_ProxyInputModule__SetupEventSystem(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long unaff_x19;
  long unaff_x20;
  long *plVar23;
  long *plVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  double dVar29;
  double dVar30;
  undefined4 in_stack_00000058;
  int iStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x350));
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Merge>_Dispose__);
  thunk_FUN_00d48444(Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__);
  thunk_FUN_00d48444(StringLiteral_4464);
  thunk_FUN_00d48444(StringLiteral_7223);
  thunk_FUN_00d48444(PTR_DAT_033f5960);
  thunk_FUN_00d48444(Method_System_Text_Encoding_GetChars__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__);
  thunk_FUN_00d48444(StringLiteral_40);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_Add__);
  thunk_FUN_00d48444(StringLiteral_13357);
  thunk_FUN_00d48444(StringLiteral_2907);
  thunk_FUN_00d48444(PTR_DAT_033ebdf0);
  thunk_FUN_00d48444(System_Action<TimerState>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa68) = 1;
  puVar5 = StringLiteral_11624;
  puVar8 = StringLiteral_302;
  puVar7 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  iStack000000000000005c = 0;
  iVar26 = *(int *)(unaff_x19 + 0x10);
  if (iVar26 == 2) {
    lVar19 = *(long *)(unaff_x19 + 0x40);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar19 != 0) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0144c5a8;
      uVar12 = FUN_01600424(*(undefined8 *)StringLiteral_7223,
                            *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),
                            *(undefined8 *)puVar7,0);
      (**(code **)(lVar19 + 0x18))
                (DAT_028aa910,*(undefined8 *)(lVar19 + 0x40),uVar12,*(undefined8 *)(lVar19 + 0x28));
    }
    uVar2 = *(undefined4 *)(unaff_x19 + 0x60);
    uVar1 = *(undefined4 *)(unaff_x19 + 100);
    plVar23 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)
    ;
    if (plVar23 != (long *)0x0) {
      FUN_02671bf8(plVar23,uVar2,uVar1,5,1,0);
      puVar10 = Method_MedleyBossPushPhase_StartPhase__;
      puVar9 = Method_System_Text_Encoding_GetChars__;
      puVar6 = PTR_DAT_033f5960;
      puVar4 = PTR_DAT_033ea8a0;
      lVar19 = *(long *)(unaff_x19 + 0x78);
      if (lVar19 != 0) {
        uVar14 = 0;
        do {
          if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar14) {
            FUN_026723f8(plVar23,0);
            if (3 < *(int *)(unaff_x19 + 0x28)) {
              plVar24 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,6);
              if (plVar24 == (long *)0x0) break;
              lVar19 = *(long *)puVar9;
              if ((lVar19 != 0) &&
                 (lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar24 + 0x40)), lVar19 == 0)
                 ) goto LAB_0144cdec;
              uVar18 = *(uint *)(plVar24 + 3);
              if (uVar18 == 0) goto LAB_0144cde8;
              plVar24[4] = *(long *)puVar9;
              if (*(long *)(unaff_x19 + 0x70) == 0) break;
              lVar19 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
              if (lVar19 != 0) {
                lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar24 + 0x40));
                if (lVar20 == 0) goto LAB_0144cdec;
                uVar18 = *(uint *)(plVar24 + 3);
              }
              if (uVar18 < 2) goto LAB_0144cde8;
              plVar24[5] = lVar19;
              lVar19 = *(long *)puVar6;
              if (lVar19 != 0) {
                lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar24 + 0x40));
                if (lVar19 == 0) goto LAB_0144cdec;
                uVar18 = *(uint *)(plVar24 + 3);
              }
              if (uVar18 < 3) goto LAB_0144cde8;
              plVar24[6] = *(long *)puVar6;
              iStack000000000000005c =
                   (**(code **)(*plVar23 + 0x188))(plVar23,*(undefined8 *)(*plVar23 + 400));
              lVar19 = FUN_0176eb1c(&stack0x0000005c,0);
              if ((lVar19 != 0) &&
                 (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar24 + 0x40)), lVar20 == 0)
                 ) goto LAB_0144cdec;
              uVar18 = *(uint *)(plVar24 + 3);
              if (uVar18 < 4) goto LAB_0144cde8;
              plVar24[7] = lVar19;
              lVar19 = *(long *)puVar10;
              if (lVar19 != 0) {
                lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar24 + 0x40));
                if (lVar19 == 0) goto LAB_0144cdec;
                uVar18 = *(uint *)(plVar24 + 3);
              }
              if (uVar18 < 5) goto LAB_0144cde8;
              plVar24[8] = *(long *)puVar10;
              iStack000000000000005c =
                   (**(code **)(*plVar23 + 0x1a8))(plVar23,*(undefined8 *)(*plVar23 + 0x1b0));
              lVar19 = FUN_0176eb1c(&stack0x0000005c,0);
              if ((lVar19 != 0) &&
                 (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar24 + 0x40)), lVar20 == 0)
                 ) goto LAB_0144cdec;
              if (*(uint *)(plVar24 + 3) < 6) goto LAB_0144cde8;
              plVar24[9] = lVar19;
              uVar12 = FUN_01600844(plVar24,0);
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar8);
              }
              FUN_02660dac(uVar12,0);
            }
            *(undefined8 *)(unaff_x19 + 0x78) = 0;
            goto LAB_0144c31c;
          }
          if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_0144cde8;
          FUN_02671fa4(plVar23,0,uVar14 & 0xffffffff,*(undefined4 *)(unaff_x19 + 0x60),1,
                       *(undefined8 *)(lVar19 + uVar14 * 8 + 0x20),0);
          lVar19 = *(long *)(unaff_x19 + 0x78);
          uVar14 = uVar14 + 1;
        } while (lVar19 != 0);
      }
    }
    goto LAB_0144c5a8;
  }
  if (iVar26 != 1) {
    if (iVar26 != 0) {
      return 0;
    }
    lVar19 = *(long *)(unaff_x19 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar19 != 0) {
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(lVar19 + 0x20);
      *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(lVar19 + 0x10);
      puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
      puVar4 = Method_System_Collections_Generic_List_Enumerator<Merge>_Dispose__;
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        uVar12 = FUN_0176eb1c((undefined8 *)(unaff_x19 + 0x60),0);
        uVar13 = FUN_0176eb1c(unaff_x19 + 100,0);
        uVar12 = FUN_0160073c(*(undefined8 *)puVar4,uVar12,*(undefined8 *)puVar6,uVar13,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        FUN_02660dac(uVar12,0);
      }
      iVar26 = 0;
      *(undefined4 *)(unaff_x19 + 0x68) = 0;
      while (*(long *)(unaff_x19 + 0x30) != 0) {
        iVar11 = FUN_01459960(*(long *)(unaff_x19 + 0x30),0);
        if (iVar11 <= iVar26) {
          return 0;
        }
        if ((*(long *)(unaff_x19 + 0x30) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70), lVar19 == 0)) break;
        FUN_0132138c(lVar19,*(undefined4 *)(unaff_x19 + 0x68),&stack0x00000088,*(undefined8 *)puVar5
                    );
        lVar19 = *(long *)(unaff_x19 + 0x30);
        *(ulong *)(unaff_x19 + 0x70) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        if (lVar19 == 0) break;
        uVar2 = *(undefined4 *)(unaff_x19 + 0x68);
        cVar3 = *(char *)(lVar19 + 0x49);
        uVar12 = *(undefined8 *)(lVar19 + 0x80);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01457470(uVar2,cVar3 != '\0',uVar12,0);
        if ((uVar14 & 1) != 0) {
          if (3 < *(int *)(unaff_x19 + 0x28)) {
            if (*(long *)(unaff_x19 + 0x70) == 0) break;
            uVar12 = FUN_015f5b28(*(undefined8 *)StringLiteral_13357,
                                  *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),0);
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar8);
            }
            FUN_02660dac(uVar12,0);
          }
          if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_017aa9b4(0);
          puVar5 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_GetObjectData__;
          lVar19 = *(long *)(unaff_x19 + 0x30);
          if (lVar19 != 0) {
            Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                      (*(undefined8 *)(lVar19 + 0x58),*(undefined8 *)(unaff_x19 + 0x38),
                       *(undefined4 *)(unaff_x19 + 0x68),lVar19,0);
            plVar23 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x19 + 100));
            *(long **)(unaff_x19 + 0x78) = plVar23;
            puVar5 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
            if (plVar23 != (long *)0x0) {
              uVar14 = 0;
              goto LAB_0144c554;
            }
          }
          break;
        }
        if (3 < *(int *)(unaff_x19 + 0x28)) {
          if (*(long *)(unaff_x19 + 0x70) == 0) break;
          uVar12 = FUN_01600424(*(undefined8 *)StringLiteral_40,
                                *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),
                                *(undefined8 *)StringLiteral_2907,0);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          FUN_02660dac(uVar12,0);
        }
        plVar23 = (long *)0x0;
LAB_0144c31c:
        plVar24 = *(long **)(unaff_x19 + 0x50);
        if (plVar24 == (long *)0x0) break;
        uVar18 = *(uint *)(unaff_x19 + 0x68);
        if ((plVar23 != (long *)0x0) &&
           (lVar19 = thunk_FUN_00d6225c(plVar23,*(undefined8 *)(*plVar24 + 0x40)), lVar19 == 0))
        goto LAB_0144cdec;
        if (*(uint *)(plVar24 + 3) <= uVar18) goto LAB_0144cde8;
        plVar24[(long)(int)uVar18 + 4] = (long)plVar23;
        lVar19 = *(long *)(unaff_x19 + 0x40);
        if (lVar19 != 0) {
          if (*(long *)(unaff_x19 + 0x70) == 0) break;
          uVar12 = FUN_01600424(*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__
                                ,*(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10),
                                *(undefined8 *)puVar7,0);
          (**(code **)(lVar19 + 0x18))
                    (DAT_0293f7f0,*(undefined8 *)(lVar19 + 0x40),uVar12,
                     *(undefined8 *)(lVar19 + 0x28));
        }
        lVar19 = thunk_FUN_00d62348(*(undefined8 *)System_Nullable<short>_TypeInfo);
        if (lVar19 == 0) break;
        FUN_02040640(lVar19,0);
        FUN_02040900(lVar19,0);
        lVar19 = *(long *)(unaff_x19 + 0x30);
        if (lVar19 == 0) break;
        if (*(int *)(lVar19 + 0x88) == 0) {
          lVar20 = *(long *)(unaff_x19 + 0x50);
          if (lVar20 == 0) break;
          uVar18 = *(uint *)(unaff_x19 + 0x68);
          if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0144cde8;
          if (*(long *)(lVar19 + 0x70) == 0) break;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar13 = *(undefined8 *)(lVar20 + (long)(int)uVar18 * 8 + 0x20);
          FUN_0132138c(*(long *)(lVar19 + 0x70),(long)(int)uVar18,&stack0x00000088,
                       *(undefined8 *)puVar5);
          FUN_0143dae4(lVar19,uVar12,uVar13,CONCAT44(uStack000000000000008c,uStack0000000000000088),
                       *(undefined4 *)(unaff_x19 + 0x68),0);
          lVar19 = *(long *)(unaff_x19 + 0x30);
          if (lVar19 == 0) break;
        }
        if (*(long *)(lVar19 + 0x70) == 0) break;
        lVar20 = *(long *)(unaff_x19 + 0x38);
        FUN_0132138c(*(long *)(lVar19 + 0x70),*(undefined4 *)(unaff_x19 + 0x68),&stack0x00000088,
                     *(undefined8 *)puVar5);
        if ((CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) || (lVar20 == 0)) break;
        FUN_0143f660(lVar20,*(undefined8 *)
                             (CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x10),0);
        iStack000000000000005c = *(int *)(unaff_x19 + 0x68);
        *(undefined8 *)(unaff_x19 + 0x70) = 0;
        iVar26 = iStack000000000000005c + 1;
        *(int *)(unaff_x19 + 0x68) = iVar26;
      }
    }
    goto LAB_0144c5a8;
  }
  iStack000000000000005c = *(int *)(unaff_x19 + 0x84);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  iVar26 = iStack000000000000005c + 1;
  *(int *)(unaff_x19 + 0x84) = iVar26;
LAB_0144c5d0:
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  lVar19 = *(long *)(unaff_x19 + 0x30);
  if ((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x58), lVar20 == 0)) goto LAB_0144c5a8;
  if (*(int *)(lVar20 + 0x18) <= iVar26) {
    uStack0000000000000088 = FUN_01459960(lVar19,0);
    uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000088);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    return 1;
  }
  FUN_0132138c(lVar20,iVar26,&stack0x00000088,*(undefined8 *)PTR_DAT_033ee2d8);
  puVar6 = StringLiteral_4464;
  puVar4 = Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_Add__;
  lVar19 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  if ((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x10), lVar20 == 0)) goto LAB_0144c5a8;
  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
     (lVar20 = *(long *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20), lVar20 == 0))
  goto LAB_0144c5a8;
  uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10);
  uVar12 = FUN_01444238(lVar20);
  uVar12 = FUN_0160073c(*(undefined8 *)puVar6,uVar13,*(undefined8 *)puVar4,uVar12,0);
  lVar21 = *(long *)(unaff_x19 + 0x40);
  if (lVar21 != 0) {
    (**(code **)(lVar21 + 0x18))
              (DAT_028aa028,*(undefined8 *)(lVar21 + 0x40),uVar12,*(undefined8 *)(lVar21 + 0x28));
  }
  if (4 < *(int *)(unaff_x19 + 0x28)) {
    plVar23 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
    lVar21 = FUN_01444238(lVar20);
    if (plVar23 == (long *)0x0) goto LAB_0144c5a8;
    if ((lVar21 != 0) &&
       (lVar15 = thunk_FUN_00d6225c(lVar21,*(undefined8 *)(*plVar23 + 0x40)), lVar15 == 0))
    goto LAB_0144cdec;
    uVar18 = *(uint *)(plVar23 + 3);
    if (uVar18 == 0) goto LAB_0144cde8;
    plVar23[4] = lVar21;
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0144c5a8;
    lVar21 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
    if (lVar21 != 0) {
      lVar15 = thunk_FUN_00d6225c(lVar21,*(undefined8 *)(*plVar23 + 0x40));
      if (lVar15 == 0) goto LAB_0144cdec;
      uVar18 = *(uint *)(plVar23 + 3);
    }
    if (uVar18 < 2) goto LAB_0144cde8;
    plVar23[5] = lVar21;
    in_stack_00000058 = *(undefined4 *)(unaff_x19 + 0x84);
    lVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000058);
    if ((lVar21 != 0) &&
       (lVar15 = thunk_FUN_00d6225c(lVar21,*(undefined8 *)(*plVar23 + 0x40)), lVar15 == 0)) {
LAB_0144cdec:
      uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,0);
    }
    if (*(uint *)(plVar23 + 3) < 3) goto LAB_0144cde8;
    plVar23[6] = lVar21;
    if (((*(long *)(lVar19 + 0x18) == 0) ||
        (lVar21 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar21 == 0)) ||
       (FUN_0132138c(lVar21,0,&stack0x00000088,
                     *(undefined8 *)
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                    ), CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0))
    goto LAB_0144c5a8;
    lVar21 = FUN_0144461c();
    if ((lVar21 != 0) &&
       (lVar15 = thunk_FUN_00d6225c(lVar21,*(undefined8 *)(*plVar23 + 0x40)), lVar15 == 0))
    goto LAB_0144cdec;
    puVar5 = System_Action<TimerState>_TypeInfo;
    if (*(uint *)(plVar23 + 3) < 4) goto LAB_0144cde8;
    plVar23[7] = lVar21;
    uVar13 = FUN_01600be4(*(undefined8 *)puVar5,plVar23,0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar8);
    }
    FUN_02660dac(uVar13,0);
  }
  lVar21 = *(long *)(unaff_x19 + 0x58);
  if (lVar21 == 0) goto LAB_0144c5a8;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x84)) goto LAB_0144cde8;
  lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 0x10;
  in_stack_00000078 = *(undefined8 *)(lVar21 + 0x28);
  in_stack_00000070 = *(undefined8 *)(lVar21 + 0x20);
  lVar21 = *(long *)(lVar19 + 0x10);
  if (lVar21 == 0) goto LAB_0144c5a8;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
  if (*(long *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20) == 0) goto LAB_0144c5a8;
  uVar13 = FUN_01443ffc();
  fVar25 = (float)FUN_02688390(&stack0x00000070,0);
  iVar26 = *(int *)(unaff_x19 + 0x60);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
  fVar25 = fVar25 * (float)iVar26;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar30 = (double)fVar25;
  dVar29 = modf(dVar30,(double *)&stack0x00000088);
  if (0.0 <= fVar25) {
    if (dVar29 == 0.5) {
      dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
      goto LAB_0144c938;
    }
    dVar30 = (double)(long)(dVar30 + 0.5);
  }
  else if (dVar29 == -0.5) {
    dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c938:
    dVar30 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
    if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0) {
      dVar30 = dVar29;
    }
  }
  else {
    dVar30 = (double)(long)(dVar30 + -0.5);
  }
  iVar26 = -0x80000000;
  if (dVar30 != INFINITY) {
    iVar26 = (int)dVar30;
  }
  fVar25 = (float)FUN_026883a0(0x80000000,&stack0x00000070,0);
  iVar11 = *(int *)(unaff_x19 + 100);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  fVar25 = fVar25 * (float)iVar11;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar30 = (double)fVar25;
  dVar29 = modf(dVar30,(double *)&stack0x00000088);
  if (0.0 <= fVar25) {
    if (dVar29 == 0.5) {
      dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
      goto LAB_0144c9fc;
    }
    dVar30 = (double)(long)(dVar30 + 0.5);
  }
  else if (dVar29 == -0.5) {
    dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144c9fc:
    dVar30 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
    if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0) {
      dVar30 = dVar29;
    }
  }
  else {
    dVar30 = (double)(long)(dVar30 + -0.5);
  }
  iVar11 = -0x80000000;
  if (dVar30 != INFINITY) {
    iVar11 = (int)dVar30;
  }
  fVar25 = (float)FUN_026884c4(0x80000000,&stack0x00000070,0);
  iVar27 = *(int *)(unaff_x19 + 0x60);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  fVar25 = fVar25 * (float)iVar27;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar30 = (double)fVar25;
  dVar29 = modf(dVar30,(double *)&stack0x00000088);
  if (0.0 <= fVar25) {
    if (dVar29 == 0.5) {
      dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
      goto LAB_0144cac4;
    }
    dVar30 = (double)(long)(dVar30 + 0.5);
  }
  else if (dVar29 == -0.5) {
    dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cac4:
    dVar30 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
    if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0) {
      dVar30 = dVar29;
    }
  }
  else {
    dVar30 = (double)(long)(dVar30 + -0.5);
  }
  iVar27 = -0x80000000;
  if (dVar30 != INFINITY) {
    iVar27 = (int)dVar30;
  }
  fVar25 = (float)FUN_026884d4(&stack0x00000070,0);
  iVar28 = *(int *)(unaff_x19 + 100);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  fVar25 = fVar25 * (float)iVar28;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar30 = (double)fVar25;
  dVar29 = modf(dVar30,(double *)&stack0x00000088);
  puVar5 = PTR_DAT_033ebdf0;
  if (0.0 <= fVar25) {
    if (dVar29 == 0.5) {
      dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + 1.0;
      goto LAB_0144cb88;
    }
    dVar30 = (double)(long)(dVar30 + 0.5);
  }
  else if (dVar29 == -0.5) {
    dVar29 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088) + -1.0;
LAB_0144cb88:
    dVar30 = (double)CONCAT44(uStack000000000000008c,uStack0000000000000088);
    if (((long)(double)CONCAT44(uStack000000000000008c,uStack0000000000000088) & 1U) != 0) {
      dVar30 = dVar29;
    }
  }
  else {
    dVar30 = (double)(long)(dVar30 + -0.5);
  }
  iVar28 = -0x80000000;
  if (dVar30 != INFINITY) {
    iVar28 = (int)dVar30;
  }
  if ((iVar27 == 0) || (iVar28 == 0)) {
    in_stack_00000068 = in_stack_00000078;
    in_stack_00000060 = in_stack_00000070;
    uVar16 = FUN_02688894(&stack0x00000060,0);
    uVar16 = FUN_015f5b28(*(undefined8 *)puVar5,uVar16,0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar8);
    }
    FUN_026610e4(uVar16,0);
  }
  lVar21 = *(long *)(unaff_x19 + 0x40);
  if (lVar21 != 0) {
    uVar16 = FUN_015f5b28(uVar12,*(undefined8 *)
                                  Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__
                          ,0);
    (**(code **)(lVar21 + 0x18))
              (DAT_028aa028,*(undefined8 *)(lVar21 + 0x40),uVar16,*(undefined8 *)(lVar21 + 0x28));
  }
  plVar23 = *(long **)(unaff_x19 + 0x48);
  if (plVar23 != (long *)0x0) {
    lVar21 = *plVar23;
    uVar14 = (ulong)*(ushort *)(lVar21 + 0x12a);
    if (uVar14 != 0) {
      piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_2590) {
          puVar17 = (undefined8 *)(lVar21 + (long)(*piVar22 + 2) * 0x10 + 0x138);
          goto LAB_0144ccb8;
        }
        uVar14 = uVar14 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar14 != 0);
    }
    puVar17 = (undefined8 *)FUN_00d59724(plVar23,*(long *)StringLiteral_2590,2);
LAB_0144ccb8:
    (*(code *)*puVar17)(plVar23,uVar13,1,1,puVar17[1]);
  }
  puVar8 = Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__;
  lVar21 = *(long *)(unaff_x19 + 0x40);
  if (lVar21 != 0) {
    uVar13 = FUN_01444238(lVar20);
    uVar12 = FUN_0160073c(uVar12,*(undefined8 *)puVar8,uVar13,*(undefined8 *)puVar7,0);
    (**(code **)(lVar21 + 0x18))
              (DAT_028aa4e0,*(undefined8 *)(lVar21 + 0x40),uVar12,*(undefined8 *)(lVar21 + 0x28));
  }
  lVar20 = *(long *)(lVar19 + 0x10);
  if (lVar20 == 0) {
LAB_0144c5a8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(unaff_x19 + 0x68) < *(uint *)(lVar20 + 0x18)) {
    lVar20 = *(long *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20);
    if (((lVar20 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) ||
       (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar21 == 0)) goto LAB_0144c5a8;
    if (*(uint *)(unaff_x19 + 0x84) < *(uint *)(lVar21 + 0x18)) {
      uVar12 = FUN_0144bba0(*(undefined8 *)(lVar20 + 0x20),*(undefined8 *)(lVar20 + 0x28),
                            *(undefined8 *)(lVar20 + 0x30),*(undefined8 *)(lVar20 + 0x38),lVar20,
                            lVar19,*(undefined8 *)(unaff_x19 + 0x70),iVar26,iVar11,iVar27,iVar28,
                            *(undefined8 *)
                             (lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 8 + 0x20));
      *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return 1;
    }
  }
LAB_0144cde8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
  while( true ) {
    lVar19 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x19 + 0x60));
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0))
    goto LAB_0144cdec;
    if (*(uint *)(plVar23 + 3) <= uVar14) goto LAB_0144cde8;
    plVar23[uVar14 + 4] = lVar19;
    plVar23 = *(long **)(unaff_x19 + 0x78);
    uVar14 = uVar14 + 1;
    if (plVar23 == (long *)0x0) break;
LAB_0144c554:
    if ((long)(int)plVar23[3] <= (long)uVar14) {
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      if (*(long *)(unaff_x19 + 0x70) != 0) {
        if (*(char *)(*(long *)(unaff_x19 + 0x70) + 0x18) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x80) = 1;
        }
        iVar26 = 0;
        *(undefined4 *)(unaff_x19 + 0x84) = 0;
        goto LAB_0144c5d0;
      }
      break;
    }
  }
  goto LAB_0144c5a8;
}


