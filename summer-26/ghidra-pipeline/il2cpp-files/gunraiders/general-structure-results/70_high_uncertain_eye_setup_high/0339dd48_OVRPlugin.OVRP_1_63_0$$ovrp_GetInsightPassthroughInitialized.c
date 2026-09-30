/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_GetInsightPassthroughInitialized
ENTRY_POINT: 0339dd48
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0339e720) */
/* WARNING: Removing unreachable block (ram,0x0339e724) */
/* WARNING: Removing unreachable block (ram,0x0339e384) */
/* WARNING: Removing unreachable block (ram,0x0339e958) */
/* WARNING: Removing unreachable block (ram,0x0339e970) */
/* WARNING: Removing unreachable block (ram,0x0339e388) */
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */
/* WARNING: Removing unreachable block (ram,0x0339eafc) */

undefined8 OVRPlugin_OVRP_1_63_0__ovrp_GetInsightPassthroughInitialized(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  long lVar12;
  long unaff_x25;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar15 [16];
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
  
  do {
    if (param_1 != 0) goto LAB_0339db88;
    do {
      while( true ) {
        uVar3 = FUN_029fd614(&stack0x00000060,*unaff_x19);
        unaff_x25 = in_stack_00000070;
        if ((uVar3 & 1) == 0) {
          FUN_029fd610(&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
          if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar4 = (**(code **)(in_stack_00000020 + 0x18))(*(undefined8 *)(in_stack_00000020 + 0x40))
          ;
          if (in_stack_00000018 != 0) {
            FUN_0339c944(in_stack_00000028);
          }
          FUN_0339cd08(in_stack_00000028);
          FUN_02d50a3c(&stack0x00000040);
          in_stack_00000068 = in_stack_00000048;
          in_stack_00000060 = in_stack_00000040;
          in_stack_00000070 = in_stack_00000050;
          goto LAB_0339dde0;
        }
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
          lVar9 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar9 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              iVar8 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar3 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48));
              iVar8 = unaff_w24;
              if ((uVar3 & 1) == 0) {
                iVar8 = unaff_w24 + 1;
              }
            }
            else {
              iVar8 = 2;
            }
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,iVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000040;
          }
        }
        param_1 = *(long *)(unaff_x25 + 0x20);
        if (param_1 == 0) break;
LAB_0339db88:
        if (*(char *)(param_1 + 0x80) == '\0') {
          if (((in_stack_00000038._4_4_ != 0) && (*(char *)(unaff_x25 + 0x28) != '\0')) &&
             (*(uint *)(unaff_x25 + 0x2c) < 2)) {
            if (*(long *)(param_1 + 0x48) == 0) {
              uVar4 = FUN_03395dc8(in_stack_00000028,*(undefined8 *)(param_1 + 0x40));
              *(undefined8 *)(param_1 + 0x48) = uVar4;
            }
            in_stack_00000058 = *(undefined8 *)(param_1 + 0x90);
            if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar2 = FUN_02f211a0(&stack0x00000058,
                                 *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
            if ((uVar2 >> 1 & 1) != 0) {
              FUN_033931b0(param_1);
              if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_03295500(0);
              uVar4 = FUN_033985d4();
              *(undefined8 *)(unaff_x25 + 0x30) = uVar4;
            }
          }
          lVar9 = FUN_03392404();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar2 = FUN_027bd894(lVar9,param_1,*unaff_x29);
          if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar9 = *(long *)(unaff_x25 + 0x30);
          if ((lVar9 != 0) &&
             (lVar5 = thunk_FUN_01c495e4(lVar9,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0)) {
            uVar4 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar4,0);
          }
          if (*(uint *)(unaff_x23 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          unaff_x23[(long)(int)uVar2 + 4] = lVar9;
          *(char *)(unaff_x25 + 0x38) = (char)unaff_w24;
        }
      }
    } while (*(long *)(unaff_x25 + 0x18) == 0);
    uVar4 = FUN_03392404();
    lVar9 = *unaff_x28;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar9);
      lVar9 = *unaff_x28;
    }
    lVar5 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar5 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar9);
        lVar9 = *unaff_x28;
      }
      uVar14 = **(undefined8 **)(lVar9 + 0xb8);
      lVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar5,uVar14,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      unaff_x28 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar5;
    }
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    param_1 = FUN_0242e528(uVar4,lVar5,*(undefined8 *)(*(long *)(unaff_x25 + 0x18) + 0x60),
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
  } while( true );
