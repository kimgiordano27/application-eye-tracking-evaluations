/*
FUNCTION_NAME: Unity.Mathematics.half$$ToString
ENTRY_POINT: 056e53dc
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


void Unity_Mathematics_half__ToString(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  ulong uVar17;
  int unaff_w22;
  ulong uVar18;
  uint uVar19;
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
  
code_r0x056e53dc:
  uVar19 = *(uint *)(param_1 + 0x18);
  lVar8 = FUN_037a6268(param_2,param_3,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                      );
  if (0 < (int)uVar19) {
    uVar17 = 0;
    puVar6 = (undefined8 *)(in_stack_00000040 + 0x20);
    do {
      if (*(uint *)(in_stack_00000040 + 0x18) <= uVar17) goto LAB_056e5640;
      uVar9 = *puVar6;
      uVar12 = puVar6[3];
      uVar5 = puVar6[2];
      *(undefined8 *)(unaff_x28 + 0x68) = puVar6[1];
      *(undefined8 *)(unaff_x28 + 0x60) = uVar9;
      *(undefined8 *)(unaff_x28 + 0x78) = uVar12;
      *(undefined8 *)(unaff_x28 + 0x70) = uVar5;
      uVar9 = puVar6[4];
      uVar12 = puVar6[7];
      uVar5 = puVar6[6];
      *(undefined8 *)(unaff_x28 + 0x88) = puVar6[5];
      *(undefined8 *)(unaff_x28 + 0x80) = uVar9;
      *(undefined8 *)(unaff_x28 + 0x98) = uVar12;
      *(undefined8 *)(unaff_x28 + 0x90) = uVar5;
      FUN_056e8664(&stack0x000000b0,&stack0x00000110);
      if (lVar8 == 0) goto LAB_056e563c;
      lVar13 = *(long *)(lVar8 + 0x10);
      lVar16 = *unaff_x29;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_056e563c;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)uVar1 * (long)unaff_w22;
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar13 + 0x20),&stack0x000000b0,0x58);
        thunk_FUN_02bb0e9c(lVar13 + 0x20,0);
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000388,&stack0x000000b0,0x58);
        FUN_03742d08(lVar8,&stack0x00000388,uVar9);
      }
      uVar17 = uVar17 + 1;
      puVar6 = puVar6 + 8;
    } while (uVar19 != uVar17);
  }
  do {
    puVar3 = 
    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__;
    puVar2 = 
    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
    ;
    in_stack_00000010 = in_stack_00000010 + 1;
    if (in_stack_00000010 == in_stack_00000008) {
      if (unaff_x26 == 0) goto LAB_056e563c;
      if (*(int *)(unaff_x26 + 0x18) < 1) goto LAB_056e5608;
      iVar4 = 0;
      break;
    }
    lVar8 = *(long *)(in_stack_00000018 + 8);
    if (lVar8 == 0) goto LAB_056e563c;
    if (*(uint *)(lVar8 + 0x18) <= in_stack_00000010) goto LAB_056e5640;
    lVar8 = lVar8 + in_stack_00000010 * 0x20;
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    lVar13 = *(long *)(lVar8 + 0x30);
    param_1 = *(long *)(lVar8 + 0x38);
    uVar17 = FUN_04c09ac4(uVar9,0);
    if ((uVar17 & 1) != 0) {
      uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
      uVar5 = thunk_FUN_02ba3594(
                                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                );
      uVar9 = FUN_04c00984(uVar5,uVar9,0);
LAB_056e5684:
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar5 = thunk_FUN_02b79644();
      FUN_04d7b3f4(uVar5,uVar9,0);
      uVar9 = thunk_FUN_02ba3594(
                                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,uVar9);
    }
    if (unaff_x26 == 0) goto LAB_056e563c;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      uVar19 = 0;
      do {
        lVar8 = FUN_037a6268(unaff_x26,uVar19,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                            );
        if (lVar8 == 0) goto LAB_056e563c;
        iVar4 = FUN_04c075a8(*(undefined8 *)(lVar8 + 0x10),uVar9,3,0);
        if (iVar4 == 0) {
          lVar8 = FUN_037a6268(unaff_x26,uVar19,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                              );
          if (lVar8 != 0) goto LAB_056e518c;
          break;
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < *(int *)(unaff_x26 + 0x18));
    }
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
    FUN_056e02a8();
    *(undefined8 *)(lVar8 + 0x10) = uVar9;
    thunk_FUN_02bb0e9c();
    uVar17 = FUN_04c09ac4(uVar5,0);
    uVar12 = 0;
    if ((uVar17 & 1) == 0) {
      uVar12 = uVar5;
    }
    *(undefined8 *)(lVar8 + 0x18) = uVar12;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x18));
    lVar16 = *(long *)(unaff_x26 + 0x10);
    uVar19 = *(uint *)(unaff_x26 + 0x18);
    lVar10 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
    ;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_056e563c;
    if (uVar19 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar19 + 1;
      plVar11 = (long *)(lVar16 + (long)(int)uVar19 * 8 + 0x20);
      *plVar11 = lVar8;
      thunk_FUN_02bb0e9c(plVar11,lVar8);
    }
    else {
      FUN_037a6538(in_stack_00000048,lVar8,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                              );
    FUN_037a5cd0(uVar5,*(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                );
    if (in_stack_00000050 == 0) goto LAB_056e563c;
    lVar8 = *(long *)(in_stack_00000050 + 0x10);
    lVar16 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
    ;
    *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000050 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar5;
      thunk_FUN_02bb0e9c(puVar6,uVar5);
    }
    else {
      FUN_037a6538(in_stack_00000050,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                              );
    FUN_037423e0(uVar5,*(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                );
    if (in_stack_00000030 == 0) goto LAB_056e563c;
    lVar8 = *(long *)(in_stack_00000030 + 0x10);
    lVar16 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar5;
      thunk_FUN_02bb0e9c(puVar6,uVar5);
      unaff_x26 = in_stack_00000048;
    }
    else {
      FUN_037a6538(in_stack_00000030,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000048;
    }
LAB_056e518c:
    if ((lVar13 != 0) && (uVar17 = *(ulong *)(lVar13 + 0x18), 0 < (int)uVar17)) {
      uVar18 = 0;
      do {
        if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_056e5640;
        memmove(&stack0x000001f0,(void *)(lVar13 + uVar18 * 0x48 + 0x20),0x48);
        uVar7 = FUN_04c09ac4(in_stack_000001f0,0);
        if ((uVar7 & 1) != 0) {
          uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          uVar12 = thunk_FUN_02ba3594(
                                     Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                     );
          uVar9 = FUN_04c0af28(uVar12,uVar5,uVar9,0);
          goto LAB_056e5684;
        }
        lVar8 = FUN_056e889c(&stack0x000001f0,0);
        if ((in_stack_00000050 == 0) ||
           (lVar16 = FUN_037a6268(in_stack_00000050,uVar19,
                                  *(undefined8 *)
                                   Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                 ), lVar16 == 0)) goto LAB_056e563c;
        lVar10 = *(long *)(lVar16 + 0x10);
        lVar14 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
        ;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar8;
          thunk_FUN_02bb0e9c(plVar11,lVar8);
        }
        else {
          FUN_037a6538(lVar16,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000230 != 0) {
          if ((in_stack_00000030 == 0) ||
             (lVar16 = FUN_037a6268(in_stack_00000030,uVar19,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                   ), in_stack_00000230 == 0)) goto LAB_056e563c;
          uVar7 = 0;
          lVar10 = 0x20;
          while ((long)uVar7 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
            if (*(uint *)(in_stack_00000230 + 0x18) <= uVar7) goto LAB_056e5640;
            puVar6 = (undefined8 *)(in_stack_00000230 + lVar10);
            uVar5 = *puVar6;
            uVar20 = puVar6[3];
            uVar12 = puVar6[2];
            *(undefined8 *)(unaff_x28 + 0x108) = puVar6[1];
            *(undefined8 *)(unaff_x28 + 0x100) = uVar5;
            *(undefined8 *)(unaff_x28 + 0x118) = uVar20;
            *(undefined8 *)(unaff_x28 + 0x110) = uVar12;
            uVar5 = puVar6[4];
            uVar20 = puVar6[7];
            uVar12 = puVar6[6];
            *(undefined8 *)(unaff_x28 + 0x128) = puVar6[5];
            *(undefined8 *)(unaff_x28 + 0x120) = uVar5;
            *(undefined8 *)(unaff_x28 + 0x138) = uVar20;
            *(undefined8 *)(unaff_x28 + 0x130) = uVar12;
            FUN_056e8664(&stack0x00000058,&stack0x000001b0);
            memcpy(&stack0x00000150,&stack0x00000058,0x58);
            if (lVar8 == 0) goto LAB_056e563c;
            in_stack_00000180 = *(undefined8 *)(lVar8 + 0x10);
            thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
            if (lVar16 == 0) goto LAB_056e563c;
            memcpy(&stack0x00000330,&stack0x00000150,0x58);
            lVar14 = *(long *)(lVar16 + 0x10);
            lVar15 = *unaff_x29;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(lVar16 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar1 * (long)unaff_w22;
              *(uint *)(lVar16 + 0x18) = uVar1 + 1;
              memcpy((void *)(lVar14 + 0x20),&stack0x00000330,0x58);
              thunk_FUN_02bb0e9c(lVar14 + 0x20,0);
            }
            else {
              uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000388,&stack0x00000330,0x58);
              FUN_03742d08(lVar16,&stack0x00000388,uVar5);
            }
            lVar10 = lVar10 + 0x40;
            uVar7 = uVar7 + 1;
            if (in_stack_00000230 == 0) goto LAB_056e563c;
          }
        }
        uVar18 = uVar18 + 1;
        unaff_x26 = in_stack_00000048;
      } while (uVar18 != (uVar17 & 0xffffffff));
    }
    if (param_1 != 0) goto code_r0x056e53cc;
    if (in_stack_00000030 == 0) goto LAB_056e563c;
    FUN_037a6268(in_stack_00000030,uVar19,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                );
  } while( true );
LAB_056e551c:
  lVar8 = FUN_037a6268(unaff_x26,iVar4,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                      );
  if ((((in_stack_00000050 == 0) ||
       (lVar13 = FUN_037a6268(in_stack_00000050,iVar4,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                             ), lVar13 == 0)) ||
      (lVar13 = FUN_037a8024(lVar13,*(undefined8 *)puVar2), in_stack_00000030 == 0)) ||
     ((lVar16 = FUN_037a6268(in_stack_00000030,iVar4,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                            ), lVar16 == 0 ||
      (uVar9 = FUN_03744c0c(lVar16,*(undefined8 *)puVar3), lVar8 == 0)))) {
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(lVar8 + 0x28) = lVar13;
  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar13);
  *(undefined8 *)(lVar8 + 0x30) = uVar9;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30),uVar9);
  if (lVar13 == 0) goto LAB_056e563c;
  uVar19 = *(uint *)(lVar13 + 0x18);
  if (0 < (int)uVar19) {
    lVar16 = 0;
    do {
      if (uVar19 <= (uint)lVar16) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar10 = *(long *)(lVar13 + 0x20 + lVar16 * 8);
      if (lVar10 == 0) goto LAB_056e563c;
      plVar11 = (long *)(lVar10 + 200);
      *plVar11 = lVar8;
      thunk_FUN_02bb0e9c(plVar11,lVar8);
      uVar19 = *(uint *)(lVar13 + 0x18);
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < (int)uVar19);
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
code_r0x056e53cc:
  if (in_stack_00000030 == 0) goto LAB_056e563c;
  param_3 = (ulong)uVar19;
  param_2 = in_stack_00000030;
  in_stack_00000040 = param_1;
  goto code_r0x056e53dc;
}


