/*
FUNCTION_NAME: Unity.Hierarchy.HierarchyNodeTypeHandlerBase$$InvokeDispose
ENTRY_POINT: 07bec2ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Hierarchy_HierarchyNodeTypeHandlerBase__InvokeDispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
                    /* try { // try from 07bec304 to 07cec307 has its CatchHandler @ 07bec350 */
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                    /* try { // try from 07bec308 to 07cec30b has its CatchHandler @ 07bec34c */
  if (lVar6 != 0) {
                    /* try { // try from 07bec30c to 07cec30f has its CatchHandler @ 07bebfd8 */
    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 07bec310 to 07cec313 has its CatchHandler @ 07bec344 */
                    /* try { // try from 07bec314 to 07cec317 has its CatchHandler @ 07bec340 */
                    /* try { // try from 07bec318 to 07cec31b has its CatchHandler @ 07bec33c */
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 07bec31c to 07cec31f has its CatchHandler @ 07bec334 */
                    /* try { // try from 07bec320 to 07cec323 has its CatchHandler @ 07bec32c */
                    /* try { // try from 07bec324 to 07cec327 has its CatchHandler @ 07bec328 */
                    /* catch() { ... } // from try @ 07bec324 with catch @ 07bec328
                       try { // try from 07bec328 to 07cec373 has its CatchHandler @ 07bebfd8 */
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 07bec320 with catch @ 07bec32c */
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                    /* catch() { ... } // from try @ 07bec2a0 with catch @ 07bec330 */
      thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 07bec31c with catch @ 07bec334 */
    }
    else {
                    /* catch() { ... } // from try @ 07bec2bc with catch @ 07bec338 */
                    /* catch() { ... } // from try @ 07bec318 with catch @ 07bec33c */
                    /* catch() { ... } // from try @ 07bec314 with catch @ 07bec340 */
                    /* catch() { ... } // from try @ 07bec310 with catch @ 07bec344 */
                    /* catch() { ... } // from try @ 07bec278 with catch @ 07bec348 */
                    /* catch() { ... } // from try @ 07bec308 with catch @ 07bec34c */
      FUN_04de85b0();
    }
                    /* catch() { ... } // from try @ 07bec304 with catch @ 07bec350 */
                    /* catch() { ... } // from try @ 07bec248 with catch @ 07bec354 */
    lVar6 = thunk_FUN_03ac74bc(*unaff_x25);
                    /* catch() { ... } // from try @ 07bec224 with catch @ 07bec358 */
    FUN_0679343c(lVar6,0);
    puVar2 = UnityEngine_Android_Permission_TypeInfo;
    if (lVar6 != 0) {
                    /* try { // try from 07bec374 to 07cec377 has its CatchHandler @ 07bec390 */
                    /* try { // try from 07bec378 to 07cec393 has its CatchHandler @ 07bebfd8 */
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_084a8780;
      thunk_FUN_03afed3c();
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20));
      uVar3 = *unaff_x28;
      *(undefined4 *)(lVar6 + 0x18) = 3;
      lVar4 = thunk_FUN_03ac74bc(uVar3);
      FUN_04de7d48(lVar4,*unaff_x26);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        uVar3 = *(undefined8 *)PTR_DAT_084e3b10;
        lVar8 = *unaff_x29;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar4,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar6 + 0x30) = lVar4;
          thunk_FUN_03afed3c((long *)(lVar6 + 0x30),lVar4);
          lVar4 = thunk_FUN_03ac74bc(*unaff_x24);
          FUN_04de7d48(lVar4,*(undefined8 *)System_OrdinalIgnoreCaseComparer_TypeInfo);
          lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)MS_Internal_Xml_XPath_Operator_TypeInfo);
          FUN_0679343c(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) =
                 *(undefined8 *)System_Security_Permissions_PermissionState_TypeInfo;
            thunk_FUN_03afed3c();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
            thunk_FUN_03afed3c();
            if (lVar4 != 0) {
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar7;
                  thunk_FUN_03afed3c(plVar5,lVar7);
                }
                else {
                  FUN_04de85b0(lVar4,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar6 + 0x28) = lVar4;
                thunk_FUN_03afed3c((long *)(lVar6 + 0x28),lVar4);
                lVar4 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar6;
                    thunk_FUN_03afed3c(plVar5,lVar6);
                  }
                  else {
                    FUN_04de85b0();
                  }
                  lVar6 = thunk_FUN_03ac74bc(*unaff_x25);
                  FUN_0679343c(lVar6,0);
                  puVar2 = Unity_Services_Multiplayer_PlayerProperty_TypeInfo;
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) =
                         *(undefined8 *)UnityEngine_UIElements_PointerDispatchState_TypeInfo;
                    thunk_FUN_03afed3c();
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20));
                    uVar3 = *unaff_x28;
                    *(undefined4 *)(lVar6 + 0x18) = 4;
                    lVar4 = thunk_FUN_03ac74bc(uVar3);
                    FUN_04de7d48(lVar4,*unaff_x26);
                    if (lVar4 != 0) {
                      lVar7 = *(long *)(lVar4 + 0x10);
                      uVar3 = *(undefined8 *)
                               System_Threading_OSSpecificSynchronizationContext_TypeInfo;
                      lVar8 = *unaff_x29;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                          thunk_FUN_03afed3c();
                        }
                        else {
                          FUN_04de85b0(lVar4,uVar3,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar6 + 0x30) = lVar4;
                        thunk_FUN_03afed3c((long *)(lVar6 + 0x30),lVar4);
                        lVar4 = thunk_FUN_03ac74bc(*unaff_x24);
                        FUN_04de7d48(lVar4,*(undefined8 *)System_OrdinalIgnoreCaseComparer_TypeInfo)
                        ;
                        lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                    MS_Internal_Xml_XPath_Operator_TypeInfo);
                        FUN_0679343c(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)
                                Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagSpawnerNGO_TypeInfo;
                          thunk_FUN_03afed3c();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                          thunk_FUN_03afed3c();
                          if (lVar4 != 0) {
                            lVar8 = *(long *)(lVar4 + 0x10);
                            lVar9 = *(long *)
                                     System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar7;
                                thunk_FUN_03afed3c(plVar5,lVar7);
                              }
                              else {
                                FUN_04de85b0(lVar4,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x28) = lVar4;
                              thunk_FUN_03afed3c((long *)(lVar6 + 0x28),lVar4);
                              lVar4 = *(long *)(unaff_x20 + 0x10);
                              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar5 = lVar6;
                                  thunk_FUN_03afed3c(plVar5,lVar6);
                                }
                                else {
                                  FUN_04de85b0();
                                }
                                *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                thunk_FUN_03afed3c();
                                FUN_07be2508();
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


