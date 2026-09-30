/*
FUNCTION_NAME: Unity.Mathematics.float3$$get_yzx
ENTRY_POINT: 056e2d9c
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


void Unity_Mathematics_float3__get_yzx(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  uint unaff_w24;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
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
  long in_stack_00000050;
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
  
  if (param_2 != 1) {
    FUN_02759724(&stack0x00000050);
    if (param_2 == 1) {
      plVar5 = (long *)__cxa_begin_catch(param_1);
      lVar10 = *plVar5;
      in_stack_00000060 = lVar10;
      __cxa_end_catch();
      iVar13 = 0;
      goto code_r0x056e2e24;
    }
    FUN_02ae17a8(&stack0x00000060);
                    /* WARNING: Subroutine does not return */
    FUN_02c2be1c(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar5;
  in_stack_00000050 = lVar10;
  __cxa_end_catch();
  iVar13 = 0;
  puVar4 = in_stack_00000058;
code_r0x056e2b44:
  plVar5 = (long *)*puVar4;
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_056e2ba0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06312f78,0);
LAB_056e2ba0:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc(lVar10);
  }
  if ((iVar13 != 0x14) && (lVar10 = in_stack_00000060, iVar13 != 0)) goto code_r0x056e2e24;
  if ((unaff_w24 & 1) != 0) {
    lVar10 = *unaff_x26;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *unaff_x26;
    }
    puVar4 = *(undefined8 **)(lVar10 + 0xb8);
    lVar6 = puVar4[4];
    uVar9 = *(undefined8 *)PTR_DAT_0631da28;
    if (lVar6 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar4 = *(undefined8 **)(*unaff_x26 + 0xb8);
      }
      uVar12 = *puVar4;
      lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                  UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
      FUN_049bb31c(lVar6,uVar12,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_Awake__,0);
      plVar5 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20);
      *plVar5 = lVar6;
      thunk_FUN_02bb0e9c(plVar5,lVar6);
    }
    uVar12 = FUN_031bc2cc(unaff_x21,lVar6,
                          *(undefined8 *)
                           Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenStateChanged__
                         );
    uVar9 = FUN_04c0b3e4(uVar9,uVar12,0);
    uVar9 = FUN_04c0ab28(in_stack_000000a0,*(undefined8 *)PTR_DAT_063220d0,uVar9,
                         *(undefined8 *)PTR_DAT_06314990,0);
    if (unaff_x20 != 0) {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      lVar6 = *(long *)PTR_DAT_063173b8;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(unaff_x20,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
LAB_056e25c0:
        while (uVar7 = FUN_04728b6c(&stack0x000000c0,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                                   ), uVar9 = in_stack_000000d0, (uVar7 & 1) == 0) {
          iVar13 = 0x17;
          lVar10 = in_stack_00000060;
code_r0x056e2e24:
          FUN_04728b68(in_stack_00000068,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_ComputeCandidateTiebreaker__
                      );
          if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cabc(lVar10);
          }
          if ((iVar13 != 0x17) && (iVar13 != 0)) {
            return;
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
          lVar10 = in_stack_00000040;
          do {
            uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
            in_stack_00000038 = in_stack_00000038 + 1;
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)in_stack_00000038) {
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
              in_stack_00000038 = 0;
              in_stack_00000030 = lVar10 + 0x20;
              uVar7 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
              in_stack_00000040 = lVar10;
            }
            if (uVar7 <= in_stack_00000038) goto LAB_056e3034;
            in_stack_00000048 = lVar10 + in_stack_00000038 * 0x48;
            memmove(&stack0x000000f0,(void *)(in_stack_00000048 + 0x20),0x48);
            uVar9 = in_stack_00000118;
            uVar7 = FUN_04c09ac4(in_stack_00000118,0);
          } while ((uVar7 & 1) != 0);
          uVar9 = FUN_05712e74(uVar9,0);
          lVar10 = FUN_031c91ac(uVar9,*(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Awake__
                               );
          if (lVar10 == 0) {
LAB_056e3008:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar1 = *(undefined4 *)(lVar10 + 0x18);
          unaff_x20 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063145b0);
          FUN_037a5d48(unaff_x20,uVar1,*(undefined8 *)PTR_DAT_063277b0);
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
        }
        in_stack_000000a8 = in_stack_000000d8;
        in_stack_000000a0 = in_stack_000000d0;
        in_stack_000000b0 = in_stack_000000e0;
        if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar5 = (long *)FUN_05720148(uVar9,0);
        if (in_stack_000000b0._4_4_ != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar7 = FUN_04d938a0(plVar5,0,0);
          if ((uVar7 & 1) == 0) goto LAB_056e26b8;
        }
        uVar9 = FUN_05712c7c(&stack0x000000a0,0);
        if (unaff_x20 == 0) {
LAB_056e2ecc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar10 = *(long *)(unaff_x20 + 0x10);
        lVar6 = *(long *)PTR_DAT_063173b8;
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_056e2ecc;
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(unaff_x20,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_056e25c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar9 = FUN_05712c7c(&stack0x000000a0,0);
  if (unaff_x20 != 0) {
    lVar10 = *(long *)(unaff_x20 + 0x10);
    lVar6 = *(long *)PTR_DAT_063173b8;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(unaff_x20,uVar9,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_056e25c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_056e26b8:
  in_stack_00000058 = (undefined8 *)in_stack_000000b0;
  in_stack_00000050 = in_stack_000000a8;
  uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                     ,&stack0x00000050);
  lVar10 = *unaff_x26;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *unaff_x26;
  }
  puVar4 = *(undefined8 **)(lVar10 + 0xb8);
  lVar6 = puVar4[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar12 = *puVar4;
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                              );
    FUN_049bf70c(lVar6,uVar12,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                 ,0);
    plVar3 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
    *plVar3 = lVar6;
    thunk_FUN_02bb0e9c(plVar3,lVar6);
    lVar10 = *unaff_x26;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *unaff_x26;
  }
  puVar4 = *(undefined8 **)(lVar10 + 0xb8);
  lVar11 = puVar4[2];
  if (lVar11 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar12 = *puVar4;
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                               );
    FUN_049bf70c(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                 ,0);
    plVar3 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x10);
    *plVar3 = lVar11;
    thunk_FUN_02bb0e9c(plVar3,lVar11);
  }
  unaff_x21 = FUN_031c781c(uVar9,lVar6,lVar11,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_set_Selector__
                          );
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar9 = (**(code **)(*plVar5 + 0x6c8))(plVar5,0x14,*(undefined8 *)(*plVar5 + 0x6d0));
  lVar10 = *unaff_x26;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *unaff_x26;
  }
  puVar4 = *(undefined8 **)(lVar10 + 0xb8);
  lVar6 = puVar4[3];
  if (lVar6 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar12 = *puVar4;
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320f98);
    FUN_049c0700(lVar6,uVar12,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenStateChanged__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x18);
    *plVar5 = lVar6;
    thunk_FUN_02bb0e9c(plVar5,lVar6);
  }
  plVar5 = (long *)FUN_031ca23c(uVar9,lVar6,*(undefined8 *)PTR_DAT_06320f90);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar10 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06322940) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_056e28f8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06322940,0);
