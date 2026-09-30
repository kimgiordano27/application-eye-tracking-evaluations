/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 0339e09c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0339e720) */
/* WARNING: Removing unreachable block (ram,0x0339e724) */
/* WARNING: Removing unreachable block (ram,0x0339e384) */
/* WARNING: Removing unreachable block (ram,0x0339e958) */
/* WARNING: Removing unreachable block (ram,0x0339e970) */
/* WARNING: Removing unreachable block (ram,0x0339e388) */
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */
/* WARNING: Removing unreachable block (ram,0x0339eafc) */

void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar10 [16];
  undefined8 uStack0000000000000018;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
code_r0x0339e09c:
  uStack0000000000000018 = param_2;
  plVar2 = (long *)thunk_FUN_01c495e4(param_1);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(unaff_x29,uStack0000000000000018);
  }
LAB_0339e0ac:
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04237778) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
        goto LAB_0339e104;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498(plVar2,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
  uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if ((uVar8 & 1) == 0) {
    if (*(char *)((long)unaff_x25 + 0xf1) == '\0') {
      uVar5 = *(undefined8 *)PTR_DAT_04237778;
      plVar4 = (long *)thunk_FUN_01c495e4(unaff_x24,uVar5);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(unaff_x24,uVar5);
      }
    }
    else {
      plVar4 = (long *)FUN_0338eda8(unaff_x25,unaff_x24);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
           ) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0339e1a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar4,*(long *)
                                  System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                          ,0);
LAB_0339e1a8:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    do {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04230960) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0339e210;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
      uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar8 & 1) == 0) goto LAB_0339e2f4;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04230960) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0339e278;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
      uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      lVar7 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04237778) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0339e2e0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar2,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
      (*(code *)*puVar3)(plVar2,uVar5,puVar3[1]);
    } while( true );
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar2 = (long *)thunk_FUN_01c495e4(plVar4,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar2,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
LAB_0339e3dc:
  do {
    do {
      *(undefined1 *)(unaff_x28 + 0x38) = 1;
      do {
        while( true ) {
          do {
            uVar8 = FUN_029fd614(&stack0x00000060,*unaff_x19);
            unaff_x28 = in_stack_00000070;
            if ((uVar8 & 1) == 0) {
              FUN_029fd610(&stack0x00000060,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
              if (*(long *)(unaff_x21 + 0xe0) != 0) {
                FUN_02d50a3c(&stack0x00000040);
                in_stack_00000068 = in_stack_00000048;
                in_stack_00000060 = in_stack_00000040;
                in_stack_00000070 = in_stack_00000050;
                while (uVar8 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar8 & 1) != 0) {
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
                    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
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
                while (uVar8 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar8 & 1) != 0) {
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
                    (lVar7 = *(long *)(in_stack_00000070 + 0x18), lVar7 == 0)) ||
                   (*(char *)(lVar7 + 0x80) != '\0')) ||
                  ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                   ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
          unaff_x24 = *(long *)(in_stack_00000070 + 0x30);
          uVar8 = FUN_0339c840(in_stack_00000028,lVar7);
          if ((uVar8 & 1) == 0) break;
          plVar2 = *(long **)(lVar7 + 0x68);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar7 = *plVar2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0339df04;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01c72498(plVar2,*(long *)
                                        Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                ,0);
LAB_0339df04:
          (*(code *)*puVar3)(plVar2);
          *(undefined1 *)(unaff_x28 + 0x38) = 1;
        }
      } while ((unaff_x24 == 0) || (*(char *)(lVar7 + 0x82) != '\0'));
      if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar2 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = *plVar2;
      uVar5 = *(undefined8 *)(lVar7 + 0x40);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__)
          {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0339df30;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(plVar2,*(long *)
                                    Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                            ,0);
LAB_0339df30:
      plVar2 = (long *)(*(code *)*puVar3)(plVar2,uVar5,puVar3[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(int *)((long)plVar2 + 0x24) != 2) {
        if (*(int *)((long)plVar2 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          if ((char)plVar2[5] == '\0') {
            plVar4 = *(long **)(lVar7 + 0x68);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar7 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01c72498(plVar4,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,1);
LAB_0339e44c:
            lVar7 = (*(code *)*puVar3)(plVar4);
            if (lVar7 != 0) {
              if ((char)plVar2[0x20] == '\0') {
                uVar5 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar4 = (long *)thunk_FUN_01c495e4(lVar7,uVar5);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar7,uVar5);
                }
              }
              else {
                plVar4 = (long *)OVRPlugin_Sizei___cctor(plVar2,lVar7);
              }
              if ((char)plVar2[0x20] == '\0') {
                uVar5 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar2 = (long *)thunk_FUN_01c495e4(unaff_x24,uVar5);
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(unaff_x24,uVar5);
                }
              }
              else {
                plVar2 = (long *)OVRPlugin_Sizei___cctor(plVar2,unaff_x24);
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar7 = *plVar2;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)
                       FUN_01c72498(plVar2,*(long *)
                                            System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar7 = *plVar2;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_01c72498(plVar2,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
                if ((uVar8 & 1) == 0) goto LAB_0339e690;
                lVar7 = *plVar2;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_01c72498(plVar2,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar10 = (*(code *)*puVar3)(plVar2,puVar3[1]);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar7 = *plVar4;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)
                         FUN_01c72498(plVar4,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,1);
LAB_0339e678:
                (*(code *)*puVar3)(plVar4,auVar10._0_8_,auVar10._8_8_,puVar3[1]);
              } while( true );
            }
          }
        }
        goto LAB_0339e3dc;
      }
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                       0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar2);
      }
    } while ((*(char *)((long)plVar2 + 0xf2) == '\0') || ((char)plVar2[5] != '\0'));
    plVar2 = *(long **)(lVar7 + 0x68);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0339e000;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar2,*(long *)
                                  Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1);
LAB_0339e000:
    param_1 = (*(code *)*puVar3)(plVar2);
  } while (param_1 == 0);
  uVar5 = thunk_FUN_01c5d21c(param_1,0);
  unaff_x25 = (long *)FUN_03395e54(in_stack_00000028,uVar5);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ + 0x130
                   );
  if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(unaff_x25);
  }
  if (*(char *)((long)unaff_x25 + 0xf1) == '\0') goto LAB_0339e08c;
  plVar2 = (long *)FUN_0338eda8(unaff_x25,param_1);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  goto LAB_0339e0ac;
LAB_0339e690:
  plVar2 = (long *)thunk_FUN_01c495e4(plVar2,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar2,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e08c:
  param_2 = *(undefined8 *)PTR_DAT_04237778;
  unaff_x29 = param_1;
  goto code_r0x0339e09c;
}


