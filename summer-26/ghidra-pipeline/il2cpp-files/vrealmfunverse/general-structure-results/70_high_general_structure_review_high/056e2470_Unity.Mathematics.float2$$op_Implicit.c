/*
FUNCTION_NAME: Unity.Mathematics.float2$$op_Implicit
ENTRY_POINT: 056e2470
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

void Unity_Mathematics_float2__op_Implicit(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 *unaff_x20;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
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
  
  puVar8 = 
  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_ComputeCandidateTiebreaker__;
  puVar7 = PTR_DAT_0632f140;
  puVar6 = PTR_DAT_06322948;
  puVar5 = PTR_DAT_06312f90;
  puVar4 = PTR_DAT_06312310;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) < 1)) {
LAB_056e300c:
    *unaff_x20 = 1;
    return;
  }
  uVar18 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar18) goto LAB_056e300c;
    if (*(uint *)(param_1 + 0x18) <= uVar18) {
LAB_056e3034:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    param_1 = param_1 + uVar18 * 0x20;
    in_stack_00000148 = *(undefined8 *)(param_1 + 0x28);
    in_stack_00000140 = *(undefined8 *)(param_1 + 0x20);
    uVar24 = *(undefined8 *)(param_1 + 0x38);
    lVar23 = *(long *)(param_1 + 0x30);
    if (lVar23 == 0) break;
    if (0 < (int)*(ulong *)(lVar23 + 0x18)) {
      uVar20 = 0;
      uVar14 = *(ulong *)(lVar23 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar20) goto LAB_056e3034;
        lVar15 = lVar23 + uVar20 * 0x48;
        memmove(&stack0x000000f0,(void *)(lVar15 + 0x20),0x48);
        uVar9 = in_stack_00000118;
        uVar14 = FUN_04c09ac4(in_stack_00000118,0);
        if ((uVar14 & 1) == 0) {
          uVar9 = FUN_05712e74(uVar9,0);
          lVar10 = FUN_031c91ac(uVar9,*(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Awake__
                               );
          if (lVar10 == 0) goto LAB_056e3008;
          uVar1 = *(undefined4 *)(lVar10 + 0x18);
          lVar11 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063145b0);
          FUN_037a5d48(lVar11,uVar1,*(undefined8 *)PTR_DAT_063277b0);
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
          uVar14 = FUN_04728b6c(&stack0x000000c0,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                               );
          uVar9 = in_stack_000000d0;
          lVar10 = in_stack_00000060;
          if ((uVar14 & 1) != 0) {
            in_stack_000000a8 = in_stack_000000d8;
            in_stack_000000a0 = in_stack_000000d0;
            in_stack_000000b0 = in_stack_000000e0;
            if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            plVar12 = (long *)FUN_05720148(uVar9,0);
            if (in_stack_000000b0._4_4_ != 0) {
              if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar14 = FUN_04d938a0(plVar12,0,0);
              if ((uVar14 & 1) == 0) {
                in_stack_00000058 = (undefined8 *)in_stack_000000b0;
                in_stack_00000050 = in_stack_000000a8;
                uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                                   ,&stack0x00000050);
                lVar10 = *(long *)puVar8;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar10 = *(long *)puVar8;
                }
                puVar16 = *(undefined8 **)(lVar10 + 0xb8);
                lVar17 = puVar16[1];
                if (lVar17 == 0) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    puVar16 = *(undefined8 **)(*(long *)puVar8 + 0xb8);
                  }
                  uVar21 = *puVar16;
                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                             );
                  FUN_049bf70c(lVar17,uVar21,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                               ,0);
                  plVar13 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
                  *plVar13 = lVar17;
                  thunk_FUN_02bb0e9c(plVar13,lVar17);
                  lVar10 = *(long *)puVar8;
                }
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar10 = *(long *)puVar8;
                }
                puVar16 = *(undefined8 **)(lVar10 + 0xb8);
                lVar22 = puVar16[2];
                if (lVar22 == 0) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    puVar16 = *(undefined8 **)(*(long *)puVar8 + 0xb8);
                  }
                  uVar21 = *puVar16;
                  lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                             );
                  FUN_049bf70c(lVar22,uVar21,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                               ,0);
                  plVar13 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
                  *plVar13 = lVar22;
                  thunk_FUN_02bb0e9c(plVar13,lVar22);
                }
                lVar10 = FUN_031c781c(uVar9,lVar17,lVar22,
                                      *(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_set_Selector__
                                     );
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar9 = (**(code **)(*plVar12 + 0x6c8))
                                  (plVar12,0x14,*(undefined8 *)(*plVar12 + 0x6d0));
                lVar17 = *(long *)puVar8;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar17 = *(long *)puVar8;
                }
                puVar16 = *(undefined8 **)(lVar17 + 0xb8);
                lVar22 = puVar16[3];
                if (lVar22 == 0) {
                  if (*(int *)(lVar17 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    puVar16 = *(undefined8 **)(*(long *)puVar8 + 0xb8);
                  }
                  uVar21 = *puVar16;
                  lVar22 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320f98);
                  FUN_049c0700(lVar22,uVar21,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenStateChanged__
                               ,0);
                  plVar12 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x18);
                  *plVar12 = lVar22;
                  thunk_FUN_02bb0e9c(plVar12,lVar22);
                }
                plVar12 = (long *)FUN_031ca23c(uVar9,lVar22,*(undefined8 *)PTR_DAT_06320f90);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar17 = *plVar12;
                uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar14 != 0) {
                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06322940) {
                      puVar16 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_056e28f8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar14 != 0);
                }
                puVar16 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06322940,0);
LAB_056e28f8:
                in_stack_00000098 = (long *)(*(code *)*puVar16)(plVar12,puVar16[1]);
                in_stack_00000058 = &stack0x00000098;
                in_stack_00000050 = 0;
                if (in_stack_00000098 == (long *)0x0) {
LAB_056e2b30:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                bVar3 = false;
                do {
                  plVar12 = in_stack_00000098;
                  lVar17 = *in_stack_00000098;
                  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar14 != 0) {
                    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                        puVar16 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_056e2970;
                      }
                      uVar14 = uVar14 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar16 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)puVar5,0);
LAB_056e2970:
                  uVar14 = (*(code *)*puVar16)(plVar12,puVar16[1]);
                  plVar12 = in_stack_00000098;
                  if ((uVar14 & 1) == 0) goto LAB_056e2b38;
                  if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  lVar17 = *in_stack_00000098;
                  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar14 != 0) {
                    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
                        puVar16 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_056e29d4;
                      }
                      uVar14 = uVar14 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar16 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)puVar6,0);
LAB_056e29d4:
                  plVar12 = (long *)(*(code *)*puVar16)(plVar12,puVar16[1]);
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0))
                  ;
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4(uVar9,uVar9);
                  }
                  uVar14 = FUN_0452f928(lVar10,uVar9,&stack0x00000090,*(undefined8 *)puVar7);
                  if (((uVar14 & 1) != 0) &&
                     (uVar14 = FUN_04d79328(in_stack_00000090,(long)&stack0x00000088 + 4,0),
                     (uVar14 & 1) != 0)) {
                    uVar9 = (**(code **)(*plVar12 + 0x248))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x250));
                    if (*(int *)(*(long *)(puVar4 + 0x98) + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar9 = FUN_04dafea4(uVar9,0);
                    uVar9 = FUN_031a9210(uVar9,*(undefined8 *)
                                                Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenPreprocessed__
                                        );
                    lVar17 = FUN_031c7494(uVar9,*(undefined8 *)PTR_DAT_063387a0);
                    if (-1 < (int)uStack000000000000008c) {
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      if ((int)uStack000000000000008c < *(int *)(lVar17 + 0x18)) {
                        uVar9 = (**(code **)(*plVar12 + 0x1b8))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                        if (*(uint *)(lVar17 + 0x18) <= uStack000000000000008c) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cacc();
                        }
                        uVar21 = *(undefined8 *)
                                  (lVar17 + (long)(int)uStack000000000000008c * 8 + 0x20);
                        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uStack0000000000000088 = FUN_04cff718(uVar21,0);
                        uVar21 = FUN_04d78c14(&stack0x00000088,0);
                        FUN_0452ddac(lVar10,uVar9,uVar21,*(undefined8 *)PTR_DAT_0631ac08);
                        bVar3 = true;
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
              lVar17 = *(long *)PTR_DAT_063173b8;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar2 = *(uint *)(lVar11 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                  thunk_FUN_02bb0e9c();
                }
                else {
                  FUN_037a6538(lVar11,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
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
          if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_056e3034;
          memmove((void *)(lVar15 + 0x20),&stack0x000000f0,0x48);
          thunk_FUN_02bb0e9c(lVar23 + 0x20 + uVar20 * 0x48,0);
        }
        uVar14 = (ulong)*(uint *)(lVar23 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)(int)*(uint *)(lVar23 + 0x18));
    }
    lVar15 = *(long *)(in_stack_00000020 + 4);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_056e3034;
    lVar15 = lVar15 + uVar18 * 0x20;
    *(undefined8 *)(lVar15 + 0x28) = in_stack_00000148;
    *(undefined8 *)(lVar15 + 0x20) = in_stack_00000140;
    *(undefined8 *)(lVar15 + 0x38) = uVar24;
    *(long *)(lVar15 + 0x30) = lVar23;
    thunk_FUN_02bb0e9c(lVar15 + 0x20,0);
    param_1 = *(long *)(in_stack_00000020 + 4);
    uVar18 = uVar18 + 1;
    unaff_x20 = in_stack_00000020;
  } while (param_1 != 0);
LAB_056e3008:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_056e2b38:
  if (in_stack_00000098 != (long *)0x0) {
    lVar17 = *in_stack_00000098;
    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar14 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar16 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_056e2ba0;
        }
        uVar14 = uVar14 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar14 != 0);
    }
    puVar16 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)PTR_DAT_06312f78,0);
LAB_056e2ba0:
    (*(code *)*puVar16)(plVar12,puVar16[1]);
  }
  if (!bVar3) {
    uVar9 = FUN_05712c7c(&stack0x000000a0,0);
    if (lVar11 != 0) {
      lVar10 = *(long *)(lVar11 + 0x10);
      lVar17 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar11,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_056e25c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar17 = *(long *)puVar8;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar17 = *(long *)puVar8;
  }
  puVar16 = *(undefined8 **)(lVar17 + 0xb8);
  lVar22 = puVar16[4];
  uVar9 = *(undefined8 *)PTR_DAT_0631da28;
  if (lVar22 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar16 = *(undefined8 **)(*(long *)puVar8 + 0xb8);
    }
    uVar21 = *puVar16;
    lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
    FUN_049bb31c(lVar22,uVar21,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_Awake__,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
    *plVar12 = lVar22;
    thunk_FUN_02bb0e9c(plVar12,lVar22);
  }
  uVar21 = FUN_031bc2cc(lVar10,lVar22,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenStateChanged__
                       );
  uVar9 = FUN_04c0b3e4(uVar9,uVar21,0);
  uVar9 = FUN_04c0ab28(in_stack_000000a0,*(undefined8 *)PTR_DAT_063220d0,uVar9,
                       *(undefined8 *)PTR_DAT_06314990,0);
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 0x10);
    lVar17 = *(long *)PTR_DAT_063173b8;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar11,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_056e25c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


