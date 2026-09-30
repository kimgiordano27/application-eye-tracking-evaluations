/*
FUNCTION_NAME: Unity.Mathematics.float4x4$$op_Implicit
ENTRY_POINT: 056e4fb0
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


void Unity_Mathematics_float4x4__op_Implicit(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  ulong uVar16;
  uint uVar17;
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
  
  lVar11 = unaff_x21;
  lVar14 = unaff_x26;
code_r0x056e4fb0:
                    /* catch() { ... } // from try @ 056e4d48 with catch @ 056e4fb0 */
                    /* catch() { ... } // from try @ 056e4f44 with catch @ 056e4fb4 */
                    /* catch() { ... } // from try @ 056e4f40 with catch @ 056e4fb8 */
                    /* catch() { ... } // from try @ 056e4de8 with catch @ 056e4fbc */
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
                    /* catch() { ... } // from try @ 056e4d88 with catch @ 056e4fc0 */
                    /* catch() { ... } // from try @ 056e4cf4 with catch @ 056e4fc4 */
                    /* catch() { ... } // from try @ 056e4f3c with catch @ 056e4fc8
                       catch() { ... } // from try @ 056e4f48 with catch @ 056e4fc8 */
  FUN_056e02a8();
                    /* catch() { ... } // from try @ 056e4eec with catch @ 056e4fd4 */
  *(undefined8 *)(lVar5 + 0x10) = in_stack_00000020;
  thunk_FUN_02bb0e9c();
  uVar6 = FUN_04c09ac4(unaff_x25,0);
                    /* try { // try from 056e4ff0 to 057e4ff3 has its CatchHandler @ 056e5004 */
  uVar8 = 0;
  if ((uVar6 & 1) == 0) {
    uVar8 = unaff_x25;
  }
  *(undefined8 *)(lVar5 + 0x18) = uVar8;
                    /* try { // try from 056e4ff8 to 057e4fff has its CatchHandler @ 056e5000 */
  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x18));
                    /* catch() { ... } // from try @ 056e4ff8 with catch @ 056e5000
                       try { // try from 056e5000 to 057e5027 has its CatchHandler @ 056e4a90 */
                    /* catch() { ... } // from try @ 056e4ff0 with catch @ 056e5004 */
  lVar13 = *(long *)(lVar14 + 0x10);
  uVar17 = *(uint *)(lVar14 + 0x18);
  lVar15 = *(long *)
            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
  ;
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
  if (lVar13 != 0) {
                    /* try { // try from 056e5028 to 057e502b has its CatchHandler @ 056e503c */
    if (uVar17 < *(uint *)(lVar13 + 0x18)) {
                    /* try { // try from 056e5034 to 057e5047 has its CatchHandler @ 056e5050 */
                    /* catch() { ... } // from try @ 056e5028 with catch @ 056e503c */
      *(uint *)(in_stack_00000048 + 0x18) = uVar17 + 1;
      plVar7 = (long *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
      *plVar7 = lVar5;
                    /* try { // try from 056e5048 to 057e5053 has its CatchHandler @ 056e4a90 */
      thunk_FUN_02bb0e9c(plVar7,lVar5);
    }
    else {
                    /* catch() { ... } // from try @ 056e5034 with catch @ 056e5050 */
      FUN_037a6538(in_stack_00000048,lVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                              );
    FUN_037a5cd0(uVar8,*(undefined8 *)
                        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                );
    if (in_stack_00000050 != 0) {
      lVar14 = *(long *)(in_stack_00000050 + 0x10);
      lVar5 = *(long *)
               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
      ;
      *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(in_stack_00000050 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_02bb0e9c(puVar9,uVar8);
        }
        else {
          FUN_037a6538(in_stack_00000050,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                                  );
        FUN_037423e0(uVar8,*(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                    );
        if (lVar11 != 0) {
          lVar14 = *(long *)(lVar11 + 0x10);
          lVar5 = *(long *)
                   Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
          ;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              puVar9 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
              *puVar9 = uVar8;
              thunk_FUN_02bb0e9c(puVar9,uVar8);
            }
            else {
              FUN_037a6538(lVar11,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            do {
              if ((in_stack_00000038 != 0) &&
                 (uVar6 = *(ulong *)(in_stack_00000038 + 0x18), 0 < (int)uVar6)) {
                uVar16 = 0;
                do {
                  if (*(uint *)(in_stack_00000038 + 0x18) <= uVar16) goto LAB_056e5640;
                  memmove(&stack0x000001f0,(void *)(in_stack_00000038 + uVar16 * 0x48 + 0x20),0x48);
                  uVar10 = FUN_04c09ac4(in_stack_000001f0,0);
                  if ((uVar10 & 1) != 0) {
                    uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
                    uVar12 = thunk_FUN_02ba3594(
                                               Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                               );
                    uVar8 = FUN_04c0af28(uVar12,uVar8,in_stack_00000020,0);
                    goto LAB_056e5684;
                  }
                  lVar11 = FUN_056e889c(&stack0x000001f0,0);
                  if ((in_stack_00000050 == 0) ||
                     (lVar14 = FUN_037a6268(in_stack_00000050,uVar17,
                                            *(undefined8 *)
                                             Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                           ), lVar14 == 0)) goto LAB_056e563c;
                  lVar5 = *(long *)(lVar14 + 0x10);
                  lVar13 = *(long *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
                  ;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar5 == 0) goto LAB_056e563c;
                  uVar1 = *(uint *)(lVar14 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                    plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar7 = lVar11;
                    thunk_FUN_02bb0e9c(plVar7,lVar11);
                  }
                  else {
                    FUN_037a6538(lVar14,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (in_stack_00000230 != 0) {
                    if ((in_stack_00000030 == 0) ||
                       (lVar14 = FUN_037a6268(in_stack_00000030,uVar17,
                                              *(undefined8 *)
                                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                             ), in_stack_00000230 == 0)) goto LAB_056e563c;
                    uVar10 = 0;
                    lVar5 = 0x20;
                    while ((long)uVar10 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
                      if (*(uint *)(in_stack_00000230 + 0x18) <= uVar10) goto LAB_056e5640;
                      puVar9 = (undefined8 *)(in_stack_00000230 + lVar5);
                      uVar8 = *puVar9;
                      uVar18 = puVar9[3];
                      uVar12 = puVar9[2];
                      *(undefined8 *)(unaff_x28 + 0x108) = puVar9[1];
                      *(undefined8 *)(unaff_x28 + 0x100) = uVar8;
                      *(undefined8 *)(unaff_x28 + 0x118) = uVar18;
                      *(undefined8 *)(unaff_x28 + 0x110) = uVar12;
                      uVar8 = puVar9[4];
                      uVar18 = puVar9[7];
                      uVar12 = puVar9[6];
                      *(undefined8 *)(unaff_x28 + 0x128) = puVar9[5];
                      *(undefined8 *)(unaff_x28 + 0x120) = uVar8;
                      *(undefined8 *)(unaff_x28 + 0x138) = uVar18;
                      *(undefined8 *)(unaff_x28 + 0x130) = uVar12;
                      FUN_056e8664(&stack0x00000058,&stack0x000001b0);
                      memcpy(&stack0x00000150,&stack0x00000058,0x58);
                      if (lVar11 == 0) goto LAB_056e563c;
                      in_stack_00000180 = *(undefined8 *)(lVar11 + 0x10);
                      thunk_FUN_02bb0e9c(unaff_x19 + 0x30);
                      if (lVar14 == 0) goto LAB_056e563c;
                      memcpy(&stack0x00000330,&stack0x00000150,0x58);
                      lVar13 = *(long *)(lVar14 + 0x10);
                      lVar15 = *unaff_x29;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_056e563c;
                      uVar1 = *(uint *)(lVar14 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        lVar13 = lVar13 + (long)(int)uVar1 * (long)unaff_w22;
                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                        memcpy((void *)(lVar13 + 0x20),&stack0x00000330,0x58);
                        thunk_FUN_02bb0e9c(lVar13 + 0x20,0);
                      }
                      else {
                        uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                        memcpy(&stack0x00000388,&stack0x00000330,0x58);
                        FUN_03742d08(lVar14,&stack0x00000388,uVar8);
                      }
                      lVar5 = lVar5 + 0x40;
                      uVar10 = uVar10 + 1;
                      if (in_stack_00000230 == 0) goto LAB_056e563c;
                    }
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 != (uVar6 & 0xffffffff));
              }
              if (in_stack_00000040 == 0) {
                if (in_stack_00000030 == 0) break;
                FUN_037a6268(in_stack_00000030,uVar17,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                            );
              }
              else {
                if (in_stack_00000030 == 0) break;
                uVar1 = *(uint *)(in_stack_00000040 + 0x18);
                lVar11 = FUN_037a6268(in_stack_00000030,uVar17,
                                      *(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                     );
                if (0 < (int)uVar1) {
                  uVar6 = 0;
                  puVar9 = (undefined8 *)(in_stack_00000040 + 0x20);
                  do {
                    if (*(uint *)(in_stack_00000040 + 0x18) <= uVar6) goto LAB_056e5640;
                    uVar8 = *puVar9;
                    uVar18 = puVar9[3];
                    uVar12 = puVar9[2];
                    *(undefined8 *)(unaff_x28 + 0x68) = puVar9[1];
                    *(undefined8 *)(unaff_x28 + 0x60) = uVar8;
                    *(undefined8 *)(unaff_x28 + 0x78) = uVar18;
                    *(undefined8 *)(unaff_x28 + 0x70) = uVar12;
                    uVar8 = puVar9[4];
                    uVar18 = puVar9[7];
                    uVar12 = puVar9[6];
                    *(undefined8 *)(unaff_x28 + 0x88) = puVar9[5];
                    *(undefined8 *)(unaff_x28 + 0x80) = uVar8;
                    *(undefined8 *)(unaff_x28 + 0x98) = uVar18;
                    *(undefined8 *)(unaff_x28 + 0x90) = uVar12;
                    FUN_056e8664(&stack0x000000b0,&stack0x00000110);
                    if (lVar11 == 0) goto LAB_056e563c;
                    lVar14 = *(long *)(lVar11 + 0x10);
                    lVar5 = *unaff_x29;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar14 == 0) goto LAB_056e563c;
                    uVar17 = *(uint *)(lVar11 + 0x18);
                    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
                      lVar14 = lVar14 + (long)(int)uVar17 * (long)unaff_w22;
                      *(uint *)(lVar11 + 0x18) = uVar17 + 1;
                      memcpy((void *)(lVar14 + 0x20),&stack0x000000b0,0x58);
                      thunk_FUN_02bb0e9c(lVar14 + 0x20,0);
                    }
                    else {
                      uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
                      memcpy(&stack0x00000388,&stack0x000000b0,0x58);
                      FUN_03742d08(lVar11,&stack0x00000388,uVar8);
                    }
                    uVar6 = uVar6 + 1;
                    puVar9 = puVar9 + 8;
                  } while (uVar1 != uVar6);
                }
              }
              puVar3 = 
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__
              ;
              puVar2 = 
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
              ;
              unaff_x23 = unaff_x23 + 1;
              if (unaff_x23 == in_stack_00000008) {
                if (in_stack_00000048 == 0) break;
                if (*(int *)(in_stack_00000048 + 0x18) < 1) goto LAB_056e5608;
                iVar4 = 0;
                goto LAB_056e551c;
              }
              lVar11 = *(long *)(in_stack_00000018 + 8);
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x18) <= unaff_x23) goto LAB_056e5640;
              lVar11 = lVar11 + unaff_x23 * 0x20;
              in_stack_00000020 = *(undefined8 *)(lVar11 + 0x20);
              unaff_x25 = *(undefined8 *)(lVar11 + 0x28);
              in_stack_00000038 = *(long *)(lVar11 + 0x30);
              in_stack_00000040 = *(long *)(lVar11 + 0x38);
              uVar6 = FUN_04c09ac4(in_stack_00000020,0);
              if ((uVar6 & 1) != 0) {
                uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
                uVar12 = thunk_FUN_02ba3594(
                                           Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                           );
                uVar8 = FUN_04c00984(uVar12,uVar8,0);
LAB_056e5684:
                thunk_FUN_02ba3594(PTR_DAT_0631cb60);
                uVar12 = thunk_FUN_02b79644();
                FUN_04d7b3f4(uVar12,uVar8,0);
                uVar8 = thunk_FUN_02ba3594(
                                          Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar12,uVar8);
              }
              if (in_stack_00000048 == 0) break;
              lVar11 = in_stack_00000030;
              lVar14 = in_stack_00000048;
              if (*(int *)(in_stack_00000048 + 0x18) < 1) goto code_r0x056e4fb0;
              uVar17 = 0;
              while( true ) {
                lVar5 = FUN_037a6268(in_stack_00000048,uVar17,
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                    );
                if (lVar5 == 0) goto LAB_056e563c;
                iVar4 = FUN_04c075a8(*(undefined8 *)(lVar5 + 0x10),in_stack_00000020,3,0);
                if (iVar4 == 0) break;
                uVar17 = uVar17 + 1;
                if (*(int *)(in_stack_00000048 + 0x18) <= (int)uVar17) goto code_r0x056e4fb0;
              }
              lVar5 = FUN_037a6268(in_stack_00000048,uVar17,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                  );
              if (lVar5 == 0) goto code_r0x056e4fb0;
            } while( true );
          }
        }
      }
    }
  }
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_056e551c:
  lVar11 = FUN_037a6268(in_stack_00000048,iVar4,
                        *(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                       );
  if ((((in_stack_00000050 == 0) ||
       (lVar14 = FUN_037a6268(in_stack_00000050,iVar4,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                             ), lVar14 == 0)) ||
      (lVar14 = FUN_037a8024(lVar14,*(undefined8 *)puVar2), in_stack_00000030 == 0)) ||
     ((lVar5 = FUN_037a6268(in_stack_00000030,iVar4,
                            *(undefined8 *)
                             Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                           ), lVar5 == 0 ||
      (uVar8 = FUN_03744c0c(lVar5,*(undefined8 *)puVar3), lVar11 == 0)))) goto LAB_056e563c;
  *(long *)(lVar11 + 0x28) = lVar14;
  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14);
  *(undefined8 *)(lVar11 + 0x30) = uVar8;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x30),uVar8);
  if (lVar14 == 0) goto LAB_056e563c;
  uVar17 = *(uint *)(lVar14 + 0x18);
  if (0 < (int)uVar17) {
    lVar5 = 0;
    do {
      if (uVar17 <= (uint)lVar5) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar13 = *(long *)(lVar14 + 0x20 + lVar5 * 8);
      if (lVar13 == 0) goto LAB_056e563c;
      plVar7 = (long *)(lVar13 + 200);
      *plVar7 = lVar11;
      thunk_FUN_02bb0e9c(plVar7,lVar11);
      uVar17 = *(uint *)(lVar14 + 0x18);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)uVar17);
  }
  iVar4 = iVar4 + 1;
  if (*(int *)(in_stack_00000048 + 0x18) <= iVar4) {
LAB_056e5608:
    FUN_037a8024(in_stack_00000048,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_HasInteractable__
                );
    return;
  }
  goto LAB_056e551c;
}


