/*
FUNCTION_NAME: FUN_017bf284
ENTRY_POINT: 017bf284
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x017c0260) */
/* WARNING: Removing unreachable block (ram,0x017bf998) */
/* WARNING: Removing unreachable block (ram,0x017bfb54) */
/* WARNING: Removing unreachable block (ram,0x017c03ac) */
/* WARNING: Removing unreachable block (ram,0x017c00b4) */
/* WARNING: Removing unreachable block (ram,0x017c03a4) */

long * FUN_017bf284(long param_1,long *param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long lVar19;
  long local_68;
  
  if ((DAT_03779057 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_2461);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetMemberTypes__
                      );
    thunk_FUN_00d48444(StringLiteral_4487);
    thunk_FUN_00d48444(Oculus_Platform_Request<User>_TypeInfo);
    thunk_FUN_00d48444(Sirenix_OdinInspector_ShowIfGroupAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_ToggleScriptsOnTouch_OnSelected__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeId__);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_Dialogue_DialoguePopup_<HideXPromptCoroutine>d__51_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_1220);
    thunk_FUN_00d48444(Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<float,_float,_FloatOptions>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_set_Item__
                      );
    thunk_FUN_00d48444(
                      Method_RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_<CreateAllNoteNow>b__0__
                      );
    thunk_FUN_00d48444(UnityEngine_SphereCollider_TypeInfo);
    thunk_FUN_00d48444(Unity_Mathematics_float3_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13514);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03779057 = 1;
  }
  puVar14 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  local_68 = 0;
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar18 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar14 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__;
  }
  else {
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01789ac0(param_2,0,0);
    puVar2 = StringLiteral_13514;
    if ((uVar8 & 1) == 0) {
      uVar18 = *(undefined8 *)OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo;
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar8 = FUN_01789ac0(param_2,uVar18,0);
      plVar13 = (long *)0x0;
      if ((uVar8 & 1) == 0) {
        plVar13 = param_2;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      puVar3 = StringLiteral_4487;
      puVar1 = 
      Method_RCG_Lovesick_Dialogue_DialoguePopup_<HideXPromptCoroutine>d__51_System_Collections_IEnumerator_Reset__
      ;
      plVar9 = (long *)FUN_017bf0c8(param_1,plVar13,0);
      if ((param_3 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_017c025c;
        lVar10 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_017bf4ec;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,0);
LAB_017bf4ec:
        iVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        puVar4 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<float,_float,_FloatOptions>__ctor__;
        if (iVar6 == 1) {
          lVar10 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)
                   Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<float,_float,_FloatOptions>__ctor__
                 ) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_017bfbc8;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_00d59724(plVar9,*(long *)
                                         Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<float,_float,_FloatOptions>__ctor__
                                 ,0);
LAB_017bfbc8:
          lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
          if (lVar10 == 0) {
            thunk_FUN_00d48444(Method_System_WeakReference__ctor__);
            uVar18 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            uVar15 = thunk_FUN_00d48444(StringLiteral_13693);
            FUN_016aa9bc(uVar18,uVar15,0);
            goto LAB_017c0348;
          }
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0178a8c4(plVar13,0,0);
          if ((uVar8 & 1) == 0) {
            plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
            lVar12 = *plVar9;
            lVar10 = *(long *)puVar4;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar10) goto LAB_017c0044;
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
          }
          else {
            lVar10 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_017bff5c;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_017bff5c:
            lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
            if ((lVar10 == 0) || (uVar18 = FUN_016b5e8c(lVar10,0), plVar13 == (long *)0x0))
            goto LAB_017c025c;
            uVar8 = (**(code **)(*plVar13 + 0x2c8))
                              (plVar13,uVar18,*(undefined8 *)(*plVar13 + 0x2d0));
            if ((uVar8 & 1) == 0) {
              lVar12 = *(long *)StringLiteral_2461;
              lVar10 = *(long *)(lVar12 + 0x38);
              if (lVar10 == 0) {
                FUN_00d59478(lVar12);
                lVar10 = *(long *)(lVar12 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                lVar10 = FUN_00d5941c();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
              if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                lVar10 = FUN_00d5941c();
              }
              return (long *)**(undefined8 **)(lVar10 + 0xb8);
            }
            plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
            lVar12 = *plVar9;
            lVar10 = *(long *)puVar4;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar10) goto LAB_017c0044;
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar9,lVar10,0);
          goto LAB_017c0050;
        }
        param_3 = 0;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_017be8ec(param_1);
        param_3 = lVar10 != 0 & param_3;
      }
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_0178a8c4(plVar13,0,0);
      if ((uVar8 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if (plVar13 == (long *)0x0) goto LAB_017c025c;
        bVar5 = FUN_0178bde4(plVar13,0);
        bVar5 = bVar5 & 1;
      }
      if ((bVar5 & param_3) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar10 = FUN_017beca0(plVar13);
        if (lVar10 == 0) goto LAB_017c025c;
        param_3 = param_3 & *(char *)(lVar10 + 0x15) != '\0';
      }
      puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
      if (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_017bf618;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,0);
LAB_017bf618:
        uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar3 = Unity_Mathematics_float3_TypeInfo;
        puVar2 = UnityEngine_SphereCollider_TypeInfo;
        uVar7 = FUN_017724a8(uVar7,0x10,0);
        if (param_3 == 0) {
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_01789ac0(plVar13,0,0);
          puVar14 = StringLiteral_4487;
          if ((uVar8 & 1) != 0) {
            lVar10 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1220) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_017bfc90;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_1220,0);
LAB_017bfc90:
            plVar13 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar10 = *plVar13;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                    puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_017bfcf0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,0);
