/*
FUNCTION_NAME: OVRPlugin.OVRP_1_58_0$$.cctor
ENTRY_POINT: 0339da0c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0339e384) */
/* WARNING: Removing unreachable block (ram,0x0339e388) */
/* WARNING: Removing unreachable block (ram,0x0339eafc) */
/* WARNING: Removing unreachable block (ram,0x0339e720) */
/* WARNING: Removing unreachable block (ram,0x0339e724) */
/* WARNING: Removing unreachable block (ram,0x0339e970) */
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */

undefined8 OVRPlugin_OVRP_1_58_0___cctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long in_x9;
  long in_x10;
  int *piVar15;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x26;
  long *unaff_x28;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  if (in_x9 != 0) {
    piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == **(long **)(in_x10 + 0xce8)) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0339da54;
      }
      in_x9 = in_x9 + -1;
      piVar15 = piVar15 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01c72498();
LAB_0339da54:
  (*(code *)*puVar6)();
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80();
  }
  if ((unaff_w19 != 6) && (unaff_w19 != 0)) {
    return unaff_x23;
  }
  lVar7 = FUN_03392404();
  puVar2 = PTR_DAT_042305b8;
  if (lVar7 != 0) {
    uVar4 = FUN_027bd234(lVar7,*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,uVar4);
    puVar3 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__;
    if (unaff_x22 != 0) {
      FUN_02d50a3c(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_0339dae8:
      uVar9 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
      lVar7 = in_stack_00000070;
      if ((uVar9 & 1) != 0) {
        if (in_stack_00000038._4_4_ == 0) {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        else {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar13 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar13 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar4 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar9 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x48));
              uVar4 = 1;
              if ((uVar9 & 1) == 0) {
                uVar4 = 2;
              }
            }
            else {
              uVar4 = 2;
            }
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,uVar4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar7 + 0x28) = in_stack_00000040;
          }
        }
        lVar13 = *(long *)(lVar7 + 0x20);
        if (lVar13 == 0) goto LAB_0339dc90;
        goto LAB_0339db88;
      }
      FUN_029fd610(&stack0x00000060,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
      if (in_stack_00000020 != 0) {
        uVar10 = (**(code **)(in_stack_00000020 + 0x18))
                           (*(undefined8 *)(in_stack_00000020 + 0x40),plVar8,
                            *(undefined8 *)(in_stack_00000020 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_0339c944(in_stack_00000028);
        }
        FUN_0339cd08(in_stack_00000028);
        FUN_02d50a3c(&stack0x00000040);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_0339dde0:
        do {
          while( true ) {
            do {
              uVar9 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
              lVar7 = in_stack_00000070;
              if ((uVar9 & 1) == 0) {
                FUN_029fd610(&stack0x00000060,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                if (*(long *)(unaff_x21 + 0xe0) != 0) {
                  FUN_02d50a3c(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar9 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar9 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar7 = *(long *)(unaff_x21 + 0xe0);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(lVar7 + 0x18))
                                (*(undefined8 *)(lVar7 + 0x40),uVar10,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar7 + 0x28));
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_02d50a3c(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar9 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar9 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if (*(long *)(in_stack_00000070 + 0x18) != 0) {
                      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(*unaff_x20 + 0x1b8))();
                      FUN_0339f5a0(in_stack_00000028,uVar10);
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                FUN_0339cf34(in_stack_00000028);
                return uVar10;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while (((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                     (lVar13 = *(long *)(in_stack_00000070 + 0x18), lVar13 == 0)) ||
                    ((*(char *)(lVar13 + 0x80) != '\0' ||
                     ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                      ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))))));
            lVar11 = *(long *)(in_stack_00000070 + 0x30);
            uVar9 = FUN_0339c840(in_stack_00000028,lVar13);
            if ((uVar9 & 1) == 0) break;
            plVar8 = *(long **)(lVar13 + 0x68);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar13 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0339df04;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01c72498(plVar8,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,0);
LAB_0339df04:
            (*(code *)*puVar6)(plVar8,uVar10,lVar11,puVar6[1]);
            *(undefined1 *)(lVar7 + 0x38) = 1;
          }
        } while ((lVar11 == 0) || (*(char *)(lVar13 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar8 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = *plVar8;
        uVar16 = *(undefined8 *)(lVar13 + 0x40);
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar8,*(long *)
                                      Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                              ,0);
LAB_0339df30:
        plVar8 = (long *)(*(code *)*puVar6)(plVar8,uVar16,puVar6[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)((long)plVar8 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar8);
          }
          if ((*(char *)((long)plVar8 + 0xf2) != '\0') && ((char)plVar8[5] == '\0')) {
            plVar8 = *(long **)(lVar13 + 0x68);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar13 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01c72498(plVar8,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,1);
LAB_0339e000:
            lVar13 = (*(code *)*puVar6)(plVar8,uVar10,puVar6[1]);
            if (lVar13 != 0) {
              uVar16 = thunk_FUN_01c5d21c(lVar13,0);
              plVar8 = (long *)FUN_03395e54(in_stack_00000028,uVar16);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                               0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar8);
              }
              if (*(char *)((long)plVar8 + 0xf1) == '\0') {
                uVar16 = *(undefined8 *)PTR_DAT_04237778;
                plVar12 = (long *)thunk_FUN_01c495e4(lVar13);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar13,uVar16);
                }
              }
              else {
                plVar12 = (long *)FUN_0338eda8(plVar8,lVar13);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar13 = *plVar12;
              uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar9 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar9 = uVar9 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_01c72498(plVar12,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
              if ((uVar9 & 1) == 0) {
                if (*(char *)((long)plVar8 + 0xf1) == '\0') {
                  uVar16 = *(undefined8 *)PTR_DAT_04237778;
                  plVar8 = (long *)thunk_FUN_01c495e4(lVar11,uVar16);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar11,uVar16);
                  }
                }
                else {
                  plVar8 = (long *)FUN_0338eda8(plVar8,lVar11);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar13 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar9 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar9 != 0);
                }
                puVar6 = (undefined8 *)
                         FUN_01c72498(plVar8,*(long *)
                                              System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                      ,0);
LAB_0339e1a8:
                plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar13 = *plVar8;
                  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar9 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar9 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                  if ((uVar9 & 1) == 0) goto LAB_0339e2f4;
                  lVar13 = *plVar8;
                  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar9 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar16 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                  lVar13 = *plVar12;
                  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar9 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar12,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar6)(plVar12,uVar16,puVar6[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar8 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          if ((char)plVar8[5] == '\0') {
            plVar12 = *(long **)(lVar13 + 0x68);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar13 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01c72498(plVar12,*(long *)
                                           Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,1);
LAB_0339e44c:
            lVar13 = (*(code *)*puVar6)(plVar12,uVar10,puVar6[1]);
            if (lVar13 != 0) {
              if ((char)plVar8[0x20] == '\0') {
                uVar16 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar12 = (long *)thunk_FUN_01c495e4(lVar13,uVar16);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar13,uVar16);
                }
              }
              else {
                plVar12 = (long *)OVRPlugin_Sizei___cctor(plVar8,lVar13);
              }
              if ((char)plVar8[0x20] == '\0') {
                uVar16 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar8 = (long *)thunk_FUN_01c495e4(lVar11,uVar16);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar11,uVar16);
                }
              }
              else {
                plVar8 = (long *)OVRPlugin_Sizei___cctor(plVar8,lVar11);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar13 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar9 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar9 = uVar9 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)
                       FUN_01c72498(plVar8,*(long *)
                                            System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar13 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar9 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar9 = uVar9 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar9 != 0);
                }
                puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar9 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                if ((uVar9 & 1) == 0) goto LAB_0339e690;
                lVar13 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar9 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar9 = uVar9 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar9 != 0);
                }
                puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar17 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar13 = *plVar12;
                uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar9 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar9 = uVar9 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar9 != 0);
                }
                puVar6 = (undefined8 *)
                         FUN_01c72498(plVar12,*(long *)
                                               System_Security_Cryptography_CryptoConfig_TypeInfo,1)
                ;
