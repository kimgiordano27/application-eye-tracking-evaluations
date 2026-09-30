/*
FUNCTION_NAME: Unity.Mathematics.float2$$.ctor
ENTRY_POINT: 056e245c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x056e2bb8) */
/* WARNING: Removing unreachable block (ram,0x056e2ee4) */
/* WARNING: Removing unreachable block (ram,0x056e2e44) */

void Unity_Mathematics_float2___ctor(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined4 *unaff_x20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long lStack0000000000000088;
  undefined8 in_stack_00000090;
  long *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  puVar7 = 
  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_ComputeCandidateTiebreaker__;
  puVar6 = PTR_DAT_0632f140;
  puVar5 = PTR_DAT_06322948;
  puVar4 = PTR_DAT_06312f90;
  puVar3 = PTR_DAT_06312310;
  lStack0000000000000088 = 0;
                    /* try { // try from 056e2464 to 057e246f has its CatchHandler @ 056e2550 */
  if (in_ZR || in_NG != in_OV) {
    lVar14 = *(long *)(unaff_x20 + 4);
    if ((lVar14 != 0) && (0 < *(int *)(lVar14 + 0x18))) {
      uVar19 = 0;
      do {
        if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar19) goto LAB_056e300c;
        if (*(uint *)(lVar14 + 0x18) <= uVar19) {
LAB_056e3034:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar14 = lVar14 + uVar19 * 0x20;
        in_stack_00000148 = *(undefined8 *)(lVar14 + 0x28);
        in_stack_00000140 = *(undefined8 *)(lVar14 + 0x20);
        uVar24 = *(undefined8 *)(lVar14 + 0x38);
        lVar14 = *(long *)(lVar14 + 0x30);
        if (lVar14 == 0) break;
        if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
          uVar21 = 0;
          uVar15 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
          do {
            if (uVar15 <= uVar21) goto LAB_056e3034;
            lVar16 = lVar14 + uVar21 * 0x48;
            memmove(&stack0x000000f0,(void *)(lVar16 + 0x20),0x48);
            uVar9 = in_stack_00000118;
            uVar15 = FUN_04c09ac4(in_stack_00000118,0);
            if ((uVar15 & 1) == 0) {
              uVar9 = FUN_05712e74(uVar9,0);
              lVar10 = FUN_031c91ac(uVar9,*(undefined8 *)
                                           Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Awake__
                                   );
              if (lVar10 == 0) goto LAB_056e3008;
              uVar8 = *(undefined4 *)(lVar10 + 0x18);
              lVar11 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063145b0);
              FUN_037a5d48(lVar11,uVar8,*(undefined8 *)PTR_DAT_063277b0);
              FUN_037913fc(&stack0x00000060,lVar10,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__
                          );
              in_stack_000000e0 = in_stack_00000080;
              in_stack_000000c8 = in_stack_00000068;
              in_stack_000000c0 = in_stack_00000060;
              in_stack_000000d8 = in_stack_00000078;
              in_stack_000000d0 = in_stack_00000070;
              in_stack_00000060 = 0;
              in_stack_00000068 = &stack0x000000c0;
LAB_056e25c0:
              uVar15 = FUN_04728b6c(&stack0x000000c0,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                                   );
              uVar9 = in_stack_000000d0;
              lVar10 = in_stack_00000060;
              if ((uVar15 & 1) != 0) {
                in_stack_000000a8 = in_stack_000000d8;
                in_stack_000000a0 = in_stack_000000d0;
                in_stack_000000b0 = in_stack_000000e0;
                if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                plVar12 = (long *)FUN_05720148(uVar9,0);
                if (in_stack_000000b0._4_4_ != 0) {
                  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar15 = FUN_04d938a0(plVar12,0,0);
                  if ((uVar15 & 1) == 0) {
                    in_stack_00000058 = (undefined8 *)in_stack_000000b0;
                    in_stack_00000050 = in_stack_000000a8;
                    uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)
                                        Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                                       ,&stack0x00000050);
                    lVar10 = *(long *)puVar7;
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar10 = *(long *)puVar7;
                    }
                    puVar17 = *(undefined8 **)(lVar10 + 0xb8);
                    lVar18 = puVar17[1];
                    if (lVar18 == 0) {
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        puVar17 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                      }
                      uVar22 = *puVar17;
                      lVar18 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                      
                                                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                                 );
                      FUN_049bf70c(lVar18,uVar22,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                                   ,0);
                      plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                      *plVar13 = lVar18;
                      thunk_FUN_02bb0e9c(plVar13,lVar18);
                      lVar10 = *(long *)puVar7;
                    }
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar10 = *(long *)puVar7;
                    }
                    puVar17 = *(undefined8 **)(lVar10 + 0xb8);
                    lVar23 = puVar17[2];
                    if (lVar23 == 0) {
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        puVar17 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                      }
                      uVar22 = *puVar17;
                      lVar23 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                      
                                                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                                 );
                      FUN_049bf70c(lVar23,uVar22,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                                   ,0);
                      plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
                      *plVar13 = lVar23;
                      thunk_FUN_02bb0e9c(plVar13,lVar23);
                    }
                    lVar10 = FUN_031c781c(uVar9,lVar18,lVar23,
                                          *(undefined8 *)
                                           Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_set_Selector__
                                         );
                    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    uVar9 = (**(code **)(*plVar12 + 0x6c8))
                                      (plVar12,0x14,*(undefined8 *)(*plVar12 + 0x6d0));
                    lVar18 = *(long *)puVar7;
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar18 = *(long *)puVar7;
                    }
                    puVar17 = *(undefined8 **)(lVar18 + 0xb8);
                    lVar23 = puVar17[3];
                    if (lVar23 == 0) {
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        puVar17 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                      }
                      uVar22 = *puVar17;
                      lVar23 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320f98);
                      FUN_049c0700(lVar23,uVar22,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenStateChanged__
                                   ,0);
                      plVar12 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
                      *plVar12 = lVar23;
                      thunk_FUN_02bb0e9c(plVar12,lVar23);
                    }
                    plVar12 = (long *)FUN_031ca23c(uVar9,lVar23,*(undefined8 *)PTR_DAT_06320f90);
                    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    lVar18 = *plVar12;
                    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    if (uVar15 != 0) {
                      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06322940) {
                          puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                          goto LAB_056e28f8;
                        }
                        uVar15 = uVar15 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar15 != 0);
                    }
                    puVar17 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06322940,0);
