/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$.ctor
ENTRY_POINT: 0614fea0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Xml_Serialization_XmlSerializerNamespaces___ctor
               (long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x22;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long *in_stack_00000018;
  
  lVar13 = param_1;
  if ((*(byte *)(unaff_x22 + 0xa7d) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0728f668);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<char>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Character>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Claim>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ClimbInteractable>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Collider>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Button>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(PTR_DAT_0727ea28);
    thunk_FUN_032e1da0(System_Func<Transform>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionStartEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Color>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UIHoverEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Column>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<CombineInstance>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<CommonTouch>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ComputedTransitionProperty>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ConsentStatus>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ConsentType>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ConstantBufferBase>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Contraction>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ControlInput>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ControlOutput>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Controller>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ControllerBinding>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07287ad0);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ControllerOffset>_TypeInfo);
    lVar13 = thunk_FUN_032e1da0(System_Func<InputControl,_bool>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xa7d) = 1;
  }
  in_stack_00000018 = (long *)0x0;
  if (param_2 == 0) goto LAB_061509d0;
  if (*(char *)(param_2 + 0x30) != '\0') {
    return;
  }
  plVar18 = (long *)(param_2 + 0x48);
  *(undefined1 *)(param_2 + 0x30) = 1;
  if (*plVar18 != 0) {
    plVar14 = *(long **)(param_1 + 0x10);
    if (plVar14 == (long *)0x0) goto LAB_061509d0;
    lVar13 = (**(code **)(*plVar14 + 0x198))(plVar14,*plVar18,*(undefined8 *)(*plVar14 + 0x1a0));
    *plVar18 = lVar13;
    thunk_FUN_0333a630(plVar18,lVar13);
    if (lVar13 == 0) goto LAB_061509d0;
    if (*(int *)(lVar13 + 0x10) == 0) {
      lVar13 = FUN_06280f9c(param_1,*(undefined8 *)
                                     System_Collections_Generic_List<ComputedTransitionProperty>_TypeInfo
                            ,param_2,0);
    }
    else {
      lVar13 = FUN_061526cc(param_1,lVar13,
                            *(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo,
                            param_2);
    }
  }
  plVar14 = (long *)(param_2 + 0x50);
  if (*plVar14 != 0) {
    if (*(int *)(*(long *)System_Collections_Generic_List<ChallengeEntry>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar13 = FUN_06292748(0x20,0);
    if ((lVar13 == 0) || (plVar19 = *(long **)(lVar13 + 0x68), plVar19 == (long *)0x0))
    goto LAB_061509d0;
    plVar15 = (long *)(**(code **)(*plVar19 + 0x238))
                                (plVar19,*plVar14,0,0,&stack0x00000018,
                                 *(undefined8 *)(*plVar19 + 0x240));
    if (plVar15 == (long *)0x0) {
      if ((in_stack_00000018 != (long *)0x0) && (*in_stack_00000018 != *(long *)PTR_DAT_072794f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(in_stack_00000018,*(long *)PTR_DAT_072794f8);
      }
      *plVar14 = (long)in_stack_00000018;
      lVar13 = thunk_FUN_0333a630(plVar14);
    }
    else {
      lVar13 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,4);
      if (lVar13 == 0) goto LAB_061509d0;
      if (*(int *)(lVar13 + 0x18) == 0) {
LAB_06151108:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_07287ad0;
      thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
      if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_06151108;
      *(long *)(lVar13 + 0x28) = *plVar14;
      thunk_FUN_0333a630((long *)(lVar13 + 0x28));
      uVar16 = FUN_0619fb34(plVar19,0);
      if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_06151108;
      *(undefined8 *)(lVar13 + 0x30) = uVar16;
      thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x30),uVar16);
      uVar16 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
      if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_06151108;
      *(undefined8 *)(lVar13 + 0x38) = uVar16;
      thunk_FUN_0333a630();
      lVar13 = FUN_062811d0(param_1,*(undefined8 *)
                                     System_Collections_Generic_List<ControllerBinding>_TypeInfo,
                            lVar13,plVar15,param_2,0);
    }
  }
  FUN_06151ca8(lVar13,param_2);
  puVar6 = System_Collections_Generic_List<Controller>_TypeInfo;
  puVar5 = System_Func<TransitionStartEvent>_TypeInfo;
  lVar13 = *(long *)(param_2 + 0x58);
  if (lVar13 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    iVar12 = 0;
    while (iVar10 = FUN_058f278c(lVar13,0), iVar12 < iVar10) {
      plVar14 = *(long **)(param_2 + 0x58);
      if ((plVar14 == (long *)0x0) ||
         (plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                      (plVar14,iVar12,*(undefined8 *)(*plVar14 + 0x310)),
         plVar14 == (long *)0x0)) goto LAB_061509d0;
      lVar13 = *(long *)puVar5;
      bVar3 = *(byte *)(lVar13 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      plVar19 = plVar14 + 9;
      lVar13 = *plVar19;
      plVar14[5] = param_2;
      thunk_FUN_0333a630(plVar14 + 5,param_2);
      uVar16 = FUN_06152840(param_1,plVar14);
      if (plVar14[7] == 0) {
        if ((int)plVar14[0xc] == 1) {
          if (lVar13 == 0) {
LAB_0615035c:
            uVar16 = FUN_06280f14(param_1,*(undefined8 *)
                                           System_Collections_Generic_List<ControlInput>_TypeInfo,
                                  *(undefined8 *)System_Func<InputControl,_bool>_TypeInfo,plVar14,0)
            ;
          }
        }
        else if ((lVar13 == 0) && ((int)plVar14[0xc] == 3)) goto LAB_0615035c;
      }
      else {
        uVar16 = FUN_061526cc(param_1,plVar14[7],*(undefined8 *)puVar6,plVar14);
      }
      iVar10 = (int)plVar14[0xc];
      if (iVar10 == 1) {
        if (*plVar19 != 0) {
LAB_06150498:
          if (lVar13 == 0) goto LAB_061509d0;
LAB_061504ac:
          if (*(long *)(lVar13 + 0x48) == 0) {
            if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
              lVar13 = FUN_0614ef0c(param_1,param_3,lVar13);
              *plVar19 = lVar13;
              thunk_FUN_0333a630(plVar19,lVar13);
            }
          }
          else {
            uVar17 = FUN_057aa92c(*plVar18,*(long *)(lVar13 + 0x48),0);
            if ((uVar17 & 1) != 0) {
              FUN_062810dc(param_1,*(undefined8 *)
                                    System_Collections_Generic_List<ControllerOffset>_TypeInfo,
                           *(undefined8 *)(lVar13 + 0x48),*plVar18,plVar14,0);
            }
          }
          FUN_0614fe80(param_1,lVar13,*plVar18,param_4);
        }
      }
      else if (iVar10 == 3) {
        if (lVar13 != 0) {
          FUN_0615237c(uVar16,plVar14);
          goto LAB_061504ac;
        }
      }
      else {
        if (iVar10 != 2) goto LAB_06150498;
        bVar3 = *(byte *)(*(long *)System_Func<UIHoverEventArgs>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<UIHoverEventArgs>_TypeInfo)) goto LAB_061509d0;
        lVar20 = plVar14[0xd];
        uVar17 = thunk_FUN_057aa644(lVar20,*plVar18,0);
        if ((uVar17 & 1) != 0) {
          FUN_06280f9c(param_1,*(undefined8 *)
                                System_Collections_Generic_List<ConstantBufferBase>_TypeInfo,plVar14
                       ,0);
        }
        if (lVar13 == 0) {
          if (lVar20 != 0) {
            if (*(int *)(lVar20 + 0x10) == 0) {
              FUN_06280f14(param_1,*(undefined8 *)
                                    System_Collections_Generic_List<ConsentStatus>_TypeInfo,lVar20,
                           plVar14,0);
            }
            else {
              FUN_061526cc(param_1,lVar20,
                           *(undefined8 *)System_Collections_Generic_List<ControlOutput>_TypeInfo,
                           plVar14);
            }
          }
        }
        else {
          uVar17 = FUN_057aa92c(lVar20,*(undefined8 *)(lVar13 + 0x48),0);
          if ((uVar17 & 1) != 0) {
            FUN_062810dc(param_1,*(undefined8 *)
                                  System_Collections_Generic_List<CommonTouch>_TypeInfo,lVar20,
                         *(undefined8 *)(lVar13 + 0x48),plVar14,0);
          }
          uVar16 = *(undefined8 *)(param_1 + 0xa8);
          *(long *)(param_1 + 0xa8) = lVar13;
          thunk_FUN_0333a630(puVar1,lVar13);
          FUN_0614fe80(param_1,lVar13,lVar20,param_4);
          *(undefined8 *)(param_1 + 0xa8) = uVar16;
          thunk_FUN_0333a630(puVar1,uVar16);
        }
      }
      lVar13 = *(long *)(param_2 + 0x58);
      iVar12 = iVar12 + 1;
      if (lVar13 == 0) goto LAB_061509d0;
    }
    *(long *)(param_1 + 0x60) = param_2;
    thunk_FUN_0333a630((long *)(param_1 + 0x60),param_2);
    FUN_061524ac(param_1,param_2);
    FUN_061528e0(param_1,param_2);
    if (param_3 == 0) {
      param_3 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
    }
    *(long *)(param_1 + 0x50) = param_3;
    thunk_FUN_0333a630((long *)(param_1 + 0x50),param_3);
    FUN_06152bec(param_1,param_2);
    plVar18 = *(long **)(param_1 + 0x90);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x2b8))(plVar18,*(undefined8 *)(*plVar18 + 0x2c0));
      puVar6 = System_Collections_Generic_List<CombineInstance>_TypeInfo;
      lVar13 = *(long *)(param_2 + 0x58);
      if (lVar13 != 0) {
        puVar2 = (undefined8 *)(param_1 + 0xb0);
        iVar12 = 0;
        plVar18 = (long *)System_Func<Transform>_TypeInfo;
        goto LAB_06150628;
      }
    }
  }
