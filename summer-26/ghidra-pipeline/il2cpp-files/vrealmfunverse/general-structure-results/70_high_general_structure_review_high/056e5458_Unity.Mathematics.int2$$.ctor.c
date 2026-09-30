/*
FUNCTION_NAME: Unity.Mathematics.int2$$.ctor
ENTRY_POINT: 056e5458
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


void Unity_Mathematics_int2___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long in_x9;
  uint in_w10;
  uint in_w11;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  ulong uVar18;
  long unaff_x23;
  uint uVar19;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  long *unaff_x29;
  undefined8 uVar20;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000030;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001f0;
  long in_stack_00000230;
  
  do {
    if (in_w10 < in_w11) {
      param_1 = param_1 + (long)(int)in_w10 * (long)unaff_w22;
      *(uint *)(unaff_x23 + 0x18) = in_w10 + 1;
      memcpy((void *)(param_1 + 0x20),&stack0x000000b0,0x58);
      thunk_FUN_02bb0e9c(param_1 + 0x20,0);
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000388,&stack0x000000b0,0x58);
      FUN_03742d08(unaff_x23,&stack0x00000388,uVar12);
    }
    unaff_x21 = unaff_x21 + 1;
    unaff_x25 = unaff_x25 + 8;
    if (unaff_x20 == unaff_x21) {
LAB_056e54e8:
      do {
        puVar3 = 
        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__
        ;
        puVar2 = 
        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
        ;
        in_stack_00000010 = in_stack_00000010 + 1;
        if (in_stack_00000010 == in_stack_00000008) {
          if (unaff_x26 == 0) goto LAB_056e563c;
          if (*(int *)(unaff_x26 + 0x18) < 1) goto LAB_056e5608;
          iVar4 = 0;
          goto LAB_056e551c;
        }
        lVar9 = *(long *)(in_stack_00000018 + 8);
        if (lVar9 == 0) goto LAB_056e563c;
        if (*(uint *)(lVar9 + 0x18) <= in_stack_00000010) goto LAB_056e5640;
        lVar9 = lVar9 + in_stack_00000010 * 0x20;
        uVar12 = *(undefined8 *)(lVar9 + 0x20);
        uVar6 = *(undefined8 *)(lVar9 + 0x28);
        lVar10 = *(long *)(lVar9 + 0x30);
        in_stack_00000040 = *(long *)(lVar9 + 0x38);
        uVar5 = FUN_04c09ac4(uVar12,0);
        if ((uVar5 & 1) != 0) {
          uVar12 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          uVar6 = thunk_FUN_02ba3594(
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                    );
          uVar12 = FUN_04c00984(uVar6,uVar12,0);
LAB_056e5684:
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar6 = thunk_FUN_02b79644();
          FUN_04d7b3f4(uVar6,uVar12,0);
          uVar12 = thunk_FUN_02ba3594(
                                     Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar6,uVar12);
        }
        if (unaff_x26 == 0) goto LAB_056e563c;
        if (0 < *(int *)(unaff_x26 + 0x18)) {
          uVar19 = 0;
          do {
            lVar9 = FUN_037a6268(unaff_x26,uVar19,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                );
            if (lVar9 == 0) goto LAB_056e563c;
            iVar4 = FUN_04c075a8(*(undefined8 *)(lVar9 + 0x10),uVar12,3,0);
            if (iVar4 == 0) {
              lVar9 = FUN_037a6268(unaff_x26,uVar19,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                  );
              if (lVar9 != 0) goto LAB_056e518c;
              break;
            }
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < *(int *)(unaff_x26 + 0x18));
        }
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
        FUN_056e02a8();
        *(undefined8 *)(lVar9 + 0x10) = uVar12;
        thunk_FUN_02bb0e9c();
        uVar5 = FUN_04c09ac4(uVar6,0);
        uVar15 = 0;
        if ((uVar5 & 1) == 0) {
          uVar15 = uVar6;
        }
        *(undefined8 *)(lVar9 + 0x18) = uVar15;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x18));
        lVar11 = *(long *)(unaff_x26 + 0x10);
        uVar19 = *(uint *)(unaff_x26 + 0x18);
        lVar13 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
        ;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_056e563c;
        if (uVar19 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(in_stack_00000048 + 0x18) = uVar19 + 1;
          plVar14 = (long *)(lVar11 + (long)(int)uVar19 * 8 + 0x20);
          *plVar14 = lVar9;
          thunk_FUN_02bb0e9c(plVar14,lVar9);
        }
        else {
          FUN_037a6538(in_stack_00000048,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                                  );
        FUN_037a5cd0(uVar6,*(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                    );
        if (in_stack_00000050 == 0) goto LAB_056e563c;
        lVar9 = *(long *)(in_stack_00000050 + 0x10);
        lVar11 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
        ;
        *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(in_stack_00000050 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar6;
          thunk_FUN_02bb0e9c(puVar7,uVar6);
        }
        else {
          FUN_037a6538(in_stack_00000050,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                                  );
        FUN_037423e0(uVar6,*(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                    );
        if (in_stack_00000030 == 0) goto LAB_056e563c;
        lVar9 = *(long *)(in_stack_00000030 + 0x10);
        lVar11 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
        ;
        *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(in_stack_00000030 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(in_stack_00000030 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar6;
          thunk_FUN_02bb0e9c(puVar7,uVar6);
          unaff_x26 = in_stack_00000048;
        }
        else {
          FUN_037a6538(in_stack_00000030,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          unaff_x26 = in_stack_00000048;
        }
LAB_056e518c:
        if ((lVar10 != 0) && (uVar5 = *(ulong *)(lVar10 + 0x18), 0 < (int)uVar5)) {
          uVar18 = 0;
          do {
            if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_056e5640;
            memmove(&stack0x000001f0,(void *)(lVar10 + uVar18 * 0x48 + 0x20),0x48);
            uVar8 = FUN_04c09ac4(in_stack_000001f0,0);
            if ((uVar8 & 1) != 0) {
              uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
              uVar15 = thunk_FUN_02ba3594(
                                         Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                         );
              uVar12 = FUN_04c0af28(uVar15,uVar6,uVar12,0);
              goto LAB_056e5684;
            }
            lVar9 = FUN_056e889c(&stack0x000001f0,0);
            if ((in_stack_00000050 == 0) ||
               (lVar11 = FUN_037a6268(in_stack_00000050,uVar19,
                                      *(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                     ), lVar11 == 0)) goto LAB_056e563c;
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar16 = *(long *)
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
            ;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *plVar14 = lVar9;
              thunk_FUN_02bb0e9c(plVar14,lVar9);
            }
            else {
              FUN_037a6538(lVar11,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            if (in_stack_00000230 != 0) {
              if ((in_stack_00000030 == 0) ||
                 (lVar11 = FUN_037a6268(in_stack_00000030,uVar19,
                                        *(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                       ), in_stack_00000230 == 0)) goto LAB_056e563c;
              uVar8 = 0;
              lVar13 = 0x20;
              while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
                if (*(uint *)(in_stack_00000230 + 0x18) <= uVar8) goto LAB_056e5640;
                puVar7 = (undefined8 *)(in_stack_00000230 + lVar13);
                uVar6 = *puVar7;
                uVar20 = puVar7[3];
                uVar15 = puVar7[2];
                *(undefined8 *)(unaff_x28 + 0x108) = puVar7[1];
                *(undefined8 *)(unaff_x28 + 0x100) = uVar6;
                *(undefined8 *)(unaff_x28 + 0x118) = uVar20;
                *(undefined8 *)(unaff_x28 + 0x110) = uVar15;
                uVar6 = puVar7[4];
                uVar20 = puVar7[7];
                uVar15 = puVar7[6];
                *(undefined8 *)(unaff_x28 + 0x128) = puVar7[5];
                *(undefined8 *)(unaff_x28 + 0x120) = uVar6;
                *(undefined8 *)(unaff_x28 + 0x138) = uVar20;
                *(undefined8 *)(unaff_x28 + 0x130) = uVar15;
                FUN_056e8664(&stack0x00000058,&stack0x000001b0);
                memcpy(&stack0x00000150,&stack0x00000058,0x58);
                if (lVar9 == 0) goto LAB_056e563c;
                in_stack_00000180 = *(undefined8 *)(lVar9 + 0x10);
                thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
                if (lVar11 == 0) goto LAB_056e563c;
                memcpy(&stack0x00000330,&stack0x00000150,0x58);
                lVar16 = *(long *)(lVar11 + 0x10);
                lVar17 = *unaff_x29;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_056e563c;
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar1 * (long)unaff_w22;
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                  memcpy((void *)(lVar16 + 0x20),&stack0x00000330,0x58);
                  thunk_FUN_02bb0e9c(lVar16 + 0x20,0);
                }
                else {
                  uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
                  memcpy(&stack0x00000388,&stack0x00000330,0x58);
                  FUN_03742d08(lVar11,&stack0x00000388,uVar6);
                }
                lVar13 = lVar13 + 0x40;
                uVar8 = uVar8 + 1;
                if (in_stack_00000230 == 0) goto LAB_056e563c;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x26 = in_stack_00000048;
          } while (uVar18 != (uVar5 & 0xffffffff));
        }
        if (in_stack_00000040 == 0) {
          if (in_stack_00000030 == 0) goto LAB_056e563c;
          FUN_037a6268(in_stack_00000030,uVar19,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                      );
          goto LAB_056e54e8;
        }
        if (in_stack_00000030 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(in_stack_00000040 + 0x18);
        unaff_x20 = (ulong)uVar1;
        unaff_x23 = FUN_037a6268(in_stack_00000030,uVar19,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                );
      } while ((int)uVar1 < 1);
      unaff_x21 = 0;
      unaff_x25 = (undefined8 *)(in_stack_00000040 + 0x20);
    }
    if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_x21) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar12 = *unaff_x25;
    uVar15 = unaff_x25[3];
    uVar6 = unaff_x25[2];
    *(undefined8 *)(unaff_x28 + 0x68) = unaff_x25[1];
    *(undefined8 *)(unaff_x28 + 0x60) = uVar12;
    *(undefined8 *)(unaff_x28 + 0x78) = uVar15;
    *(undefined8 *)(unaff_x28 + 0x70) = uVar6;
    uVar12 = unaff_x25[4];
    uVar15 = unaff_x25[7];
    uVar6 = unaff_x25[6];
    *(undefined8 *)(unaff_x28 + 0x88) = unaff_x25[5];
    *(undefined8 *)(unaff_x28 + 0x80) = uVar12;
    *(undefined8 *)(unaff_x28 + 0x98) = uVar15;
    *(undefined8 *)(unaff_x28 + 0x90) = uVar6;
    FUN_056e8664(&stack0x000000b0,&stack0x00000110);
    if (unaff_x23 == 0) goto LAB_056e563c;
    param_1 = *(long *)(unaff_x23 + 0x10);
    in_x9 = *unaff_x29;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_056e563c;
    in_w10 = *(uint *)(unaff_x23 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
  } while( true );
LAB_056e551c:
  lVar9 = FUN_037a6268(unaff_x26,iVar4,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                      );
  if ((((in_stack_00000050 == 0) ||
       (lVar10 = FUN_037a6268(in_stack_00000050,iVar4,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                             ), lVar10 == 0)) ||
      (lVar10 = FUN_037a8024(lVar10,*(undefined8 *)puVar2), in_stack_00000030 == 0)) ||
     ((lVar11 = FUN_037a6268(in_stack_00000030,iVar4,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                            ), lVar11 == 0 ||
      (uVar12 = FUN_03744c0c(lVar11,*(undefined8 *)puVar3), lVar9 == 0)))) {
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(lVar9 + 0x28) = lVar10;
  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar10);
  *(undefined8 *)(lVar9 + 0x30) = uVar12;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x30),uVar12);
  if (lVar10 == 0) goto LAB_056e563c;
  uVar19 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar19) {
    lVar11 = 0;
    do {
      if (uVar19 <= (uint)lVar11) goto LAB_056e5640;
      lVar13 = *(long *)(lVar10 + 0x20 + lVar11 * 8);
      if (lVar13 == 0) goto LAB_056e563c;
      plVar14 = (long *)(lVar13 + 200);
      *plVar14 = lVar9;
      thunk_FUN_02bb0e9c(plVar14,lVar9);
      uVar19 = *(uint *)(lVar10 + 0x18);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)uVar19);
  }
  iVar4 = iVar4 + 1;
  if (*(int *)(unaff_x26 + 0x18) <= iVar4) {
LAB_056e5608:
    FUN_037a8024(unaff_x26,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_HasInteractable__
                );
    return;
  }
  goto LAB_056e551c;
}


