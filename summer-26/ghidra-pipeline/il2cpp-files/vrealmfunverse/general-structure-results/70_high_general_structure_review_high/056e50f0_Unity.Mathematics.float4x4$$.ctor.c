/*
FUNCTION_NAME: Unity.Mathematics.float4x4$$.ctor
ENTRY_POINT: 056e50f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_float4x4___ctor(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  ulong uVar17;
  uint unaff_w24;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x28;
  long *unaff_x29;
  undefined8 uVar18;
  ulong in_stack_00000008;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001f0;
  long in_stack_00000230;
  
code_r0x056e50f0:
  FUN_037a6538(param_2,unaff_x25,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
LAB_056e5100:
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                            );
  FUN_037423e0(uVar6,*(undefined8 *)
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
              );
  if (unaff_x21 != 0) {
    lVar10 = *(long *)(unaff_x21 + 0x10);
    lVar14 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
    ;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = uVar6;
        thunk_FUN_02bb0e9c(puVar7,uVar6);
      }
      else {
        FUN_037a6538(unaff_x21,uVar6,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      do {
        if ((unaff_x20 != 0) && (uVar11 = *(ulong *)(unaff_x20 + 0x18), 0 < (int)uVar11)) {
          uVar17 = 0;
          do {
            if (*(uint *)(unaff_x20 + 0x18) <= uVar17) goto LAB_056e5640;
            memmove(&stack0x000001f0,(void *)(unaff_x20 + uVar17 * 0x48 + 0x20),0x48);
            uVar8 = FUN_04c09ac4(in_stack_000001f0,0);
            if ((uVar8 & 1) != 0) {
              uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
              uVar9 = thunk_FUN_02ba3594(
                                        Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                        );
              uVar6 = FUN_04c0af28(uVar9,uVar6,in_stack_00000020,0);
              goto LAB_056e5684;
            }
            lVar10 = FUN_056e889c(&stack0x000001f0,0);
            if ((in_stack_00000050 == 0) ||
               (lVar14 = FUN_037a6268(in_stack_00000050,unaff_w24,
                                      *(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                     ), lVar14 == 0)) goto LAB_056e563c;
            lVar12 = *(long *)(lVar14 + 0x10);
            lVar15 = *(long *)
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
            ;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = lVar10;
              thunk_FUN_02bb0e9c(plVar13,lVar10);
            }
            else {
              FUN_037a6538(lVar14,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            if (in_stack_00000230 != 0) {
              if ((in_stack_00000030 == 0) ||
                 (lVar14 = FUN_037a6268(in_stack_00000030,unaff_w24,
                                        *(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                       ), in_stack_00000230 == 0)) goto LAB_056e563c;
              uVar8 = 0;
              lVar12 = 0x20;
              while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
                if (*(uint *)(in_stack_00000230 + 0x18) <= uVar8) goto LAB_056e5640;
                puVar7 = (undefined8 *)(in_stack_00000230 + lVar12);
                uVar6 = *puVar7;
                uVar18 = puVar7[3];
                uVar9 = puVar7[2];
                *(undefined8 *)(unaff_x28 + 0x108) = puVar7[1];
                *(undefined8 *)(unaff_x28 + 0x100) = uVar6;
                *(undefined8 *)(unaff_x28 + 0x118) = uVar18;
                *(undefined8 *)(unaff_x28 + 0x110) = uVar9;
                uVar6 = puVar7[4];
                uVar18 = puVar7[7];
                uVar9 = puVar7[6];
                *(undefined8 *)(unaff_x28 + 0x128) = puVar7[5];
                *(undefined8 *)(unaff_x28 + 0x120) = uVar6;
                *(undefined8 *)(unaff_x28 + 0x138) = uVar18;
                *(undefined8 *)(unaff_x28 + 0x130) = uVar9;
                FUN_056e8664(&stack0x00000058,&stack0x000001b0);
                memcpy(&stack0x00000150,&stack0x00000058,0x58);
                if (lVar10 == 0) goto LAB_056e563c;
                in_stack_00000180 = *(undefined8 *)(lVar10 + 0x10);
                thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
                if (lVar14 == 0) goto LAB_056e563c;
                memcpy(&stack0x00000330,&stack0x00000150,0x58);
                lVar15 = *(long *)(lVar14 + 0x10);
                lVar16 = *unaff_x29;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_056e563c;
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = lVar15 + (long)(int)uVar1 * (long)unaff_w22;
                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                  memcpy((void *)(lVar15 + 0x20),&stack0x00000330,0x58);
                  thunk_FUN_02bb0e9c(lVar15 + 0x20,0);
                }
                else {
                  uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
                  memcpy(&stack0x00000388,&stack0x00000330,0x58);
                  FUN_03742d08(lVar14,&stack0x00000388,uVar6);
                }
                lVar12 = lVar12 + 0x40;
                uVar8 = uVar8 + 1;
                if (in_stack_00000230 == 0) goto LAB_056e563c;
              }
            }
            uVar17 = uVar17 + 1;
            unaff_x20 = in_stack_00000038;
            unaff_x26 = in_stack_00000048;
          } while (uVar17 != (uVar11 & 0xffffffff));
        }
        if (in_stack_00000040 == 0) {
          if (in_stack_00000030 == 0) break;
          FUN_037a6268(in_stack_00000030,unaff_w24,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                      );
        }
        else {
          if (in_stack_00000030 == 0) break;
          uVar1 = *(uint *)(in_stack_00000040 + 0x18);
          lVar10 = FUN_037a6268(in_stack_00000030,unaff_w24,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                               );
          if (0 < (int)uVar1) {
            uVar11 = 0;
            puVar7 = (undefined8 *)(in_stack_00000040 + 0x20);
            do {
              if (*(uint *)(in_stack_00000040 + 0x18) <= uVar11) goto LAB_056e5640;
              uVar6 = *puVar7;
              uVar18 = puVar7[3];
              uVar9 = puVar7[2];
              *(undefined8 *)(unaff_x28 + 0x68) = puVar7[1];
              *(undefined8 *)(unaff_x28 + 0x60) = uVar6;
              *(undefined8 *)(unaff_x28 + 0x78) = uVar18;
              *(undefined8 *)(unaff_x28 + 0x70) = uVar9;
              uVar6 = puVar7[4];
              uVar18 = puVar7[7];
              uVar9 = puVar7[6];
              *(undefined8 *)(unaff_x28 + 0x88) = puVar7[5];
              *(undefined8 *)(unaff_x28 + 0x80) = uVar6;
              *(undefined8 *)(unaff_x28 + 0x98) = uVar18;
              *(undefined8 *)(unaff_x28 + 0x90) = uVar9;
              FUN_056e8664(&stack0x000000b0,&stack0x00000110);
              if (lVar10 == 0) goto LAB_056e563c;
              lVar14 = *(long *)(lVar10 + 0x10);
              lVar12 = *unaff_x29;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_056e563c;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar2 * (long)unaff_w22;
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                memcpy((void *)(lVar14 + 0x20),&stack0x000000b0,0x58);
                thunk_FUN_02bb0e9c(lVar14 + 0x20,0);
              }
              else {
                uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                memcpy(&stack0x00000388,&stack0x000000b0,0x58);
                FUN_03742d08(lVar10,&stack0x00000388,uVar6);
              }
              uVar11 = uVar11 + 1;
              puVar7 = puVar7 + 8;
            } while (uVar1 != uVar11);
          }
        }
        puVar4 = 
        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__
        ;
        puVar3 = 
        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
        ;
        unaff_x23 = unaff_x23 + 1;
        if (unaff_x23 == in_stack_00000008) {
          if (unaff_x26 == 0) break;
          if (*(int *)(unaff_x26 + 0x18) < 1) goto LAB_056e5608;
          iVar5 = 0;
          goto LAB_056e551c;
        }
        lVar10 = *(long *)(in_stack_00000018 + 8);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_056e5640;
        lVar10 = lVar10 + unaff_x23 * 0x20;
        in_stack_00000020 = *(undefined8 *)(lVar10 + 0x20);
        uVar6 = *(undefined8 *)(lVar10 + 0x28);
        unaff_x20 = *(long *)(lVar10 + 0x30);
        in_stack_00000040 = *(long *)(lVar10 + 0x38);
        uVar11 = FUN_04c09ac4(in_stack_00000020,0);
        if ((uVar11 & 1) != 0) {
          uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          uVar9 = thunk_FUN_02ba3594(
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                    );
          uVar6 = FUN_04c00984(uVar9,uVar6,0);
LAB_056e5684:
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar9 = thunk_FUN_02b79644();
          FUN_04d7b3f4(uVar9,uVar6,0);
          uVar6 = thunk_FUN_02ba3594(
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar9,uVar6);
        }
        if (unaff_x26 == 0) break;
        in_stack_00000038 = unaff_x20;
        if (*(int *)(unaff_x26 + 0x18) < 1) goto Unity_Mathematics_float4x4__op_Implicit;
        unaff_w24 = 0;
        while( true ) {
          lVar10 = FUN_037a6268(unaff_x26,unaff_w24,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                               );
          if (lVar10 == 0) goto LAB_056e563c;
          iVar5 = FUN_04c075a8(*(undefined8 *)(lVar10 + 0x10),in_stack_00000020,3,0);
          if (iVar5 == 0) break;
          unaff_w24 = unaff_w24 + 1;
          if (*(int *)(unaff_x26 + 0x18) <= (int)unaff_w24)
          goto Unity_Mathematics_float4x4__op_Implicit;
        }
        lVar10 = FUN_037a6268(unaff_x26,unaff_w24,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                             );
        if (lVar10 == 0) goto Unity_Mathematics_float4x4__op_Implicit;
      } while( true );
    }
  }
  goto LAB_056e563c;
LAB_056e551c:
  lVar10 = FUN_037a6268(unaff_x26,iVar5,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                       );
  if ((((in_stack_00000050 == 0) ||
       (lVar14 = FUN_037a6268(in_stack_00000050,iVar5,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                             ), lVar14 == 0)) ||
      (lVar14 = FUN_037a8024(lVar14,*(undefined8 *)puVar3), in_stack_00000030 == 0)) ||
     ((lVar12 = FUN_037a6268(in_stack_00000030,iVar5,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                            ), lVar12 == 0 ||
      (uVar6 = FUN_03744c0c(lVar12,*(undefined8 *)puVar4), lVar10 == 0)))) {
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(lVar10 + 0x28) = lVar14;
  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar14);
  *(undefined8 *)(lVar10 + 0x30) = uVar6;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x30),uVar6);
  if (lVar14 == 0) goto LAB_056e563c;
  uVar1 = *(uint *)(lVar14 + 0x18);
  if (0 < (int)uVar1) {
    lVar12 = 0;
    do {
      if (uVar1 <= (uint)lVar12) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar15 = *(long *)(lVar14 + 0x20 + lVar12 * 8);
      if (lVar15 == 0) goto LAB_056e563c;
      plVar13 = (long *)(lVar15 + 200);
      *plVar13 = lVar10;
      thunk_FUN_02bb0e9c(plVar13,lVar10);
      uVar1 = *(uint *)(lVar14 + 0x18);
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)uVar1);
  }
  iVar5 = iVar5 + 1;
  if (*(int *)(unaff_x26 + 0x18) <= iVar5) {
LAB_056e5608:
    FUN_037a8024(unaff_x26,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_HasInteractable__
                );
    return;
  }
  goto LAB_056e551c;
Unity_Mathematics_float4x4__op_Implicit:
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
  FUN_056e02a8();
  *(undefined8 *)(lVar10 + 0x10) = in_stack_00000020;
  thunk_FUN_02bb0e9c();
  uVar11 = FUN_04c09ac4(uVar6,0);
  uVar9 = 0;
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar6;
  }
  *(undefined8 *)(lVar10 + 0x18) = uVar9;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x18));
  lVar14 = *(long *)(unaff_x26 + 0x10);
  unaff_w24 = *(uint *)(unaff_x26 + 0x18);
  lVar12 = *(long *)
            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
  ;
  *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
  if (lVar14 == 0) goto LAB_056e563c;
  if (unaff_w24 < *(uint *)(lVar14 + 0x18)) {
    *(uint *)(in_stack_00000048 + 0x18) = unaff_w24 + 1;
    plVar13 = (long *)(lVar14 + (long)(int)unaff_w24 * 8 + 0x20);
    *plVar13 = lVar10;
    thunk_FUN_02bb0e9c(plVar13,lVar10);
  }
  else {
    FUN_037a6538(in_stack_00000048,lVar10,
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  unaff_x25 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                                );
  FUN_037a5cd0(unaff_x25,
               *(undefined8 *)
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
              );
  if (in_stack_00000050 == 0) goto LAB_056e563c;
  lVar10 = *(long *)(in_stack_00000050 + 0x10);
  lVar14 = *(long *)
            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
  ;
  *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_056e563c;
  uVar1 = *(uint *)(in_stack_00000050 + 0x18);
  unaff_x21 = in_stack_00000030;
  if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_056e50e8;
  *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
  puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
  *puVar7 = unaff_x25;
  thunk_FUN_02bb0e9c(puVar7,unaff_x25);
  unaff_x26 = in_stack_00000048;
  goto LAB_056e5100;
LAB_056e50e8:
  param_1 = *(long *)(lVar14 + 0x20);
  param_2 = in_stack_00000050;
  unaff_x26 = in_stack_00000048;
  goto code_r0x056e50f0;
}