LAB_061509d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_06150628:
  iVar10 = FUN_058f278c(lVar13,0);
  if (iVar10 <= iVar12) {
    lVar13 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo);
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (lVar13,*(undefined8 *)System_Collections_Generic_List<Character>_TypeInfo);
    plVar18 = *(long **)(param_2 + 0x60);
    if (plVar18 != (long *)0x0) {
      iVar12 = FUN_058f278c(plVar18,0);
      puVar9 = System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
      puVar8 = System_Func<TransitionEndEvent>_TypeInfo;
      puVar7 = System_Func<TransitionCancelEvent>_TypeInfo;
      puVar6 = System_Func<FocusOutEvent>_TypeInfo;
      puVar5 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
      if (0 < iVar12) {
        iVar12 = 0;
        goto LAB_06150a38;
      }
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) < 1) {
          return;
        }
        iVar12 = 0;
        while( true ) {
          lVar20 = *(long *)(param_2 + 0x60);
          uVar16 = FUN_041e29a8(lVar13,iVar12,*(undefined8 *)puVar9);
          if (lVar20 == 0) break;
          FUN_061a2778(lVar20,uVar16,0);
          iVar12 = iVar12 + 1;
          if (*(int *)(lVar13 + 0x18) <= iVar12) {
            return;
          }
        }
      }
    }
    goto LAB_061509d0;
  }
  plVar14 = *(long **)(param_2 + 0x58);
  if ((plVar14 == (long *)0x0) ||
     (plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                  (plVar14,iVar12,*(undefined8 *)(*plVar14 + 0x310)),
     plVar14 == (long *)0x0)) goto LAB_061509d0;
  lVar13 = *(long *)puVar5;
  bVar3 = *(byte *)(*plVar14 + 0x130);
  bVar4 = *(byte *)(lVar13 + 0x130);
  if ((bVar3 < bVar4) ||
     (lVar20 = *(long *)(*plVar14 + 200), *(long *)(lVar20 + (ulong)bVar4 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(plVar14);
  }
  lVar13 = plVar14[9];
  iVar10 = (int)plVar14[0xc];
  if (lVar13 == 0) {
    if (iVar10 == 3) {
      lVar13 = *(long *)puVar6;
      bVar4 = *(byte *)(lVar13 + 0x130);
      if ((bVar3 < bVar4) || (*(long *)(lVar20 + (ulong)bVar4 * 8 + -8) != lVar13))
      goto LAB_061509d0;
      lVar13 = plVar14[8];
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar17 = FUN_062ac390(lVar13,0,0);
      if ((uVar17 & 1) != 0) {
        lVar13 = plVar14[0xd];
        if (lVar13 == 0) goto LAB_061509d0;
        iVar10 = 0;
        while (iVar11 = FUN_058f278c(lVar13,0), iVar10 < iVar11) {
          plVar19 = (long *)plVar14[0xd];
          if (plVar19 == (long *)0x0) goto LAB_061509d0;
          plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                      (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x310));
          if (plVar19 == (long *)0x0) {
LAB_0615099c:
            FUN_06280f9c(param_1,*(undefined8 *)
                                  System_Collections_Generic_List<Contraction>_TypeInfo,plVar14,0);
            break;
          }
          bVar3 = *(byte *)(*plVar18 + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) != *plVar18))
          goto LAB_0615099c;
          lVar13 = plVar14[0xd];
          iVar10 = iVar10 + 1;
          if (lVar13 == 0) goto LAB_061509d0;
        }
      }
    }
  }
  else {
    if (iVar10 == 3) {
      plVar18 = (long *)*puVar2;
      if (plVar18 == (long *)0x0) {
        uVar16 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f668);
        FUN_058f26dc(uVar16,0);
        *puVar2 = uVar16;
        thunk_FUN_0333a630(puVar2,uVar16);
        plVar18 = (long *)*puVar2;
      }
      uVar21 = *puVar1;
      uVar16 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Button>_TypeInfo);
      lVar20 = *(long *)puVar6;
      bVar3 = *(byte *)(lVar20 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) {
        plVar19 = (long *)0x0;
      }
      else {
        plVar19 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar20) {
          plVar19 = (long *)0x0;
        }
      }
      FUN_0614e8c4(uVar16,plVar19,uVar21);
      if (plVar18 == (long *)0x0) goto LAB_061509d0;
      (**(code **)(*plVar18 + 0x308))(plVar18,uVar16,*(undefined8 *)(*plVar18 + 0x310));
      plVar18 = *(long **)(param_1 + 0x90);
      if (plVar18 == (long *)0x0) goto LAB_061509d0;
      lVar20 = (**(code **)(*plVar18 + 0x308))(plVar18,lVar13,*(undefined8 *)(*plVar18 + 0x310));
      plVar18 = (long *)System_Func<Transform>_TypeInfo;
