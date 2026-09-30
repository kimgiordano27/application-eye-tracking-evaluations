/*
FUNCTION_NAME: Unity.Mathematics.float2$$.ctor
ENTRY_POINT: 056e2440
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

void Unity_Mathematics_float2___ctor(undefined1 param_1 [16])

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined4 *unaff_x20;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 *in_stack_00000050;
  undefined1 *in_stack_00000058;
  long in_stack_00000060;
  undefined1 *in_stack_00000068;
  long in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined8 in_stack_00000080;
  long lStack0000000000000088;
  undefined8 uStack0000000000000090;
  long *plStack0000000000000098;
  long lStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  long lStack00000000000000c0;
  undefined1 *puStack00000000000000c8;
  long lStack00000000000000d0;
  undefined1 *puStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  long lStack00000000000000f0;
  long lStack0000000000000100;
  long lStack0000000000000110;
  undefined1 *puStack0000000000000118;
  long lStack0000000000000120;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  puVar7 = 
  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_ComputeCandidateTiebreaker__;
  puVar6 = PTR_DAT_0632f140;
  puVar5 = PTR_DAT_06322948;
  puVar4 = PTR_DAT_06312f90;
  puVar3 = PTR_DAT_06312310;
  puStack00000000000000c8 = param_1._8_8_;
  lStack00000000000000c0 = param_1._0_8_;
  uStack00000000000000e0 = 0;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e2434 with catch @ 056e2444
                        */
  lStack00000000000000a0 = 0;
  puStack00000000000000a8 = (undefined1 *)0x0;
  uStack00000000000000b0 = 0;
  uStack0000000000000090 = 0;
  plStack0000000000000098 = (long *)0x0;
  lStack0000000000000088 = 0;
  if (in_ZR || in_NG != in_OV) {
    lVar15 = *(long *)(unaff_x20 + 4);
    if ((lVar15 != 0) && (0 < *(int *)(lVar15 + 0x18))) {
      uVar20 = 0;
      lStack00000000000000d0 = lStack00000000000000c0;
      puStack00000000000000d8 = puStack00000000000000c8;
      lStack00000000000000f0 = lStack00000000000000c0;
      lStack0000000000000100 = lStack00000000000000c0;
      lStack0000000000000110 = lStack00000000000000c0;
      puStack0000000000000118 = puStack00000000000000c8;
      lStack0000000000000120 = lStack00000000000000c0;
      do {
        if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar20) goto LAB_056e300c;
        if (*(uint *)(lVar15 + 0x18) <= uVar20) {
LAB_056e3034:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar15 = lVar15 + uVar20 * 0x20;
        in_stack_00000148 = *(undefined8 *)(lVar15 + 0x28);
        in_stack_00000140 = *(undefined8 *)(lVar15 + 0x20);
        uVar25 = *(undefined8 *)(lVar15 + 0x38);
        lVar15 = *(long *)(lVar15 + 0x30);
        if (lVar15 == 0) break;
        if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
          uVar22 = 0;
          uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
          do {
            if (uVar16 <= uVar22) goto LAB_056e3034;
            lVar17 = lVar15 + uVar22 * 0x48;
            memmove(&stack0x000000f0,(void *)(lVar17 + 0x20),0x48);
            puVar8 = puStack0000000000000118;
            uVar16 = FUN_04c09ac4(puStack0000000000000118,0);
            if ((uVar16 & 1) == 0) {
              uVar10 = FUN_05712e74(puVar8,0);
              lVar11 = FUN_031c91ac(uVar10,*(undefined8 *)
                                            Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Awake__
                                   );
              if (lVar11 == 0) goto LAB_056e3008;
              uVar9 = *(undefined4 *)(lVar11 + 0x18);
              lVar12 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063145b0);
              FUN_037a5d48(lVar12,uVar9,*(undefined8 *)PTR_DAT_063277b0);
              FUN_037913fc(&stack0x00000060,lVar11,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__
                          );
              uStack00000000000000e0 = in_stack_00000080;
              puStack00000000000000c8 = in_stack_00000068;
              lStack00000000000000c0 = in_stack_00000060;
              puStack00000000000000d8 = in_stack_00000078;
              lStack00000000000000d0 = in_stack_00000070;
              in_stack_00000060 = 0;
              in_stack_00000068 = (undefined1 *)&stack0x000000c0;
LAB_056e25c0:
              uVar16 = FUN_04728b6c(&stack0x000000c0,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                                   );
              lVar19 = lStack00000000000000d0;
              lVar11 = in_stack_00000060;
              if ((uVar16 & 1) != 0) {
                puStack00000000000000a8 = puStack00000000000000d8;
                lStack00000000000000a0 = lStack00000000000000d0;
                uStack00000000000000b0 = uStack00000000000000e0;
                if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                plVar13 = (long *)FUN_05720148(lVar19,0);
                if (uStack00000000000000b0._4_4_ != 0) {
                  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar16 = FUN_04d938a0(plVar13,0,0);
                  if ((uVar16 & 1) == 0) {
                    in_stack_00000058 = (undefined1 *)uStack00000000000000b0;
                    in_stack_00000050 = puStack00000000000000a8;
                    uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                       (*(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                                        ,&stack0x00000050);
                    lVar11 = *(long *)puVar7;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar11 = *(long *)puVar7;
                    }
                    puVar18 = *(undefined8 **)(lVar11 + 0xb8);
                    lVar19 = puVar18[1];
                    if (lVar19 == 0) {
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                      }
                      uVar23 = *puVar18;
                      lVar19 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                      
                                                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                                 );
                      FUN_049bf70c(lVar19,uVar23,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                                   ,0);
                      plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                      *plVar14 = lVar19;
                      thunk_FUN_02bb0e9c(plVar14,lVar19);
                      lVar11 = *(long *)puVar7;
                    }
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar11 = *(long *)puVar7;
                    }
                    puVar18 = *(undefined8 **)(lVar11 + 0xb8);
                    lVar24 = puVar18[2];
                    if (lVar24 == 0) {
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                      }
                      uVar23 = *puVar18;
                      lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                      
                                                  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                                                 );
                      FUN_049bf70c(lVar24,uVar23,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                                   ,0);
                      plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
                      *plVar14 = lVar24;
                      thunk_FUN_02bb0e9c(plVar14,lVar24);
                    }
                    lVar11 = FUN_031c781c(uVar10,lVar19,lVar24,
                                          *(undefined8 *)
                                           Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_set_Selector__
                                         );
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    uVar10 = (**(code **)(*plVar13 + 0x6c8))
                                       (plVar13,0x14,*(undefined8 *)(*plVar13 + 0x6d0));
                    lVar19 = *(long *)puVar7;
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar19 = *(long *)puVar7;
                    }
                    puVar18 = *(undefined8 **)(lVar19 + 0xb8);
                    lVar24 = puVar18[3];
                    if (lVar24 == 0) {
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                      }
                      uVar23 = *puVar18;
                      lVar24 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320f98);
                      FUN_049c0700(lVar24,uVar23,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenStateChanged__
                                   ,0);
                      plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
                      *plVar13 = lVar24;
                      thunk_FUN_02bb0e9c(plVar13,lVar24);
                    }
                    plVar13 = (long *)FUN_031ca23c(uVar10,lVar24,*(undefined8 *)PTR_DAT_06320f90);
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    lVar19 = *plVar13;
                    uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar16 != 0) {
                      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06322940) {
                          puVar18 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                          goto LAB_056e28f8;
                        }
                        uVar16 = uVar16 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar18 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)PTR_DAT_06322940,0);
