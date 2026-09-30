/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveRemovedRoom
ENTRY_POINT: 072a5a70
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveRemovedRoom(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  lVar6 = FUN_04077674(param_1,4);
  if (lVar6 != 0) {
    if ((*(int *)(lVar6 + 0x18) != 0) &&
       (*(undefined4 *)(lVar6 + 0x20) = 0xb, *(int *)(lVar6 + 0x18) != 1)) {
      *(undefined4 *)(lVar6 + 0x24) = 10;
      if (unaff_x20 == 0) goto LAB_072a61ac;
      if (*(int *)(unaff_x20 + 0x18) != 0) {
        *(long *)(unaff_x20 + 0x20) = lVar6;
        thunk_FUN_040ec700();
        lVar6 = FUN_04077674(*unaff_x25,4);
        if (lVar6 == 0) goto LAB_072a61ac;
        if ((*(int *)(lVar6 + 0x18) != 0) &&
           (*(undefined4 *)(lVar6 + 0x20) = 0x12, *(int *)(lVar6 + 0x18) != 1)) {
          *(undefined4 *)(lVar6 + 0x24) = 0x12;
          if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
            *(long *)(unaff_x20 + 0x28) = lVar6;
            thunk_FUN_040ec700();
            lVar6 = FUN_04077674(*unaff_x25,4);
            if (lVar6 == 0) goto LAB_072a61ac;
            if ((*(int *)(lVar6 + 0x18) != 0) &&
               (*(undefined4 *)(lVar6 + 0x20) = 0xf, *(int *)(lVar6 + 0x18) != 1)) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              *(undefined4 *)(lVar6 + 0x24) = 0x12;
              if (2 < uVar1) {
                *(long *)(unaff_x20 + 0x30) = lVar6;
                thunk_FUN_040ec700();
                puVar2 = PTR_DAT_092c2580;
                if (2 < *(uint *)(unaff_x19 + 0x18)) {
                  *(long *)(unaff_x19 + 0x30) = unaff_x20;
                  thunk_FUN_040ec700();
                  lVar6 = FUN_04077674(*unaff_x26,3);
                  uVar7 = FUN_04077674(*unaff_x25,4);
                  FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                  puVar2 = PTR_DAT_092c2548;
                  if (lVar6 == 0) goto LAB_072a61ac;
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(undefined8 *)(lVar6 + 0x20) = uVar7;
                    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar7);
                    uVar7 = FUN_04077674(*unaff_x25,4);
                    FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                    puVar2 = PTR_DAT_092c24e0;
                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar6 + 0x28) = uVar7;
                      thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar7);
                      uVar7 = FUN_04077674(*unaff_x25,4);
                      FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                      if (2 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x30) = uVar7;
                        thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x30),uVar7);
                        puVar2 = PTR_DAT_092c2528;
                        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
                          *(long *)(unaff_x19 + 0x38) = lVar6;
                          thunk_FUN_040ec700((long *)(unaff_x19 + 0x38),lVar6);
                          lVar6 = FUN_04077674(*unaff_x26,3);
                          uVar7 = FUN_04077674(*unaff_x25,4);
                          FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                          puVar2 = PTR_DAT_092c25d0;
                          if (lVar6 == 0) goto LAB_072a61ac;
                          if (*(int *)(lVar6 + 0x18) != 0) {
                            *(undefined8 *)(lVar6 + 0x20) = uVar7;
                            thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar7);
                            uVar7 = FUN_04077674(*unaff_x25,4);
                            FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                            puVar2 = PTR_DAT_092c2510;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                              *(undefined8 *)(lVar6 + 0x28) = uVar7;
                              thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar7);
                              uVar7 = FUN_04077674(*unaff_x25,4);
                              FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                              if (2 < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x30) = uVar7;
                                thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x30),uVar7);
                                puVar2 = PTR_DAT_092c2520;
                                if (4 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(long *)(unaff_x19 + 0x40) = lVar6;
                                  thunk_FUN_040ec700((long *)(unaff_x19 + 0x40),lVar6);
                                  lVar6 = FUN_04077674(*unaff_x26,3);
                                  uVar7 = FUN_04077674(*unaff_x25,4);
                                  FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                                  puVar2 = PTR_DAT_092c25e0;
                                  if (lVar6 == 0) goto LAB_072a61ac;
                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                    *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar7);
                                    uVar7 = FUN_04077674(*unaff_x25,4);
                                    FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                                    puVar2 = PTR_DAT_092c2588;
                                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar6 + 0x28) = uVar7;
                                      thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar7);
                                      uVar7 = FUN_04077674(*unaff_x25,4);
                                      FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                        *(undefined8 *)(lVar6 + 0x30) = uVar7;
                                        thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x30),uVar7);
                                        puVar5 = PTR_DAT_092c25f8;
                                        puVar4 = PTR_DAT_092c2530;
                                        puVar3 = PTR_DAT_092c24d8;
                                        puVar2 = PTR_DAT_092c2208;
                                        if (5 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(long *)(unaff_x19 + 0x48) = lVar6;
                                          thunk_FUN_040ec700((long *)(unaff_x19 + 0x48),lVar6);
                                          *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19
                                          ;
                                          thunk_FUN_040ec700();
                                          uVar7 = FUN_04077674(*unaff_x25,0x16);
                                          FUN_07593f88(uVar7,*(undefined8 *)puVar4,0);
                                          puVar8 = (undefined8 *)
                                                   (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                          *puVar8 = uVar7;
                                          thunk_FUN_040ec700(puVar8,uVar7);
                                          uVar7 = FUN_04077674(*unaff_x24,0x40);
                                          FUN_07593f88(uVar7,*(undefined8 *)puVar3,0);
                                          puVar8 = (undefined8 *)
                                                   (*(long *)(*unaff_x23 + 0xb8) + 0x30);
                                          *puVar8 = uVar7;
                                          thunk_FUN_040ec700(puVar8,uVar7);
                                          lVar6 = FUN_04077674(*(undefined8 *)puVar2,2);
                                          uVar7 = FUN_04077674(*unaff_x24,7);
                                          FUN_07593f88(uVar7,*(undefined8 *)puVar5,0);
                                          puVar3 = PTR_DAT_092c25f0;
                                          if (lVar6 == 0) goto LAB_072a61ac;
                                          if (*(int *)(lVar6 + 0x18) != 0) {
                                            *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                            thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar7);
                                            uVar7 = FUN_04077674(*unaff_x24,7);
                                            FUN_07593f88(uVar7,*(undefined8 *)puVar3,0);
                                            puVar4 = PTR_DAT_092c24e8;
                                            puVar3 = PTR_DAT_092c2238;
                                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                                              *(undefined8 *)(lVar6 + 0x28) = uVar7;
                                              thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar7)
                                              ;
                                              plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x38)
                                              ;
                                              *plVar9 = lVar6;
                                              thunk_FUN_040ec700(plVar9,lVar6);
                                              lVar6 = FUN_04077674(*(undefined8 *)puVar3,2);
                                              lVar10 = FUN_04077674(*(undefined8 *)puVar2,2);
                                              uVar7 = FUN_04077674(*unaff_x24,0x20);
                                              FUN_07593f88(uVar7,*(undefined8 *)puVar4,0);
                                              puVar3 = PTR_DAT_092c2570;
                                              if (lVar10 == 0) goto LAB_072a61ac;
                                              if (*(int *)(lVar10 + 0x18) != 0) {
                                                *(undefined8 *)(lVar10 + 0x20) = uVar7;
                                                thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x20),
                                                                   uVar7);
                                                uVar7 = FUN_04077674(*unaff_x24,0x20);
                                                FUN_07593f88(uVar7,*(undefined8 *)puVar3,0);
                                                if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                                                  *(undefined8 *)(lVar10 + 0x28) = uVar7;
                                                  thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x28),
                                                                     uVar7);
                                                  puVar3 = PTR_DAT_092c2568;
                                                  if (lVar6 == 0) goto LAB_072a61ac;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(long *)(lVar6 + 0x20) = lVar10;
                                                    thunk_FUN_040ec700((long *)(lVar6 + 0x20),lVar10
                                                                      );
                                                    lVar10 = FUN_04077674(*(undefined8 *)puVar2,2);
                                                    uVar7 = FUN_04077674(*unaff_x24,0x20);
                                                    FUN_07593f88(uVar7,*(undefined8 *)puVar3,0);
                                                    puVar2 = PTR_DAT_092c25c8;
                                                    if (lVar10 == 0) goto LAB_072a61ac;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar7;
                                                      thunk_FUN_040ec700((undefined8 *)
                                                                         (lVar10 + 0x20),uVar7);
                                                      uVar7 = FUN_04077674(*unaff_x24,0x20);
                                                      FUN_07593f88(uVar7,*(undefined8 *)puVar2,0);
                                                      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar10 + 0x28) = uVar7;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar10 + 0x28),uVar7);
                                                        puVar3 = PTR_DAT_092c2560;
                                                        puVar2 = PTR_DAT_092c2558;
                                                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(long *)(lVar6 + 0x28) = lVar10;
                                                          thunk_FUN_040ec700((long *)(lVar6 + 0x28),
                                                                             lVar10);
                                                          plVar9 = (long *)(*(long *)(*unaff_x23 +
                                                                                     0xb8) + 0x40);
                                                          *plVar9 = lVar6;
                                                          thunk_FUN_040ec700(plVar9,lVar6);
                                                          uVar7 = FUN_04077674(*unaff_x24,8);
                                                          FUN_07593f88(uVar7,*(undefined8 *)puVar3,0
                                                                      );
                                                          puVar8 = (undefined8 *)
                                                                   (*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x48);
                                                          *puVar8 = uVar7;
                                                          thunk_FUN_040ec700(puVar8,uVar7);
                                                          uVar7 = FUN_04077674(*unaff_x24,8);
                                                          FUN_07593f88(uVar7,*(undefined8 *)puVar2,0
                                                                      );
                                                          puVar8 = (undefined8 *)
                                                                   (*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x50);
                                                          *puVar8 = uVar7;
                                                          thunk_FUN_040ec700(puVar8,uVar7);
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
    FUN_04077838();
  }
LAB_072a61ac:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