joined_r0x06150964:
      if (lVar20 == 0) {
        plVar19 = *(long **)(param_1 + 0x90);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x2a8))(plVar19,lVar13,plVar14,*(undefined8 *)(*plVar19 + 0x2b0));
          FUN_06152cf8(param_1,lVar13,param_2);
          goto LAB_061509b8;
        }
        goto LAB_061509d0;
      }
      goto LAB_061509c4;
    }
    if (iVar10 == 2) {
      if (lVar13 == *(long *)(param_1 + 0x58)) goto LAB_061509b8;
      bVar4 = *(byte *)(*(long *)System_Func<UIHoverEventArgs>_TypeInfo + 0x130);
      if ((bVar3 < bVar4) ||
         (*(long *)(lVar20 + (ulong)bVar4 * 8 + -8) !=
          *(long *)System_Func<UIHoverEventArgs>_TypeInfo)) goto LAB_061509d0;
      lVar20 = plVar14[0xd];
      if (lVar20 == 0) {
        lVar20 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
      }
      if (param_4 == (long *)0x0) goto LAB_061509d0;
      uVar17 = (**(code **)(*param_4 + 0x348))(param_4,lVar13,*(undefined8 *)(*param_4 + 0x350));
      if ((uVar17 & 1) == 0) {
        (**(code **)(*param_4 + 0x308))(param_4,lVar13,*(undefined8 *)(*param_4 + 0x310));
      }
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (plVar19 = (long *)FUN_0619bc48(*(long *)(param_1 + 0x58),0), plVar19 == (long *)0x0))
      goto LAB_061509d0;
      uVar17 = (**(code **)(*plVar19 + 0x348))(plVar19,lVar20,*(undefined8 *)(*plVar19 + 0x350));
      if ((uVar17 & 1) == 0) {
        if ((*(long *)(param_1 + 0x58) == 0) ||
           (plVar19 = (long *)FUN_0619bc48(*(long *)(param_1 + 0x58),0), plVar19 == (long *)0x0))
        goto LAB_061509d0;
        (**(code **)(*plVar19 + 0x308))(plVar19,lVar20,*(undefined8 *)(*plVar19 + 0x310));
      }
    }
    else if (iVar10 == 1) {
      plVar19 = *(long **)(param_1 + 0x90);
      if (plVar19 != (long *)0x0) {
        lVar20 = (**(code **)(*plVar19 + 0x308))(plVar19,lVar13,*(undefined8 *)(*plVar19 + 0x310));
        goto joined_r0x06150964;
      }
      goto LAB_061509d0;
    }
  }