LAB_056e28f8:
  in_stack_00000098 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
  in_stack_00000058 = &stack0x00000098;
  in_stack_00000050 = 0;
  if (in_stack_00000098 == (long *)0x0) {
LAB_056e2b30:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  unaff_w24 = 0;
  do {
    plVar5 = in_stack_00000098;
    lVar10 = *in_stack_00000098;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_056e2970;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*unaff_x27,0);
LAB_056e2970:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar5 = in_stack_00000098;
    if ((uVar7 & 1) == 0) break;
    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *in_stack_00000098;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_056e29d4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(in_stack_00000098,*unaff_x29,0);
LAB_056e29d4:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar9 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar9,uVar9);
    }
    uVar7 = FUN_0452f928(unaff_x21,uVar9,&stack0x00000090,*unaff_x28);
    if (((uVar7 & 1) != 0) &&
       (uVar7 = FUN_04d79328(in_stack_00000090,(long)&stack0x00000088 + 4,0), (uVar7 & 1) != 0)) {
      uVar9 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_04dafea4(uVar9,0);
      uVar9 = FUN_031a9210(uVar9,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenPreprocessed__
                          );
      lVar10 = FUN_031c7494(uVar9,*(undefined8 *)PTR_DAT_063387a0);
      if (-1 < (int)uStack000000000000008c) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((int)uStack000000000000008c < *(int *)(lVar10 + 0x18)) {
          uVar9 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          if (*(uint *)(lVar10 + 0x18) <= uStack000000000000008c) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar12 = *(undefined8 *)(lVar10 + (long)(int)uStack000000000000008c * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uStack0000000000000088 = FUN_04cff718(uVar12,0);
          uVar12 = FUN_04d78c14(&stack0x00000088,0);
          FUN_0452ddac(unaff_x21,uVar9,uVar12,*(undefined8 *)PTR_DAT_0631ac08);
          unaff_w24 = 1;
        }
      }
    }
    if (in_stack_00000098 == (long *)0x0) goto LAB_056e2b30;
  } while( true );
  lVar10 = 0;
  iVar13 = 0x14;
  puVar4 = &stack0x00000098;
  goto code_r0x056e2b44;
}


