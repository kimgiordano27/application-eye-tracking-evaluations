/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 0339df74
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

void OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
  long *in_x11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x26;
  long *plVar8;
  long unaff_x28;
  undefined1 auVar9 [16];
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
code_r0x0339df74:
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) == param_3) {
                    /* try { // try from 0339df98 to 0349e16b has its CatchHandler @ 0339df98
                       catch() { ... } // from try @ 0339df98 with catch @ 0339df98
                       catch() { ... } // from try @ 0339e240 with catch @ 0339df98
                       catch() { ... } // from try @ 0339e2f8 with catch @ 0339df98
                       catch() { ... } // from try @ 0339e32c with catch @ 0339df98
                       catch() { ... } // from try @ 0339e3dc with catch @ 0339df98 */
    if ((*(char *)((long)in_x11 + 0xf2) != '\0') && ((char)in_x11[5] == '\0')) {
      plVar8 = *(long **)(unaff_x26 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = *plVar8;
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
               FUN_01c72498(plVar8,*(long *)
                                    Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1);
LAB_0339e000:
      lVar5 = (*(code *)*puVar2)(plVar8);
      if (lVar5 != 0) {
        uVar3 = thunk_FUN_01c5d21c(lVar5,0);
        plVar8 = (long *)FUN_03395e54(in_stack_00000028,uVar3);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                         0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar8);
        }
        if (*(char *)((long)plVar8 + 0xf1) == '\0') {
          uVar3 = *(undefined8 *)PTR_DAT_04237778;
          plVar4 = (long *)thunk_FUN_01c495e4(lVar5);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar5,uVar3);
          }
        }
        else {
          plVar4 = (long *)FUN_0338eda8(plVar8,lVar5);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        lVar5 = *plVar4;
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
        puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
        uVar6 = (*(code *)*puVar2)(plVar4,puVar2[1]);
        if ((uVar6 & 1) == 0) {
          if (*(char *)((long)plVar8 + 0xf1) == '\0') {
            uVar3 = *(undefined8 *)PTR_DAT_04237778;
            plVar8 = (long *)thunk_FUN_01c495e4(unaff_x24,uVar3);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(unaff_x24,uVar3);
            }
          }
          else {
            plVar8 = (long *)FUN_0338eda8(plVar8,unaff_x24);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
          }
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo)
              {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0339e1a8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_01c72498(plVar8,*(long *)
                                        System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                ,0);
LAB_0339e1a8:
          plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          do {
            lVar5 = *plVar8;
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
            puVar2 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
            uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
            if ((uVar6 & 1) == 0) goto LAB_0339e2f4;
            lVar5 = *plVar8;
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
            puVar2 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
            uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04237778) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                  goto LAB_0339e2e0;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
            (*(code *)*puVar2)(plVar4,uVar3,puVar2[1]);
          } while( true );
        }
      }
    }
    goto LAB_0339e3dc;
  }
  goto LAB_0339e9d4;
LAB_0339e2f4:
  plVar8 = (long *)thunk_FUN_01c495e4(plVar8,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
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
    puVar2 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
LAB_0339e3dc:
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
                (unaff_x26 = *(long *)(in_stack_00000070 + 0x18), unaff_x26 == 0)) ||
               (*(char *)(unaff_x26 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
      unaff_x24 = *(long *)(in_stack_00000070 + 0x30);
      uVar6 = FUN_0339c840(in_stack_00000028,unaff_x26);
      if ((uVar6 & 1) == 0) break;
      plVar8 = *(long **)(unaff_x26 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = *plVar8;
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
               FUN_01c72498(plVar8,*(long *)
                                    Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
LAB_0339df04:
      (*(code *)*puVar2)(plVar8);
      *(undefined1 *)(unaff_x28 + 0x38) = 1;
    }
  } while ((unaff_x24 == 0) || (*(char *)(unaff_x26 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar8 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = *plVar8;
  uVar3 = *(undefined8 *)(unaff_x26 + 0x40);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0339df30;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01c72498(plVar8,*(long *)
                                Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                        ,0);
LAB_0339df30:
  in_x11 = (long *)(*(code *)*puVar2)(plVar8,uVar3,puVar2[1]);
  if (in_x11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)((long)in_x11 + 0x24) != 2) {
    if (*(int *)((long)in_x11 + 0x24) == 5) {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                       0x130);
      if ((*(byte *)(*in_x11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*in_x11 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      if ((char)in_x11[5] == '\0') {
        plVar8 = *(long **)(unaff_x26 + 0x68);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar5 = *plVar8;
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
                 FUN_01c72498(plVar8,*(long *)
                                      Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1
                             );
LAB_0339e44c:
        lVar5 = (*(code *)*puVar2)(plVar8);
        if (lVar5 != 0) {
          if ((char)in_x11[0x20] == '\0') {
            uVar3 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
            plVar8 = (long *)thunk_FUN_01c495e4(lVar5,uVar3);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(lVar5,uVar3);
            }
          }
          else {
            plVar8 = (long *)OVRPlugin_Sizei___cctor(in_x11,lVar5);
          }
          if ((char)in_x11[0x20] == '\0') {
            uVar3 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
            plVar4 = (long *)thunk_FUN_01c495e4(unaff_x24,uVar3);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(unaff_x24,uVar3);
            }
          }
          else {
            plVar4 = (long *)OVRPlugin_Sizei___cctor(in_x11,unaff_x24);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
          }
          lVar5 = *plVar4;
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
                   FUN_01c72498(plVar4,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,9
                               );
LAB_0339e538:
          plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          do {
            lVar5 = *plVar4;
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
            puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
            uVar6 = (*(code *)*puVar2)(plVar4,puVar2[1]);
            if ((uVar6 & 1) == 0) goto LAB_0339e690;
            lVar5 = *plVar4;
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
            puVar2 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
            auVar9 = (*(code *)*puVar2)(plVar4,puVar2[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar5 = *plVar8;
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
                     FUN_01c72498(plVar8,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo
                                  ,1);
LAB_0339e678:
            (*(code *)*puVar2)(plVar8,auVar9._0_8_,auVar9._8_8_,puVar2[1]);
          } while( true );
        }
      }
    }
    goto LAB_0339e3dc;
  }
  param_1 = *in_x11;
  param_3 = *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__;
  in_x9 = (ulong)*(byte *)(param_3 + 0x130);
  if (*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) {
LAB_0339e9d4:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(in_x11);
  }
  goto code_r0x0339df74;
LAB_0339e690:
  plVar8 = (long *)thunk_FUN_01c495e4(plVar4,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
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
    puVar2 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
  goto LAB_0339e3dc;
}


