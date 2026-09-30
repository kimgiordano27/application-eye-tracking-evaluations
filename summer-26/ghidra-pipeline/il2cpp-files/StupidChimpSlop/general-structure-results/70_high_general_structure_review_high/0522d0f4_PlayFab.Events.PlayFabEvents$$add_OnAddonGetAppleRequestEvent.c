/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnAddonGetAppleRequestEvent
ENTRY_POINT: 0522d0f4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnAddonGetAppleRequestEvent(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  code *pcVar22;
  int unaff_w20;
  undefined4 uVar23;
  long unaff_x21;
  undefined1 uVar24;
  undefined8 uVar25;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  plVar8 = (long *)(**(code **)(*param_1 + 0x1d8))
                             (param_1,unaff_w20,0,*(undefined8 *)(*param_1 + 0x1e0));
  bVar4 = *(byte *)(unaff_x21 + 0x10);
  if (bVar4 < 0xcf) {
    if (bVar4 < 0xcb) {
      if (bVar4 == 200) {
        plVar9 = (long *)FUN_051c2b34();
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*unaff_x25);
        }
        if (plVar9 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)PTR_DAT_0664a098 + 0x130);
          if (bVar4 <= *(byte *)(*plVar9 + 0x130)) {
            if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_0664a098) {
              plVar9 = (long *)0x0;
            }
            goto LAB_0522e1e0;
          }
        }
        plVar9 = (long *)0x0;
