/*
FUNCTION_NAME: Unity.Mathematics.int2$$op_RightShift
ENTRY_POINT: 056e54e0
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


void Unity_Mathematics_int2__op_RightShift(undefined8 *param_1,long param_2,ulong param_3)

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
  long lVar18;
  long unaff_x19;
  int unaff_w22;
  ulong uVar19;
  uint uVar20;
  long unaff_x26;
  long unaff_x28;
  long *unaff_x29;
  undefined8 uVar21;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000030;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001f0;
  long in_stack_00000230;
  
  do {
    FUN_037a6268(param_2,param_3,*param_1);
LAB_056e54e8:
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
    lVar9 = *(long *)(in_stack_00000018 + 8);
    if (lVar9 == 0) goto LAB_056e563c;
    if (*(uint *)(lVar9 + 0x18) <= in_stack_00000010) goto LAB_056e5640;
    lVar9 = lVar9 + in_stack_00000010 * 0x20;
    uVar12 = *(undefined8 *)(lVar9 + 0x20);
    uVar6 = *(undefined8 *)(lVar9 + 0x28);
    lVar10 = *(long *)(lVar9 + 0x30);
    lVar9 = *(long *)(lVar9 + 0x38);
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
      uVar20 = 0;
      do {
        lVar11 = FUN_037a6268(unaff_x26,uVar20,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                             );
        if (lVar11 == 0) goto LAB_056e563c;
        iVar4 = FUN_04c075a8(*(undefined8 *)(lVar11 + 0x10),uVar12,3,0);
        if (iVar4 == 0) {
          lVar11 = FUN_037a6268(unaff_x26,uVar20,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                               );
          if (lVar11 != 0) goto LAB_056e518c;
          break;
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < *(int *)(unaff_x26 + 0x18));
    }
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
    FUN_056e02a8();
    *(undefined8 *)(lVar11 + 0x10) = uVar12;
    thunk_FUN_02bb0e9c();
    uVar5 = FUN_04c09ac4(uVar6,0);
    uVar15 = 0;
    if ((uVar5 & 1) == 0) {
      uVar15 = uVar6;
    }
    *(undefined8 *)(lVar11 + 0x18) = uVar15;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x18));
    lVar13 = *(long *)(unaff_x26 + 0x10);
    uVar20 = *(uint *)(unaff_x26 + 0x18);
    lVar16 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
    ;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_056e563c;
    if (uVar20 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar20 + 1;
      plVar14 = (long *)(lVar13 + (long)(int)uVar20 * 8 + 0x20);
      *plVar14 = lVar11;
      thunk_FUN_02bb0e9c(plVar14,lVar11);
    }
    else {
      FUN_037a6538(in_stack_00000048,lVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                              );
    FUN_037a5cd0(uVar6,*(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                );
    if (in_stack_00000050 == 0) goto LAB_056e563c;
    lVar11 = *(long *)(in_stack_00000050 + 0x10);
    lVar13 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
    ;
    *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000050 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar6;
      thunk_FUN_02bb0e9c(puVar7,uVar6);
    }
    else {
      FUN_037a6538(in_stack_00000050,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                              );
    FUN_037423e0(uVar6,*(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                );
    if (in_stack_00000030 == 0) goto LAB_056e563c;
    lVar11 = *(long *)(in_stack_00000030 + 0x10);
    lVar13 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar6;
      thunk_FUN_02bb0e9c(puVar7,uVar6);
      unaff_x26 = in_stack_00000048;
    }
    else {
      FUN_037a6538(in_stack_00000030,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000048;
    }
LAB_056e518c:
    if ((lVar10 != 0) && (uVar5 = *(ulong *)(lVar10 + 0x18), 0 < (int)uVar5)) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_056e5640;
        memmove(&stack0x000001f0,(void *)(lVar10 + uVar19 * 0x48 + 0x20),0x48);
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
        lVar11 = FUN_056e889c(&stack0x000001f0,0);
        if ((in_stack_00000050 == 0) ||
           (lVar13 = FUN_037a6268(in_stack_00000050,uVar20,
                                  *(undefined8 *)
                                   Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                 ), lVar13 == 0)) goto LAB_056e563c;
        lVar16 = *(long *)(lVar13 + 0x10);
        lVar17 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
        ;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
          *plVar14 = lVar11;
          thunk_FUN_02bb0e9c(plVar14,lVar11);
        }
        else {
          FUN_037a6538(lVar13,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000230 != 0) {
          if ((in_stack_00000030 == 0) ||
             (lVar13 = FUN_037a6268(in_stack_00000030,uVar20,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                   ), in_stack_00000230 == 0)) goto LAB_056e563c;
          uVar8 = 0;
          lVar16 = 0x20;
          while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
            if (*(uint *)(in_stack_00000230 + 0x18) <= uVar8) goto LAB_056e5640;
            puVar7 = (undefined8 *)(in_stack_00000230 + lVar16);
            uVar6 = *puVar7;
            uVar21 = puVar7[3];
            uVar15 = puVar7[2];
            *(undefined8 *)(unaff_x28 + 0x108) = puVar7[1];
            *(undefined8 *)(unaff_x28 + 0x100) = uVar6;
            *(undefined8 *)(unaff_x28 + 0x118) = uVar21;
            *(undefined8 *)(unaff_x28 + 0x110) = uVar15;
            uVar6 = puVar7[4];
            uVar21 = puVar7[7];
            uVar15 = puVar7[6];
            *(undefined8 *)(unaff_x28 + 0x128) = puVar7[5];
            *(undefined8 *)(unaff_x28 + 0x120) = uVar6;
            *(undefined8 *)(unaff_x28 + 0x138) = uVar21;
            *(undefined8 *)(unaff_x28 + 0x130) = uVar15;
            FUN_056e8664(&stack0x00000058,&stack0x000001b0);
            memcpy(&stack0x00000150,&stack0x00000058,0x58);
            if (lVar11 == 0) goto LAB_056e563c;
            in_stack_00000180 = *(undefined8 *)(lVar11 + 0x10);
            thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
            if (lVar13 == 0) goto LAB_056e563c;
            memcpy(&stack0x00000330,&stack0x00000150,0x58);
            lVar17 = *(long *)(lVar13 + 0x10);
            lVar18 = *unaff_x29;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (uVar1 < *(uint *)(lVar17 + 0x18)) {
              lVar17 = lVar17 + (long)(int)uVar1 * (long)unaff_w22;
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              memcpy((void *)(lVar17 + 0x20),&stack0x00000330,0x58);
              thunk_FUN_02bb0e9c(lVar17 + 0x20,0);
            }
            else {
              uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000388,&stack0x00000330,0x58);
              FUN_03742d08(lVar13,&stack0x00000388,uVar6);
            }
            lVar16 = lVar16 + 0x40;
            uVar8 = uVar8 + 1;
            if (in_stack_00000230 == 0) goto LAB_056e563c;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x26 = in_stack_00000048;
      } while (uVar19 != (uVar5 & 0xffffffff));
    }
    if (lVar9 != 0) {
      if (in_stack_00000030 == 0) goto LAB_056e563c;
      uVar1 = *(uint *)(lVar9 + 0x18);
      lVar10 = FUN_037a6268(in_stack_00000030,uVar20,
                            *(undefined8 *)
                             Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                           );
      if (0 < (int)uVar1) {
        uVar5 = 0;
        puVar7 = (undefined8 *)(lVar9 + 0x20);
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_056e5640;
          uVar12 = *puVar7;
          uVar15 = puVar7[3];
          uVar6 = puVar7[2];
          *(undefined8 *)(unaff_x28 + 0x68) = puVar7[1];
          *(undefined8 *)(unaff_x28 + 0x60) = uVar12;
          *(undefined8 *)(unaff_x28 + 0x78) = uVar15;
          *(undefined8 *)(unaff_x28 + 0x70) = uVar6;
          uVar12 = puVar7[4];
          uVar15 = puVar7[7];
          uVar6 = puVar7[6];
          *(undefined8 *)(unaff_x28 + 0x88) = puVar7[5];
          *(undefined8 *)(unaff_x28 + 0x80) = uVar12;
          *(undefined8 *)(unaff_x28 + 0x98) = uVar15;
          *(undefined8 *)(unaff_x28 + 0x90) = uVar6;
          FUN_056e8664(&stack0x000000b0,&stack0x00000110);
          if (lVar10 == 0) goto LAB_056e563c;
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar13 = *unaff_x29;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_056e563c;
          uVar20 = *(uint *)(lVar10 + 0x18);
          if (uVar20 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar20 * (long)unaff_w22;
            *(uint *)(lVar10 + 0x18) = uVar20 + 1;
            memcpy((void *)(lVar11 + 0x20),&stack0x000000b0,0x58);
            thunk_FUN_02bb0e9c(lVar11 + 0x20,0);
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x00000388,&stack0x000000b0,0x58);
            FUN_03742d08(lVar10,&stack0x00000388,uVar12);
          }
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 8;
        } while (uVar1 != uVar5);
      }
      goto LAB_056e54e8;
    }
    if (in_stack_00000030 == 0) goto LAB_056e563c;
    param_3 = (ulong)uVar20;
    param_2 = in_stack_00000030;
    param_1 = (undefined8 *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
    ;
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
  uVar20 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar20) {
    lVar11 = 0;
    do {
      if (uVar20 <= (uint)lVar11) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar13 = *(long *)(lVar10 + 0x20 + lVar11 * 8);
      if (lVar13 == 0) goto LAB_056e563c;
      plVar14 = (long *)(lVar13 + 200);
      *plVar14 = lVar9;
      thunk_FUN_02bb0e9c(plVar14,lVar9);
      uVar20 = *(uint *)(lVar10 + 0x18);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)uVar20);
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


