/*
FUNCTION_NAME: FUN_06291828
ENTRY_POINT: 06291828
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06291828(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  puVar6 = System_Collections_Generic_List<ChallengeEntry>_TypeInfo;
  if ((DAT_076de31d & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_AtlasAllocator_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    thunk_FUN_032e1da0(UnityEngine_UIElements_AttachToPanelEvent_TypeInfo);
    DAT_076de31d = 1;
  }
  lVar10 = *(long *)puVar6;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar10 = *(long *)puVar6;
  }
  puVar4 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
  puVar3 = PTR_DAT_07285080;
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x2a8);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_062920d4;
    if (*(long *)(lVar10 + 0x78) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0x78) + 0x10);
      lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo)
      ;
      FUN_0624b7a8(lVar10,uVar15,*(undefined8 *)puVar3,0);
      if (lVar10 != 0) {
        lVar11 = FUN_06292360(*(undefined8 *)(lVar10 + 0x10));
        uVar15 = FUN_06292420(lVar10,lVar11);
        puVar14 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
        *puVar14 = uVar15;
        thunk_FUN_0333a630(puVar14,uVar15);
        if (lVar11 != 0) {
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10)
          ;
          thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x30));
          puVar8 = UnityEngine_UIElements_AttachToPanelEvent_TypeInfo;
          puVar7 = UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo;
          puVar5 = System_Func<FocusOutEvent>_TypeInfo;
          plVar12 = (long *)**(long **)(*(long *)puVar6 + 0xb8);
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x2a8))
                      (plVar12,lVar10,(*(long **)(*(long *)puVar6 + 0xb8))[2],
                       *(undefined8 *)(*plVar12 + 0x2b0));
            uVar17 = 0;
            while( true ) {
              lVar10 = *(long *)puVar6;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar10 = *(long *)puVar6;
              }
              lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x2a8);
              if (lVar11 == 0) goto LAB_062920d0;
              if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar17) break;
              if (uVar17 != 0xb) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar11 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x2a8);
                  if (lVar11 == 0) goto LAB_062920d0;
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_062920d4;
                lVar10 = *(long *)(lVar11 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_062920d0;
                uVar15 = *(undefined8 *)(lVar10 + 0x10);
                lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                FUN_0624b7a8(lVar10,uVar15,*(undefined8 *)puVar3,0);
                if (lVar10 == 0) goto LAB_062920d0;
                plVar12 = (long *)FUN_06292360(*(undefined8 *)(lVar10 + 0x10));
                lVar11 = FUN_06292420(lVar10,plVar12);
                if (plVar12 == (long *)0x0) goto LAB_062920d0;
                plVar12[6] = lVar11;
                thunk_FUN_0333a630(plVar12 + 6,lVar11);
                plVar13 = (long *)**(long **)(*(long *)puVar6 + 0xb8);
                if (plVar13 == (long *)0x0) goto LAB_062920d0;
                (**(code **)(*plVar13 + 0x2a8))
                          (plVar13,lVar10,lVar11,*(undefined8 *)(*plVar13 + 0x2b0));
                if ((int)plVar12[2] == 0) {
                  lVar10 = *(long *)puVar6;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                    lVar10 = *(long *)puVar6;
                  }
                  plVar13 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                  uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0))
                  ;
                  if (plVar13 == (long *)0x0) goto LAB_062920d0;
                  if ((lVar11 != 0) &&
                     (lVar10 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar10 == 0)) goto LAB_062920ec;
                  if (*(uint *)(plVar13 + 3) <= uVar9) goto LAB_062920d4;
                  plVar13[(long)(int)uVar9 + 4] = lVar11;
                  thunk_FUN_0333a630(plVar13 + (long)(int)uVar9 + 4,lVar11);
                }
              }
              uVar17 = uVar17 + 1;
            }
            uVar17 = 0;
            while( true ) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar10 = *(long *)puVar6;
              }
              puVar14 = *(undefined8 **)(lVar10 + 0xb8);
              lVar11 = puVar14[0x55];
              if (lVar11 == 0) goto LAB_062920d0;
              if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar17) break;
              if (uVar17 != 0xb) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  puVar14 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
                  lVar11 = puVar14[0x55];
                  if (lVar11 == 0) goto LAB_062920d0;
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_062920d4;
                lVar10 = *(long *)(lVar11 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_062920d0;
                plVar12 = (long *)*puVar14;
                uVar16 = *(undefined8 *)(lVar10 + 0x10);
                uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                FUN_0624b7a8(uVar15,uVar16,*(undefined8 *)puVar3,0);
                if (plVar12 == (long *)0x0) goto LAB_062920d0;
                plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                            (plVar12,uVar15,*(undefined8 *)(*plVar12 + 0x310));
                if (plVar12 != (long *)0x0) {
                  lVar11 = *(long *)puVar5;
                  bVar2 = *(byte *)(lVar11 + 0x130);
                  if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d618c(plVar12);
                  }
                }
                lVar11 = *(long *)puVar6;
                iVar1 = *(int *)(lVar10 + 0x20);
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar11 = *(long *)puVar6;
                }
                puVar14 = *(undefined8 **)(lVar11 + 0xb8);
                if (iVar1 == 0xb) {
                  plVar13 = (long *)puVar14[2];
                }
                else {
                  lVar11 = puVar14[0x55];
                  if (lVar11 == 0) goto LAB_062920d0;
                  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar10 + 0x20)) goto LAB_062920d4;
                  lVar10 = *(long *)(lVar11 + (long)(int)*(uint *)(lVar10 + 0x20) * 8 + 0x20);
                  if (lVar10 == 0) goto LAB_062920d0;
                  plVar13 = (long *)*puVar14;
                  uVar16 = *(undefined8 *)(lVar10 + 0x10);
                  uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                  FUN_0624b7a8(uVar15,uVar16,*(undefined8 *)puVar3,0);
                  if (plVar13 == (long *)0x0) goto LAB_062920d0;
                  plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                              (plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
                  if (plVar13 != (long *)0x0) {
                    lVar10 = *(long *)puVar5;
                    if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 +
                                 -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d618c(plVar13,lVar10);
                    }
                  }
                }
                FUN_06292504(plVar12,plVar13);
              }
              lVar10 = *(long *)puVar6;
              uVar17 = uVar17 + 1;
            }
            uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
            puVar3 = System_Collections_Generic_List<XmlQualifiedName>_TypeInfo;
            FUN_0624b7a8(uVar15,*(undefined8 *)UnityEngine_Rendering_AtlasAllocator_TypeInfo,
                         *(undefined8 *)System_Collections_Generic_List<XmlQualifiedName>_TypeInfo,0
                        );
            lVar10 = *(long *)puVar6;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar10 = *(long *)puVar6;
            }
            puVar5 = Mono_Net_Security_AsyncWriteRequest_TypeInfo;
            uVar16 = FUN_06292420(uVar15,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x270));
            puVar14 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
            *puVar14 = uVar16;
            thunk_FUN_0333a630(puVar14,uVar16);
            lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x270);
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x30) =
                   *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
              thunk_FUN_0333a630();
              FUN_06292504(*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                           *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10));
              plVar12 = (long *)**(long **)(*(long *)puVar6 + 0xb8);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x2a8))
                          (plVar12,uVar15,(*(long **)(*(long *)puVar6 + 0xb8))[3],
                           *(undefined8 *)(*plVar12 + 0x2b0));
                plVar12 = *(long **)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                if (plVar12 != (long *)0x0) {
                  lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_032a55a4(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar11 == 0)) {
LAB_062920ec:
                    uVar15 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                    FUN_032d5dbc(uVar15,0);
                  }
                  if (*(uint *)(plVar12 + 3) < 0xb) goto LAB_062920d4;
                  plVar12[0xe] = lVar10;
                  thunk_FUN_0333a630(plVar12 + 0xe,lVar10);
                  uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                  FUN_0624b7a8(uVar15,*(undefined8 *)puVar5,*(undefined8 *)puVar3,0);
                  uVar16 = FUN_06292420(uVar15,*(undefined8 *)
                                                (*(long *)(*(long *)puVar6 + 0xb8) + 0x280));
                  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                  *puVar14 = uVar16;
                  thunk_FUN_0333a630(puVar14,uVar16);
                  lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x280);
                  if (lVar10 != 0) {
                    *(undefined8 *)(lVar10 + 0x30) =
                         *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                    thunk_FUN_0333a630();
                    FUN_06292504(*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20),
                                 *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18));
                    plVar12 = (long *)**(long **)(*(long *)puVar6 + 0xb8);
                    if (plVar12 != (long *)0x0) {
                      (**(code **)(*plVar12 + 0x2a8))
                                (plVar12,uVar15,(*(long **)(*(long *)puVar6 + 0xb8))[4],
                                 *(undefined8 *)(*plVar12 + 0x2b0));
                      plVar12 = *(long **)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                      if (plVar12 != (long *)0x0) {
                        lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                        if ((lVar10 != 0) &&
                           (lVar11 = thunk_FUN_032a55a4(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar11 == 0)) goto LAB_062920ec;
                        if (*(uint *)(plVar12 + 3) < 0xc) goto LAB_062920d4;
                        plVar12[0xf] = lVar10;
                        thunk_FUN_0333a630(plVar12 + 0xf,lVar10);
                        uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                        FUN_0624b7a8(uVar15,*(undefined8 *)puVar8,*(undefined8 *)puVar3,0);
                        uVar16 = FUN_06292420(uVar15,*(undefined8 *)
                                                      (*(long *)(*(long *)puVar6 + 0xb8) + 0x288));
                        puVar14 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28);
                        *puVar14 = uVar16;
                        thunk_FUN_0333a630(puVar14,uVar16);
                        lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x288);
                        if (lVar10 != 0) {
                          *(undefined8 *)(lVar10 + 0x30) =
                               *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28);
                          thunk_FUN_0333a630();
                          lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                          if (lVar10 != 0) {
                            if (*(uint *)(lVar10 + 0x18) < 0x12) goto LAB_062920d4;
                            FUN_06292504(*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28),
                                         *(undefined8 *)(lVar10 + 0xa8));
                            plVar12 = (long *)**(long **)(*(long *)puVar6 + 0xb8);
                            if (plVar12 != (long *)0x0) {
                              (**(code **)(*plVar12 + 0x2a8))
                                        (plVar12,uVar15,(*(long **)(*(long *)puVar6 + 0xb8))[5],
                                         *(undefined8 *)(*plVar12 + 0x2b0));
                              plVar12 = *(long **)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                              if (plVar12 != (long *)0x0) {
                                lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28);
                                if ((lVar10 != 0) &&
                                   (lVar11 = thunk_FUN_032a55a4(lVar10,*(undefined8 *)
                                                                        (*plVar12 + 0x40)),
                                   lVar11 == 0)) goto LAB_062920ec;
                                if (*(uint *)(plVar12 + 3) < 0x36) goto LAB_062920d4;
                                plVar12[0x39] = lVar10;
                                thunk_FUN_0333a630(plVar12 + 0x39,lVar10);
                                uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                FUN_0624b7a8(uVar15,*(undefined8 *)puVar7,*(undefined8 *)puVar3,0);
                                uVar16 = FUN_06292420(uVar15,*(undefined8 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0x278));
                                puVar14 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30);
                                *puVar14 = uVar16;
                                thunk_FUN_0333a630(puVar14,uVar16);
                                lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x278);
                                if (lVar10 != 0) {
                                  *(undefined8 *)(lVar10 + 0x30) =
                                       *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30);
                                  thunk_FUN_0333a630();
                                  lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                                  if (lVar10 != 0) {
                                    if (*(uint *)(lVar10 + 0x18) < 0x12) {
LAB_062920d4:
                    /* WARNING: Subroutine does not return */
                                      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                                                ();
                                    }
                                    FUN_06292504(*(undefined8 *)
                                                  (*(long *)(*(long *)puVar6 + 0xb8) + 0x30),
                                                 *(undefined8 *)(lVar10 + 0xa8));
                                    plVar12 = (long *)**(long **)(*(long *)puVar6 + 0xb8);
                                    if (plVar12 != (long *)0x0) {
                                      (**(code **)(*plVar12 + 0x2a8))
                                                (plVar12,uVar15,
                                                 (*(long **)(*(long *)puVar6 + 0xb8))[6],
                                                 *(undefined8 *)(*plVar12 + 0x2b0));
                                      plVar12 = *(long **)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                                      if (plVar12 != (long *)0x0) {
                                        lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30)
                                        ;
                                        if ((lVar10 != 0) &&
                                           (lVar11 = thunk_FUN_032a55a4(lVar10,*(undefined8 *)
                                                                                (*plVar12 + 0x40)),
                                           lVar11 == 0)) goto LAB_062920ec;
                                        if (0x36 < *(uint *)(plVar12 + 3)) {
                                          plVar12[0x3a] = lVar10;
                                          thunk_FUN_0333a630(plVar12 + 0x3a,lVar10);
                                          return;
                                        }
                                        goto LAB_062920d4;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_062920d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


