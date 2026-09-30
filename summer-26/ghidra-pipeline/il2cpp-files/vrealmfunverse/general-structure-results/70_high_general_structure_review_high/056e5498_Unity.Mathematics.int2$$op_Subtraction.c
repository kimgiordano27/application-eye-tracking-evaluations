/*
FUNCTION_NAME: Unity.Mathematics.int2$$op_Subtraction
ENTRY_POINT: 056e5498
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


void Unity_Mathematics_int2__op_Subtraction(long param_1,undefined1 *param_2,undefined1 *param_3)

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
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  ulong uVar17;
  long unaff_x23;
  uint uVar18;
  undefined8 uVar19;
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
  
code_r0x056e5498:
  uVar19 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70);
  memcpy(param_2,param_3,0x58);
  FUN_03742d08(unaff_x23,&stack0x00000388,uVar19);
  do {
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
        uVar19 = *(undefined8 *)(lVar9 + 0x20);
        uVar6 = *(undefined8 *)(lVar9 + 0x28);
        lVar10 = *(long *)(lVar9 + 0x30);
        in_stack_00000040 = *(long *)(lVar9 + 0x38);
        uVar5 = FUN_04c09ac4(uVar19,0);
        if ((uVar5 & 1) != 0) {
          uVar19 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          uVar6 = thunk_FUN_02ba3594(
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                    );
          uVar19 = FUN_04c00984(uVar6,uVar19,0);
LAB_056e5684:
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar6 = thunk_FUN_02b79644();
          FUN_04d7b3f4(uVar6,uVar19,0);
          uVar19 = thunk_FUN_02ba3594(
                                     Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar6,uVar19);
        }
        if (unaff_x26 == 0) goto LAB_056e563c;
        if (0 < *(int *)(unaff_x26 + 0x18)) {
          uVar18 = 0;
          do {
            lVar9 = FUN_037a6268(unaff_x26,uVar18,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                );
            if (lVar9 == 0) goto LAB_056e563c;
            iVar4 = FUN_04c075a8(*(undefined8 *)(lVar9 + 0x10),uVar19,3,0);
            if (iVar4 == 0) {
              lVar9 = FUN_037a6268(unaff_x26,uVar18,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                  );
              if (lVar9 != 0) goto LAB_056e518c;
              break;
            }
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < *(int *)(unaff_x26 + 0x18));
        }
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
        FUN_056e02a8();
        *(undefined8 *)(lVar9 + 0x10) = uVar19;
        thunk_FUN_02bb0e9c();
        uVar5 = FUN_04c09ac4(uVar6,0);
        uVar14 = 0;
        if ((uVar5 & 1) == 0) {
          uVar14 = uVar6;
        }
        *(undefined8 *)(lVar9 + 0x18) = uVar14;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x18));
        lVar11 = *(long *)(unaff_x26 + 0x10);
        uVar18 = *(uint *)(unaff_x26 + 0x18);
        lVar12 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
        ;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_056e563c;
        if (uVar18 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(in_stack_00000048 + 0x18) = uVar18 + 1;
          plVar13 = (long *)(lVar11 + (long)(int)uVar18 * 8 + 0x20);
          *plVar13 = lVar9;
          thunk_FUN_02bb0e9c(plVar13,lVar9);
        }
        else {
          FUN_037a6538(in_stack_00000048,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
          uVar17 = 0;
          do {
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_056e5640;
            memmove(&stack0x000001f0,(void *)(lVar10 + uVar17 * 0x48 + 0x20),0x48);
            uVar8 = FUN_04c09ac4(in_stack_000001f0,0);
            if ((uVar8 & 1) != 0) {
              uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
              uVar14 = thunk_FUN_02ba3594(
                                         Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                         );
              uVar19 = FUN_04c0af28(uVar14,uVar6,uVar19,0);
              goto LAB_056e5684;
            }
            lVar9 = FUN_056e889c(&stack0x000001f0,0);
            if ((in_stack_00000050 == 0) ||
               (lVar11 = FUN_037a6268(in_stack_00000050,uVar18,
                                      *(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                     ), lVar11 == 0)) goto LAB_056e563c;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar15 = *(long *)
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
            ;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = lVar9;
              thunk_FUN_02bb0e9c(plVar13,lVar9);
            }
            else {
              FUN_037a6538(lVar11,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            if (in_stack_00000230 != 0) {
              if ((in_stack_00000030 == 0) ||
                 (lVar11 = FUN_037a6268(in_stack_00000030,uVar18,
                                        *(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                       ), in_stack_00000230 == 0)) goto LAB_056e563c;
              uVar8 = 0;
              lVar12 = 0x20;
              while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
                if (*(uint *)(in_stack_00000230 + 0x18) <= uVar8) goto LAB_056e5640;
                puVar7 = (undefined8 *)(in_stack_00000230 + lVar12);
                uVar6 = *puVar7;
                uVar20 = puVar7[3];
                uVar14 = puVar7[2];
                *(undefined8 *)(unaff_x28 + 0x108) = puVar7[1];
                *(undefined8 *)(unaff_x28 + 0x100) = uVar6;
                *(undefined8 *)(unaff_x28 + 0x118) = uVar20;
                *(undefined8 *)(unaff_x28 + 0x110) = uVar14;
                uVar6 = puVar7[4];
                uVar20 = puVar7[7];
                uVar14 = puVar7[6];
                *(undefined8 *)(unaff_x28 + 0x128) = puVar7[5];
                *(undefined8 *)(unaff_x28 + 0x120) = uVar6;
                *(undefined8 *)(unaff_x28 + 0x138) = uVar20;
                *(undefined8 *)(unaff_x28 + 0x130) = uVar14;
                FUN_056e8664(&stack0x00000058,&stack0x000001b0);
                memcpy(&stack0x00000150,&stack0x00000058,0x58);
                if (lVar9 == 0) goto LAB_056e563c;
                in_stack_00000180 = *(undefined8 *)(lVar9 + 0x10);
                thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
                if (lVar11 == 0) goto LAB_056e563c;
                memcpy(&stack0x00000330,&stack0x00000150,0x58);
                lVar15 = *(long *)(lVar11 + 0x10);
                lVar16 = *unaff_x29;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_056e563c;
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = lVar15 + (long)(int)uVar1 * (long)unaff_w22;
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                  memcpy((void *)(lVar15 + 0x20),&stack0x00000330,0x58);
                  thunk_FUN_02bb0e9c(lVar15 + 0x20,0);
                }
                else {
                  uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
                  memcpy(&stack0x00000388,&stack0x00000330,0x58);
                  FUN_03742d08(lVar11,&stack0x00000388,uVar6);
                }
                lVar12 = lVar12 + 0x40;
                uVar8 = uVar8 + 1;
                if (in_stack_00000230 == 0) goto LAB_056e563c;
              }
            }
            uVar17 = uVar17 + 1;
            unaff_x26 = in_stack_00000048;
          } while (uVar17 != (uVar5 & 0xffffffff));
        }
        if (in_stack_00000040 == 0) {
          if (in_stack_00000030 == 0) goto LAB_056e563c;
          FUN_037a6268(in_stack_00000030,uVar18,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                      );
          goto LAB_056e54e8;
        }
        if (in_stack_00000030 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(in_stack_00000040 + 0x18);
        unaff_x20 = (ulong)uVar1;
        unaff_x23 = FUN_037a6268(in_stack_00000030,uVar18,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                );
      } while ((int)uVar1 < 1);
      unaff_x21 = 0;
      unaff_x25 = (undefined8 *)(in_stack_00000040 + 0x20);
    }
    if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_x21) goto LAB_056e5640;
    uVar19 = *unaff_x25;
    uVar14 = unaff_x25[3];
    uVar6 = unaff_x25[2];
    *(undefined8 *)(unaff_x28 + 0x68) = unaff_x25[1];
    *(undefined8 *)(unaff_x28 + 0x60) = uVar19;
    *(undefined8 *)(unaff_x28 + 0x78) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x70) = uVar6;
    uVar19 = unaff_x25[4];
    uVar14 = unaff_x25[7];
    uVar6 = unaff_x25[6];
    *(undefined8 *)(unaff_x28 + 0x88) = unaff_x25[5];
    *(undefined8 *)(unaff_x28 + 0x80) = uVar19;
    *(undefined8 *)(unaff_x28 + 0x98) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x90) = uVar6;
    FUN_056e8664(&stack0x000000b0,&stack0x00000110);
    if (unaff_x23 == 0) goto LAB_056e563c;
    lVar9 = *(long *)(unaff_x23 + 0x10);
    lVar10 = *unaff_x29;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_056e563c;
    uVar18 = *(uint *)(unaff_x23 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_056e548c;
    lVar9 = lVar9 + (long)(int)uVar18 * (long)unaff_w22;
    *(uint *)(unaff_x23 + 0x18) = uVar18 + 1;
    memcpy((void *)(lVar9 + 0x20),&stack0x000000b0,0x58);
    thunk_FUN_02bb0e9c(lVar9 + 0x20,0);
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
      (uVar19 = FUN_03744c0c(lVar11,*(undefined8 *)puVar3), lVar9 == 0)))) {
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(lVar9 + 0x28) = lVar10;
  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar10);
  *(undefined8 *)(lVar9 + 0x30) = uVar19;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x30),uVar19);
  if (lVar10 == 0) goto LAB_056e563c;
  uVar18 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar18) {
    lVar11 = 0;
    do {
      if (uVar18 <= (uint)lVar11) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar12 = *(long *)(lVar10 + 0x20 + lVar11 * 8);
      if (lVar12 == 0) goto LAB_056e563c;
      plVar13 = (long *)(lVar12 + 200);
      *plVar13 = lVar9;
      thunk_FUN_02bb0e9c(plVar13,lVar9);
      uVar18 = *(uint *)(lVar10 + 0x18);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)uVar18);
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
LAB_056e548c:
  param_1 = *(long *)(lVar10 + 0x20);
  param_2 = &stack0x00000388;
  param_3 = &stack0x000000b0;
  goto code_r0x056e5498;
}


