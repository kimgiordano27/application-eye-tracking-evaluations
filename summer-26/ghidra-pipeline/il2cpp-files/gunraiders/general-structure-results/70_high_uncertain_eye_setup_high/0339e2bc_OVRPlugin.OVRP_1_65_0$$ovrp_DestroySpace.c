/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_DestroySpace
ENTRY_POINT: 0339e2bc
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

void OVRPlugin_OVRP_1_65_0__ovrp_DestroySpace(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *piVar7;
  int *in_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long *unaff_x25;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
  undefined1 auVar11 [16];
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
code_r0x0339e2bc:
  if (!(bool)in_ZR) goto LAB_0339e2a8;
LAB_0339e2c0:
  puVar2 = (undefined8 *)FUN_01c72498(unaff_x27,param_3,2);
LAB_0339e2e0:
                    /* try { // try from 0339e2e4 to 0349e2e7 has its CatchHandler @ 0339e310 */
                    /* try { // try from 0339e2ec to 0349e2ef has its CatchHandler @ 0339e304 */
  (*(code *)*puVar2)(unaff_x27,unaff_x29,puVar2[1]);
  do {
    lVar5 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04230960) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0339e210;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(unaff_x25,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
    uVar6 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    if ((uVar6 & 1) != 0) break;
                    /* try { // try from 0339e2f4 to 0349e2f7 has its CatchHandler @ 0339e300 */
                    /* try { // try from 0339e2f8 to 0349e327 has its CatchHandler @ 0339df98 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e238 with catch @ 0339e2fc
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e2f4 with catch @ 0339e300
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e2ec with catch @ 0339e304
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e208 with catch @ 0339e308
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e210 with catch @ 0339e30c
                        */
    plVar3 = (long *)thunk_FUN_01c495e4(unaff_x25,*(undefined8 *)PTR_DAT_0422fce8);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e2e4 with catch @ 0339e310
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e1c8 with catch @ 0339e314
                        */
    if (plVar3 != (long *)0x0) {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339e16c with catch @ 0339e318
                        */
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 0339e328 to 0349e32b has its CatchHandler @ 0339e374 */
                    /* try { // try from 0339e32c to 0349e3b3 has its CatchHandler @ 0339df98 */
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0422fce8) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0339e36c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
LAB_0339e3dc:
    do {
      do {
        do {
          *(undefined1 *)(unaff_x28 + 0x38) = 1;
          do {
            while( true ) {
              do {
                uVar6 = FUN_029fd614(&stack0x00000060,*unaff_x19);
                unaff_x28 = in_stack_00000070;
                if ((uVar6 & 1) == 0) {
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                  if (*(long *)(unaff_x21 + 0xe0) != 0) {
                    FUN_02d50a3c(&stack0x00000040);
                    in_stack_00000068 = in_stack_00000048;
                    in_stack_00000060 = in_stack_00000040;
                    in_stack_00000070 = in_stack_00000050;
                    while (uVar6 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar6 & 1) != 0) {
                      if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                         ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                          ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                        lVar5 = *(long *)(unaff_x21 + 0xe0);
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
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
                    while (uVar6 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar6 & 1) != 0) {
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
                        (lVar5 = *(long *)(in_stack_00000070 + 0x18), lVar5 == 0)) ||
                       (*(char *)(lVar5 + 0x80) != '\0')) ||
                      ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
              lVar8 = *(long *)(in_stack_00000070 + 0x30);
              uVar6 = FUN_0339c840(in_stack_00000028,lVar5);
              if ((uVar6 & 1) == 0) break;
              plVar3 = *(long **)(lVar5 + 0x68);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar5 = *plVar3;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_0339df04;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined8 *)
                       FUN_01c72498(plVar3,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                    ,0);
LAB_0339df04:
              (*(code *)*puVar2)(plVar3);
              *(undefined1 *)(unaff_x28 + 0x38) = 1;
            }
          } while ((lVar8 == 0) || (*(char *)(lVar5 + 0x82) != '\0'));
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          plVar3 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar4 = *plVar3;
          uVar10 = *(undefined8 *)(lVar5 + 0x40);
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0339df30;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_01c72498(plVar3,*(long *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                                ,0);
LAB_0339df30:
          plVar3 = (long *)(*(code *)*puVar2)(plVar3,uVar10,puVar2[1]);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(int *)((long)plVar3 + 0x24) != 2) {
            if (*(int *)((long)plVar3 + 0x24) == 5) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                               + 0x130);
              if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                 )) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748();
              }
              if ((char)plVar3[5] == '\0') {
                plVar9 = *(long **)(lVar5 + 0x68);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar5 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                      goto LAB_0339e44c;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined8 *)
                         FUN_01c72498(plVar9,*(long *)
                                              Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                      ,1);
LAB_0339e44c:
                lVar5 = (*(code *)*puVar2)(plVar9);
                if (lVar5 != 0) {
                  if ((char)plVar3[0x20] == '\0') {
                    uVar10 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                    plVar9 = (long *)thunk_FUN_01c495e4(lVar5,uVar10);
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(lVar5,uVar10);
                    }
                  }
                  else {
                    plVar9 = (long *)OVRPlugin_Sizei___cctor(plVar3,lVar5);
                  }
                  if ((char)plVar3[0x20] == '\0') {
                    uVar10 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                    plVar3 = (long *)thunk_FUN_01c495e4(lVar8,uVar10);
                    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(lVar8,uVar10);
                    }
                  }
                  else {
                    plVar3 = (long *)OVRPlugin_Sizei___cctor(plVar3,lVar8);
                    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                  }
                  lVar5 = *plVar3;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) ==
                          *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
                        goto LAB_0339e538;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar2 = (undefined8 *)
                           FUN_01c72498(plVar3,*(long *)
                                                System_Security_Cryptography_CryptoConfig_TypeInfo,9
                                       );
