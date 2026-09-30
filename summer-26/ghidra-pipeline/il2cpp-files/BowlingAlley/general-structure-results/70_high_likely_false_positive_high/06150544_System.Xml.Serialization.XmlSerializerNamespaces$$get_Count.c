/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$get_Count
ENTRY_POINT: 06150544
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__get_Count(void)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  long lVar17;
  long lVar18;
  long unaff_x28;
  undefined8 uVar19;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  do {
                    /* catch() { ... } // from try @ 0614ddd8 with catch @ 06150544 */
                    /* catch() { ... } // from try @ 0614dd58 with catch @ 06150548 */
    if (*(int *)(unaff_x28 + 0x10) == 0) {
      FUN_06280f14();
    }
    else {
                    /* catch() { ... } // from try @ 0614dce4 with catch @ 0615054c */
                    /* catch() { ... } // from try @ 0614dc30 with catch @ 06150554 */
                    /* catch() { ... } // from try @ 0614b8d8 with catch @ 06150558 */
                    /* catch() { ... } // from try @ 0614dbb0 with catch @ 06150560 */
                    /* catch() { ... } // from try @ 0614dad0 with catch @ 06150564 */
      FUN_061526cc();
    }
LAB_06150530:
    do {
      unaff_w25 = unaff_w25 + 1;
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_061509d0;
      iVar9 = FUN_058f278c(*(long *)(unaff_x19 + 0x58),0);
      if (iVar9 <= unaff_w25) {
        *(long *)(unaff_x20 + 0x60) = unaff_x19;
        thunk_FUN_0333a630();
        FUN_061524ac();
        FUN_061528e0();
        if (unaff_x23 == 0) {
          unaff_x23 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
        }
        *(long *)(unaff_x20 + 0x50) = unaff_x23;
        thunk_FUN_0333a630((long *)(unaff_x20 + 0x50),unaff_x23);
        FUN_06152bec();
        plVar12 = *(long **)(unaff_x20 + 0x90);
        if (plVar12 == (long *)0x0) goto LAB_061509d0;
        (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0));
        puVar4 = System_Collections_Generic_List<CombineInstance>_TypeInfo;
        lVar17 = *(long *)(unaff_x19 + 0x58);
        if (lVar17 == 0) goto LAB_061509d0;
        puVar1 = (undefined8 *)(unaff_x20 + 0xb0);
        iVar9 = 0;
        plVar12 = (long *)System_Func<Transform>_TypeInfo;
        goto LAB_06150628;
      }
      plVar12 = *(long **)(unaff_x19 + 0x58);
      if ((plVar12 == (long *)0x0) ||
         (plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                      (plVar12,unaff_w25,*(undefined8 *)(*plVar12 + 0x310)),
         plVar12 == (long *)0x0)) goto LAB_061509d0;
      bVar2 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar12);
      }
      plVar15 = plVar12 + 9;
      lVar17 = *plVar15;
      plVar12[5] = unaff_x19;
      thunk_FUN_0333a630();
      uVar13 = FUN_06152840();
      if (plVar12[7] == 0) {
        if ((int)plVar12[0xc] == 1) {
          if (lVar17 == 0) {
LAB_0615035c:
            uVar13 = FUN_06280f14();
          }
        }
        else if ((lVar17 == 0) && ((int)plVar12[0xc] == 3)) goto LAB_0615035c;
      }
      else {
        uVar13 = FUN_061526cc();
      }
      iVar9 = (int)plVar12[0xc];
      if (iVar9 == 1) {
        if (*plVar15 != 0) {
LAB_06150498:
          if (lVar17 == 0) goto LAB_061509d0;
LAB_061504ac:
          if (*(long *)(lVar17 + 0x48) == 0) {
            if ((unaff_x23 != 0) && (*(int *)(unaff_x23 + 0x10) != 0)) {
              lVar17 = FUN_0614ef0c();
              *plVar15 = lVar17;
              thunk_FUN_0333a630(plVar15,lVar17);
            }
          }
          else {
            uVar14 = FUN_057aa92c(*unaff_x24,*(long *)(lVar17 + 0x48),0);
            if ((uVar14 & 1) != 0) {
              FUN_062810dc();
            }
          }
          FUN_0614fe80();
        }
        goto LAB_06150530;
      }
      if (iVar9 == 3) {
        if (lVar17 != 0) {
          FUN_0615237c(uVar13,plVar12);
          goto LAB_061504ac;
        }
        goto LAB_06150530;
      }
      if (iVar9 != 2) goto LAB_06150498;
      bVar2 = *(byte *)(*(long *)System_Func<UIHoverEventArgs>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Func<UIHoverEventArgs>_TypeInfo)) goto LAB_061509d0;
      unaff_x28 = plVar12[0xd];
      uVar14 = thunk_FUN_057aa644(unaff_x28,*unaff_x24,0);
      if ((uVar14 & 1) != 0) {
        FUN_06280f9c();
      }
      if (lVar17 != 0) {
        uVar14 = FUN_057aa92c(unaff_x28,*(undefined8 *)(lVar17 + 0x48),0);
        if ((uVar14 & 1) != 0) {
          FUN_062810dc();
        }
        uVar13 = *(undefined8 *)(unaff_x20 + 0xa8);
        *(long *)(unaff_x20 + 0xa8) = lVar17;
        thunk_FUN_0333a630(in_stack_00000010,lVar17);
        FUN_0614fe80();
        *(undefined8 *)(unaff_x20 + 0xa8) = uVar13;
        thunk_FUN_0333a630(in_stack_00000010,uVar13);
        unaff_x24 = in_stack_00000008;
        goto LAB_06150530;
      }
    } while (unaff_x28 == 0);
  } while( true );
