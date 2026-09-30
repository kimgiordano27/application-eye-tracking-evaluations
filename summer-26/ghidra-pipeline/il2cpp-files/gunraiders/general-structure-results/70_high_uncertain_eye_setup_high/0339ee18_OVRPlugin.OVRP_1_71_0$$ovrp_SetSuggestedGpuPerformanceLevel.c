/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_SetSuggestedGpuPerformanceLevel
ENTRY_POINT: 0339ee18
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

undefined8
OVRPlugin_OVRP_1_71_0__ovrp_SetSuggestedGpuPerformanceLevel(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x26;
  undefined8 uVar12;
  long unaff_x27;
  undefined1 auVar13 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  FUN_029fd610(param_2,*param_1);
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80();
  }
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar2 = (**(code **)(in_stack_00000020 + 0x18))(*(undefined8 *)(in_stack_00000020 + 0x40));
  if (in_stack_00000018 != 0) {
    FUN_0339c944();
  }
  FUN_0339cd08();
  FUN_02d50a3c(&stack0x00000040);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000070 = in_stack_00000050;
LAB_0339dde0:
  do {
    while( true ) {
      do {
        uVar3 = FUN_029fd614(&stack0x00000060,*unaff_x19);
        lVar7 = in_stack_00000070;
        if ((uVar3 & 1) == 0) {
          FUN_029fd610(&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
          if (*(long *)(unaff_x21 + 0xe0) != 0) {
            FUN_02d50a3c(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar3 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar3 & 1) != 0) {
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
                          (*(undefined8 *)(lVar7 + 0x40),uVar2,
                           *(undefined8 *)(in_stack_00000070 + 0x10),
                           *(undefined8 *)(in_stack_00000070 + 0x30),*(undefined8 *)(lVar7 + 0x28));
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
            while (uVar3 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar3 & 1) != 0) {
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
                FUN_0339f5a0(in_stack_00000028,uVar2);
              }
            }
            FUN_029fd610(&stack0x00000060,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
          }
          FUN_0339cf34(in_stack_00000028);
          return uVar2;
        }
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                (lVar11 = *(long *)(in_stack_00000070 + 0x18), lVar11 == 0)) ||
               (*(char *)(lVar11 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
      lVar9 = *(long *)(in_stack_00000070 + 0x30);
      uVar3 = FUN_0339c840(unaff_x27,lVar11);
      if ((uVar3 & 1) == 0) break;
      plVar10 = *(long **)(lVar11 + 0x68);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0339df04;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar10,*(long *)
                                     Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0)
      ;
LAB_0339df04:
      (*(code *)*puVar4)(plVar10,uVar2,lVar9,puVar4[1]);
      *(undefined1 *)(lVar7 + 0x38) = 1;
    }
  } while ((lVar9 == 0) || (*(char *)(lVar11 + 0x82) != '\0'));
  if (*(long *)(unaff_x27 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar10 = *(long **)(*(long *)(unaff_x27 + 0x20) + 0x40);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar6 = *plVar10;
  uVar12 = *(undefined8 *)(lVar11 + 0x40);
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0339df30;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01c72498(plVar10,*(long *)
                                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                        ,0);
LAB_0339df30:
  plVar10 = (long *)(*(code *)*puVar4)(plVar10,uVar12,puVar4[1]);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)((long)plVar10 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar10);
    }
    if ((*(char *)((long)plVar10 + 0xf2) != '\0') && ((char)plVar10[5] == '\0')) {
      plVar10 = *(long **)(lVar11 + 0x68);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0339e000;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar10,*(long *)
                                     Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1)
      ;
LAB_0339e000:
      lVar11 = (*(code *)*puVar4)(plVar10,uVar2,puVar4[1]);
      if (lVar11 != 0) {
        uVar12 = thunk_FUN_01c5d21c(lVar11,0);
        plVar10 = (long *)FUN_03395e54(in_stack_00000028,uVar12);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                         0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar10);
        }
        if (*(char *)((long)plVar10 + 0xf1) == '\0') {
          uVar12 = *(undefined8 *)PTR_DAT_04237778;
          plVar5 = (long *)thunk_FUN_01c495e4(lVar11);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar11,uVar12);
          }
        }
        else {
          plVar5 = (long *)FUN_0338eda8(plVar10,lVar11);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        lVar11 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04237778) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_0339e104;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
        uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar3 & 1) == 0) {
          if (*(char *)((long)plVar10 + 0xf1) == '\0') {
            uVar12 = *(undefined8 *)PTR_DAT_04237778;
            plVar10 = (long *)thunk_FUN_01c495e4(lVar9,uVar12);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(lVar9,uVar12);
            }
          }
          else {
            plVar10 = (long *)FUN_0338eda8(plVar10,lVar9);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
          }
          lVar11 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)
                   System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo)
              {
                puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0339e1a8;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01c72498(plVar10,*(long *)
                                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                ,0);
LAB_0339e1a8:
          plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          do {
            lVar11 = *plVar10;
            uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04230960) {
                  puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0339e210;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
            uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
            if ((uVar3 & 1) == 0) goto LAB_0339e2f4;
            lVar11 = *plVar10;
            uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04230960) {
                  puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto LAB_0339e278;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
            uVar12 = (*(code *)*puVar4)(plVar10,puVar4[1]);
            lVar11 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04237778) {
                  puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_0339e2e0;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
            (*(code *)*puVar4)(plVar5,uVar12,puVar4[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar10 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    if ((char)plVar10[5] == '\0') {
      plVar5 = *(long **)(lVar11 + 0x68);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0339e44c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar5,*(long *)
                                    Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1);
LAB_0339e44c:
      lVar11 = (*(code *)*puVar4)(plVar5,uVar2,puVar4[1]);
      if (lVar11 != 0) {
        if ((char)plVar10[0x20] == '\0') {
          uVar12 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
          plVar5 = (long *)thunk_FUN_01c495e4(lVar11,uVar12);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar11,uVar12);
          }
        }
        else {
          plVar5 = (long *)OVRPlugin_Sizei___cctor(plVar10,lVar11);
        }
        if ((char)plVar10[0x20] == '\0') {
          uVar12 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
          plVar10 = (long *)thunk_FUN_01c495e4(lVar9,uVar12);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar9,uVar12);
          }
        }
        else {
          plVar10 = (long *)OVRPlugin_Sizei___cctor(plVar10,lVar9);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        lVar11 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_0339e538;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c72498(plVar10,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,9)
        ;
LAB_0339e538:
        plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        do {
          lVar11 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04230960) {
                puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0339e5a0;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
          uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
          if ((uVar3 & 1) == 0) goto LAB_0339e690;
          lVar11 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04236800) {
                puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_0339e608;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
          auVar13 = (*(code *)*puVar4)(plVar10,puVar4[1]);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_0339e678;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01c72498(plVar5,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,1
                               );
LAB_0339e678:
          (*(code *)*puVar4)(plVar5,auVar13._0_8_,auVar13._8_8_,puVar4[1]);
        } while( true );
      }
    }
  }
  goto LAB_0339e3dc;
LAB_0339e690:
  plVar10 = (long *)thunk_FUN_01c495e4(plVar10,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar4)(plVar10,puVar4[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar10 = (long *)thunk_FUN_01c495e4(plVar10,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar4)(plVar10,puVar4[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar7 + 0x38) = 1;
  unaff_x27 = in_stack_00000028;
  goto LAB_0339dde0;
}