LAB_056e28f8:
                    plStack0000000000000098 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
                    in_stack_00000058 = (undefined1 *)&stack0x00000098;
                    in_stack_00000050 = (undefined1 *)0x0;
                    if (plStack0000000000000098 == (long *)0x0) {
LAB_056e2b30:
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    bVar2 = false;
                    do {
                      plVar13 = plStack0000000000000098;
                      lVar19 = *plStack0000000000000098;
                      uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
                      if (uVar16 != 0) {
                        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                            puVar18 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                            goto LAB_056e2970;
                          }
                          uVar16 = uVar16 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar18 = (undefined8 *)
                                FUN_02b7654c(plStack0000000000000098,*(long *)puVar4,0);
LAB_056e2970:
                      uVar16 = (*(code *)*puVar18)(plVar13,puVar18[1]);
                      plVar13 = plStack0000000000000098;
                      if ((uVar16 & 1) == 0) goto LAB_056e2b38;
                      if (plStack0000000000000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      lVar19 = *plStack0000000000000098;
                      uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
                      if (uVar16 != 0) {
                        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                            puVar18 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                            goto LAB_056e29d4;
                          }
                          uVar16 = uVar16 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar18 = (undefined8 *)
                                FUN_02b7654c(plStack0000000000000098,*(long *)puVar5,0);
LAB_056e29d4:
                      plVar13 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      uVar10 = (**(code **)(*plVar13 + 0x1b8))
                                         (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4(uVar10,uVar10);
                      }
                      uVar16 = FUN_0452f928(lVar11,uVar10,&stack0x00000090,*(undefined8 *)puVar6);
                      if (((uVar16 & 1) != 0) &&
                         (uVar16 = FUN_04d79328(uStack0000000000000090,
                                                (undefined1 *)((long)register0x00000008 + 0x8c),0),
                         (uVar16 & 1) != 0)) {
                        uVar10 = (**(code **)(*plVar13 + 0x248))
                                           (plVar13,*(undefined8 *)(*plVar13 + 0x250));
                        if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar10 = FUN_04dafea4(uVar10,0);
                        uVar10 = FUN_031a9210(uVar10,*(undefined8 *)
                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenPreprocessed__
                                             );
                        lVar19 = FUN_031c7494(uVar10,*(undefined8 *)PTR_DAT_063387a0);
                        if (-1 < lStack0000000000000088) {
                          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02b3cac4();
                          }
                          if ((int)lStack0000000000000088._4_4_ < *(int *)(lVar19 + 0x18)) {
                            uVar10 = (**(code **)(*plVar13 + 0x1b8))
                                               (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                            if (*(uint *)(lVar19 + 0x18) <= lStack0000000000000088._4_4_) {
                    /* WARNING: Subroutine does not return */
                              FUN_02b3cacc();
                            }
                            uVar23 = *(undefined8 *)
                                      (lVar19 + (long)(int)lStack0000000000000088._4_4_ * 8 + 0x20);
                            if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                            }
                            uVar9 = FUN_04cff718(uVar23,0);
                            lStack0000000000000088 = CONCAT44(lStack0000000000000088._4_4_,uVar9);
                            uVar23 = FUN_04d78c14(&stack0x00000088,0);
                            FUN_0452ddac(lVar11,uVar10,uVar23,*(undefined8 *)PTR_DAT_0631ac08);
                            bVar2 = true;
                          }
                        }
                      }
                      if (plStack0000000000000098 == (long *)0x0) goto LAB_056e2b30;
                    } while( true );
                  }
                }
                uVar10 = FUN_05712c7c(&stack0x000000a0,0);
                if (lVar12 != 0) {
                  lVar11 = *(long *)(lVar12 + 0x10);
                  lVar19 = *(long *)PTR_DAT_063173b8;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar11 != 0) {
                    uVar1 = *(uint *)(lVar12 + 0x18);
                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar12,uVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
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
              if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cabc(lVar11);
              }
              puStack0000000000000118 =
                   (undefined1 *)FUN_04c0b3e4(*(undefined8 *)PTR_DAT_0631d9f8,lVar12,0);
              thunk_FUN_02bb0e9c(&stack0x00000118,puStack0000000000000118);
              if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_056e3034;
              memmove((void *)(lVar17 + 0x20),&stack0x000000f0,0x48);
              thunk_FUN_02bb0e9c(lVar15 + 0x20 + uVar22 * 0x48,0);
            }
            uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar22 = uVar22 + 1;
          } while ((long)uVar22 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
        lVar17 = *(long *)(unaff_x20 + 4);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_056e3034;
        lVar17 = lVar17 + uVar20 * 0x20;
        *(undefined8 *)(lVar17 + 0x28) = in_stack_00000148;
        *(undefined8 *)(lVar17 + 0x20) = in_stack_00000140;
        *(undefined8 *)(lVar17 + 0x38) = uVar25;
        *(long *)(lVar17 + 0x30) = lVar15;
        thunk_FUN_02bb0e9c(lVar17 + 0x20,0);
        lVar15 = *(long *)(unaff_x20 + 4);
        uVar20 = uVar20 + 1;
      } while (lVar15 != 0);
