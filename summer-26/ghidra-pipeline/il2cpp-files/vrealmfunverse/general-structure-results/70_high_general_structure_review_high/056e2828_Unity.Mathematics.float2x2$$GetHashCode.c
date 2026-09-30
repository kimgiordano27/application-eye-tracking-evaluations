/*
FUNCTION_NAME: Unity.Mathematics.float2x2$$GetHashCode
ENTRY_POINT: 056e2828
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

void Unity_Mathematics_float2x2__GetHashCode(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 *in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
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
  
code_r0x056e2828:
  if (unaff_x23 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      param_1 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar13 = *param_1;
    unaff_x23 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320f98);
    FUN_049c0700(unaff_x23,uVar13,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenStateChanged__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x18);
    *plVar5 = unaff_x23;
    thunk_FUN_02bb0e9c(plVar5,unaff_x23);
  }
  plVar5 = (long *)FUN_031ca23c(unaff_x22,unaff_x23,*(undefined8 *)PTR_DAT_06320f90);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06322940) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_056e28f8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06322940,0);
LAB_056e28f8:
  in_stack_00000098 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  in_stack_00000058 = &stack0x00000098;
  in_stack_00000050 = 0;
  if (in_stack_00000098 == (long *)0x0) {
LAB_056e2b30:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  bVar3 = false;
  do {
    plVar5 = in_stack_00000098;
    lVar7 = *in_stack_00000098;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_056e2970;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*unaff_x27,0);
LAB_056e2970:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar5 = in_stack_00000098;
    if ((uVar8 & 1) == 0) goto LAB_056e2b38;
    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *in_stack_00000098;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_056e29d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*unaff_x29,0);
LAB_056e29d4:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar13 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar13,uVar13);
    }
    uVar8 = FUN_0452f928(unaff_x21,uVar13,&stack0x00000090,*unaff_x28);
    if (((uVar8 & 1) != 0) &&
       (uVar8 = FUN_04d79328(in_stack_00000090,(long)&stack0x00000088 + 4,0), (uVar8 & 1) != 0)) {
      uVar13 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_04dafea4(uVar13,0);
      uVar13 = FUN_031a9210(uVar13,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenPreprocessed__
                           );
      lVar7 = FUN_031c7494(uVar13,*(undefined8 *)PTR_DAT_063387a0);
      if (-1 < (int)uStack000000000000008c) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((int)uStack000000000000008c < *(int *)(lVar7 + 0x18)) {
          uVar13 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          if (*(uint *)(lVar7 + 0x18) <= uStack000000000000008c) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar10 = *(undefined8 *)(lVar7 + (long)(int)uStack000000000000008c * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uStack0000000000000088 = FUN_04cff718(uVar10,0);
          uVar10 = FUN_04d78c14(&stack0x00000088,0);
          FUN_0452ddac(unaff_x21,uVar13,uVar10,*(undefined8 *)PTR_DAT_0631ac08);
          bVar3 = true;
        }
      }
    }
    if (in_stack_00000098 == (long *)0x0) goto LAB_056e2b30;
  } while( true );
LAB_056e26b8:
  in_stack_00000058 = (undefined8 *)in_stack_000000b0;
  in_stack_00000050 = in_stack_000000a8;
  uVar13 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                     (*(undefined8 *)
                       Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                      ,&stack0x00000050);
  lVar7 = *unaff_x26;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *unaff_x26;
  }
  puVar6 = *(undefined8 **)(lVar7 + 0xb8);
  lVar11 = puVar6[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar6 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar10 = *puVar6;
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                               );
    FUN_049bf70c(lVar11,uVar10,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
    *plVar4 = lVar11;
    thunk_FUN_02bb0e9c(plVar4,lVar11);
    lVar7 = *unaff_x26;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *unaff_x26;
  }
  puVar6 = *(undefined8 **)(lVar7 + 0xb8);
  lVar12 = puVar6[2];
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar6 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar10 = *puVar6;
    lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                               );
    FUN_049bf70c(lVar12,uVar10,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x10);
    *plVar4 = lVar12;
    thunk_FUN_02bb0e9c(plVar4,lVar12);
  }
  unaff_x21 = FUN_031c781c(uVar13,lVar11,lVar12,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_set_Selector__
                          );
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  unaff_x22 = (**(code **)(*plVar5 + 0x6c8))(plVar5,0x14,*(undefined8 *)(*plVar5 + 0x6d0));
  param_2 = *unaff_x26;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    param_2 = *unaff_x26;
  }
  param_1 = *(undefined8 **)(param_2 + 0xb8);
  unaff_x23 = param_1[3];
  goto code_r0x056e2828;
LAB_056e2b38:
  if (in_stack_00000098 != (long *)0x0) {
    lVar7 = *in_stack_00000098;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_056e2ba0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*(long *)PTR_DAT_06312f78,0);
LAB_056e2ba0:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (!bVar3) {
    uVar13 = FUN_05712c7c(&stack0x000000a0,0);
    if (unaff_x20 != 0) {
      lVar7 = *(long *)(unaff_x20 + 0x10);
      lVar11 = *(long *)PTR_DAT_063173b8;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(unaff_x20,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
LAB_056e25c0:
        while (uVar8 = FUN_04728b6c(&stack0x000000c0,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                                   ), uVar13 = in_stack_000000d0, lVar7 = in_stack_00000060,
              (uVar8 & 1) == 0) {
          FUN_04728b68(in_stack_00000068,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_ComputeCandidateTiebreaker__
                      );
          if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cabc(lVar7);
          }
          in_stack_00000118 = FUN_04c0b3e4(*(undefined8 *)PTR_DAT_0631d9f8,unaff_x20,0);
          thunk_FUN_02bb0e9c(&stack0x00000118,in_stack_00000118);
          if (*(uint *)(in_stack_00000040 + 0x18) <= in_stack_00000038) {
LAB_056e3034:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          memmove((void *)(in_stack_00000048 + 0x20),&stack0x000000f0,0x48);
          thunk_FUN_02bb0e9c(in_stack_00000030 + in_stack_00000038 * 0x48,0);
          lVar7 = in_stack_00000040;
          do {
            uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
            in_stack_00000038 = in_stack_00000038 + 1;
            if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)in_stack_00000038) {
              do {
                lVar7 = *(long *)(in_stack_00000020 + 4);
                if (lVar7 == 0) goto LAB_056e3008;
                if (*(uint *)(lVar7 + 0x18) <= in_stack_00000028) goto LAB_056e3034;
                lVar7 = lVar7 + in_stack_00000028 * 0x20;
                *(undefined8 *)(lVar7 + 0x28) = in_stack_00000148;
                *(undefined8 *)(lVar7 + 0x20) = in_stack_00000140;
                *(undefined8 *)(lVar7 + 0x38) = in_stack_00000018;
                *(long *)(lVar7 + 0x30) = in_stack_00000010;
                thunk_FUN_02bb0e9c(lVar7 + 0x20,0);
                lVar7 = *(long *)(in_stack_00000020 + 4);
                in_stack_00000028 = in_stack_00000028 + 1;
                if (lVar7 == 0) goto LAB_056e3008;
                if ((int)*(uint *)(lVar7 + 0x18) <= (int)in_stack_00000028) {
                  *in_stack_00000020 = 1;
                  return;
                }
                if (*(uint *)(lVar7 + 0x18) <= in_stack_00000028) goto LAB_056e3034;
                lVar7 = lVar7 + in_stack_00000028 * 0x20;
                in_stack_00000148 = *(undefined8 *)(lVar7 + 0x28);
                in_stack_00000140 = *(undefined8 *)(lVar7 + 0x20);
                in_stack_00000018 = *(undefined8 *)(lVar7 + 0x38);
                lVar7 = *(long *)(lVar7 + 0x30);
                if (lVar7 == 0) goto LAB_056e3008;
                in_stack_00000010 = lVar7;
              } while ((int)*(ulong *)(lVar7 + 0x18) < 1);
              in_stack_00000038 = 0;
              in_stack_00000030 = lVar7 + 0x20;
              uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              in_stack_00000040 = lVar7;
            }
            if (uVar8 <= in_stack_00000038) goto LAB_056e3034;
            in_stack_00000048 = lVar7 + in_stack_00000038 * 0x48;
            memmove(&stack0x000000f0,(void *)(in_stack_00000048 + 0x20),0x48);
            uVar13 = in_stack_00000118;
            uVar8 = FUN_04c09ac4(in_stack_00000118,0);
          } while ((uVar8 & 1) != 0);
          uVar13 = FUN_05712e74(uVar13,0);
          lVar7 = FUN_031c91ac(uVar13,*(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Awake__
                              );
          if (lVar7 == 0) {
LAB_056e3008:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar1 = *(undefined4 *)(lVar7 + 0x18);
          unaff_x20 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063145b0);
          FUN_037a5d48(unaff_x20,uVar1,*(undefined8 *)PTR_DAT_063277b0);
          FUN_037913fc(&stack0x00000060,lVar7,
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
        }
        in_stack_000000a8 = in_stack_000000d8;
        in_stack_000000a0 = in_stack_000000d0;
        in_stack_000000b0 = in_stack_000000e0;
        if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar5 = (long *)FUN_05720148(uVar13,0);
        if (in_stack_000000b0._4_4_ != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar8 = FUN_04d938a0(plVar5,0,0);
          if ((uVar8 & 1) == 0) goto LAB_056e26b8;
        }
        uVar13 = FUN_05712c7c(&stack0x000000a0,0);
        if (unaff_x20 == 0) {
LAB_056e2ecc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar7 = *(long *)(unaff_x20 + 0x10);
        lVar11 = *(long *)PTR_DAT_063173b8;
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_056e2ecc;
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(unaff_x20,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_056e25c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar7 = *unaff_x26;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *unaff_x26;
  }
  puVar6 = *(undefined8 **)(lVar7 + 0xb8);
  lVar11 = puVar6[4];
  uVar13 = *(undefined8 *)PTR_DAT_0631da28;
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar6 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar10 = *puVar6;
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
    FUN_049bb31c(lVar11,uVar10,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_Awake__,0);
    plVar5 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20);
    *plVar5 = lVar11;
    thunk_FUN_02bb0e9c(plVar5,lVar11);
  }
  uVar10 = FUN_031bc2cc(unaff_x21,lVar11,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenStateChanged__
                       );
  uVar13 = FUN_04c0b3e4(uVar13,uVar10,0);
  uVar13 = FUN_04c0ab28(in_stack_000000a0,*(undefined8 *)PTR_DAT_063220d0,uVar13,
                        *(undefined8 *)PTR_DAT_06314990,0);
  if (unaff_x20 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x10);
    lVar11 = *(long *)PTR_DAT_063173b8;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(unaff_x20,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_056e25c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


