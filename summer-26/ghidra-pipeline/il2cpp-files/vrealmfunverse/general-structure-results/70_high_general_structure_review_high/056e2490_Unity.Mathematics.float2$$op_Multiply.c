/*
FUNCTION_NAME: Unity.Mathematics.float2$$op_Multiply
ENTRY_POINT: 056e2490
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

void Unity_Mathematics_float2__op_Multiply(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long lVar16;
  undefined4 *unaff_x20;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x26;
  long *plVar20;
  long unaff_x27;
  long *plVar21;
  long unaff_x29;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  undefined4 *in_stack_00000020;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  uint uStack000000000000008c;
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
  
  puVar4 = PTR_DAT_0632f140;
  lVar16 = *(long *)(unaff_x19 + 0x310);
  plVar20 = *(long **)(unaff_x26 + 0xfe0);
  plVar21 = *(long **)(unaff_x27 + 0xf90);
  plVar22 = *(long **)(unaff_x29 + 0x948);
  uVar14 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar14) {
      *unaff_x20 = 1;
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar14) {
LAB_056e3034:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    param_1 = param_1 + uVar14 * 0x20;
    in_stack_00000148 = *(undefined8 *)(param_1 + 0x28);
    in_stack_00000140 = *(undefined8 *)(param_1 + 0x20);
    uVar24 = *(undefined8 *)(param_1 + 0x38);
    lVar23 = *(long *)(param_1 + 0x30);
    if (lVar23 == 0) break;
    if (0 < (int)*(ulong *)(lVar23 + 0x18)) {
      uVar17 = 0;
      uVar10 = *(ulong *)(lVar23 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar17) goto LAB_056e3034;
        lVar11 = lVar23 + uVar17 * 0x48;
        memmove(&stack0x000000f0,(void *)(lVar11 + 0x20),0x48);
        uVar5 = in_stack_00000118;
        uVar10 = FUN_04c09ac4(in_stack_00000118,0);
        if ((uVar10 & 1) == 0) {
          uVar5 = FUN_05712e74(uVar5,0);
          lVar6 = FUN_031c91ac(uVar5,*(undefined8 *)
                                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Awake__
                              );
          if (lVar6 == 0) goto LAB_056e3008;
          uVar1 = *(undefined4 *)(lVar6 + 0x18);
          lVar7 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063145b0);
          FUN_037a5d48(lVar7,uVar1,*(undefined8 *)PTR_DAT_063277b0);
          FUN_037913fc(&stack0x00000060,lVar6,
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
          uVar10 = FUN_04728b6c(&stack0x000000c0,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                               );
          uVar5 = in_stack_000000d0;
          lVar6 = in_stack_00000060;
          if ((uVar10 & 1) != 0) {
            in_stack_000000a8 = in_stack_000000d8;
            in_stack_000000a0 = in_stack_000000d0;
            in_stack_000000b0 = in_stack_000000e0;
            if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            plVar8 = (long *)FUN_05720148(uVar5,0);
            if (in_stack_000000b0._4_4_ != 0) {
              if (*(int *)(*(long *)(lVar16 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar10 = FUN_04d938a0(plVar8,0,0);
              if ((uVar10 & 1) == 0) {
                in_stack_00000058 = (undefined8 *)in_stack_000000b0;
                in_stack_00000050 = in_stack_000000a8;
                uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                                   ,&stack0x00000050);
                lVar6 = *plVar20;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar6 = *plVar20;
                }
                puVar12 = *(undefined8 **)(lVar6 + 0xb8);
                lVar13 = puVar12[1];
                if (lVar13 == 0) {
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    puVar12 = *(undefined8 **)(*plVar20 + 0xb8);
                  }
                  uVar18 = *puVar12;
                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                             );
                  FUN_049bf70c(lVar13,uVar18,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                               ,0);
                  plVar9 = (long *)(*(long *)(*plVar20 + 0xb8) + 8);
                  *plVar9 = lVar13;
                  thunk_FUN_02bb0e9c(plVar9,lVar13);
                  lVar6 = *plVar20;
                }
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar6 = *plVar20;
                }
                puVar12 = *(undefined8 **)(lVar6 + 0xb8);
                lVar19 = puVar12[2];
                if (lVar19 == 0) {
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    puVar12 = *(undefined8 **)(*plVar20 + 0xb8);
                  }
                  uVar18 = *puVar12;
                  lVar19 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                             );
                  FUN_049bf70c(lVar19,uVar18,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                               ,0);
                  plVar9 = (long *)(*(long *)(*plVar20 + 0xb8) + 0x10);
                  *plVar9 = lVar19;
                  thunk_FUN_02bb0e9c(plVar9,lVar19);
                }
                lVar6 = FUN_031c781c(uVar5,lVar13,lVar19,
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_set_Selector__
                                    );
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar5 = (**(code **)(*plVar8 + 0x6c8))(plVar8,0x14,*(undefined8 *)(*plVar8 + 0x6d0))
                ;
                lVar13 = *plVar20;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar13 = *plVar20;
                }
                puVar12 = *(undefined8 **)(lVar13 + 0xb8);
                lVar19 = puVar12[3];
                if (lVar19 == 0) {
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    puVar12 = *(undefined8 **)(*plVar20 + 0xb8);
                  }
                  uVar18 = *puVar12;
                  lVar19 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320f98);
                  FUN_049c0700(lVar19,uVar18,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenStateChanged__
                               ,0);
                  plVar8 = (long *)(*(long *)(*plVar20 + 0xb8) + 0x18);
                  *plVar8 = lVar19;
                  thunk_FUN_02bb0e9c(plVar8,lVar19);
                }
                plVar8 = (long *)FUN_031ca23c(uVar5,lVar19,*(undefined8 *)PTR_DAT_06320f90);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar13 = *plVar8;
                uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar10 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06322940) {
                      puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_056e28f8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)PTR_DAT_06322940,0);
LAB_056e28f8:
                in_stack_00000098 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
                in_stack_00000058 = &stack0x00000098;
                in_stack_00000050 = 0;
                if (in_stack_00000098 == (long *)0x0) {
LAB_056e2b30:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                bVar3 = false;
                do {
                  plVar8 = in_stack_00000098;
                  lVar13 = *in_stack_00000098;
                  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar10 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *plVar21) {
                        puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_056e2970;
                      }
                      uVar10 = uVar10 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*plVar21,0);
LAB_056e2970:
                  uVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
                  plVar8 = in_stack_00000098;
                  if ((uVar10 & 1) == 0) goto LAB_056e2b38;
                  if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  lVar13 = *in_stack_00000098;
                  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar10 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *plVar22) {
                        puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_056e29d4;
                      }
                      uVar10 = uVar10 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*plVar22,0);
LAB_056e29d4:
                  plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  uVar5 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4(uVar5,uVar5);
                  }
                  uVar10 = FUN_0452f928(lVar6,uVar5,&stack0x00000090,*(undefined8 *)puVar4);
                  if (((uVar10 & 1) != 0) &&
                     (uVar10 = FUN_04d79328(in_stack_00000090,(long)&stack0x00000088 + 4,0),
                     (uVar10 & 1) != 0)) {
                    uVar5 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
                    if (*(int *)(*(long *)(lVar16 + 0x98) + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar5 = FUN_04dafea4(uVar5,0);
                    uVar5 = FUN_031a9210(uVar5,*(undefined8 *)
                                                Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenPreprocessed__
                                        );
                    lVar13 = FUN_031c7494(uVar5,*(undefined8 *)PTR_DAT_063387a0);
                    if (-1 < (int)uStack000000000000008c) {
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      if ((int)uStack000000000000008c < *(int *)(lVar13 + 0x18)) {
                        uVar5 = (**(code **)(*plVar8 + 0x1b8))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                        if (*(uint *)(lVar13 + 0x18) <= uStack000000000000008c) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cacc();
                        }
                        uVar18 = *(undefined8 *)
                                  (lVar13 + (long)(int)uStack000000000000008c * 8 + 0x20);
                        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uStack0000000000000088 = FUN_04cff718(uVar18,0);
                        uVar18 = FUN_04d78c14(&stack0x00000088,0);
                        FUN_0452ddac(lVar6,uVar5,uVar18,*(undefined8 *)PTR_DAT_0631ac08);
                        bVar3 = true;
                      }
                    }
                  }
                  if (in_stack_00000098 == (long *)0x0) goto LAB_056e2b30;
                } while( true );
              }
            }
            uVar5 = FUN_05712c7c(&stack0x000000a0,0);
            if (lVar7 != 0) {
              lVar6 = *(long *)(lVar7 + 0x10);
              lVar13 = *(long *)PTR_DAT_063173b8;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar2 = *(uint *)(lVar7 + 0x18);
                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
                  thunk_FUN_02bb0e9c();
                }
                else {
                  FUN_037a6538(lVar7,uVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
          if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cabc(lVar6);
          }
          in_stack_00000118 = FUN_04c0b3e4(*(undefined8 *)PTR_DAT_0631d9f8,lVar7,0);
          thunk_FUN_02bb0e9c(&stack0x00000118,in_stack_00000118);
          if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_056e3034;
          memmove((void *)(lVar11 + 0x20),&stack0x000000f0,0x48);
          thunk_FUN_02bb0e9c(lVar23 + 0x20 + uVar17 * 0x48,0);
        }
        uVar10 = (ulong)*(uint *)(lVar23 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar23 + 0x18));
    }
    lVar11 = *(long *)(in_stack_00000020 + 4);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_056e3034;
    lVar11 = lVar11 + uVar14 * 0x20;
    *(undefined8 *)(lVar11 + 0x28) = in_stack_00000148;
    *(undefined8 *)(lVar11 + 0x20) = in_stack_00000140;
    *(undefined8 *)(lVar11 + 0x38) = uVar24;
    *(long *)(lVar11 + 0x30) = lVar23;
    thunk_FUN_02bb0e9c(lVar11 + 0x20,0);
    param_1 = *(long *)(in_stack_00000020 + 4);
    uVar14 = uVar14 + 1;
    unaff_x20 = in_stack_00000020;
  } while (param_1 != 0);
LAB_056e3008:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_056e2b38:
  if (in_stack_00000098 != (long *)0x0) {
    lVar13 = *in_stack_00000098;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_056e2ba0;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)PTR_DAT_06312f78,0);
LAB_056e2ba0:
    (*(code *)*puVar12)(plVar8,puVar12[1]);
  }
  if (!bVar3) {
    uVar5 = FUN_05712c7c(&stack0x000000a0,0);
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar7 + 0x10);
      lVar13 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar7,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_056e25c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar13 = *plVar20;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar13 = *plVar20;
  }
  puVar12 = *(undefined8 **)(lVar13 + 0xb8);
  lVar19 = puVar12[4];
  uVar5 = *(undefined8 *)PTR_DAT_0631da28;
  if (lVar19 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar12 = *(undefined8 **)(*plVar20 + 0xb8);
    }
    uVar18 = *puVar12;
    lVar19 = thunk_FUN_02b79644(*(undefined8 *)
                                 UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
    FUN_049bb31c(lVar19,uVar18,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_Awake__,0);
    plVar8 = (long *)(*(long *)(*plVar20 + 0xb8) + 0x20);
    *plVar8 = lVar19;
    thunk_FUN_02bb0e9c(plVar8,lVar19);
  }
  uVar18 = FUN_031bc2cc(lVar6,lVar19,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenStateChanged__
                       );
  uVar5 = FUN_04c0b3e4(uVar5,uVar18,0);
  uVar5 = FUN_04c0ab28(in_stack_000000a0,*(undefined8 *)PTR_DAT_063220d0,uVar5,
                       *(undefined8 *)PTR_DAT_06314990,0);
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar7 + 0x10);
    lVar13 = *(long *)PTR_DAT_063173b8;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      goto LAB_056e25c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