LAB_056e28f8:
                    in_stack_00000098 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
                    in_stack_00000058 = &stack0x00000098;
                    in_stack_00000050 = 0;
                    if (in_stack_00000098 == (long *)0x0) {
LAB_056e2b30:
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    bVar2 = false;
                    do {
                      plVar12 = in_stack_00000098;
                      lVar18 = *in_stack_00000098;
                      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                      if (uVar15 != 0) {
                        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                            puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_056e2970;
                          }
                          uVar15 = uVar15 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar15 != 0);
                      }
                      puVar17 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)puVar4,0);
LAB_056e2970:
                      uVar15 = (*(code *)*puVar17)(plVar12,puVar17[1]);
                      plVar12 = in_stack_00000098;
                      if ((uVar15 & 1) == 0) goto LAB_056e2b38;
                      if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      lVar18 = *in_stack_00000098;
                      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                      if (uVar15 != 0) {
                        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
                            puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_056e29d4;
                          }
                          uVar15 = uVar15 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar15 != 0);
                      }
                      puVar17 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)puVar5,0);
LAB_056e29d4:
                      plVar12 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
                      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      uVar9 = (**(code **)(*plVar12 + 0x1b8))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4(uVar9,uVar9);
                      }
                      uVar15 = FUN_0452f928(lVar10,uVar9,&stack0x00000090,*(undefined8 *)puVar6);
                      if (((uVar15 & 1) != 0) &&
                         (uVar15 = FUN_04d79328(in_stack_00000090,
                                                (undefined1 *)((long)register0x00000008 + 0x8c),0),
                         (uVar15 & 1) != 0)) {
                        uVar9 = (**(code **)(*plVar12 + 0x248))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x250));
                        if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar9 = FUN_04dafea4(uVar9,0);
                        uVar9 = FUN_031a9210(uVar9,*(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenPreprocessed__
                                            );
                        lVar18 = FUN_031c7494(uVar9,*(undefined8 *)PTR_DAT_063387a0);
                        if (-1 < lStack0000000000000088) {
                          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02b3cac4();
                          }
                          if ((int)lStack0000000000000088._4_4_ < *(int *)(lVar18 + 0x18)) {
                            uVar9 = (**(code **)(*plVar12 + 0x1b8))
                                              (plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                            if (*(uint *)(lVar18 + 0x18) <= lStack0000000000000088._4_4_) {
                    /* WARNING: Subroutine does not return */
                              FUN_02b3cacc();
                            }
                            uVar22 = *(undefined8 *)
                                      (lVar18 + (long)(int)lStack0000000000000088._4_4_ * 8 + 0x20);
                            if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                            }
                            uVar8 = FUN_04cff718(uVar22,0);
                            lStack0000000000000088 = CONCAT44(lStack0000000000000088._4_4_,uVar8);
                            uVar22 = FUN_04d78c14(&stack0x00000088,0);
                            FUN_0452ddac(lVar10,uVar9,uVar22,*(undefined8 *)PTR_DAT_0631ac08);
                            bVar2 = true;
                          }
                        }
                      }
                      if (in_stack_00000098 == (long *)0x0) goto LAB_056e2b30;
                    } while( true );
                  }
                }
                uVar9 = FUN_05712c7c(&stack0x000000a0,0);
                if (lVar11 != 0) {
                  lVar10 = *(long *)(lVar11 + 0x10);
                  lVar18 = *(long *)PTR_DAT_063173b8;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar11,uVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                    goto LAB_056e25c0;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_04728b68(in_stack_00000068,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_ComputeCandidateTiebreaker__
                          );
              if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cabc(lVar10);
              }
              in_stack_00000118 = FUN_04c0b3e4(*(undefined8 *)PTR_DAT_0631d9f8,lVar11,0);
              thunk_FUN_02bb0e9c(&stack0x00000118,in_stack_00000118);
              if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_056e3034;
              memmove((void *)(lVar16 + 0x20),&stack0x000000f0,0x48);
              thunk_FUN_02bb0e9c(lVar14 + 0x20 + uVar21 * 0x48,0);
            }
            uVar15 = (ulong)*(uint *)(lVar14 + 0x18);
            uVar21 = uVar21 + 1;
          } while ((long)uVar21 < (long)(int)*(uint *)(lVar14 + 0x18));
        }
        lVar16 = *(long *)(unaff_x20 + 4);
        if (lVar16 == 0) break;
        if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_056e3034;
        lVar16 = lVar16 + uVar19 * 0x20;
        *(undefined8 *)(lVar16 + 0x28) = in_stack_00000148;
        *(undefined8 *)(lVar16 + 0x20) = in_stack_00000140;
        *(undefined8 *)(lVar16 + 0x38) = uVar24;
        *(long *)(lVar16 + 0x30) = lVar14;
        thunk_FUN_02bb0e9c(lVar16 + 0x20,0);
        lVar14 = *(long *)(unaff_x20 + 4);
        uVar19 = uVar19 + 1;
      } while (lVar14 != 0);