LAB_0339e678:
                (*(code *)*puVar6)(plVar12,auVar17._0_8_,auVar17._8_8_,puVar6[1]);
              } while( true );
            }
          }
        }
        goto LAB_0339e3dc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
LAB_0339dc90:
  if (*(long *)(lVar7 + 0x18) != 0) {
    uVar10 = FUN_03392404();
    lVar13 = *unaff_x28;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar13);
      lVar13 = *unaff_x28;
    }
    lVar11 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
    if (lVar11 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar13);
        lVar13 = *unaff_x28;
      }
      uVar16 = **(undefined8 **)(lVar13 + 0xb8);
      lVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar11,uVar16,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      unaff_x28 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar11;
    }
    if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar13 = FUN_0242e528(uVar10,lVar11,*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x60),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    if (lVar13 != 0) {
LAB_0339db88:
      if (*(char *)(lVar13 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar7 + 0x28) != '\0')) &&
           (*(uint *)(lVar7 + 0x2c) < 2)) {
          if (*(long *)(lVar13 + 0x48) == 0) {
            uVar10 = FUN_03395dc8(in_stack_00000028,*(undefined8 *)(lVar13 + 0x40));
            *(undefined8 *)(lVar13 + 0x48) = uVar10;
          }
          in_stack_00000058 = *(undefined8 *)(lVar13 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar5 = FUN_02f211a0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if ((uVar5 >> 1 & 1) != 0) {
            FUN_033931b0(lVar13);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            uVar10 = FUN_033985d4();
            *(undefined8 *)(lVar7 + 0x30) = uVar10;
          }
        }
        lVar11 = FUN_03392404();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar5 = FUN_027bd894(lVar11,lVar13,*(undefined8 *)puVar2);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar13 = *(long *)(lVar7 + 0x30);
        if ((lVar13 != 0) &&
           (lVar11 = thunk_FUN_01c495e4(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
          uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar10,0);
        }
        if (*(uint *)(plVar8 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar8[(long)(int)uVar5 + 4] = lVar13;
        *(undefined1 *)(lVar7 + 0x38) = 1;
      }
    }
  }
  goto LAB_0339dae8;
LAB_0339e690:
  plVar8 = (long *)thunk_FUN_01c495e4(plVar8,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar8 = (long *)thunk_FUN_01c495e4(plVar8,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar7 + 0x38) = 1;
  goto LAB_0339dde0;
}


