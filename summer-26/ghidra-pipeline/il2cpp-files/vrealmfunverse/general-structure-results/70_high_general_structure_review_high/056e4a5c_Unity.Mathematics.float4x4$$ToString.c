/*
FUNCTION_NAME: Unity.Mathematics.float4x4$$ToString
ENTRY_POINT: 056e4a5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_float4x4__ToString(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong unaff_x19;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long unaff_x24;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar23;
  long *in_stack_00000018;
  long in_stack_00000030;
  ulong in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001f0;
  long in_stack_00000230;
  long in_stack_000002e0;
  long in_stack_00000320;
  
code_r0x056e4a5c:
  uVar4 = FUN_04c0c288(unaff_x24,0,unaff_w23,0);
  lVar5 = FUN_04c0e450(unaff_x24,unaff_w23 + 1,0);
  uVar6 = FUN_04c09ac4(lVar5,0);
                    /* try { // try from 056e4a90 to 057e4c63 has its CatchHandler @ 056e4a90
                       catch() { ... } // from try @ 056e4a90 with catch @ 056e4a90
                       catch() { ... } // from try @ 056e4e54 with catch @ 056e4a90
                       catch() { ... } // from try @ 056e4f34 with catch @ 056e4a90
                       catch() { ... } // from try @ 056e4f4c with catch @ 056e4a90
                       catch() { ... } // from try @ 056e5000 with catch @ 056e4a90
                       catch() { ... } // from try @ 056e5048 with catch @ 056e4a90 */
  if ((uVar6 & 1) == 0) {
    if (unaff_x26 != 0) {
      do {
        if (0 < *(int *)(unaff_x26 + 0x18)) {
          uVar20 = 0;
          do {
            lVar7 = FUN_037a6268(unaff_x26,uVar20,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                );
            if (lVar7 == 0) goto LAB_056e563c;
            iVar3 = FUN_04c075a8(*(undefined8 *)(lVar7 + 0x10),uVar4,3,0);
            if (iVar3 == 0) {
              lVar7 = FUN_037a6268(unaff_x26,uVar20,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                                  );
              if (lVar7 != 0) {
                lVar5 = FUN_056e889c(&stack0x000002e0,lVar5);
                if (in_stack_00000050 != 0) goto LAB_056e4cfc;
                goto LAB_056e563c;
              }
              break;
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < *(int *)(unaff_x26 + 0x18));
        }
        lVar7 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
        FUN_056e02a8();
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x10),uVar4);
        lVar15 = *(long *)(unaff_x26 + 0x10);
        uVar20 = *(uint *)(unaff_x26 + 0x18);
        lVar16 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
        ;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar15 == 0) break;
        if (uVar20 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(in_stack_00000048 + 0x18) = uVar20 + 1;
          plVar8 = (long *)(lVar15 + (long)(int)uVar20 * 8 + 0x20);
          *plVar8 = lVar7;
          thunk_FUN_02bb0e9c(plVar8,lVar7);
        }
        else {
          FUN_037a6538(in_stack_00000048,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                                  );
        FUN_037a5cd0(uVar4,*(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                    );
        if (in_stack_00000050 == 0) break;
        lVar7 = *(long *)(in_stack_00000050 + 0x10);
        lVar15 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
        ;
        *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar1 = *(uint *)(in_stack_00000050 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar4;
          thunk_FUN_02bb0e9c(puVar9,uVar4);
        }
        else {
          FUN_037a6538(in_stack_00000050,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 056e4c64 to 057e4c6b has its CatchHandler @ 056e4fa0 */
        uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                                  );
        FUN_037423e0(uVar4,*(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                    );
        if (unaff_x21 == 0) break;
        lVar7 = *(long *)(unaff_x21 + 0x10);
        lVar15 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
        ;
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar4;
          thunk_FUN_02bb0e9c(puVar9,uVar4);
        }
        else {
          FUN_037a6538(unaff_x21,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar5 = FUN_056e889c(&stack0x000002e0,lVar5);
                    /* try { // try from 056e4cf4 to 057e4d1f has its CatchHandler @ 056e4fc4 */
        unaff_x26 = in_stack_00000048;
LAB_056e4cfc:
        lVar7 = FUN_037a6268(in_stack_00000050,uVar20,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                            );
        if (lVar7 == 0) break;
        lVar15 = *(long *)(lVar7 + 0x10);
        lVar16 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
        ;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar15 == 0) break;
                    /* try { // try from 056e4d34 to 057e4d37 has its CatchHandler @ 056e4fa8 */
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                    /* try { // try from 056e4d48 to 057e4d5f has its CatchHandler @ 056e4fb0 */
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = lVar5;
          thunk_FUN_02bb0e9c(plVar8,lVar5);
        }
        else {
          FUN_037a6538(lVar7,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000320 != 0) {
                    /* try { // try from 056e4d88 to 057e4d9b has its CatchHandler @ 056e4fc0 */
          if ((in_stack_00000030 == 0) ||
             (lVar7 = FUN_037a6268(in_stack_00000030,uVar20,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                  ), in_stack_00000320 == 0)) break;
          uVar6 = 0;
          lVar15 = 0x20;
          while ((long)uVar6 < (long)(int)*(uint *)(in_stack_00000320 + 0x18)) {
                    /* try { // try from 056e4dc0 to 057e4dc3 has its CatchHandler @ 056e4fa4 */
            if (*(uint *)(in_stack_00000320 + 0x18) <= uVar6) goto LAB_056e5640;
            puVar9 = (undefined8 *)(in_stack_00000320 + lVar15);
            uVar4 = *puVar9;
            uVar13 = puVar9[3];
            uVar11 = puVar9[2];
            *(undefined8 *)(unaff_x28 + 0x1f8) = puVar9[1];
            *(undefined8 *)(unaff_x28 + 0x1f0) = uVar4;
            *(undefined8 *)(unaff_x28 + 0x208) = uVar13;
            *(undefined8 *)(unaff_x28 + 0x200) = uVar11;
            uVar4 = puVar9[4];
            uVar13 = puVar9[7];
            uVar11 = puVar9[6];
            *(undefined8 *)(unaff_x28 + 0x218) = puVar9[5];
            *(undefined8 *)(unaff_x28 + 0x210) = uVar4;
            *(undefined8 *)(unaff_x28 + 0x228) = uVar13;
            *(undefined8 *)(unaff_x28 + 0x220) = uVar11;
                    /* try { // try from 056e4de0 to 057e4de3 has its CatchHandler @ 056e4fac */
            FUN_056e8664(&stack0x00000058,&stack0x000002a0);
                    /* try { // try from 056e4de8 to 057e4df3 has its CatchHandler @ 056e4fbc */
            memcpy(&stack0x00000240,&stack0x00000058,0x58);
            if ((lVar5 == 0) || (thunk_FUN_02bb0e9c(unaff_x29 + 0x30), lVar7 == 0))
            goto LAB_056e563c;
            memcpy(&stack0x00000330,&stack0x00000240,0x58);
            lVar16 = *(long *)(lVar7 + 0x10);
            lVar17 = *unaff_x27;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    /* try { // try from 056e4e30 to 057e4e33 has its CatchHandler @ 056e4f98 */
            if (lVar16 == 0) goto LAB_056e563c;
            uVar20 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 056e4e3c to 057e4e53 has its CatchHandler @ 056e4f9c */
            if (uVar20 < *(uint *)(lVar16 + 0x18)) {
              lVar16 = lVar16 + (long)(int)uVar20 * (long)unaff_w22;
                    /* try { // try from 056e4e54 to 057e4eeb has its CatchHandler @ 056e4a90 */
              *(uint *)(lVar7 + 0x18) = uVar20 + 1;
              memcpy((void *)(lVar16 + 0x20),&stack0x00000330,0x58);
              thunk_FUN_02bb0e9c(lVar16 + 0x20,0);
            }
            else {
              uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000388,&stack0x00000330,0x58);
              FUN_03742d08(lVar7,&stack0x00000388,uVar4);
            }
            lVar15 = lVar15 + 0x40;
            uVar6 = uVar6 + 1;
            if (in_stack_00000320 == 0) goto LAB_056e563c;
          }
        }
        puVar14 = 
        Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_CanSelect__;
        unaff_x19 = unaff_x19 + 1;
        if (unaff_x19 == in_stack_00000040) {
          if ((in_stack_00000018[1] == 0) ||
             (uVar6 = *(ulong *)(in_stack_00000018[1] + 0x18), (int)uVar6 < 1)) goto LAB_056e54f8;
          uVar21 = 0;
                    /* try { // try from 056e4eec to 057e4f33 has its CatchHandler @ 056e4fd4 */
          goto LAB_056e4ef8;
        }
        lVar5 = *in_stack_00000018;
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x19) goto LAB_056e5640;
        memmove(&stack0x000002e0,(void *)(lVar5 + unaff_x19 * 0x48 + 0x20),0x48);
        uVar6 = FUN_04c09ac4(in_stack_000002e0,0);
        if ((uVar6 & 1) != 0) {
          uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          puVar14 = 
          Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Unselect__
          ;
          goto LAB_056e5714;
        }
        if (in_stack_000002e0 == 0) break;
        unaff_w23 = FUN_04c0eca4(in_stack_000002e0,0x2f,0);
        unaff_x21 = in_stack_00000030;
        unaff_x24 = in_stack_000002e0;
        if (unaff_w23 != -1) goto code_r0x056e4a5c;
        uVar4 = 0;
        lVar5 = in_stack_000002e0;
        if (unaff_x26 == 0) break;
      } while( true );
    }
    goto LAB_056e563c;
  }
  uVar4 = thunk_FUN_02ba3594(
                            Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_State__
                            );
  uVar11 = thunk_FUN_02ba3594(Method_UnityEngine_Timeline_IntervalTree<RuntimeElement>__ctor__);
  uVar4 = FUN_04c0a5c4(uVar4,in_stack_000002e0,uVar11,0);
