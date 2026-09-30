/*
FUNCTION_NAME: OVRPlugin.OVRP_1_64_0$$.cctor
ENTRY_POINT: 0339e240
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


/* WARNING: Removing unreachable block (ram,0x0339e720) */
/* WARNING: Removing unreachable block (ram,0x0339e724) */
/* WARNING: Removing unreachable block (ram,0x0339e384) */
/* WARNING: Removing unreachable block (ram,0x0339e958) */
/* WARNING: Removing unreachable block (ram,0x0339e970) */
/* WARNING: Removing unreachable block (ram,0x0339e388) */
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */
/* WARNING: Removing unreachable block (ram,0x0339eafc) */

void OVRPlugin_OVRP_1_64_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *piVar8;
  int *in_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long *unaff_x25;
  long *plVar10;
  long *unaff_x27;
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
  
code_r0x0339e240:
  do {
                    /* try { // try from 0339e240 to 0349e2e3 has its CatchHandler @ 0339df98 */
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0339e278;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
LAB_0339e258:
  puVar2 = (undefined8 *)FUN_01c72498(unaff_x25,param_3,1);
LAB_0339e278:
  uVar3 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
  lVar6 = *unaff_x27;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04237778) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0339e2e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498(unaff_x27,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
  (*(code *)*puVar2)(unaff_x27,uVar3,puVar2[1]);
  do {
    lVar6 = *unaff_x25;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04230960) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0339e210;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(unaff_x25,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
    uVar7 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    if ((uVar7 & 1) != 0) break;
    plVar4 = (long *)thunk_FUN_01c495e4(unaff_x25,*(undefined8 *)PTR_DAT_0422fce8);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0422fce8) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0339e36c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
LAB_0339e3dc:
    do {
      do {
        do {
          *(undefined1 *)(unaff_x28 + 0x38) = 1;
          do {
            while( true ) {
              do {
                uVar7 = FUN_029fd614(&stack0x00000060,*unaff_x19);
                unaff_x28 = in_stack_00000070;
                if ((uVar7 & 1) == 0) {
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                  if (*(long *)(unaff_x21 + 0xe0) != 0) {
                    FUN_02d50a3c(&stack0x00000040);
                    in_stack_00000068 = in_stack_00000048;
                    in_stack_00000060 = in_stack_00000040;
                    in_stack_00000070 = in_stack_00000050;
                    while (uVar7 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar7 & 1) != 0) {
                      if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                         ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                          ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                        lVar6 = *(long *)(unaff_x21 + 0xe0);
                        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
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
                    while (uVar7 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar7 & 1) != 0) {
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
                        (lVar6 = *(long *)(in_stack_00000070 + 0x18), lVar6 == 0)) ||
                       (*(char *)(lVar6 + 0x80) != '\0')) ||
                      ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
              lVar9 = *(long *)(in_stack_00000070 + 0x30);
              uVar7 = FUN_0339c840(in_stack_00000028,lVar6);
              if ((uVar7 & 1) == 0) break;
              plVar4 = *(long **)(lVar6 + 0x68);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar6 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) ==
                      *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                    puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0339df04;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar2 = (undefined8 *)
                       FUN_01c72498(plVar4,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                    ,0);
LAB_0339df04:
              (*(code *)*puVar2)(plVar4);
              *(undefined1 *)(unaff_x28 + 0x38) = 1;
            }
          } while ((lVar9 == 0) || (*(char *)(lVar6 + 0x82) != '\0'));
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          plVar4 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar5 = *plVar4;
          uVar3 = *(undefined8 *)(lVar6 + 0x40);
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)
                   Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0339df30;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_01c72498(plVar4,*(long *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                                ,0);
LAB_0339df30:
          plVar4 = (long *)(*(code *)*puVar2)(plVar4,uVar3,puVar2[1]);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(int *)((long)plVar4 + 0x24) != 2) {
            if (*(int *)((long)plVar4 + 0x24) == 5) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                               + 0x130);
              if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                 )) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748();
              }
              if ((char)plVar4[5] == '\0') {
                plVar10 = *(long **)(lVar6 + 0x68);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar6 = *plVar10;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                      puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                      goto LAB_0339e44c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar2 = (undefined8 *)
                         FUN_01c72498(plVar10,*(long *)
                                               Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                      ,1);
LAB_0339e44c:
                lVar6 = (*(code *)*puVar2)(plVar10);
                if (lVar6 != 0) {
                  if ((char)plVar4[0x20] == '\0') {
                    uVar3 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                    plVar10 = (long *)thunk_FUN_01c495e4(lVar6,uVar3);
                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(lVar6,uVar3);
                    }
                  }
                  else {
                    plVar10 = (long *)OVRPlugin_Sizei___cctor(plVar4,lVar6);
                  }
                  if ((char)plVar4[0x20] == '\0') {
                    uVar3 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                    plVar4 = (long *)thunk_FUN_01c495e4(lVar9,uVar3);
                    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(lVar9,uVar3);
                    }
                  }
                  else {
                    plVar4 = (long *)OVRPlugin_Sizei___cctor(plVar4,lVar9);
                    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                  }
                  lVar6 = *plVar4;
                  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) ==
                          *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
                        goto LAB_0339e538;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar2 = (undefined8 *)
                           FUN_01c72498(plVar4,*(long *)
                                                System_Security_Cryptography_CryptoConfig_TypeInfo,9
                                       );