LAB_06150628:
  iVar10 = FUN_058f278c(lVar17,0);
  if (iVar10 <= iVar9) {
    lVar17 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo);
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (lVar17,*(undefined8 *)System_Collections_Generic_List<Character>_TypeInfo);
    plVar12 = *(long **)(unaff_x19 + 0x60);
    if (plVar12 != (long *)0x0) {
      iVar9 = FUN_058f278c(plVar12,0);
      puVar8 = System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
      puVar7 = System_Func<TransitionEndEvent>_TypeInfo;
      puVar6 = System_Func<TransitionCancelEvent>_TypeInfo;
      puVar5 = System_Func<FocusOutEvent>_TypeInfo;
      puVar4 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
      if (0 < iVar9) {
        iVar9 = 0;
        goto LAB_06150a38;
      }
      if (lVar17 != 0) {
        if (*(int *)(lVar17 + 0x18) < 1) {
          return;
        }
        iVar9 = 0;
        while( true ) {
          lVar18 = *(long *)(unaff_x19 + 0x60);
          uVar13 = FUN_041e29a8(lVar17,iVar9,*(undefined8 *)puVar8);
          if (lVar18 == 0) break;
          FUN_061a2778(lVar18,uVar13,0);
          iVar9 = iVar9 + 1;
          if (*(int *)(lVar17 + 0x18) <= iVar9) {
            return;
          }
        }
      }
    }
    goto LAB_061509d0;
  }
  plVar15 = *(long **)(unaff_x19 + 0x58);
  if ((plVar15 == (long *)0x0) ||
     (plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                  (plVar15,iVar9,*(undefined8 *)(*plVar15 + 0x310)),
     plVar15 == (long *)0x0)) goto LAB_061509d0;
  bVar2 = *(byte *)(*plVar15 + 0x130);
  bVar3 = *(byte *)(*unaff_x22 + 0x130);
  if ((bVar2 < bVar3) ||
     (lVar17 = *(long *)(*plVar15 + 200), *(long *)(lVar17 + (ulong)bVar3 * 8 + -8) != *unaff_x22))
  {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(plVar15);
  }
  lVar18 = plVar15[9];
  iVar10 = (int)plVar15[0xc];
  if (lVar18 == 0) {
    if (iVar10 == 3) {
      lVar18 = *(long *)puVar4;
      bVar3 = *(byte *)(lVar18 + 0x130);
      if ((bVar2 < bVar3) || (*(long *)(lVar17 + (ulong)bVar3 * 8 + -8) != lVar18))
      goto LAB_061509d0;
      lVar17 = plVar15[8];
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = FUN_062ac390(lVar17,0,0);
      if ((uVar14 & 1) != 0) {
        lVar17 = plVar15[0xd];
        if (lVar17 == 0) goto LAB_061509d0;
        iVar10 = 0;
        while (iVar11 = FUN_058f278c(lVar17,0), iVar10 < iVar11) {
          plVar16 = (long *)plVar15[0xd];
          if (plVar16 == (long *)0x0) goto LAB_061509d0;
          plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                      (plVar16,iVar10,*(undefined8 *)(*plVar16 + 0x310));
          if (plVar16 == (long *)0x0) {
LAB_0615099c:
            FUN_06280f9c();
            break;
          }
          bVar2 = *(byte *)(*plVar12 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *plVar12))
          goto LAB_0615099c;
          lVar17 = plVar15[0xd];
          iVar10 = iVar10 + 1;
          if (lVar17 == 0) goto LAB_061509d0;
        }
      }
    }
  }
  else {
    if (iVar10 == 3) {
      plVar12 = (long *)*puVar1;
      if (plVar12 == (long *)0x0) {
        uVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f668);
        FUN_058f26dc(uVar13,0);
        *puVar1 = uVar13;
        thunk_FUN_0333a630(puVar1,uVar13);
        plVar12 = (long *)*puVar1;
      }
      uVar19 = *in_stack_00000010;
      uVar13 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Button>_TypeInfo);
      lVar17 = *(long *)puVar4;
      bVar2 = *(byte *)(lVar17 + 0x130);
      if (*(byte *)(*plVar15 + 0x130) < bVar2) {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = plVar15;
        if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
          plVar16 = (long *)0x0;
        }
      }
      FUN_0614e8c4(uVar13,plVar16,uVar19);
      if (plVar12 == (long *)0x0) goto LAB_061509d0;
      (**(code **)(*plVar12 + 0x308))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x310));
      plVar12 = *(long **)(unaff_x20 + 0x90);
      if (plVar12 == (long *)0x0) goto LAB_061509d0;
      lVar17 = (**(code **)(*plVar12 + 0x308))(plVar12,lVar18,*(undefined8 *)(*plVar12 + 0x310));
      plVar12 = (long *)System_Func<Transform>_TypeInfo;