LAB_017bfcf0:
              uVar8 = (*(code *)*puVar11)(plVar13,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                if (plVar13 == (long *)0x0) goto LAB_017c00a8;
                lVar10 = *plVar13;
                uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar8 == 0) goto LAB_017bfdc4;
                piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                goto LAB_017bfdac;
              }
              lVar10 = *plVar13;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__) {
                    puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_017bfd54;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_00d59724(plVar13,*(long *)
                                              Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__
                                     ,0);
LAB_017bfd54:
              lVar10 = (*(code *)*puVar11)(plVar13,puVar11[1]);
              if (lVar10 == 0) {
                thunk_FUN_00d48444(Method_System_WeakReference__ctor__);
                lVar10 = thunk_FUN_00d62348();
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar18 = thunk_FUN_00d48444(StringLiteral_13693);
                FUN_016aa9bc(lVar10,uVar18,0);
                uVar18 = thunk_FUN_00d48444(StringLiteral_1429);
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(lVar10,uVar18);
              }
            } while( true );
          }
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar10 != 0) {
            FUN_01320ebc(lVar10,uVar7,*(undefined8 *)puVar2);
            lVar12 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1220) {
                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_017bfde0;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_1220,0);
LAB_017bfde0:
            plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar12 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_017bfe40;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_017bfe40:
              uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                if (plVar9 == (long *)0x0) goto LAB_017c01a8;
                lVar12 = *plVar9;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar8 == 0) goto LAB_017bff40;
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                goto LAB_017bff28;
              }
              lVar12 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar8 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_017bfea4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_00d59724(plVar9,*(long *)
                                             Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__
                                     ,0);
LAB_017bfea4:
              lVar12 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if (lVar12 == 0) {
                thunk_FUN_00d48444(Method_System_WeakReference__ctor__);
                lVar10 = thunk_FUN_00d62348();
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar18 = thunk_FUN_00d48444(StringLiteral_13693);
                FUN_016aa9bc(lVar10,uVar18,0);
                uVar18 = thunk_FUN_00d48444(StringLiteral_1429);
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(lVar10,uVar18);
              }
              uVar18 = FUN_016b5e8c(lVar12,0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c(uVar18,uVar18);
              }
              uVar8 = (**(code **)(*plVar13 + 0x2c8))
                                (plVar13,uVar18,*(undefined8 *)(*plVar13 + 0x2d0));
              if ((uVar8 & 1) != 0) {
                FUN_00be6ef8(lVar10,lVar12,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_set_Item__
                            );
              }
            } while( true );
          }
        }
        else {
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeId__
                                     );
          if (lVar12 != 0) {
            FUN_01298de8(lVar12,uVar7,*(undefined8 *)Method_ToggleScriptsOnTouch_OnSelected__);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar1 = Sirenix_OdinInspector_ShowIfGroupAttribute_TypeInfo;
            if (lVar10 != 0) {
              FUN_01320ebc(lVar10,uVar7,*(undefined8 *)puVar2);
              iVar6 = 0;
              do {
                lVar16 = *plVar9;
                uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_1220) {
                      puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_017bf718;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_1220,0);
LAB_017bf718:
                plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
LAB_017bf72c:
                lVar16 = *plVar9;
                uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar8 != 0) {
                  piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                      puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_017bf778;
                    }
                    uVar8 = uVar8 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar8 != 0);
                }
                puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_017bf778:
                uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                if ((uVar8 & 1) != 0) {
                  lVar16 = *plVar9;
                  uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar8 != 0) {
                    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) ==
                          *(long *)Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__)
                      {
                        puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_017bf7dc;
                      }
                      uVar8 = uVar8 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar11 = (undefined8 *)
                            FUN_00d59724(plVar9,*(long *)
                                                 Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__
                                         ,0);