LAB_0522e1e0:
        FUN_05227c5c(plVar9,plVar8);
        return;
      }
      if (bVar4 != 0xc9) {
        if (bVar4 != 0xca) {
          return;
        }
        plVar9 = (long *)FUN_051c2b34();
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*unaff_x25);
        }
        if (plVar9 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)PTR_DAT_0664a098 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)PTR_DAT_0664a098)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268(plVar9);
          }
        }
        FUN_052236e0(plVar9,plVar8);
        return;
      }
    }
    else {
      if (bVar4 == 0xcb) {
        lVar10 = *unaff_x25;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar10 = *unaff_x25;
        }
        if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x28) == '\0') {
          uVar25 = *(undefined8 *)
                    System_Collections_Generic_Dictionary<string,_OpenXRInteractionFeature_ActionType>_TypeInfo
          ;
          if (plVar8 == (long *)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          uVar25 = FUN_04e80678(uVar25,uVar18,
                                *(undefined8 *)
                                 System_Collections_Generic_Dictionary<string,_XPathParser_ParamInfo>_TypeInfo
                                ,0);
LAB_0522e354:
          if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
          }
          FUN_05ea2df4(uVar25,0);
          return;
        }
        if ((plVar8 != (long *)0x0) && (uVar20 = FUN_0520d894(plVar8,0), (uVar20 & 1) != 0)) {
          lVar10 = *unaff_x25;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar10 = *unaff_x25;
          }
          if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x28) == '\0') {
            return;
          }
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_052217f0(0);
          return;
        }
        lVar10 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) != 0) {
            *(undefined8 *)(lVar10 + 0x20) =
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<string,_OpenXRInteractionFeature_ActionType>_TypeInfo
            ;
            thunk_FUN_02dc1ef0();
            if (plVar8 == (long *)0x0) {
              uVar25 = 0;
            }
            else {
              uVar25 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar10 + 0x28) = uVar25;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x28));
              if (2 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x30) =
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<string,_RenderGraph_DebugData>_TypeInfo;
                thunk_FUN_02dc1ef0();
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                plVar8 = (long *)FUN_05219880();
                if (plVar8 == (long *)0x0) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                }
                if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar10 + 0x38) = uVar25;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x38));
                  if (4 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x40) =
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_MockRuntime_AfterFunctionDelegate>_TypeInfo
                    ;
                    thunk_FUN_02dc1ef0();
                    uVar25 = FUN_04e80ce4(lVar10,0);
                    goto LAB_0522e354;
                  }
                }
              }
            }
          }
          goto LAB_0522e758;
        }
        goto LAB_0522e75c;
      }
      if (bVar4 == 0xcc) {
        plVar8 = (long *)FUN_051c2b34();
        if (plVar8 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)PTR_DAT_0664a098 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)PTR_DAT_0664a098)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268(plVar8);
          }
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((plVar8 != (long *)0x0) &&
           (plVar8 = (long *)FUN_051ac5c4(plVar8,*(undefined8 *)
                                                  (*(long *)(*unaff_x25 + 0xb8) + 0x120),0),
           plVar8 != (long *)0x0)) {
          if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(PTR_DAT_066462a0 + 0x48) + 0x40))
          goto LAB_0522e774;
          puVar12 = (undefined4 *)thunk_FUN_02d8a780();
          uStack0000000000000068 = *puVar12;
          in_stack_00000060 = 0;
          lVar10 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xb0);
          if (lVar10 != 0) {
            uVar20 = FUN_03936c30(lVar10,uStack0000000000000068,&stack0x00000060,
                                  *(undefined8 *)
                                   System_Collections_Generic_Dictionary<string,_ChatChannel>_TypeInfo
                                 );
            if ((uVar20 & 1) == 0) {
              uVar25 = FUN_05000654(&stack0x00000068,0);
              uVar18 = FUN_05000654((long)&stack0x00000068 + 4,0);
              uVar25 = FUN_04e80bdc(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<string,_UriParser>_TypeInfo
                                    ,uVar25,*(undefined8 *)
                                             System_Collections_Generic_Dictionary<string,_StylePropertyId>_TypeInfo
                                    ,uVar18,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
              }
              FUN_05ea29a0(uVar25,0);
              return;
            }
            if (in_stack_00000060 != 0) {
              uVar25 = FUN_05eddc40(in_stack_00000060,0);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*unaff_x25);
              }
              FUN_052242f8(uVar25,1);
              return;
            }
          }
        }
        goto LAB_0522e75c;
      }
      if (bVar4 != 0xce) {
        return;
      }
    }
    lVar10 = FUN_051c2a70();
    puVar6 = PTR_DAT_066463a0;
    if (lVar10 != 0) {
      uVar25 = *(undefined8 *)PTR_DAT_066463a0;
      lVar11 = thunk_FUN_02d8a53c(lVar10,uVar25);
      puVar5 = PTR_DAT_066462a0;
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) != 0) {
          if (*(long **)(lVar11 + 0x20) == (long *)0x0) goto LAB_0522e75c;
          if (*(long *)(**(long **)(lVar11 + 0x20) + 0x40) !=
              *(long *)(*(long *)(PTR_DAT_066462a0 + 0x48) + 0x40)) {
LAB_0522e774:
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268();
          }
          puVar12 = (undefined4 *)thunk_FUN_02d8a780();
          if ((*(ulong *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
            uVar23 = *puVar12;
            if (*(long **)(lVar11 + 0x28) == (long *)0x0) {
              uVar24 = 0;
              uVar20 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            }
            else {
              if (*(long *)(**(long **)(lVar11 + 0x28) + 0x40) !=
                  *(long *)(*(long *)(puVar5 + 0x18) + 0x40)) goto LAB_0522e774;
              puVar13 = (undefined1 *)thunk_FUN_02d8a780();
              uVar20 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar24 = *puVar13;
            }
            if ((int)uVar20 < 3) {
              return;
            }
            lVar10 = 6;
            while (lVar10 - 4U < uVar20) {
              lVar17 = thunk_FUN_02d8a53c(*(undefined8 *)(lVar11 + lVar10 * 8),*(undefined8 *)puVar6
                                         );
              if (lVar17 == 0) {
                return;
              }
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_0522c084(lVar17,plVar8,uVar23,uVar24);
              uVar20 = (ulong)*(uint *)(lVar11 + 0x18);
              lVar17 = lVar10 + -3;
              lVar10 = lVar10 + 1;
              if ((int)*(uint *)(lVar11 + 0x18) <= lVar17) {
                return;
              }
            }
          }
        }
LAB_0522e758:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      goto LAB_0522e778;
    }
    goto LAB_0522e75c;
  }
  if (0xd3 < bVar4) {
    if (bVar4 != 0xd4) {
      if (bVar4 != 0xfe) {
        if (bVar4 != 0xff) {
          return;
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05227ac0();
        return;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar10 = FUN_052163f4();
      if (lVar10 == 0) {
        return;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar10 = FUN_052163f4();
      if (lVar10 != 0) {
        if (*(char *)(lVar10 + 0x3a) == '\0') {
          return;
        }
        if ((plVar8 != (long *)0x0) && ((char)plVar8[6] != '\0')) {
          return;
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
LAB_0522dd80:
        FUN_05224b20(unaff_w20,1);
        return;
      }
      goto LAB_0522e75c;
    }
    lVar10 = *unaff_x25;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar10 = *unaff_x25;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xa8);
    if (lVar10 == 0) goto LAB_0522e75c;
    FUN_04caae54(lVar10,*(undefined8 *)
                         System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    lVar10 = FUN_051c2b34();
    if (lVar10 == 0) goto LAB_0522e75c;
    uVar25 = *(undefined8 *)PTR_DAT_06646fe8;
    lVar11 = thunk_FUN_02d8a53c(lVar10,uVar25);
    puVar5 = PTR_DAT_066462d0;
    puVar6 = PTR_DAT_066462a0;
    if (lVar11 != 0) {
      iVar1 = *(int *)(lVar11 + 0x18);
      if (0 < iVar1) {
        uVar19 = 0;
        do {
          if ((*(uint *)(lVar11 + 0x18) <= uVar19) || (*(uint *)(lVar11 + 0x18) <= uVar19 + 1))
          goto LAB_0522e758;
          uVar23 = *(undefined4 *)(lVar11 + (long)(int)uVar19 * 4 + 0x20);
          uVar2 = *(undefined4 *)(lVar11 + (long)(int)(uVar19 + 1) * 4 + 0x20);
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar10 = FUN_052294a8(uVar23);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)puVar5);
          }
          uVar20 = FUN_05ee2f7c(lVar10,0,0);
          if ((uVar20 & 1) == 0) {
            if (lVar10 == 0) goto LAB_0522e75c;
            lVar17 = *(long *)(lVar10 + 0x80);
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            plVar8 = (long *)FUN_052163f4();
            if (plVar8 == (long *)0x0) goto LAB_0522e75c;
            lVar15 = (**(code **)(*plVar8 + 0x1d8))(plVar8,uVar2,1,*(undefined8 *)(*plVar8 + 0x1e0))
            ;
            FUN_052187a8(lVar10,uVar2);
            FUN_052189b8(lVar10,uVar2);
            lVar16 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xa8);
            if (lVar16 == 0) goto LAB_0522e75c;
            System_Array_InternalEnumerator<RichTextTagAttribute>__System_Collections_IEnumerator_get_Current
                      (lVar16,lVar10,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<string,_SchemaNotation>_TypeInfo);
            if (lVar15 != lVar17) {
              lVar15 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0);
              if (lVar15 != 0) {
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar15 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0);
                  if (lVar15 == 0) goto LAB_0522e75c;
                }
                (**(code **)(lVar15 + 0x18))
                          (*(undefined8 *)(lVar15 + 0x40),lVar10,lVar17,
                           *(undefined8 *)(lVar15 + 0x28));
              }
            }
          }
          else {
            lVar10 = *unaff_x25;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar10 = *unaff_x25;
            }
            if (-1 < *(int *)(*(long *)(lVar10 + 0xb8) + 0x24)) {
              plVar8 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
              in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar23);
              lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),&stack0x00000008);
              if (plVar8 == (long *)0x0) goto LAB_0522e75c;
              if ((lVar10 != 0) &&
                 (lVar17 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar17 == 0))
              goto LAB_0522e768;
              if ((int)plVar8[3] == 0) goto LAB_0522e758;
              plVar8[4] = lVar10;
              thunk_FUN_02dc1ef0(plVar8 + 4,lVar10);
              uStack000000000000002c = uVar2;
              lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),(long)&stack0x00000028 + 4)
              ;
              if ((lVar10 != 0) &&
                 (lVar17 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar17 == 0))
              goto LAB_0522e768;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_0522e758;
              plVar8[5] = lVar10;
              thunk_FUN_02dc1ef0(plVar8 + 5,lVar10);
              iStack0000000000000028 = unaff_w20;
              lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),&stack0x00000028);
              if ((lVar10 != 0) &&
                 (lVar17 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar17 == 0))
              goto LAB_0522e768;
              if (*(uint *)(plVar8 + 3) < 3) goto LAB_0522e758;
              plVar8[6] = lVar10;
              thunk_FUN_02dc1ef0(plVar8 + 6,lVar10);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05ea2bc0(*(undefined8 *)
                            System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                           ,plVar8,0);
            }
          }
          uVar19 = uVar19 + 2;
        } while ((int)uVar19 < iVar1);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      _in_stack_00000030 = FUN_05218720();
      _in_stack_00000040 =
           FUN_04005224(&stack0x00000030,
                        *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo);
      puVar7 = System_Collections_Generic_Dictionary<string,_StringBuilder>_TypeInfo;
      puVar5 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
      puVar6 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
      in_stack_00000010 = &stack0x00000040;
      in_stack_00000008 = 0;
      while( true ) {
        uVar20 = FUN_04005300(&stack0x00000040,*(undefined8 *)puVar6);
        if ((uVar20 & 1) == 0) {
          FUN_0400538c(&stack0x00000040,
                       *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo);
          return;
        }
        lVar10 = FUN_04005238(&stack0x00000040,*(undefined8 *)puVar5);
        lVar11 = *unaff_x25;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar11 = *unaff_x25;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xa8);
        if (lVar11 == 0) break;
        uVar20 = FUN_04caaeb4(lVar11,lVar10,*(undefined8 *)puVar7);
        if ((uVar20 & 1) == 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_052190dc(lVar10,0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
LAB_0522e778:
                    /* WARNING: Subroutine does not return */
    FUN_02d4e268(lVar10,uVar25);
  }
  if (bVar4 == 0xcf) {
    plVar8 = (long *)FUN_051c2b34();
    if (plVar8 == (long *)0x0) {
      return;
    }
    bVar4 = *(byte *)(*(long *)PTR_DAT_0664a098 + 0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar4) {
      return;
    }
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_0664a098) {
      return;
    }
    lVar10 = *unaff_x25;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar10 = *unaff_x25;
    }
    plVar8 = (long *)FUN_051ac5c4(plVar8,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x120),0);
    if (plVar8 == (long *)0x0) goto LAB_0522e75c;
    if (*(long *)(*plVar8 + 0x40) == *(long *)(*(long *)(PTR_DAT_066462a0 + 0x48) + 0x40)) {
      piVar14 = (int *)thunk_FUN_02d8a780();
      unaff_w20 = *piVar14;
      if (unaff_w20 < 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_052250cc(1);
        return;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      goto LAB_0522dd80;
    }
    goto LAB_0522e774;
  }
  if (bVar4 != 0xd1) {
    if (bVar4 != 0xd2) {
      return;
    }
    lVar10 = FUN_051c2b34();
    if (lVar10 == 0) goto LAB_0522e75c;
    uVar25 = *(undefined8 *)PTR_DAT_06646fe8;
    lVar11 = thunk_FUN_02d8a53c(lVar10,uVar25);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268(lVar10,uVar25);
    }
    if ((*(int *)(lVar11 + 0x18) == 0) ||
       (uVar23 = *(undefined4 *)(lVar11 + 0x20), uStack0000000000000058 = uVar23,
       *(int *)(lVar11 + 0x18) == 1)) goto LAB_0522e758;
    lVar10 = *unaff_x25;
    uStack0000000000000054 = *(undefined4 *)(lVar11 + 0x24);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar10 = *unaff_x25;
    }
    if (0 < *(int *)(*(long *)(lVar10 + 0xb8) + 0x24)) {
      lVar10 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,6);
      if (lVar10 == 0) goto LAB_0522e75c;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0522e758;
      *(undefined8 *)(lVar10 + 0x20) =
           *(undefined8 *)System_Collections_Generic_Dictionary<string,_Type>_TypeInfo;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x20));
      uVar25 = FUN_05000654(&stack0x00000058,0);
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_0522e758;
      *(undefined8 *)(lVar10 + 0x28) = uVar25;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x28),uVar25);
      if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_0522e758;
      *(undefined8 *)(lVar10 + 0x30) =
           *(undefined8 *)
            System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_TypeInfo
      ;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x30));
      uVar25 = FUN_05000654((long)&stack0x00000050 + 4,0);
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_0522e758;
      *(undefined8 *)(lVar10 + 0x38) = uVar25;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x38),uVar25);
      if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_0522e758;
      *(undefined8 *)(lVar10 + 0x40) =
           *(undefined8 *)System_Collections_Generic_Dictionary<string,_Axis_AxisType>_TypeInfo;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar10 + 0x40));
      iStack0000000000000050 = thunk_FUN_02d80bc8(0);
      iStack0000000000000050 = iStack0000000000000050 % 1000;
      uVar25 = FUN_05000654(&stack0x00000050,0);
      if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_0522e758;
      *(undefined8 *)(lVar10 + 0x48) = uVar25;
      thunk_FUN_02dc1ef0();
      uVar25 = FUN_04e80ce4(lVar10,0);
      if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
      }
      FUN_05ea2238(uVar25,0);
      lVar10 = *unaff_x25;
      uVar23 = uStack0000000000000058;
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar10 = FUN_052294a8(uVar23);
    if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
    }
    uVar20 = FUN_05ee1474(lVar10,0,0);
    if ((uVar20 & 1) == 0) {
      lVar10 = *unaff_x25;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar10 = *unaff_x25;
      }
      if (*(int *)(*(long *)(lVar10 + 0xb8) + 0x24) < 0) {
        return;
      }
      lVar10 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
      puVar6 = PTR_DAT_066462a0;
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uStack0000000000000058);
      uVar25 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000008);
      if (lVar10 != 0) {
        FUN_0291b5fc(lVar10,uVar25);
        FUN_0291b630(lVar10,0,uVar25);
        uStack000000000000002c = uStack0000000000000054;
        uVar25 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),(long)&stack0x00000028 + 4);
        FUN_0291b5fc(lVar10,uVar25);
        FUN_0291b630(lVar10,1,uVar25);
        iStack0000000000000028 = uStack000000000000006c;
        uVar25 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),&stack0x00000028);
        FUN_0291b5fc(lVar10,uVar25);
        FUN_0291b630(lVar10,2,uVar25);
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05ea2bc0(*(undefined8 *)
                      System_Collections_Generic_Dictionary<string,_StylePropertyValue>_TypeInfo,
                     lVar10,0);
        return;
      }
      goto LAB_0522e75c;
    }
    if (lVar10 == 0) goto LAB_0522e75c;
    if ((*(int *)(lVar10 + 0x50) != 1) &&
       ((*(int *)(lVar10 + 0x50) != 2 ||
        ((plVar8 != *(long **)(lVar10 + 0x70) && (plVar8 != *(long **)(lVar10 + 0x80))))))) {
      lVar11 = *unaff_x25;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *unaff_x25;
      }
      if (*(int *)(*(long *)(lVar11 + 0xb8) + 0x24) < 1) {
        return;
      }
      iVar1 = *(int *)(lVar10 + 0x50);
      lVar11 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
      if (iVar1 == 2) {
        if (lVar11 != 0) {
          FUN_0291b630(lVar11,0,*(undefined8 *)
                                 System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_TypeInfo
                      );
          uVar25 = thunk_FUN_05ee6e70(lVar10,0);
          FUN_0291b630(lVar11,1,uVar25);
          FUN_0291b630(lVar11,2,*(undefined8 *)PTR_DAT_0664a7e8);
          uVar25 = FUN_05000654(&stack0x00000058,0);
          FUN_0291b630(lVar11,3,uVar25);
          puVar21 = (undefined8 *)
                    System_Collections_Generic_Dictionary<string,_StyleComplexSelector_PseudoStateData>_TypeInfo
          ;
LAB_0522e410:
          FUN_0291b630(lVar11,4,*puVar21);
          uVar25 = FUN_04e80ce4(lVar11,0);
          if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
          }
          FUN_05ea2238(uVar25,0);
          return;
        }
      }
      else if (lVar11 != 0) {
        FUN_0291b630(lVar11,0,*(undefined8 *)
                               System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_TypeInfo
                    );
        uVar25 = thunk_FUN_05ee6e70(lVar10,0);
        FUN_0291b630(lVar11,1,uVar25);
        FUN_0291b630(lVar11,2,*(undefined8 *)PTR_DAT_0664a7e8);
        uVar25 = FUN_05000654(&stack0x00000058,0);
        FUN_0291b630(lVar11,3,uVar25);
        puVar21 = (undefined8 *)
                  System_Collections_Generic_Dictionary<string,_VisualElement>_TypeInfo;
        goto LAB_0522e410;
      }
      goto LAB_0522e75c;
    }
    plVar8 = *(long **)(lVar10 + 0x80);
    FUN_052187a8(lVar10,uStack0000000000000054);
    FUN_052189b8(lVar10,uStack0000000000000054);
    lVar11 = *unaff_x25;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar11 = *unaff_x25;
    }
    lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xc0);
    if (lVar17 == 0) {
      return;
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar17 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0);
      if (lVar17 == 0) goto LAB_0522e75c;
    }
    pcVar22 = *(code **)(lVar17 + 0x18);
    uVar25 = *(undefined8 *)(lVar17 + 0x40);
    goto LAB_0522e72c;
  }
  lVar10 = FUN_051c2b34();
  if (lVar10 == 0) goto LAB_0522e75c;
  uVar25 = *(undefined8 *)PTR_DAT_06646fe8;
  lVar11 = thunk_FUN_02d8a53c(lVar10,uVar25);
  if (lVar11 == 0) goto LAB_0522e778;
  if ((*(int *)(lVar11 + 0x18) == 0) ||
     (uVar23 = *(undefined4 *)(lVar11 + 0x20), uStack000000000000005c = uVar23,
     *(int *)(lVar11 + 0x18) == 1)) goto LAB_0522e758;
  iVar1 = *(int *)(lVar11 + 0x24);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*unaff_x25);
  }
  lVar10 = FUN_052294a8(uVar23);
  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
  }
  uVar20 = FUN_05ee2f7c(lVar10,0,0);
  if ((uVar20 & 1) != 0) {
    uVar25 = FUN_05000654((long)&stack0x00000058 + 4,0);
    uVar25 = FUN_04e723e0(*(undefined8 *)
                           System_Collections_Generic_Dictionary<string,_DtdParser_UndeclaredNotation>_TypeInfo
                          ,uVar25,0);
LAB_0522e654:
    if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
    }
    FUN_05ea2df4(uVar25,0);
    return;
  }
  lVar11 = *unaff_x25;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar11 = *unaff_x25;
  }
  if (*(int *)(*(long *)(lVar11 + 0xb8) + 0x24) == 1) {
    plVar9 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,7);
    puVar6 = PTR_DAT_066462a0;
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,unaff_w20);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000008);
    if (plVar9 == (long *)0x0) goto LAB_0522e75c;
    if ((lVar11 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0)) {
LAB_0522e768:
      uVar25 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar25,0);
    }
    if ((int)plVar9[3] == 0) goto LAB_0522e758;
    plVar9[4] = lVar11;
    thunk_FUN_02dc1ef0(plVar9 + 4,lVar11);
    uStack000000000000002c = uVar23;
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),(long)&stack0x00000028 + 4);
    if ((lVar11 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_0522e768;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_0522e758;
    plVar9[5] = lVar11;
    thunk_FUN_02dc1ef0(plVar9 + 5,lVar11);
    iStack0000000000000028 = iVar1;
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),&stack0x00000028);
    if ((lVar11 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_0522e768;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_0522e758;
    plVar9[6] = lVar11;
    thunk_FUN_02dc1ef0(plVar9 + 6,lVar11);
    if (lVar10 == 0) goto LAB_0522e75c;
    in_stack_00000020._4_4_ = *(undefined4 *)(lVar10 + 0x88);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),(long)&stack0x00000020 + 4);
    if ((lVar11 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_0522e768;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffc) == 0) goto LAB_0522e758;
    plVar9[7] = lVar11;
    thunk_FUN_02dc1ef0(plVar9 + 7,lVar11);
    if ((*(long *)(lVar10 + 0x80) == 0) || (*(char *)(*(long *)(lVar10 + 0x80) + 0x30) != '\0')) {
      uVar25 = *(undefined8 *)
                System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
      ;
      puVar21 = (undefined8 *)
                System_Collections_Generic_Dictionary<string,_MockRuntime_BeforeFunctionDelegate>_TypeInfo
      ;
    }
    else {
      uVar25 = *(undefined8 *)
                System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
      ;
      puVar21 = (undefined8 *)
                System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_TypeInfo;
    }
    uVar18 = *puVar21;
    FUN_0291b5fc(plVar9,uVar18);
    FUN_0291b630(plVar9,4,uVar18);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar11 = FUN_05219880();
    if (lVar11 == 0) goto LAB_0522e75c;
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,*(undefined4 *)(lVar11 + 0x18));
    uVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x48),&stack0x00000008);
    FUN_0291b5fc(plVar9,uVar18);
    FUN_0291b630(plVar9,5,uVar18);
    uStack000000000000002c = CONCAT31(uStack000000000000002c._1_3_,*(undefined1 *)(lVar10 + 0x68));
    uVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar6 + 0x28),(long)&stack0x00000028 + 4);
    FUN_0291b5fc(plVar9,uVar18);
    FUN_0291b630(plVar9,6,uVar18);
    uVar25 = FUN_04e81064(uVar25,plVar9,0);
    if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
    }
    FUN_05ea2238(uVar25,0);
  }
  else if (lVar10 == 0) goto LAB_0522e75c;
  iVar3 = *(int *)(lVar10 + 0x50);
  if (iVar3 == 2) {
    lVar11 = *unaff_x25;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar11 = *unaff_x25;
    }
    lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xb8);
    if (lVar17 == 0) {
      return;
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar17 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xb8);
      goto joined_r0x0522e71c;
    }
  }
  else {
    if (iVar3 != 1) {
      in_stack_00000008 =
           *(undefined8 *)
            System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TypeInfo;
      in_stack_00000010 = (undefined8 *)0xffffffffffffffff;
      in_stack_00000018 = iVar3;
      uVar25 = FUN_05038b8c(&stack0x00000008,0);
      uVar25 = FUN_04e80678(*(undefined8 *)
                             System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo
                            ,uVar25,*(undefined8 *)
                                     System_Collections_Generic_Dictionary<string,_CommandEvent_Command>_TypeInfo
                            ,0);
      goto LAB_0522e654;
    }
    iVar3 = *(int *)(lVar10 + 0x88);
    if (iVar1 != iVar3) {
      if (iVar1 == 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar11 = FUN_05219880();
        if (lVar11 == 0) goto LAB_0522e75c;
        if ((iVar3 != 0) && (iVar3 != *(int *)(lVar11 + 0x18))) goto LAB_0522e6e4;
      }
      else if (iVar3 != 0) {
LAB_0522e6e4:
        lVar11 = *unaff_x25;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar11 = *unaff_x25;
        }
        lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 200);
        if (lVar17 == 0) {
          return;
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar17 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 200);
          goto joined_r0x0522e71c;
        }
        goto LAB_0522e720;
      }
    }
    plVar8 = *(long **)(lVar10 + 0x80);
    FUN_052187a8(lVar10,unaff_w20);
    FUN_052189b8(lVar10,unaff_w20);
    lVar11 = *unaff_x25;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar11 = *unaff_x25;
    }
    lVar17 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xc0);
    if (lVar17 == 0) {
      return;
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar17 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0);
joined_r0x0522e71c:
      if (lVar17 == 0) {
LAB_0522e75c:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
  }
LAB_0522e720:
  pcVar22 = *(code **)(lVar17 + 0x18);
  uVar25 = *(undefined8 *)(lVar17 + 0x40);
LAB_0522e72c:
  (*pcVar22)(uVar25,lVar10,plVar8,*(undefined8 *)(lVar17 + 0x28));
  return;
}


