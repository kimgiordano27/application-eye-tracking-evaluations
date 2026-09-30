/*
FUNCTION_NAME: Unity.Mathematics.float4x4$$TRS
ENTRY_POINT: 056e5184
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


void Unity_Mathematics_float4x4__TRS(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  ulong unaff_x23;
  ulong uVar16;
  uint unaff_w24;
  long unaff_x26;
  undefined8 uVar17;
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
  
  do {
    FUN_037a6538(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
LAB_056e518c:
    if ((unaff_x20 != 0) && (uVar11 = *(ulong *)(unaff_x20 + 0x18), 0 < (int)uVar11)) {
      uVar16 = 0;
      do {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar16) goto LAB_056e5640;
        memmove(&stack0x000001f0,(void *)(unaff_x20 + uVar16 * 0x48 + 0x20),0x48);
        uVar7 = FUN_04c09ac4(in_stack_000001f0,0);
        if ((uVar7 & 1) != 0) {
          uVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          uVar10 = thunk_FUN_02ba3594(
                                     Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                     );
          uVar17 = FUN_04c0af28(uVar10,uVar17,in_stack_00000020,0);
          goto LAB_056e5684;
        }
        lVar8 = FUN_056e889c(&stack0x000001f0,0);
        if ((in_stack_00000050 == 0) ||
           (lVar9 = FUN_037a6268(in_stack_00000050,unaff_w24,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                ), lVar9 == 0)) goto LAB_056e563c;
        lVar12 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
        ;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar13 = lVar8;
          thunk_FUN_02bb0e9c(plVar13,lVar8);
        }
        else {
          FUN_037a6538(lVar9,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000230 != 0) {
          if ((in_stack_00000030 == 0) ||
             (lVar9 = FUN_037a6268(in_stack_00000030,unaff_w24,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                  ), in_stack_00000230 == 0)) goto LAB_056e563c;
          uVar7 = 0;
          lVar12 = 0x20;
          while ((long)uVar7 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
            if (*(uint *)(in_stack_00000230 + 0x18) <= uVar7) goto LAB_056e5640;
            puVar6 = (undefined8 *)(in_stack_00000230 + lVar12);
            uVar17 = *puVar6;
            uVar18 = puVar6[3];
            uVar10 = puVar6[2];
            *(undefined8 *)(unaff_x28 + 0x108) = puVar6[1];
            *(undefined8 *)(unaff_x28 + 0x100) = uVar17;
            *(undefined8 *)(unaff_x28 + 0x118) = uVar18;
            *(undefined8 *)(unaff_x28 + 0x110) = uVar10;
            uVar17 = puVar6[4];
            uVar18 = puVar6[7];
            uVar10 = puVar6[6];
            *(undefined8 *)(unaff_x28 + 0x128) = puVar6[5];
            *(undefined8 *)(unaff_x28 + 0x120) = uVar17;
            *(undefined8 *)(unaff_x28 + 0x138) = uVar18;
            *(undefined8 *)(unaff_x28 + 0x130) = uVar10;
            FUN_056e8664(&stack0x00000058,&stack0x000001b0);
            memcpy(&stack0x00000150,&stack0x00000058,0x58);
            if (lVar8 == 0) goto LAB_056e563c;
            in_stack_00000180 = *(undefined8 *)(lVar8 + 0x10);
            thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
            if (lVar9 == 0) goto LAB_056e563c;
            memcpy(&stack0x00000330,&stack0x00000150,0x58);
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar15 = *unaff_x29;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar1 * (long)unaff_w22;
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              memcpy((void *)(lVar14 + 0x20),&stack0x00000330,0x58);
              thunk_FUN_02bb0e9c(lVar14 + 0x20,0);
            }
            else {
              uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000388,&stack0x00000330,0x58);
              FUN_03742d08(lVar9,&stack0x00000388,uVar17);
            }
            lVar12 = lVar12 + 0x40;
            uVar7 = uVar7 + 1;
            if (in_stack_00000230 == 0) goto LAB_056e563c;
          }
        }
        uVar16 = uVar16 + 1;
        unaff_x20 = in_stack_00000038;
        unaff_x26 = in_stack_00000048;
      } while (uVar16 != (uVar11 & 0xffffffff));
    }
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
      lVar8 = FUN_037a6268(in_stack_00000030,unaff_w24,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                          );
      if (0 < (int)uVar1) {
        uVar11 = 0;
        puVar6 = (undefined8 *)(in_stack_00000040 + 0x20);
        do {
          if (*(uint *)(in_stack_00000040 + 0x18) <= uVar11) goto LAB_056e5640;
          uVar17 = *puVar6;
          uVar18 = puVar6[3];
          uVar10 = puVar6[2];
          *(undefined8 *)(unaff_x28 + 0x68) = puVar6[1];
          *(undefined8 *)(unaff_x28 + 0x60) = uVar17;
          *(undefined8 *)(unaff_x28 + 0x78) = uVar18;
          *(undefined8 *)(unaff_x28 + 0x70) = uVar10;
          uVar17 = puVar6[4];
          uVar18 = puVar6[7];
          uVar10 = puVar6[6];
          *(undefined8 *)(unaff_x28 + 0x88) = puVar6[5];
          *(undefined8 *)(unaff_x28 + 0x80) = uVar17;
          *(undefined8 *)(unaff_x28 + 0x98) = uVar18;
          *(undefined8 *)(unaff_x28 + 0x90) = uVar10;
          FUN_056e8664(&stack0x000000b0,&stack0x00000110);
          if (lVar8 == 0) goto LAB_056e563c;
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar12 = *unaff_x29;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_056e563c;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * (long)unaff_w22;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            memcpy((void *)(lVar9 + 0x20),&stack0x000000b0,0x58);
            thunk_FUN_02bb0e9c(lVar9 + 0x20,0);
          }
          else {
            uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x00000388,&stack0x000000b0,0x58);
            FUN_03742d08(lVar8,&stack0x00000388,uVar17);
          }
          uVar11 = uVar11 + 1;
          puVar6 = puVar6 + 8;
        } while (uVar1 != uVar11);
      }
    }
    puVar4 = 
    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__;
    puVar3 = 
    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
    ;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x23 == in_stack_00000008) {
      if (unaff_x26 == 0) goto LAB_056e563c;
      if (*(int *)(unaff_x26 + 0x18) < 1) goto LAB_056e5608;
      iVar5 = 0;
      break;
    }
    lVar8 = *(long *)(in_stack_00000018 + 8);
    if (lVar8 == 0) goto LAB_056e563c;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_056e5640;
    lVar8 = lVar8 + unaff_x23 * 0x20;
    in_stack_00000020 = *(undefined8 *)(lVar8 + 0x20);
    uVar17 = *(undefined8 *)(lVar8 + 0x28);
    unaff_x20 = *(long *)(lVar8 + 0x30);
    in_stack_00000040 = *(long *)(lVar8 + 0x38);
    uVar11 = FUN_04c09ac4(in_stack_00000020,0);
    if ((uVar11 & 1) != 0) {
      uVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                         (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
      uVar10 = thunk_FUN_02ba3594(
                                 Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                 );
      uVar17 = FUN_04c00984(uVar10,uVar17,0);
LAB_056e5684:
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar10 = thunk_FUN_02b79644();
      FUN_04d7b3f4(uVar10,uVar17,0);
      uVar17 = thunk_FUN_02ba3594(
                                 Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar10,uVar17);
    }
    if (unaff_x26 == 0) goto LAB_056e563c;
    in_stack_00000038 = unaff_x20;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      unaff_w24 = 0;
      do {
        lVar8 = FUN_037a6268(unaff_x26,unaff_w24,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                            );
        if (lVar8 == 0) goto LAB_056e563c;
        iVar5 = FUN_04c075a8(*(undefined8 *)(lVar8 + 0x10),in_stack_00000020,3,0);
        if (iVar5 == 0) {
          lVar8 = FUN_037a6268(unaff_x26,unaff_w24,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                              );
          if (lVar8 != 0) goto LAB_056e518c;
          break;
        }
        unaff_w24 = unaff_w24 + 1;
      } while ((int)unaff_w24 < *(int *)(unaff_x26 + 0x18));
    }
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
    FUN_056e02a8();
    *(undefined8 *)(lVar8 + 0x10) = in_stack_00000020;
    thunk_FUN_02bb0e9c();
    uVar11 = FUN_04c09ac4(uVar17,0);
    uVar10 = 0;
    if ((uVar11 & 1) == 0) {
      uVar10 = uVar17;
    }
    *(undefined8 *)(lVar8 + 0x18) = uVar10;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x18));
    lVar9 = *(long *)(unaff_x26 + 0x10);
    unaff_w24 = *(uint *)(unaff_x26 + 0x18);
    lVar12 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
    ;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_056e563c;
    if (unaff_w24 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = unaff_w24 + 1;
      plVar13 = (long *)(lVar9 + (long)(int)unaff_w24 * 8 + 0x20);
      *plVar13 = lVar8;
      thunk_FUN_02bb0e9c(plVar13,lVar8);
    }
    else {
      FUN_037a6538(in_stack_00000048,lVar8,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    uVar17 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                               );
    FUN_037a5cd0(uVar17,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                );
    if (in_stack_00000050 == 0) goto LAB_056e563c;
    lVar8 = *(long *)(in_stack_00000050 + 0x10);
    lVar9 = *(long *)
             Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
    ;
    *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000050 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar17;
      thunk_FUN_02bb0e9c(puVar6,uVar17);
    }
    else {
      FUN_037a6538(in_stack_00000050,uVar17,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    param_3 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                                );
    FUN_037423e0(param_3,*(undefined8 *)
                          Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                );
    if (in_stack_00000030 == 0) goto LAB_056e563c;
    lVar8 = *(long *)(in_stack_00000030 + 0x10);
    lVar9 = *(long *)
             Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = param_3;
      thunk_FUN_02bb0e9c(puVar6,param_3);
      unaff_x26 = in_stack_00000048;
      goto LAB_056e518c;
    }
    param_1 = *(long *)(*(long *)(lVar9 + 0x20) + 0xc0);
    param_2 = in_stack_00000030;
    unaff_x26 = in_stack_00000048;
  } while( true );
LAB_056e551c:
  lVar8 = FUN_037a6268(unaff_x26,iVar5,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                      );
  if ((((in_stack_00000050 == 0) ||
       (lVar9 = FUN_037a6268(in_stack_00000050,iVar5,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                            ), lVar9 == 0)) ||
      (lVar9 = FUN_037a8024(lVar9,*(undefined8 *)puVar3), in_stack_00000030 == 0)) ||
     ((lVar12 = FUN_037a6268(in_stack_00000030,iVar5,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                            ), lVar12 == 0 ||
      (uVar17 = FUN_03744c0c(lVar12,*(undefined8 *)puVar4), lVar8 == 0)))) {
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(lVar8 + 0x28) = lVar9;
  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar9);
  *(undefined8 *)(lVar8 + 0x30) = uVar17;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30),uVar17);
  if (lVar9 == 0) goto LAB_056e563c;
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar1) {
    lVar12 = 0;
    do {
      if (uVar1 <= (uint)lVar12) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar14 = *(long *)(lVar9 + 0x20 + lVar12 * 8);
      if (lVar14 == 0) goto LAB_056e563c;
      plVar13 = (long *)(lVar14 + 200);
      *plVar13 = lVar8;
      thunk_FUN_02bb0e9c(plVar13,lVar8);
      uVar1 = *(uint *)(lVar9 + 0x18);
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
}