LAB_0339e538:
                  plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  do {
                    lVar6 = *plVar4;
                    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04230960) {
                          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                          goto LAB_0339e5a0;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                    uVar7 = (*(code *)*puVar2)(plVar4,puVar2[1]);
                    if ((uVar7 & 1) == 0) goto LAB_0339e690;
                    lVar6 = *plVar4;
                    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04236800) {
                          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                          goto LAB_0339e608;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                    auVar11 = (*(code *)*puVar2)(plVar4,puVar2[1]);
                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    lVar6 = *plVar10;
                    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) ==
                            *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                          goto LAB_0339e678;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar2 = (undefined8 *)
                             FUN_01c72498(plVar10,*(long *)
                                                  System_Security_Cryptography_CryptoConfig_TypeInfo
                                          ,1);
LAB_0339e678:
                    (*(code *)*puVar2)(plVar10,auVar11._0_8_,auVar11._8_8_,puVar2[1]);
                  } while( true );
                }
              }
            }
            goto LAB_0339e3dc;
          }
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar4);
          }
        } while ((*(char *)((long)plVar4 + 0xf2) == '\0') || ((char)plVar4[5] != '\0'));
        plVar4 = *(long **)(lVar6 + 0x68);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0339e000;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01c72498(plVar4,*(long *)
                                      Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1
                             );
LAB_0339e000:
        lVar6 = (*(code *)*puVar2)(plVar4);
      } while (lVar6 == 0);
      uVar3 = thunk_FUN_01c5d21c(lVar6,0);
      plVar4 = (long *)FUN_03395e54(in_stack_00000028,uVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                       0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar4);
      }
      if (*(char *)((long)plVar4 + 0xf1) == '\0') {
        uVar3 = *(undefined8 *)PTR_DAT_04237778;
        unaff_x27 = (long *)thunk_FUN_01c495e4(lVar6);
        if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar6,uVar3);
        }
      }
      else {
        unaff_x27 = (long *)FUN_0338eda8(plVar4,lVar6);
        if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      }
      lVar6 = *unaff_x27;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04237778) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
            goto LAB_0339e104;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(unaff_x27,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
      uVar7 = (*(code *)*puVar2)(unaff_x27,puVar2[1]);
    } while ((uVar7 & 1) != 0);
    if (*(char *)((long)plVar4 + 0xf1) == '\0') {
      uVar3 = *(undefined8 *)PTR_DAT_04237778;
      plVar4 = (long *)thunk_FUN_01c495e4(lVar9,uVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar9,uVar3);
      }
    }
    else {
      plVar4 = (long *)FUN_0338eda8(plVar4,lVar9);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
           ) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0339e1a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01c72498(plVar4,*(long *)
                                  System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                          ,0);
LAB_0339e1a8:
    unaff_x25 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  } while( true );
  param_1 = *unaff_x25;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_04230960;
  if (in_x9 != 0) goto LAB_0339e238;
  goto LAB_0339e258;
LAB_0339e238:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  goto code_r0x0339e240;
LAB_0339e690:
  plVar4 = (long *)thunk_FUN_01c495e4(plVar4,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar2)(plVar4,puVar2[1]);
  }
  goto LAB_0339e3dc;
}


