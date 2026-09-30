/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_DestroyInsightTriangleMesh
ENTRY_POINT: 0339def8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0339e384) */
/* WARNING: Removing unreachable block (ram,0x0339e388) */
/* WARNING: Removing unreachable block (ram,0x0339eafc) */
/* WARNING: Removing unreachable block (ram,0x0339e720) */
/* WARNING: Removing unreachable block (ram,0x0339e724) */
/* WARNING: Removing unreachable block (ram,0x0339e970) */
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */

void OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightTriangleMesh(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *in_x10;
  int *piVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long *plVar8;
  long *unaff_x25;
  long lVar9;
  undefined8 uVar10;
  long unaff_x27;
  long unaff_x28;
  undefined1 auVar11 [16];
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
code_r0x0339def8:
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    (*(code *)*puVar3)(unaff_x25);
    *(undefined1 *)(unaff_x28 + 0x38) = 1;
LAB_0339dde0:
    while( true ) {
      do {
        uVar2 = FUN_029fd614(&stack0x00000060,*unaff_x19);
        unaff_x28 = in_stack_00000070;
        if ((uVar2 & 1) == 0) {
          FUN_029fd610(&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
          if (*(long *)(unaff_x21 + 0xe0) != 0) {
            FUN_02d50a3c(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar2 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar2 & 1) != 0) {
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                 ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                  ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                lVar9 = *(long *)(unaff_x21 + 0xe0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
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
            while (uVar2 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar2 & 1) != 0) {
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
                FUN_0339f5a0(in_stack_00000028);
              }
            }
            FUN_029fd610(&stack0x00000060,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
          }
          FUN_0339cf34(in_stack_00000028);
          return;
        }
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                (lVar9 = *(long *)(in_stack_00000070 + 0x18), lVar9 == 0)) ||
               (*(char *)(lVar9 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
      lVar7 = *(long *)(in_stack_00000070 + 0x30);
      uVar2 = FUN_0339c840(unaff_x27,lVar9);
      if ((uVar2 & 1) != 0) break;
      if ((lVar7 != 0) && (*(char *)(lVar9 + 0x82) == '\0')) {
        if (*(long *)(unaff_x27 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar8 = *(long **)(*(long *)(unaff_x27 + 0x20) + 0x40);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar5 = *plVar8;
        uVar10 = *(undefined8 *)(lVar9 + 0x40);
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01c72498(plVar8,*(long *)
                                      Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                              ,0);
LAB_0339df30:
        plVar8 = (long *)(*(code *)*puVar3)(plVar8,uVar10,puVar3[1]);
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
            plVar8 = *(long **)(lVar9 + 0x68);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar9 = *plVar8;
            uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01c72498(plVar8,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,1);
LAB_0339e000:
            lVar9 = (*(code *)*puVar3)(plVar8);
            if (lVar9 != 0) {
              uVar10 = thunk_FUN_01c5d21c(lVar9,0);
              plVar8 = (long *)FUN_03395e54(in_stack_00000028,uVar10);
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
                uVar10 = *(undefined8 *)PTR_DAT_04237778;
                plVar4 = (long *)thunk_FUN_01c495e4(lVar9);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar9,uVar10);
                }
              }
              else {
                plVar4 = (long *)FUN_0338eda8(plVar8,lVar9);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar9 = *plVar4;
              uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar2 != 0) {
                piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar2 = uVar2 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if ((uVar2 & 1) == 0) {
                if (*(char *)((long)plVar8 + 0xf1) == '\0') {
                  uVar10 = *(undefined8 *)PTR_DAT_04237778;
                  plVar8 = (long *)thunk_FUN_01c495e4(lVar7,uVar10);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar7,uVar10);
                  }
                }
                else {
                  plVar8 = (long *)FUN_0338eda8(plVar8,lVar7);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar9 = *plVar8;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 != 0) {
                  piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar3 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar2 = uVar2 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)
                         FUN_01c72498(plVar8,*(long *)
                                              System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                      ,0);
LAB_0339e1a8:
                plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar9 = *plVar8;
                  uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar2 != 0) {
                    piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar3 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar2 = uVar2 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
                  if ((uVar2 & 1) == 0) goto LAB_0339e2f4;
                  lVar9 = *plVar8;
                  uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar2 != 0) {
                    piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar2 = uVar2 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar10 = (*(code *)*puVar3)(plVar8,puVar3[1]);
                  lVar9 = *plVar4;
                  uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar2 != 0) {
                    piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar2 = uVar2 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar3)(plVar4,uVar10,puVar3[1]);
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
            plVar4 = *(long **)(lVar9 + 0x68);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar9 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01c72498(plVar4,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,1);
LAB_0339e44c:
            lVar9 = (*(code *)*puVar3)(plVar4);
            if (lVar9 != 0) {
              if ((char)plVar8[0x20] == '\0') {
                uVar10 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar4 = (long *)thunk_FUN_01c495e4(lVar9,uVar10);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar9,uVar10);
                }
              }
              else {
                plVar4 = (long *)OVRPlugin_Sizei___cctor(plVar8,lVar9);
              }
              if ((char)plVar8[0x20] == '\0') {
                uVar10 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar8 = (long *)thunk_FUN_01c495e4(lVar7,uVar10);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar7,uVar10);
                }
              }
              else {
                plVar8 = (long *)OVRPlugin_Sizei___cctor(plVar8,lVar7);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar9 = *plVar8;
              uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar2 != 0) {
                piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar2 = uVar2 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)
                       FUN_01c72498(plVar8,*(long *)
                                            System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar9 = *plVar8;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 != 0) {
                  piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar3 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar2 = uVar2 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
                if ((uVar2 & 1) == 0) goto LAB_0339e690;
                lVar9 = *plVar8;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 != 0) {
                  piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar2 = uVar2 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar11 = (*(code *)*puVar3)(plVar8,puVar3[1]);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar9 = *plVar4;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 != 0) {
                  piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar2 = uVar2 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)
                         FUN_01c72498(plVar4,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,1);
LAB_0339e678:
                (*(code *)*puVar3)(plVar4,auVar11._0_8_,auVar11._8_8_,puVar3[1]);
              } while( true );
            }
          }
        }
        goto LAB_0339e3dc;
      }
    }
    unaff_x25 = *(long **)(lVar9 + 0x68);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    param_1 = *unaff_x25;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__)
        goto code_r0x0339def8;
        uVar2 = uVar2 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(unaff_x25,
                          *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
  } while( true );
LAB_0339e2f4:
  plVar8 = (long *)thunk_FUN_01c495e4(plVar8,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e690:
  plVar8 = (long *)thunk_FUN_01c495e4(plVar8,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(unaff_x28 + 0x38) = 1;
  unaff_x27 = in_stack_00000028;
  goto LAB_0339dde0;
}