LAB_056e3008:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
LAB_056e300c:
    *unaff_x20 = 1;
  }
  return;
LAB_056e2b38:
  if (plStack0000000000000098 != (long *)0x0) {
    lVar19 = *plStack0000000000000098;
    uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar16 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar18 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_056e2ba0;
        }
        uVar16 = uVar16 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar16 != 0);
    }
    puVar18 = (undefined8 *)FUN_02b7654c(plStack0000000000000098,*(long *)PTR_DAT_06312f78,0);
LAB_056e2ba0:
    (*(code *)*puVar18)(plVar13,puVar18[1]);
  }
  if (!bVar2) {
    uVar10 = FUN_05712c7c(&stack0x000000a0,0);
    if (lVar12 != 0) {
      lVar11 = *(long *)(lVar12 + 0x10);
      lVar19 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar12,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_056e25c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar19 = *(long *)puVar7;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar19 = *(long *)puVar7;
  }
  puVar18 = *(undefined8 **)(lVar19 + 0xb8);
  lVar24 = puVar18[4];
  uVar10 = *(undefined8 *)PTR_DAT_0631da28;
  if (lVar24 == 0) {
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar23 = *puVar18;
    lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                 UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
    FUN_049bb31c(lVar24,uVar23,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_Awake__,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
    *plVar13 = lVar24;
    thunk_FUN_02bb0e9c(plVar13,lVar24);
  }
  uVar23 = FUN_031bc2cc(lVar11,lVar24,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_remove_WhenStateChanged__
                       );
  uVar10 = FUN_04c0b3e4(uVar10,uVar23,0);
  uVar10 = FUN_04c0ab28(lStack00000000000000a0,*(undefined8 *)PTR_DAT_063220d0,uVar10,
                        *(undefined8 *)PTR_DAT_06314990,0);
  if (lVar12 != 0) {
    lVar11 = *(long *)(lVar12 + 0x10);
    lVar19 = *(long *)PTR_DAT_063173b8;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar12,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_056e25c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