LAB_061509b8:
  FUN_061528e0(param_1,plVar14);
LAB_061509c4:
  lVar13 = *(long *)(param_2 + 0x58);
  iVar12 = iVar12 + 1;
  if (lVar13 == 0) goto LAB_061509d0;
  goto LAB_06150628;
LAB_06150a38:
  lVar20 = (**(code **)(*plVar18 + 0x308))(plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
  if (lVar20 == 0) goto LAB_061509d0;
  *(long *)(lVar20 + 0x28) = param_2;
  thunk_FUN_0333a630((long *)(lVar20 + 0x28),param_2);
  plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                              (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
  if (plVar14 == (long *)0x0) {
LAB_06150aac:
    plVar19 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar19 == (long *)0x0) {
LAB_06150ae0:
      plVar19 = (long *)0x0;
    }
    else {
      lVar20 = *(long *)puVar7;
      bVar3 = *(byte *)(lVar20 + 0x130);
      if (*(byte *)(*plVar19 + 0x130) < bVar3) goto LAB_06150ae0;
      if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) != lVar20) {
        plVar19 = (long *)0x0;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar19 != (long *)0x0) {
      if (plVar14 != (long *)0x0) {
        lVar20 = *(long *)puVar7;
        bVar3 = *(byte *)(lVar20 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar20))
        goto LAB_06151100;
      }
      System_Xml_Serialization_TypeMember__GetHashCode(param_1,plVar14);
      uVar16 = FUN_0619a8d4(param_2,0);
      if (plVar14 != (long *)0x0) {
LAB_06150b6c:
        lVar20 = plVar14[0xd];
        goto LAB_06150cfc;
      }
      goto LAB_061509d0;
    }
    if (plVar14 == (long *)0x0) {
LAB_06150b90:
      plVar19 = (long *)0x0;
    }
    else {
      lVar20 = *(long *)puVar5;
      bVar3 = *(byte *)(lVar20 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) goto LAB_06150b90;
      plVar19 = plVar14;
      if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar20) {
        plVar19 = (long *)0x0;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar19 != (long *)0x0) {
      if (plVar14 != (long *)0x0) {
        lVar20 = *(long *)puVar5;
        bVar3 = *(byte *)(lVar20 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar20))
        goto LAB_06151100;
      }
      FUN_06154230(param_1,plVar14,0);
