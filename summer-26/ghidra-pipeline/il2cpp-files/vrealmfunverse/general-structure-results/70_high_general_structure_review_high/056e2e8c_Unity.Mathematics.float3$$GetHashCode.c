/*
FUNCTION_NAME: Unity.Mathematics.float3$$GetHashCode
ENTRY_POINT: 056e2e8c
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

void Unity_Mathematics_float3__GetHashCode(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  ulong unaff_x23;
  undefined8 uVar13;
  long lVar14;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 *in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000040;
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
  
  do {
    memmove((void *)(param_1 + 0x20),param_3,0x48);
    thunk_FUN_02bb0e9c(in_stack_00000030 + unaff_x23 * 0x48,0);
    lVar10 = in_stack_00000040;
    do {
      uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
      unaff_x23 = unaff_x23 + 1;
      if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)unaff_x23) {
        do {
          lVar10 = *(long *)(in_stack_00000020 + 4);
          if (lVar10 == 0) goto LAB_056e3008;
          if (*(uint *)(lVar10 + 0x18) <= in_stack_00000028) goto LAB_056e3034;
          lVar10 = lVar10 + in_stack_00000028 * 0x20;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000148;
          *(undefined8 *)(lVar10 + 0x20) = in_stack_00000140;
          *(undefined8 *)(lVar10 + 0x38) = in_stack_00000018;
          *(long *)(lVar10 + 0x30) = in_stack_00000010;
          thunk_FUN_02bb0e9c(lVar10 + 0x20,0);
          lVar10 = *(long *)(in_stack_00000020 + 4);
          in_stack_00000028 = in_stack_00000028 + 1;
          if (lVar10 == 0) goto LAB_056e3008;
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)in_stack_00000028) {
            *in_stack_00000020 = 1;
            return;
          }
          if (*(uint *)(lVar10 + 0x18) <= in_stack_00000028) goto LAB_056e3034;
          lVar10 = lVar10 + in_stack_00000028 * 0x20;
          in_stack_00000148 = *(undefined8 *)(lVar10 + 0x28);
          in_stack_00000140 = *(undefined8 *)(lVar10 + 0x20);
          in_stack_00000018 = *(undefined8 *)(lVar10 + 0x38);
          lVar10 = *(long *)(lVar10 + 0x30);
          if (lVar10 == 0) goto LAB_056e3008;
          in_stack_00000010 = lVar10;
        } while ((int)*(ulong *)(lVar10 + 0x18) < 1);
        unaff_x23 = 0;
        in_stack_00000030 = lVar10 + 0x20;
        uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        in_stack_00000040 = lVar10;
      }
      if (uVar9 <= unaff_x23) goto LAB_056e3034;
      param_1 = lVar10 + unaff_x23 * 0x48;
      memmove(&stack0x000000f0,(void *)(param_1 + 0x20),0x48);
      uVar4 = in_stack_00000118;
      uVar9 = FUN_04c09ac4(in_stack_00000118,0);
    } while ((uVar9 & 1) != 0);
    uVar4 = FUN_05712e74(uVar4,0);
    lVar10 = FUN_031c91ac(uVar4,*(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Awake__
                         );
    if (lVar10 == 0) {
LAB_056e3008:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(undefined4 *)(lVar10 + 0x18);
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063145b0);
    FUN_037a5d48(lVar5,uVar1,*(undefined8 *)PTR_DAT_063277b0);
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
    uVar9 = FUN_04728b6c(&stack0x000000c0,
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                        );
    uVar4 = in_stack_000000d0;
    lVar10 = in_stack_00000060;
    if ((uVar9 & 1) != 0) {
      in_stack_000000a8 = in_stack_000000d8;
      in_stack_000000a0 = in_stack_000000d0;
      in_stack_000000b0 = in_stack_000000e0;
      if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      plVar6 = (long *)FUN_05720148(uVar4,0);
      if (in_stack_000000b0._4_4_ != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_04d938a0(plVar6,0,0);
        if ((uVar9 & 1) == 0) {
          in_stack_00000058 = (undefined8 *)in_stack_000000b0;
          in_stack_00000050 = in_stack_000000a8;
          uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)
                              Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                             ,&stack0x00000050);
          lVar10 = *unaff_x26;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar10 = *unaff_x26;
          }
          puVar8 = *(undefined8 **)(lVar10 + 0xb8);
          lVar11 = puVar8[1];
          if (lVar11 == 0) {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar8 = *(undefined8 **)(*unaff_x26 + 0xb8);
            }
            uVar13 = *puVar8;
            lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                       );
            FUN_049bf70c(lVar11,uVar13,
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                         ,0);
            plVar7 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
            *plVar7 = lVar11;
            thunk_FUN_02bb0e9c(plVar7,lVar11);
            lVar10 = *unaff_x26;
          }
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar10 = *unaff_x26;
          }
          puVar8 = *(undefined8 **)(lVar10 + 0xb8);
          lVar14 = puVar8[2];
          if (lVar14 == 0) {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar8 = *(undefined8 **)(*unaff_x26 + 0xb8);
            }
            uVar13 = *puVar8;
            lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                       );
            FUN_049bf70c(lVar14,uVar13,
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                         ,0);
            plVar7 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x10);
            *plVar7 = lVar14;
            thunk_FUN_02bb0e9c(plVar7,lVar14);
          }
          lVar10 = FUN_031c781c(uVar4,lVar11,lVar14,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_set_Selector__
                               );
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar4 = (**(code **)(*plVar6 + 0x6c8))(plVar6,0x14,*(undefined8 *)(*plVar6 + 0x6d0));
          lVar11 = *unaff_x26;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar11 = *unaff_x26;
          }
          puVar8 = *(undefined8 **)(lVar11 + 0xb8);
          lVar14 = puVar8[3];
          if (lVar14 == 0) {
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar8 = *(undefined8 **)(*unaff_x26 + 0xb8);
            }
            uVar13 = *puVar8;
            lVar14 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320f98);
            FUN_049c0700(lVar14,uVar13,
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenStateChanged__
                         ,0);
            plVar6 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x18);
            *plVar6 = lVar14;
            thunk_FUN_02bb0e9c(plVar6,lVar14);
          }
          plVar6 = (long *)FUN_031ca23c(uVar4,lVar14,*(undefined8 *)PTR_DAT_06320f90);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06322940) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_056e28f8;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322940,0);
LAB_056e28f8:
          in_stack_00000098 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
          in_stack_00000058 = &stack0x00000098;
          in_stack_00000050 = 0;
          if (in_stack_00000098 == (long *)0x0) {
LAB_056e2b30:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          bVar3 = false;
          do {
            plVar6 = in_stack_00000098;
            lVar11 = *in_stack_00000098;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *unaff_x27) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_056e2970;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar8 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*unaff_x27,0);
LAB_056e2970:
            uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
            plVar6 = in_stack_00000098;
            if ((uVar9 & 1) == 0) goto LAB_056e2b38;
            if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar11 = *in_stack_00000098;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *unaff_x29) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_056e29d4;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar8 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*unaff_x29,0);
LAB_056e29d4:
            plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar4 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4(uVar4,uVar4);
            }
            uVar9 = FUN_0452f928(lVar10,uVar4,&stack0x00000090,*unaff_x28);
            if (((uVar9 & 1) != 0) &&
               (uVar9 = FUN_04d79328(in_stack_00000090,(long)&stack0x00000088 + 4,0),
               (uVar9 & 1) != 0)) {
              uVar4 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
              if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar4 = FUN_04dafea4(uVar4,0);
              uVar4 = FUN_031a9210(uVar4,*(undefined8 *)
                                          Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenPreprocessed__
                                  );
              lVar11 = FUN_031c7494(uVar4,*(undefined8 *)PTR_DAT_063387a0);
              if (-1 < (int)uStack000000000000008c) {
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                if ((int)uStack000000000000008c < *(int *)(lVar11 + 0x18)) {
                  uVar4 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                  if (*(uint *)(lVar11 + 0x18) <= uStack000000000000008c) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cacc();
                  }
                  uVar13 = *(undefined8 *)(lVar11 + (long)(int)uStack000000000000008c * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uStack0000000000000088 = FUN_04cff718(uVar13,0);
                  uVar13 = FUN_04d78c14(&stack0x00000088,0);
                  FUN_0452ddac(lVar10,uVar4,uVar13,*(undefined8 *)PTR_DAT_0631ac08);
                  bVar3 = true;
                }
              }
            }
            if (in_stack_00000098 == (long *)0x0) goto LAB_056e2b30;
          } while( true );
        }
      }
      uVar4 = FUN_05712c7c(&stack0x000000a0,0);
      if (lVar5 != 0) {
        lVar10 = *(long *)(lVar5 + 0x10);
        lVar11 = *(long *)PTR_DAT_063173b8;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
            thunk_FUN_02bb0e9c();
          }
          else {
            FUN_037a6538(lVar5,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
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
    in_stack_00000118 = FUN_04c0b3e4(*(undefined8 *)PTR_DAT_0631d9f8,lVar5,0);
    thunk_FUN_02bb0e9c(&stack0x00000118,in_stack_00000118);
    if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_x23) {
LAB_056e3034:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    param_3 = &stack0x000000f0;
  } while( true );
LAB_056e2b38:
  if (in_stack_00000098 != (long *)0x0) {
    lVar11 = *in_stack_00000098;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_056e2ba0;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)PTR_DAT_06312f78,0);
LAB_056e2ba0:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
  }
  if (!bVar3) {
    uVar4 = FUN_05712c7c(&stack0x000000a0,0);
    if (lVar5 != 0) {
      lVar10 = *(long *)(lVar5 + 0x10);
      lVar11 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar5,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_056e25c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar11 = *unaff_x26;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar11 = *unaff_x26;
  }
  puVar8 = *(undefined8 **)(lVar11 + 0xb8);
  lVar14 = puVar8[4];
  uVar4 = *(undefined8 *)PTR_DAT_0631da28;
  if (lVar14 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar13 = *puVar8;
    lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                 UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
    FUN_049bb31c(lVar14,uVar13,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_Awake__,0);
    plVar6 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20);
    *plVar6 = lVar14;
    thunk_FUN_02bb0e9c(plVar6,lVar14);
  }
  uVar13 = FUN_031bc2cc(lVar10,lVar14,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenStateChanged__
                       );
  uVar4 = FUN_04c0b3e4(uVar4,uVar13,0);
  uVar4 = FUN_04c0ab28(in_stack_000000a0,*(undefined8 *)PTR_DAT_063220d0,uVar4,
                       *(undefined8 *)PTR_DAT_06314990,0);
  if (lVar5 != 0) {
    lVar10 = *(long *)(lVar5 + 0x10);
    lVar11 = *(long *)PTR_DAT_063173b8;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      goto LAB_056e25c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