LAB_0339dde0:
  do {
    do {
      uVar3 = FUN_029fd614(&stack0x00000060,*unaff_x19);
      lVar9 = in_stack_00000070;
      if ((uVar3 & 1) == 0) {
        FUN_029fd610(&stack0x00000060,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__
                    );
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
              lVar9 = *(long *)(unaff_x21 + 0xe0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),uVar4,
                         *(undefined8 *)(in_stack_00000070 + 0x10),
                         *(undefined8 *)(in_stack_00000070 + 0x30),*(undefined8 *)(lVar9 + 0x28));
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
              FUN_0339f5a0(in_stack_00000028,uVar4);
            }
          }
          FUN_029fd610(&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
        }
        FUN_0339cf34(in_stack_00000028);
        return uVar4;
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
    lVar12 = *(long *)(in_stack_00000070 + 0x30);
    uVar3 = FUN_0339c840(in_stack_00000028,lVar5);
    if ((uVar3 & 1) != 0) goto code_r0x0339de40;
  } while ((lVar12 == 0) || (*(char *)(lVar5 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar13 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar10 = *plVar13;
  uVar14 = *(undefined8 *)(lVar5 + 0x40);
  uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0339df30;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01c72498(plVar13,*(long *)
                                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                        ,0);
LAB_0339df30:
  plVar13 = (long *)(*(code *)*puVar6)(plVar13,uVar14,puVar6[1]);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)((long)plVar13 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar13);
    }
    if ((*(char *)((long)plVar13 + 0xf2) != '\0') && ((char)plVar13[5] == '\0')) {
      plVar13 = *(long **)(lVar5 + 0x68);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = *plVar13;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0339e000;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar13,*(long *)
                                     Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1)
      ;
LAB_0339e000:
      lVar5 = (*(code *)*puVar6)(plVar13,uVar4,puVar6[1]);
      if (lVar5 != 0) {
        uVar14 = thunk_FUN_01c5d21c(lVar5,0);
        plVar13 = (long *)FUN_03395e54(in_stack_00000028,uVar14);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                         0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar13);
        }
        if (*(char *)((long)plVar13 + 0xf1) == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_04237778;
          plVar7 = (long *)thunk_FUN_01c495e4(lVar5);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar5,uVar14);
          }
        }
        else {
          plVar7 = (long *)FUN_0338eda8(plVar13,lVar5);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04237778) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 6) * 0x10 + 0x138);
              goto LAB_0339e104;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar7,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
        uVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar3 & 1) == 0) {
          if (*(char *)((long)plVar13 + 0xf1) == '\0') {
            uVar14 = *(undefined8 *)PTR_DAT_04237778;
            plVar13 = (long *)thunk_FUN_01c495e4(lVar12,uVar14);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(lVar12,uVar14);
            }
          }
          else {
            plVar13 = (long *)FUN_0338eda8(plVar13,lVar12);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
          }
          lVar5 = *plVar13;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)
                   System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo)
              {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0339e1a8;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01c72498(plVar13,*(long *)
                                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                ,0);
LAB_0339e1a8:
          plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          do {
            lVar5 = *plVar13;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04230960) {
                  puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0339e210;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
            uVar3 = (*(code *)*puVar6)(plVar13,puVar6[1]);
            if ((uVar3 & 1) == 0) goto LAB_0339e2f4;
            lVar5 = *plVar13;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04230960) {
                  puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_0339e278;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
            uVar14 = (*(code *)*puVar6)(plVar13,puVar6[1]);
            lVar5 = *plVar7;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04237778) {
                  puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_0339e2e0;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_01c72498(plVar7,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
            (*(code *)*puVar6)(plVar7,uVar14,puVar6[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar13 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    if ((char)plVar13[5] == '\0') {
      plVar7 = *(long **)(lVar5 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0339e44c;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar7,*(long *)
                                    Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1);
LAB_0339e44c:
      lVar5 = (*(code *)*puVar6)(plVar7,uVar4,puVar6[1]);
      if (lVar5 != 0) {
        if ((char)plVar13[0x20] == '\0') {
          uVar14 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
          plVar7 = (long *)thunk_FUN_01c495e4(lVar5,uVar14);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar5,uVar14);
          }
        }
        else {
          plVar7 = (long *)OVRPlugin_Sizei___cctor(plVar13,lVar5);
        }
        if ((char)plVar13[0x20] == '\0') {
          uVar14 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
          plVar13 = (long *)thunk_FUN_01c495e4(lVar12,uVar14);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar12,uVar14);
          }
        }
        else {
          plVar13 = (long *)OVRPlugin_Sizei___cctor(plVar13,lVar12);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        lVar5 = *plVar13;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 9) * 0x10 + 0x138);
              goto LAB_0339e538;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar13,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,9)
        ;
LAB_0339e538:
        plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        do {
          lVar5 = *plVar13;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04230960) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0339e5a0;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
          uVar3 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          if ((uVar3 & 1) == 0) goto LAB_0339e690;
          lVar5 = *plVar13;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04236800) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_0339e608;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
          auVar15 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar5 = *plVar7;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_0339e678;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01c72498(plVar7,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,1
                               );
LAB_0339e678:
          (*(code *)*puVar6)(plVar7,auVar15._0_8_,auVar15._8_8_,puVar6[1]);
        } while( true );
      }
    }
  }
  goto LAB_0339e3dc;
code_r0x0339de40:
  plVar13 = *(long **)(lVar5 + 0x68);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = *plVar13;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0339df04;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01c72498(plVar13,*(long *)
                                 Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
LAB_0339df04:
  (*(code *)*puVar6)(plVar13,uVar4,lVar12,puVar6[1]);
  *(undefined1 *)(lVar9 + 0x38) = 1;
  goto LAB_0339dde0;
LAB_0339e690:
  plVar13 = (long *)thunk_FUN_01c495e4(plVar13,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar13 != (long *)0x0) {
    lVar5 = *plVar13;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar6)(plVar13,puVar6[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar13 = (long *)thunk_FUN_01c495e4(plVar13,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar13 != (long *)0x0) {
    lVar5 = *plVar13;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar6)(plVar13,puVar6[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar9 + 0x38) = 1;
  goto LAB_0339dde0;
}