LAB_06150cd0:
      uVar16 = FUN_0619a944(param_2,0);
      if (plVar14 != (long *)0x0) {
        lVar20 = FUN_061ac6b8(plVar14,0);
        goto LAB_06150cfc;
      }
      goto LAB_061509d0;
    }
    if (plVar14 == (long *)0x0) {
LAB_06150c54:
      plVar19 = (long *)0x0;
    }
    else {
      lVar20 = *(long *)puVar6;
      bVar3 = *(byte *)(lVar20 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) goto LAB_06150c54;
      plVar19 = plVar14;
      if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar20) {
        plVar19 = (long *)0x0;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar19 != (long *)0x0) {
      if (plVar14 != (long *)0x0) {
        lVar20 = *(long *)puVar6;
        bVar3 = *(byte *)(lVar20 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar20))
        goto LAB_06151100;
      }
      FUN_06154afc(param_1,plVar14,0);
      goto LAB_06150cd0;
    }
    if (plVar14 == (long *)0x0) {
LAB_06150d48:
      plVar19 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) goto LAB_06150d48;
      plVar19 = plVar14;
      if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Func<TransitionRunEvent>_TypeInfo) {
        plVar19 = (long *)0x0;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar19 != (long *)0x0) {
      if (plVar14 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<TransitionRunEvent>_TypeInfo)) goto LAB_06151100;
      }
      FUN_061550d0(param_1,plVar14);
      uVar16 = FUN_0619a9b4(param_2,0);
      if (plVar14 != (long *)0x0) {
        lVar20 = plVar14[0x18];
        goto LAB_06150cfc;
      }
      goto LAB_061509d0;
    }
    if (plVar14 == (long *)0x0) {
LAB_06150e04:
      plVar19 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Color>_TypeInfo + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) goto LAB_06150e04;
      plVar19 = plVar14;
      if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Color>_TypeInfo) {
        plVar19 = (long *)0x0;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar19 != (long *)0x0) {
      if (plVar14 == (long *)0x0) {
        FUN_06155324(param_1,0);
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Color>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Color>_TypeInfo)) goto LAB_06151100;
      FUN_06155324(param_1,plVar14);
      uVar16 = *(undefined8 *)(param_2 + 0xa0);
      goto LAB_06150b6c;
    }
    if (plVar14 == (long *)0x0) {
LAB_06150eb0:
      plVar19 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Column>_TypeInfo + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) goto LAB_06150eb0;
      plVar19 = plVar14;
      if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Column>_TypeInfo) {
        plVar19 = (long *)0x0;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar19 != (long *)0x0) {
      if (plVar14 == (long *)0x0) {
        FUN_061554f4(param_1,0);
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Column>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Column>_TypeInfo)) {
LAB_06151100:
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      FUN_061554f4(param_1,plVar14);
      uVar16 = *(undefined8 *)(param_2 + 0xa8);
      goto LAB_06150b6c;
    }
    if (plVar14 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)System_Func<Transform>_TypeInfo + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) {
        plVar14 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
               *(long *)System_Func<Transform>_TypeInfo) {
        plVar14 = (long *)0x0;
      }
    }
    plVar19 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 == (long *)0x0) {
      FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<ConsentType>_TypeInfo,
                   plVar19,0);
      (**(code **)(*plVar18 + 0x308))(plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
      if (lVar13 != 0) {
        FUN_06e3d028(*(undefined8 *)(lVar13 + 0x10));
        return;
      }
      goto LAB_061509d0;
    }
    if (plVar19 == (long *)0x0) {
LAB_06150fbc:
      plVar19 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Func<Transform>_TypeInfo + 0x130);
      if (*(byte *)(*plVar19 + 0x130) < bVar3) goto LAB_06150fbc;
      if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Func<Transform>_TypeInfo) {
        plVar19 = (long *)0x0;
      }
    }
    FUN_0615575c(param_1,plVar19);
  }
  else {
    bVar3 = *(byte *)(*(long *)puVar8 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar8))
    goto LAB_06150aac;
    FUN_06153fbc(param_1,plVar14);
    uVar16 = FUN_0619a864(param_2,0);
    lVar20 = plVar14[0x10];
LAB_06150cfc:
    FUN_06280750(param_1,uVar16,lVar20,plVar14,0);
  }
  iVar12 = iVar12 + 1;
  iVar10 = FUN_058f278c(plVar18,0);
  if (iVar10 <= iVar12) {
    FUN_0615107c();
    return;
  }
  goto LAB_06150a38;
}