joined_r0x06150964:
      if (lVar17 == 0) {
        plVar16 = *(long **)(unaff_x20 + 0x90);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x2a8))(plVar16,lVar18,plVar15,*(undefined8 *)(*plVar16 + 0x2b0));
          FUN_06152cf8();
          goto LAB_061509b8;
        }
        goto LAB_061509d0;
      }
      goto LAB_061509c4;
    }
    if (iVar10 == 2) {
      if (lVar18 != *(long *)(unaff_x20 + 0x58)) {
        bVar3 = *(byte *)(*(long *)System_Func<UIHoverEventArgs>_TypeInfo + 0x130);
        if ((bVar2 < bVar3) ||
           (*(long *)(lVar17 + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<UIHoverEventArgs>_TypeInfo)) goto LAB_061509d0;
        lVar17 = plVar15[0xd];
        if (lVar17 == 0) {
          lVar17 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_061509d0;
        uVar14 = (**(code **)(*unaff_x21 + 0x348))();
        if ((uVar14 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))();
        }
        if ((*(long *)(unaff_x20 + 0x58) == 0) ||
           (plVar15 = (long *)FUN_0619bc48(*(long *)(unaff_x20 + 0x58),0), plVar15 == (long *)0x0))
        goto LAB_061509d0;
        uVar14 = (**(code **)(*plVar15 + 0x348))(plVar15,lVar17,*(undefined8 *)(*plVar15 + 0x350));
        if ((uVar14 & 1) != 0) goto LAB_061509b8;
        if ((*(long *)(unaff_x20 + 0x58) == 0) ||
           (plVar15 = (long *)FUN_0619bc48(*(long *)(unaff_x20 + 0x58),0), plVar15 == (long *)0x0))
        goto LAB_061509d0;
        (**(code **)(*plVar15 + 0x308))(plVar15,lVar17,*(undefined8 *)(*plVar15 + 0x310));
      }
    }
    else if (iVar10 == 1) {
      plVar16 = *(long **)(unaff_x20 + 0x90);
      if (plVar16 != (long *)0x0) {
        lVar17 = (**(code **)(*plVar16 + 0x308))(plVar16,lVar18,*(undefined8 *)(*plVar16 + 0x310));
        goto joined_r0x06150964;
      }
      goto LAB_061509d0;
    }
  }
LAB_061509b8:
  FUN_061528e0();
LAB_061509c4:
  lVar17 = *(long *)(unaff_x19 + 0x58);
  iVar9 = iVar9 + 1;
  if (lVar17 == 0) goto LAB_061509d0;
  goto LAB_06150628;
LAB_06150a38:
  lVar18 = (**(code **)(*plVar12 + 0x308))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
  if (lVar18 == 0) {
LAB_061509d0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  *(long *)(lVar18 + 0x28) = unaff_x19;
  thunk_FUN_0333a630();
  plVar15 = (long *)(**(code **)(*plVar12 + 0x308))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310))
  ;
  if (plVar15 == (long *)0x0) {
LAB_06150aac:
    plVar15 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar15 == (long *)0x0) {
LAB_06150ae0:
      plVar15 = (long *)0x0;
    }
    else {
      lVar18 = *(long *)puVar6;
      bVar2 = *(byte *)(lVar18 + 0x130);
      if (*(byte *)(*plVar15 + 0x130) < bVar2) goto LAB_06150ae0;
      if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
        plVar15 = (long *)0x0;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar15 != (long *)0x0) {
      if (plVar16 != (long *)0x0) {
        lVar18 = *(long *)puVar6;
        bVar2 = *(byte *)(lVar18 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar18))
        goto LAB_06151100;
      }
      System_Xml_Serialization_TypeMember__GetHashCode();
      FUN_0619a8d4();