LAB_056e3008:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
LAB_056e300c:
    *unaff_x20 = 1;
  }
  return;
LAB_056e2b38:
  if (in_stack_00000098 != (long *)0x0) {
    lVar18 = *in_stack_00000098;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_056e2ba0;
        }
        uVar15 = uVar15 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar15 != 0);
    }
    puVar17 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)PTR_DAT_06312f78,0);
LAB_056e2ba0:
    (*(code *)*puVar17)(plVar12,puVar17[1]);
  }
  if (!bVar2) {
    uVar9 = FUN_05712c7c(&stack0x000000a0,0);
    if (lVar11 != 0) {
      lVar10 = *(long *)(lVar11 + 0x10);
      lVar18 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar11,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_056e25c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar18 = *(long *)puVar7;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar18 = *(long *)puVar7;
  }
  puVar17 = *(undefined8 **)(lVar18 + 0xb8);
  lVar23 = puVar17[4];
  uVar9 = *(undefined8 *)PTR_DAT_0631da28;
  if (lVar23 == 0) {
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar17 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar22 = *puVar17;
    lVar23 = thunk_FUN_02b79644(*(undefined8 *)
                                 UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
    FUN_049bb31c(lVar23,uVar22,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_Awake__,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
    *plVar12 = lVar23;
    thunk_FUN_02bb0e9c(plVar12,lVar23);
  }
  uVar22 = FUN_031bc2cc(lVar10,lVar23,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenStateChanged__
                       );
  uVar9 = FUN_04c0b3e4(uVar9,uVar22,0);
  uVar9 = FUN_04c0ab28(in_stack_000000a0,*(undefined8 *)PTR_DAT_063220d0,uVar9,
                       *(undefined8 *)PTR_DAT_06314990,0);
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 0x10);
    lVar18 = *(long *)PTR_DAT_063173b8;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar11,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_056e25c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