LAB_0339e538:
                  plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
                  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  do {
                    lVar5 = *plVar3;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04230960) {
                          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                          goto LAB_0339e5a0;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
                    if ((uVar6 & 1) == 0) goto LAB_0339e690;
                    lVar5 = *plVar3;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04236800) {
                          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                          goto LAB_0339e608;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                    auVar11 = (*(code *)*puVar2)(plVar3,puVar2[1]);
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    lVar5 = *plVar9;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) ==
                            *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                          goto LAB_0339e678;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined8 *)
                             FUN_01c72498(plVar9,*(long *)
                                                  System_Security_Cryptography_CryptoConfig_TypeInfo
                                          ,1);
LAB_0339e678:
                    (*(code *)*puVar2)(plVar9,auVar11._0_8_,auVar11._8_8_,puVar2[1]);
                  } while( true );
                }
              }
            }
            goto LAB_0339e3dc;
          }
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar3);
          }
        } while ((*(char *)((long)plVar3 + 0xf2) == '\0') || ((char)plVar3[5] != '\0'));
        plVar3 = *(long **)(lVar5 + 0x68);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0339e000;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01c72498(plVar3,*(long *)
                                      Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1
                             );
LAB_0339e000:
        lVar5 = (*(code *)*puVar2)(plVar3);
      } while (lVar5 == 0);
      uVar10 = thunk_FUN_01c5d21c(lVar5,0);
      plVar3 = (long *)FUN_03395e54(in_stack_00000028,uVar10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                       0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar3);
      }
      if (*(char *)((long)plVar3 + 0xf1) == '\0') {
        uVar10 = *(undefined8 *)PTR_DAT_04237778;
        unaff_x27 = (long *)thunk_FUN_01c495e4(lVar5);
        if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar5,uVar10);
        }
      }
      else {
        unaff_x27 = (long *)FUN_0338eda8(plVar3,lVar5);
        if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      }
      lVar5 = *unaff_x27;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04237778) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_0339e104;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(unaff_x27,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
      uVar6 = (*(code *)*puVar2)(unaff_x27,puVar2[1]);
    } while ((uVar6 & 1) != 0);
    if (*(char *)((long)plVar3 + 0xf1) == '\0') {
      uVar10 = *(undefined8 *)PTR_DAT_04237778;
      plVar3 = (long *)thunk_FUN_01c495e4(lVar8,uVar10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar8,uVar10);
      }
    }
    else {
      plVar3 = (long *)FUN_0338eda8(plVar3,lVar8);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
           ) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0339e1a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01c72498(plVar3,*(long *)
                                  System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                          ,0);
LAB_0339e1a8:
    unaff_x25 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  } while( true );
  lVar5 = *unaff_x25;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04230960) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0339e278;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498(unaff_x25,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
  unaff_x29 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
  param_1 = *unaff_x27;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_04237778;
  if (in_x9 == 0) goto LAB_0339e2c0;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0339e2a8:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
    goto code_r0x0339e2bc;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
  goto LAB_0339e2e0;
LAB_0339e690:
  plVar3 = (long *)thunk_FUN_01c495e4(plVar3,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  goto LAB_0339e3dc;
}