joined_r0x06150b64:
      if (plVar16 != (long *)0x0) goto LAB_06150cfc;
      goto LAB_061509d0;
    }
    if (plVar16 == (long *)0x0) {
LAB_06150b90:
      plVar15 = (long *)0x0;
    }
    else {
      lVar18 = *(long *)puVar4;
      bVar2 = *(byte *)(lVar18 + 0x130);
      if (*(byte *)(*plVar16 + 0x130) < bVar2) goto LAB_06150b90;
      plVar15 = plVar16;
      if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
        plVar15 = (long *)0x0;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar15 != (long *)0x0) {
      if (plVar16 != (long *)0x0) {
        lVar18 = *(long *)puVar4;
        bVar2 = *(byte *)(lVar18 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar18))
        goto LAB_06151100;
      }
      FUN_06154230();
LAB_06150cd0:
      FUN_0619a944();
      if (plVar16 != (long *)0x0) {
        FUN_061ac6b8(plVar16,0);
        goto LAB_06150cfc;
      }
      goto LAB_061509d0;
    }
    if (plVar16 == (long *)0x0) {
LAB_06150c54:
      plVar15 = (long *)0x0;
    }
    else {
      lVar18 = *(long *)puVar5;
      bVar2 = *(byte *)(lVar18 + 0x130);
      if (*(byte *)(*plVar16 + 0x130) < bVar2) goto LAB_06150c54;
      plVar15 = plVar16;
      if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
        plVar15 = (long *)0x0;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar15 != (long *)0x0) {
      if (plVar16 != (long *)0x0) {
        lVar18 = *(long *)puVar5;
        bVar2 = *(byte *)(lVar18 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar18))
        goto LAB_06151100;
      }
      FUN_06154afc();
      goto LAB_06150cd0;
    }
    if (plVar16 == (long *)0x0) {
LAB_06150d48:
      plVar15 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
      if (*(byte *)(*plVar16 + 0x130) < bVar2) goto LAB_06150d48;
      plVar15 = plVar16;
      if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Func<TransitionRunEvent>_TypeInfo) {
        plVar15 = (long *)0x0;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar15 != (long *)0x0) {
      if (plVar16 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Func<TransitionRunEvent>_TypeInfo)) goto LAB_06151100;
      }
      FUN_061550d0();
      FUN_0619a9b4();
      goto joined_r0x06150b64;
    }
    if (plVar16 == (long *)0x0) {
LAB_06150e04:
      plVar15 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<Color>_TypeInfo + 0x130);
      if (*(byte *)(*plVar16 + 0x130) < bVar2) goto LAB_06150e04;
      plVar15 = plVar16;
      if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Color>_TypeInfo) {
        plVar15 = (long *)0x0;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar15 != (long *)0x0) {
      if (plVar16 == (long *)0x0) {
        FUN_06155324();
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<Color>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Color>_TypeInfo)) goto LAB_06151100;
      FUN_06155324();
      goto LAB_06150cfc;
    }
    if (plVar16 == (long *)0x0) {
LAB_06150eb0:
      plVar15 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<Column>_TypeInfo + 0x130);
      if (*(byte *)(*plVar16 + 0x130) < bVar2) goto LAB_06150eb0;
      plVar15 = plVar16;
      if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Column>_TypeInfo) {
        plVar15 = (long *)0x0;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar15 != (long *)0x0) {
      if (plVar16 == (long *)0x0) {
        FUN_061554f4();
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<Column>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Column>_TypeInfo)) {
LAB_06151100:
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar16);
      }
      FUN_061554f4();
      goto LAB_06150cfc;
    }
    if (plVar16 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)System_Func<Transform>_TypeInfo + 0x130);
      if (*(byte *)(*plVar16 + 0x130) < bVar2) {
        plVar16 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
               *(long *)System_Func<Transform>_TypeInfo) {
        plVar16 = (long *)0x0;
      }
    }
    (**(code **)(*plVar12 + 0x308))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar16 == (long *)0x0) {
      FUN_06280f9c();
      (**(code **)(*plVar12 + 0x308))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310));
      if (lVar17 != 0) {
        FUN_06e3d028(*(undefined8 *)(lVar17 + 0x10));
        return;
      }
      goto LAB_061509d0;
    }
    FUN_0615575c();
  }
  else {
    bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7))
    goto LAB_06150aac;
    FUN_06153fbc();
    FUN_0619a864();
LAB_06150cfc:
    FUN_06280750();
  }
  iVar9 = iVar9 + 1;
  iVar10 = FUN_058f278c(plVar12,0);
  if (iVar10 <= iVar9) {
    FUN_0615107c();
    return;
  }
  goto LAB_06150a38;
}