LAB_056e5684:
  thunk_FUN_02ba3594(PTR_DAT_0631cb60);
  uVar11 = thunk_FUN_02b79644();
  FUN_04d7b3f4(uVar11,uVar4,0);
  uVar4 = thunk_FUN_02ba3594(
                            Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar11,uVar4);
LAB_056e4ef8:
  do {
    lVar5 = in_stack_00000018[1];
    if (lVar5 == 0) goto LAB_056e563c;
    if (*(uint *)(lVar5 + 0x18) <= uVar21) {
LAB_056e5640:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar5 = lVar5 + uVar21 * 0x20;
    uVar4 = *(undefined8 *)(lVar5 + 0x20);
    uVar11 = *(undefined8 *)(lVar5 + 0x28);
    lVar7 = *(long *)(lVar5 + 0x30);
    lVar5 = *(long *)(lVar5 + 0x38);
    uVar10 = FUN_04c09ac4(uVar4,0);
    if ((uVar10 & 1) != 0) {
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
      puVar14 = 
      Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
      ;
LAB_056e5714:
      uVar11 = thunk_FUN_02ba3594(puVar14);
      uVar4 = FUN_04c00984(uVar11,uVar4,0);
      goto LAB_056e5684;
    }
                    /* try { // try from 056e4f34 to 057e4f3b has its CatchHandler @ 056e4a90 */
    if (unaff_x26 == 0) goto LAB_056e563c;
                    /* try { // try from 056e4f3c to 057e4f3f has its CatchHandler @ 056e4fc8 */
                    /* try { // try from 056e4f40 to 057e4f43 has its CatchHandler @ 056e4fb8 */
                    /* try { // try from 056e4f44 to 057e4f47 has its CatchHandler @ 056e4fb4 */
    if (0 < *(int *)(unaff_x26 + 0x18)) {
                    /* try { // try from 056e4f48 to 057e4f4b has its CatchHandler @ 056e4fc8 */
      uVar20 = 0;
      do {
                    /* try { // try from 056e4f4c to 057e4fef has its CatchHandler @ 056e4a90 */
        lVar15 = FUN_037a6268(unaff_x26,uVar20,
                              *(undefined8 *)
                               Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                             );
        if (lVar15 == 0) goto LAB_056e563c;
        iVar3 = FUN_04c075a8(*(undefined8 *)(lVar15 + 0x10),uVar4,3,0);
        if (iVar3 == 0) {
                    /* catch() { ... } // from try @ 056e4e30 with catch @ 056e4f98 */
                    /* catch() { ... } // from try @ 056e4e3c with catch @ 056e4f9c */
                    /* catch() { ... } // from try @ 056e4c64 with catch @ 056e4fa0 */
                    /* catch() { ... } // from try @ 056e4dc0 with catch @ 056e4fa4 */
                    /* catch() { ... } // from try @ 056e4d34 with catch @ 056e4fa8 */
          lVar15 = FUN_037a6268(unaff_x26,uVar20,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                               );
                    /* catch() { ... } // from try @ 056e4de0 with catch @ 056e4fac */
          if (lVar15 != 0) goto LAB_056e518c;
          break;
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < *(int *)(unaff_x26 + 0x18));
    }
    lVar15 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314ce8);
    FUN_056e02a8();
    *(undefined8 *)(lVar15 + 0x10) = uVar4;
    thunk_FUN_02bb0e9c();
    uVar10 = FUN_04c09ac4(uVar11,0);
    uVar13 = 0;
    if ((uVar10 & 1) == 0) {
      uVar13 = uVar11;
    }
    *(undefined8 *)(lVar15 + 0x18) = uVar13;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar15 + 0x18));
    lVar16 = *(long *)(unaff_x26 + 0x10);
    uVar20 = *(uint *)(unaff_x26 + 0x18);
    lVar17 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
    ;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_056e563c;
    if (uVar20 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar20 + 1;
      plVar8 = (long *)(lVar16 + (long)(int)uVar20 * 8 + 0x20);
      *plVar8 = lVar15;
      thunk_FUN_02bb0e9c(plVar8,lVar15);
    }
    else {
      FUN_037a6538(in_stack_00000048,lVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                               );
    FUN_037a5cd0(uVar11,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                );
    if (in_stack_00000050 == 0) goto LAB_056e563c;
    lVar15 = *(long *)(in_stack_00000050 + 0x10);
    lVar16 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
    ;
    *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000050 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
      puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
      *puVar9 = uVar11;
      thunk_FUN_02bb0e9c(puVar9,uVar11);
    }
    else {
      FUN_037a6538(in_stack_00000050,uVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                               );
    FUN_037423e0(uVar11,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                );
    if (in_stack_00000030 == 0) goto LAB_056e563c;
    lVar15 = *(long *)(in_stack_00000030 + 0x10);
    lVar16 = *(long *)
              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
    ;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_056e563c;
    uVar1 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar1 + 1;
      puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
      *puVar9 = uVar11;
      thunk_FUN_02bb0e9c(puVar9,uVar11);
      unaff_x26 = in_stack_00000048;
    }
    else {
      FUN_037a6538(in_stack_00000030,uVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000048;
    }
LAB_056e518c:
    if ((lVar7 != 0) && (uVar10 = *(ulong *)(lVar7 + 0x18), 0 < (int)uVar10)) {
      uVar22 = 0;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar22) goto LAB_056e5640;
        memmove(&stack0x000001f0,(void *)(lVar7 + uVar22 * 0x48 + 0x20),0x48);
        uVar12 = FUN_04c09ac4(in_stack_000001f0,0);
        if ((uVar12 & 1) != 0) {
          uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x00000388);
          uVar13 = thunk_FUN_02ba3594(
                                     Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                     );
          uVar4 = FUN_04c0af28(uVar13,uVar11,uVar4,0);
          goto LAB_056e5684;
        }
        lVar15 = FUN_056e889c(&stack0x000001f0,0);
        if ((in_stack_00000050 == 0) ||
           (lVar16 = FUN_037a6268(in_stack_00000050,uVar20,
                                  *(undefined8 *)
                                   Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                 ), lVar16 == 0)) goto LAB_056e563c;
        lVar17 = *(long *)(lVar16 + 0x10);
        lVar18 = *(long *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
        ;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_056e563c;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = lVar15;
          thunk_FUN_02bb0e9c(plVar8,lVar15);
        }
        else {
          FUN_037a6538(lVar16,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000230 != 0) {
          if ((in_stack_00000030 == 0) ||
             (lVar16 = FUN_037a6268(in_stack_00000030,uVar20,
                                    *(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                   ), in_stack_00000230 == 0)) goto LAB_056e563c;
          uVar12 = 0;
          lVar17 = 0x20;
          while ((long)uVar12 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
            if (*(uint *)(in_stack_00000230 + 0x18) <= uVar12) goto LAB_056e5640;
            puVar9 = (undefined8 *)(in_stack_00000230 + lVar17);
            uVar11 = *puVar9;
            uVar23 = puVar9[3];
            uVar13 = puVar9[2];
            *(undefined8 *)(unaff_x28 + 0x108) = puVar9[1];
            *(undefined8 *)(unaff_x28 + 0x100) = uVar11;
            *(undefined8 *)(unaff_x28 + 0x118) = uVar23;
            *(undefined8 *)(unaff_x28 + 0x110) = uVar13;
            uVar11 = puVar9[4];
            uVar23 = puVar9[7];
            uVar13 = puVar9[6];
            *(undefined8 *)(unaff_x28 + 0x128) = puVar9[5];
            *(undefined8 *)(unaff_x28 + 0x120) = uVar11;
            *(undefined8 *)(unaff_x28 + 0x138) = uVar23;
            *(undefined8 *)(unaff_x28 + 0x130) = uVar13;
            FUN_056e8664(&stack0x00000058,&stack0x000001b0);
            memcpy(&stack0x00000150,&stack0x00000058,0x58);
            if (lVar15 == 0) goto LAB_056e563c;
            in_stack_00000180 = *(undefined8 *)(lVar15 + 0x10);
            thunk_FUN_02bb0e9c(&stack0x00000180);
            if (lVar16 == 0) goto LAB_056e563c;
            memcpy(&stack0x00000330,&stack0x00000150,0x58);
            lVar18 = *(long *)(lVar16 + 0x10);
            lVar19 = *(long *)puVar14;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_056e563c;
            uVar1 = *(uint *)(lVar16 + 0x18);
            if (uVar1 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar1 * 0x58;
              *(uint *)(lVar16 + 0x18) = uVar1 + 1;
              memcpy((void *)(lVar18 + 0x20),&stack0x00000330,0x58);
              thunk_FUN_02bb0e9c(lVar18 + 0x20,0);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000388,&stack0x00000330,0x58);
              FUN_03742d08(lVar16,&stack0x00000388,uVar11);
            }
            lVar17 = lVar17 + 0x40;
            uVar12 = uVar12 + 1;
            if (in_stack_00000230 == 0) goto LAB_056e563c;
          }
        }
        uVar22 = uVar22 + 1;
        unaff_x26 = in_stack_00000048;
      } while (uVar22 != (uVar10 & 0xffffffff));
    }
    if (lVar5 == 0) {
      if (in_stack_00000030 == 0) goto LAB_056e563c;
      FUN_037a6268(in_stack_00000030,uVar20,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                  );
    }
    else {
      if (in_stack_00000030 == 0) goto LAB_056e563c;
      uVar1 = *(uint *)(lVar5 + 0x18);
      lVar7 = FUN_037a6268(in_stack_00000030,uVar20,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                          );
      if (0 < (int)uVar1) {
        uVar10 = 0;
        puVar9 = (undefined8 *)(lVar5 + 0x20);
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_056e5640;
          uVar4 = *puVar9;
          uVar13 = puVar9[3];
          uVar11 = puVar9[2];
          *(undefined8 *)(unaff_x28 + 0x68) = puVar9[1];
          *(undefined8 *)(unaff_x28 + 0x60) = uVar4;
          *(undefined8 *)(unaff_x28 + 0x78) = uVar13;
          *(undefined8 *)(unaff_x28 + 0x70) = uVar11;
          uVar4 = puVar9[4];
          uVar13 = puVar9[7];
          uVar11 = puVar9[6];
          *(undefined8 *)(unaff_x28 + 0x88) = puVar9[5];
          *(undefined8 *)(unaff_x28 + 0x80) = uVar4;
          *(undefined8 *)(unaff_x28 + 0x98) = uVar13;
          *(undefined8 *)(unaff_x28 + 0x90) = uVar11;
          FUN_056e8664(&stack0x000000b0,&stack0x00000110);
          if (lVar7 == 0) goto LAB_056e563c;
          lVar15 = *(long *)(lVar7 + 0x10);
          lVar16 = *(long *)puVar14;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_056e563c;
          uVar20 = *(uint *)(lVar7 + 0x18);
          if (uVar20 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + (long)(int)uVar20 * 0x58;
            *(uint *)(lVar7 + 0x18) = uVar20 + 1;
            memcpy((void *)(lVar15 + 0x20),&stack0x000000b0,0x58);
            thunk_FUN_02bb0e9c(lVar15 + 0x20,0);
          }
          else {
            uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x00000388,&stack0x000000b0,0x58);
            FUN_03742d08(lVar7,&stack0x00000388,uVar4);
          }
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 8;
        } while (uVar1 != uVar10);
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != (uVar6 & 0xffffffff));
LAB_056e54f8:
  puVar2 = 
  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__;
  puVar14 = 
  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
  ;
  if (unaff_x26 != 0) {
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      iVar3 = 0;
      do {
        lVar5 = FUN_037a6268(unaff_x26,iVar3,
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                            );
        if ((((in_stack_00000050 == 0) ||
             (lVar7 = FUN_037a6268(in_stack_00000050,iVar3,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                  ), lVar7 == 0)) ||
            (lVar7 = FUN_037a8024(lVar7,*(undefined8 *)puVar14), in_stack_00000030 == 0)) ||
           ((lVar15 = FUN_037a6268(in_stack_00000030,iVar3,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                  ), lVar15 == 0 ||
            (uVar4 = FUN_03744c0c(lVar15,*(undefined8 *)puVar2), lVar5 == 0)))) goto LAB_056e563c;
        *(long *)(lVar5 + 0x28) = lVar7;
        thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar7);
        *(undefined8 *)(lVar5 + 0x30) = uVar4;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x30),uVar4);
        if (lVar7 == 0) goto LAB_056e563c;
        uVar20 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar20) {
          lVar15 = 0;
          do {
            if (uVar20 <= (uint)lVar15) goto LAB_056e5640;
            lVar16 = *(long *)(lVar7 + 0x20 + lVar15 * 8);
            if (lVar16 == 0) goto LAB_056e563c;
            plVar8 = (long *)(lVar16 + 200);
            *plVar8 = lVar5;
            thunk_FUN_02bb0e9c(plVar8,lVar5);
            uVar20 = *(uint *)(lVar7 + 0x18);
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < (int)uVar20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_x26 + 0x18));
    }
    FUN_037a8024(unaff_x26,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_HasInteractable__
                );
    return;
  }
LAB_056e563c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