LAB_017bf7dc:
                  lVar16 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                  if (lVar16 == 0) {
                    thunk_FUN_00d48444(Method_System_WeakReference__ctor__);
                    lVar10 = thunk_FUN_00d62348();
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar18 = thunk_FUN_00d48444(StringLiteral_13693);
                    FUN_016aa9bc(lVar10,uVar18,0);
                    uVar18 = thunk_FUN_00d48444(StringLiteral_1429);
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(lVar10,uVar18);
                  }
                  uVar18 = FUN_016b5e8c(lVar16,0);
                  if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar8 = FUN_0178a8c4(plVar13,0,0);
                  if ((uVar8 & 1) != 0) goto code_r0x017bf824;
                  goto LAB_017bf844;
                }
                if (plVar9 != (long *)0x0) {
                  lVar16 = *plVar9;
                  uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar8 != 0) {
                    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
                        puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_017bf980;
                      }
                      uVar8 = uVar8 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_10310,0);
LAB_017bf980:
                  (*(code *)*puVar11)(plVar9,puVar11[1]);
                }
                puVar2 = StringLiteral_13514;
                if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                param_1 = FUN_017be8ec(param_1);
                if (param_1 == 0) goto LAB_017c01a8;
                iVar6 = iVar6 + 1;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar9 = (long *)FUN_017bf0c8(param_1,plVar13,1);
              } while (plVar9 != (long *)0x0);
            }
          }
        }
      }
      goto LAB_017c025c;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar18 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar14 = StringLiteral_6613;
  }
  uVar15 = thunk_FUN_00d48444(puVar14);
  FUN_016ec5b8(uVar18,uVar15,0);
LAB_017c0348:
  uVar15 = thunk_FUN_00d48444(StringLiteral_1429);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar18,uVar15);
code_r0x017bf824:
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = (**(code **)(*plVar13 + 0x2c8))(plVar13,uVar18,*(undefined8 *)(*plVar13 + 0x2d0));
  if ((uVar8 & 1) == 0) goto LAB_017bf72c;
LAB_017bf844:
  uVar8 = FUN_0129eff4(lVar12,uVar18,&local_68,*(undefined8 *)puVar1);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)StringLiteral_13514 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar19 = FUN_017beca0(uVar18);
    if (iVar6 == 0) goto LAB_017bf8a4;
LAB_017bf86c:
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(char *)(lVar19 + 0x15) == '\0') goto LAB_017bf8dc;
  }
  else {
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar19 = *(long *)(local_68 + 0x10);
    if (iVar6 != 0) goto LAB_017bf86c;
LAB_017bf8a4:
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  if (((*(char *)(lVar19 + 0x14) != '\0') || (local_68 == 0)) ||
     (*(int *)(local_68 + 0x18) == iVar6)) {
    FUN_00be6ef8(lVar10,lVar16,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_set_Item__
                );
  }
LAB_017bf8dc:
  if (local_68 == 0) {
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetMemberTypes__
                               );
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar16 + 0x10) = lVar19;
    *(int *)(lVar16 + 0x18) = iVar6;
    FUN_0129a054(lVar12,uVar18,lVar16,*(undefined8 *)Oculus_Platform_Request<User>_TypeInfo);
  }
  goto LAB_017bf72c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_017bfdac:
    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_017c009c;
    }
  }
LAB_017bfdc4:
  puVar11 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_10310,0);
LAB_017c009c:
  (*(code *)*puVar11)(plVar13,puVar11[1]);
LAB_017c00a8:
  lVar10 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_017c0104;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,0);
LAB_017c0104:
  uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
  plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar14,uVar7);
  lVar10 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
        puVar11 = (undefined8 *)(lVar10 + (long)(*piVar17 + 5) * 0x10 + 0x138);
        goto LAB_017c0174;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,5);
LAB_017c0174:
  (*(code *)*puVar11)(plVar9,plVar13,0,puVar11[1]);
  return plVar13;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_017bff28:
    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_017c0198;
    }
  }
LAB_017bff40:
  puVar11 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_10310,0);
LAB_017c0198:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_017c01a8:
  plVar13 = (long *)FUN_01325140(lVar10,*(undefined8 *)
                                         Method_RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_<CreateAllNoteNow>b__0__
                                );
  return plVar13;
LAB_017c0044:
  puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
LAB_017c0050:
  lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
  if (plVar13 != (long *)0x0) {
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0)) {
      uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar18,0);
    }
    if ((int)plVar13[3] != 0) {
      plVar13[4] = lVar10;
      return plVar13;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_017c025c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


