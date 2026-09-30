/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$.cctor
ENTRY_POINT: 0339e338
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
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */

void OVRPlugin_OVRP_1_65_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong in_x9;
  int *piVar7;
  int *in_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long *plVar8;
  long *unaff_x25;
  long unaff_x26;
  undefined8 uVar9;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  undefined1 auVar10 [16];
  long *in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
code_r0x0339e338:
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0339e36c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
LAB_0339e350:
  puVar4 = (undefined8 *)FUN_01c72498(unaff_x25,param_3,0);
LAB_0339e36c:
                    /* catch() { ... } // from try @ 0339e328 with catch @ 0339e374 */
  (*(code *)*puVar4)(unaff_x25,puVar4[1]);
LAB_0339e378:
  if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(unaff_x27);
  }
  if (unaff_w29 == 0x1c) goto LAB_0339e3dc;
  if (unaff_w29 != 0) {
    FUN_029fd610(&stack0x00000060,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
    if (unaff_w29 == 0) {
LAB_0339e7d0:
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
            lVar6 = *(long *)(unaff_x21 + 0xe0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
          }
        }
        FUN_029fd610(&stack0x00000060,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__
                    );
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
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__
                    );
      }
      FUN_0339cf34(in_stack_00000028);
    }
    return;
  }
  iVar5 = *(int *)((long)in_stack_00000020 + 0x24);
LAB_0339e390:
  if (iVar5 == 5) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*in_stack_00000020 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000020 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    if ((char)in_stack_00000020[5] == '\0') {
      plVar8 = *(long **)(unaff_x26 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0339e44c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar8,*(long *)
                                    Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1);
LAB_0339e44c:
      lVar6 = (*(code *)*puVar4)(plVar8);
      if (lVar6 != 0) {
        if ((char)in_stack_00000020[0x20] == '\0') {
          uVar9 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
          plVar8 = (long *)thunk_FUN_01c495e4(lVar6,uVar9);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar6,uVar9);
          }
        }
        else {
          plVar8 = (long *)OVRPlugin_Sizei___cctor(in_stack_00000020,lVar6);
        }
        if ((char)in_stack_00000020[0x20] == '\0') {
          uVar9 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
          plVar3 = (long *)thunk_FUN_01c495e4(unaff_x24,uVar9);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(unaff_x24,uVar9);
          }
        }
        else {
          plVar3 = (long *)OVRPlugin_Sizei___cctor(in_stack_00000020,unaff_x24);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        lVar6 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
              goto LAB_0339e538;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c72498(plVar3,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        do {
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04230960) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0339e5a0;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
          uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar2 & 1) == 0) goto LAB_0339e690;
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04236800) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_0339e608;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
          auVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar6 = *plVar8;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0339e678;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01c72498(plVar8,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,1
                               );
LAB_0339e678:
          (*(code *)*puVar4)(plVar8,auVar10._0_8_,auVar10._8_8_,puVar4[1]);
        } while( true );
      }
    }
  }
  goto LAB_0339e3dc;
LAB_0339e690:
  plVar8 = (long *)thunk_FUN_01c495e4(plVar3,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(unaff_x28 + 0x38) = 1;
  do {
    while( true ) {
      do {
        uVar2 = FUN_029fd614(&stack0x00000060,*unaff_x19);
        unaff_x28 = in_stack_00000070;
        if ((uVar2 & 1) == 0) {
          FUN_029fd610(&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
          goto LAB_0339e7d0;
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
      uVar2 = FUN_0339c840(in_stack_00000028,unaff_x26);
      if ((uVar2 & 1) == 0) break;
      plVar8 = *(long **)(unaff_x26 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0339df04;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar8,*(long *)
                                    Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
LAB_0339df04:
      (*(code *)*puVar4)(plVar8);
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
  lVar6 = *plVar8;
  uVar9 = *(undefined8 *)(unaff_x26 + 0x40);
  uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0339df30;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01c72498(plVar8,*(long *)
                                Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                        ,0);
LAB_0339df30:
  in_stack_00000020 = (long *)(*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
  if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar5 = *(int *)((long)in_stack_00000020 + 0x24);
  if (iVar5 == 2) {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*in_stack_00000020 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000020 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(in_stack_00000020);
    }
    if ((*(char *)((long)in_stack_00000020 + 0xf2) != '\0') && ((char)in_stack_00000020[5] == '\0'))
    {
      plVar8 = *(long **)(unaff_x26 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0339e000;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar8,*(long *)
                                    Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1);
LAB_0339e000:
      lVar6 = (*(code *)*puVar4)(plVar8);
      if (lVar6 != 0) {
        uVar9 = thunk_FUN_01c5d21c(lVar6,0);
        plVar8 = (long *)FUN_03395e54(in_stack_00000028,uVar9);
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
          uVar9 = *(undefined8 *)PTR_DAT_04237778;
          plVar3 = (long *)thunk_FUN_01c495e4(lVar6);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar6,uVar9);
          }
        }
        else {
          plVar3 = (long *)FUN_0338eda8(plVar8,lVar6);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        lVar6 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04237778) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 6) * 0x10 + 0x138);
              goto LAB_0339e104;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
        uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar2 & 1) == 0) {
          if (*(char *)((long)plVar8 + 0xf1) == '\0') {
            uVar9 = *(undefined8 *)PTR_DAT_04237778;
            plVar8 = (long *)thunk_FUN_01c495e4(unaff_x24,uVar9);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(unaff_x24,uVar9);
            }
          }
          else {
            plVar8 = (long *)FUN_0338eda8(plVar8,unaff_x24);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
          }
          lVar6 = *plVar8;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 == 0) goto LAB_0339e18c;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0339e174;
        }
      }
    }
    goto LAB_0339e3dc;
  }
  goto LAB_0339e390;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_0339e174:
    if (*(long *)(piVar7 + -2) ==
        *(long *)System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0339e1a8;
    }
  }
LAB_0339e18c:
  puVar4 = (undefined8 *)
           FUN_01c72498(plVar8,*(long *)
                                System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                        ,0);
LAB_0339e1a8:
  plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar6 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04230960) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0339e210;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
    uVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if ((uVar2 & 1) == 0) break;
    lVar6 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04230960) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0339e278;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
    uVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04237778) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0339e2e0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
    (*(code *)*puVar4)(plVar3,uVar9,puVar4[1]);
  } while( true );
  unaff_x27 = 0;
  unaff_w29 = 0x1c;
  unaff_x25 = (long *)thunk_FUN_01c495e4(plVar8,*(undefined8 *)PTR_DAT_0422fce8);
  if (unaff_x25 != (long *)0x0) goto LAB_0339e318;
  goto LAB_0339e378;
LAB_0339e318:
  param_1 = *unaff_x25;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_0422fce8;
  if (in_x9 != 0) goto code_r0x0339e330;
  goto LAB_0339e350;
code_r0x0339e330:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  goto code_r0x0339e338;
}


