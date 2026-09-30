/*
FUNCTION_NAME: Unity.Mathematics.half$$Equals
ENTRY_POINT: 056e52e8
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


void Unity_Mathematics_half__Equals(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  ulong uVar14;
  int unaff_w22;
  ulong unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  long *unaff_x29;
  undefined8 uVar15;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001f0;
  long in_stack_00000230;
  
  while (memcpy(param_1,param_2,0x58), unaff_x25 != 0) {
    in_stack_00000180 = *(undefined8 *)(unaff_x25 + 0x10);
    thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
    if (unaff_x26 == 0) break;
    memcpy(&stack0x00000330,&stack0x00000150,0x58);
    lVar11 = *(long *)(unaff_x26 + 0x10);
    lVar12 = *unaff_x29;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(unaff_x26 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar1 * (long)unaff_w22;
      *(uint *)(unaff_x26 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar11 + 0x20),&stack0x00000330,0x58);
      thunk_FUN_02bb0e9c(lVar11 + 0x20,0);
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000388,&stack0x00000330,0x58);
      FUN_03742d08(unaff_x26,&stack0x00000388,uVar7);
    }
    unaff_x21 = unaff_x21 + 0x40;
    unaff_x20 = unaff_x20 + 1;
    if (in_stack_00000230 == 0) break;
    while ((long)(int)*(uint *)(in_stack_00000230 + 0x18) <= (long)unaff_x20) {
      do {
        unaff_x23 = unaff_x23 + 1;
        if (unaff_x23 == in_stack_00000028) {
          do {
            if (in_stack_00000040 == 0) {
              if (in_stack_00000030 == 0) goto LAB_056e563c;
              FUN_037a6268(in_stack_00000030,unaff_w24,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                          );
            }
            else {
              if (in_stack_00000030 == 0) goto LAB_056e563c;
              uVar1 = *(uint *)(in_stack_00000040 + 0x18);
              lVar11 = FUN_037a6268(in_stack_00000030,unaff_w24,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                   );
              if (0 < (int)uVar1) {
                uVar14 = 0;
                puVar6 = (undefined8 *)(in_stack_00000040 + 0x20);
                do {
                  if (*(uint *)(in_stack_00000040 + 0x18) <= uVar14) goto LAB_056e5640;
                  uVar7 = *puVar6;
                  uVar15 = puVar6[3];
                  uVar10 = puVar6[2];
                  *(undefined8 *)(unaff_x28 + 0x68) = puVar6[1];
                  *(undefined8 *)(unaff_x28 + 0x60) = uVar7;
                  *(undefined8 *)(unaff_x28 + 0x78) = uVar15;
                  *(undefined8 *)(unaff_x28 + 0x70) = uVar10;
                  uVar7 = puVar6[4];
                  uVar15 = puVar6[7];
                  uVar10 = puVar6[6];
                  *(undefined8 *)(unaff_x28 + 0x88) = puVar6[5];
                  *(undefined8 *)(unaff_x28 + 0x80) = uVar7;
                  *(undefined8 *)(unaff_x28 + 0x98) = uVar15;
                  *(undefined8 *)(unaff_x28 + 0x90) = uVar10;
                  FUN_056e8664(&stack0x000000b0,&stack0x00000110);
                  if (lVar11 == 0) goto LAB_056e563c;
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar13 = *unaff_x29;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_056e563c;
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)uVar2 * (long)unaff_w22;
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    memcpy((void *)(lVar12 + 0x20),&stack0x000000b0,0x58);
                    thunk_FUN_02bb0e9c(lVar12 + 0x20,0);
                  }
                  else {
                    uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
                    memcpy(&stack0x00000388,&stack0x000000b0,0x58);
                    FUN_03742d08(lVar11,&stack0x00000388,uVar7);
                  }
                  uVar14 = uVar14 + 1;
                  puVar6 = puVar6 + 8;
                } while (uVar1 != uVar14);
              }
            }
            puVar4 = 
            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__
            ;
            puVar3 = 
            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
            ;
            in_stack_00000010 = in_stack_00000010 + 1;
            if (in_stack_00000010 == in_stack_00000008) {
              if (in_stack_00000048 == 0) goto LAB_056e563c;
              if (*(int *)(in_stack_00000048 + 0x18) < 1) goto LAB_056e5608;
              iVar5 = 0;
              goto LAB_056e551c;
            }
            lVar11 = *(long *)(in_stack_00000018 + 8);
            if (lVar11 == 0) goto LAB_056e563c;
            if (*(uint *)(lVar11 + 0x18) <= in_stack_00000010) goto LAB_056e5640;
            lVar11 = lVar11 + in_stack_00000010 * 0x20;
            in_stack_00000020 = *(undefined8 *)(lVar11 + 0x20);
            uVar7 = *(undefined8 *)(lVar11 + 0x28);
            in_stack_00000038 = *(long *)(lVar11 + 0x30);
            in_stack_00000040 = *(long *)(lVar11 + 0x38);
            uVar14 = FUN_04c09ac4(in_stack_00000020,0);
            if ((uVar14 & 1) != 0) {
              uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
              uVar10 = thunk_FUN_02ba3594(
                                         Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                         );
              uVar7 = FUN_04c00984(uVar10,uVar7,0);
              goto LAB_056e5684;
            }
            if (in_stack_00000048 == 0) goto LAB_056e563c;
            if (0 < *(int *)(in_stack_00000048 + 0x18)) {
              unaff_w24 = 0;
              do {
                lVar11 = FUN_037a6268(in_stack_00000048,unaff_w24,
                                      *(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                     );
                if (lVar11 == 0) goto LAB_056e563c;
                iVar5 = FUN_04c075a8(*(undefined8 *)(lVar11 + 0x10),in_stack_00000020,3,0);
                if (iVar5 == 0) {
                  lVar11 = FUN_037a6268(in_stack_00000048,unaff_w24,
                                        *(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                       );
                  if (lVar11 != 0) goto LAB_056e518c;
                  break;
                }
                unaff_w24 = unaff_w24 + 1;
              } while ((int)unaff_w24 < *(int *)(in_stack_00000048 + 0x18));
            }
            lVar11 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
            FUN_056e02a8();
            *(undefined8 *)(lVar11 + 0x10) = in_stack_00000020;
            thunk_FUN_02bb0e9c();
            uVar14 = FUN_04c09ac4(uVar7,0);
            uVar10 = 0;
            if ((uVar14 & 1) == 0) {
              uVar10 = uVar7;
            }
            *(undefined8 *)(lVar11 + 0x18) = uVar10;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x18));
            lVar12 = *(long *)(in_stack_00000048 + 0x10);
            unaff_w24 = *(uint *)(in_stack_00000048 + 0x18);
            lVar13 = *(long *)
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
            ;
            *(int *)(in_stack_00000048 + 0x1c) = *(int *)(in_stack_00000048 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_056e563c;
            if (unaff_w24 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(in_stack_00000048 + 0x18) = unaff_w24 + 1;
              plVar9 = (long *)(lVar12 + (long)(int)unaff_w24 * 8 + 0x20);
              *plVar9 = lVar11;
              thunk_FUN_02bb0e9c(plVar9,lVar11);
            }
            else {
              FUN_037a6538(in_stack_00000048,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            uVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                        Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                                      );
            FUN_037a5cd0(uVar7,*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                        );
            if (in_stack_00000050 == 0) goto LAB_056e563c;
            lVar11 = *(long *)(in_stack_00000050 + 0x10);
            lVar12 = *(long *)
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
            ;
            *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(in_stack_00000050 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar7;
              thunk_FUN_02bb0e9c(puVar6,uVar7);
            }
            else {
              FUN_037a6538(in_stack_00000050,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                                      );
            FUN_037423e0(uVar7,*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                        );
            if (in_stack_00000030 == 0) goto LAB_056e563c;
            lVar11 = *(long *)(in_stack_00000030 + 0x10);
            lVar12 = *(long *)
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
            ;
            *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(in_stack_00000030 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(in_stack_00000030 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar7;
              thunk_FUN_02bb0e9c(puVar6,uVar7);
            }
            else {
              FUN_037a6538(in_stack_00000030,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
LAB_056e518c:
          } while ((in_stack_00000038 == 0) || ((int)*(ulong *)(in_stack_00000038 + 0x18) < 1));
          unaff_x23 = 0;
          in_stack_00000028 = *(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff;
        }
        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_x23) goto LAB_056e5640;
        memmove(&stack0x000001f0,(void *)(in_stack_00000038 + unaff_x23 * 0x48 + 0x20),0x48);
        uVar14 = FUN_04c09ac4(in_stack_000001f0,0);
        if ((uVar14 & 1) != 0) {
          uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          uVar10 = thunk_FUN_02ba3594(
                                     Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                     );
          uVar7 = FUN_04c0af28(uVar10,uVar7,in_stack_00000020,0);
LAB_056e5684:
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar10 = thunk_FUN_02b79644();
          FUN_04d7b3f4(uVar10,uVar7,0);
          uVar7 = thunk_FUN_02ba3594(
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar10,uVar7);
        }
        unaff_x25 = FUN_056e889c(&stack0x000001f0,0);
        if ((in_stack_00000050 == 0) ||
           (lVar11 = FUN_037a6268(in_stack_00000050,unaff_w24,
                                  *(undefined8 *)
                                   Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                 ), lVar11 == 0)) goto LAB_056e563c;
        lVar12 = *(long *)(lVar11 + 0x10);
        lVar13 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
        ;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = unaff_x25;
          thunk_FUN_02bb0e9c(plVar9,unaff_x25);
        }
        else {
          FUN_037a6538(lVar11,unaff_x25,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      } while (in_stack_00000230 == 0);
      if ((in_stack_00000030 == 0) ||
         (unaff_x26 = FUN_037a6268(in_stack_00000030,unaff_w24,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                  ), in_stack_00000230 == 0)) goto LAB_056e563c;
      unaff_x21 = 0x20;
      unaff_x20 = 0;
    }
    if (*(uint *)(in_stack_00000230 + 0x18) <= unaff_x20) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    puVar6 = (undefined8 *)(in_stack_00000230 + unaff_x21);
    uVar7 = *puVar6;
    uVar15 = puVar6[3];
    uVar10 = puVar6[2];
    *(undefined8 *)(unaff_x28 + 0x108) = puVar6[1];
    *(undefined8 *)(unaff_x28 + 0x100) = uVar7;
    *(undefined8 *)(unaff_x28 + 0x118) = uVar15;
    *(undefined8 *)(unaff_x28 + 0x110) = uVar10;
    uVar7 = puVar6[4];
    uVar15 = puVar6[7];
    uVar10 = puVar6[6];
    *(undefined8 *)(unaff_x28 + 0x128) = puVar6[5];
    *(undefined8 *)(unaff_x28 + 0x120) = uVar7;
    *(undefined8 *)(unaff_x28 + 0x138) = uVar15;
    *(undefined8 *)(unaff_x28 + 0x130) = uVar10;
    FUN_056e8664(&stack0x00000058,&stack0x000001b0);
    param_1 = &stack0x00000150;
    param_2 = &stack0x00000058;
  }
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_056e551c:
  lVar11 = FUN_037a6268(in_stack_00000048,iVar5,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                       );
  if ((((in_stack_00000050 == 0) ||
       (lVar12 = FUN_037a6268(in_stack_00000050,iVar5,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                             ), lVar12 == 0)) ||
      (lVar12 = FUN_037a8024(lVar12,*(undefined8 *)puVar3), in_stack_00000030 == 0)) ||
     ((lVar13 = FUN_037a6268(in_stack_00000030,iVar5,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                            ), lVar13 == 0 ||
      (uVar7 = FUN_03744c0c(lVar13,*(undefined8 *)puVar4), lVar11 == 0)))) goto LAB_056e563c;
  *(long *)(lVar11 + 0x28) = lVar12;
  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar12);
  *(undefined8 *)(lVar11 + 0x30) = uVar7;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x30),uVar7);
  if (lVar12 == 0) goto LAB_056e563c;
  uVar1 = *(uint *)(lVar12 + 0x18);
  if (0 < (int)uVar1) {
    lVar13 = 0;
    do {
      if (uVar1 <= (uint)lVar13) goto LAB_056e5640;
      lVar8 = *(long *)(lVar12 + 0x20 + lVar13 * 8);
      if (lVar8 == 0) goto LAB_056e563c;
      plVar9 = (long *)(lVar8 + 200);
      *plVar9 = lVar11;
      thunk_FUN_02bb0e9c(plVar9,lVar11);
      uVar1 = *(uint *)(lVar12 + 0x18);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < (int)uVar1);
  }
  iVar5 = iVar5 + 1;
  if (*(int *)(in_stack_00000048 + 0x18) <= iVar5) {
LAB_056e5608:
    FUN_037a8024(in_stack_00000048,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_HasInteractable__
                );
    return;
  }
  goto LAB_056e551c;
}


