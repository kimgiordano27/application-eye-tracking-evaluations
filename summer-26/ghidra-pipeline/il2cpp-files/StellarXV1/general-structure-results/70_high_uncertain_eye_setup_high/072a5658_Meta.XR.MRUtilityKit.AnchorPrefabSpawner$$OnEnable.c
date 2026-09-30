/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$OnEnable
ENTRY_POINT: 072a5658
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__OnEnable(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  uVar6 = FUN_04077674(*unaff_x25,0xe);
  FUN_07593f88(uVar6,*unaff_x22,0);
  puVar2 = PTR_DAT_092c2608;
  if (4 < *(uint *)(unaff_x21 + -0x20)) {
    *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x40),uVar6);
    uVar6 = FUN_04077674(*unaff_x25,0xe);
    FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
    if (5 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
      thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x48),uVar6);
      uVar6 = FUN_04077674(*unaff_x25,0xe);
      FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
      if (6 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
        thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x50),uVar6);
        uVar6 = FUN_04077674(*unaff_x25,0xe);
        FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
        puVar2 = PTR_DAT_092c24f0;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
          *(undefined8 *)(unaff_x19 + 0x58) = uVar6;
          thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x58),uVar6);
          uVar6 = FUN_04077674(*unaff_x25,0xe);
          FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
          puVar2 = PTR_DAT_092c2508;
          if (8 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
            thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x60),uVar6);
            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = unaff_x19;
            thunk_FUN_040ec700();
            lVar7 = FUN_04077674(*unaff_x26,2);
            uVar6 = FUN_04077674(*unaff_x25,0x10);
            FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
            puVar2 = PTR_DAT_092c2590;
            if (lVar7 == 0) goto LAB_072a61ac;
            if (*(int *)(lVar7 + 0x18) != 0) {
              *(undefined8 *)(lVar7 + 0x20) = uVar6;
              thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x20),uVar6);
              uVar6 = FUN_04077674(*unaff_x25,0x10);
              FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
              puVar3 = PTR_DAT_092c2598;
              puVar2 = PTR_DAT_092c2228;
              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar7 + 0x28) = uVar6;
                thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x28),uVar6);
                plVar8 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
                *plVar8 = lVar7;
                thunk_FUN_040ec700(plVar8,lVar7);
                lVar7 = FUN_04077674(*(undefined8 *)puVar2,6);
                lVar9 = FUN_04077674(*unaff_x26,3);
                uVar6 = FUN_04077674(*unaff_x25,4);
                FUN_07593f88(uVar6,*(undefined8 *)puVar3,0);
                puVar2 = PTR_DAT_092c24f8;
                if (lVar9 == 0) goto LAB_072a61ac;
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar6;
                  thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x20),uVar6);
                  uVar6 = FUN_04077674(*unaff_x25,4);
                  FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                  puVar2 = PTR_DAT_092c2538;
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar6;
                    thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x28),uVar6);
                    uVar6 = FUN_04077674(*unaff_x25,4);
                    FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                    if (2 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x30) = uVar6;
                      thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x30),uVar6);
                      puVar2 = PTR_DAT_092c2500;
                      if (lVar7 == 0) {
LAB_072a61ac:
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        *(long *)(lVar7 + 0x20) = lVar9;
                        thunk_FUN_040ec700((long *)(lVar7 + 0x20),lVar9);
                        lVar9 = FUN_04077674(*unaff_x26,3);
                        uVar6 = FUN_04077674(*unaff_x25,4);
                        FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                        puVar2 = PTR_DAT_092c25e8;
                        if (lVar9 == 0) goto LAB_072a61ac;
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          *(undefined8 *)(lVar9 + 0x20) = uVar6;
                          thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x20),uVar6);
                          uVar6 = FUN_04077674(*unaff_x25,4);
                          FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                          puVar2 = PTR_DAT_092c2578;
                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x28),uVar6);
                            uVar6 = FUN_04077674(*unaff_x25,4);
                            FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                            if (2 < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x30) = uVar6;
                              thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x30),uVar6);
                              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                *(long *)(lVar7 + 0x28) = lVar9;
                                thunk_FUN_040ec700((long *)(lVar7 + 0x28),lVar9);
                                lVar9 = FUN_04077674(*unaff_x26,3);
                                lVar10 = FUN_04077674(*unaff_x25,4);
                                if (lVar10 == 0) goto LAB_072a61ac;
                                if ((*(int *)(lVar10 + 0x18) != 0) &&
                                   (*(undefined4 *)(lVar10 + 0x20) = 0xb,
                                   *(int *)(lVar10 + 0x18) != 1)) {
                                  *(undefined4 *)(lVar10 + 0x24) = 10;
                                  if (lVar9 == 0) goto LAB_072a61ac;
                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                    *(long *)(lVar9 + 0x20) = lVar10;
                                    thunk_FUN_040ec700();
                                    lVar10 = FUN_04077674(*unaff_x25,4);
                                    if (lVar10 == 0) goto LAB_072a61ac;
                                    if ((*(int *)(lVar10 + 0x18) != 0) &&
                                       (*(undefined4 *)(lVar10 + 0x20) = 0x12,
                                       *(int *)(lVar10 + 0x18) != 1)) {
                                      *(undefined4 *)(lVar10 + 0x24) = 0x12;
                                      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                        *(long *)(lVar9 + 0x28) = lVar10;
                                        thunk_FUN_040ec700();
                                        lVar10 = FUN_04077674(*unaff_x25,4);
                                        if (lVar10 == 0) goto LAB_072a61ac;
                                        if ((*(int *)(lVar10 + 0x18) != 0) &&
                                           (*(undefined4 *)(lVar10 + 0x20) = 0xf,
                                           *(int *)(lVar10 + 0x18) != 1)) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          *(undefined4 *)(lVar10 + 0x24) = 0x12;
                                          if (2 < uVar1) {
                                            *(long *)(lVar9 + 0x30) = lVar10;
                                            thunk_FUN_040ec700();
                                            puVar2 = PTR_DAT_092c2580;
                                            if (2 < *(uint *)(lVar7 + 0x18)) {
                                              *(long *)(lVar7 + 0x30) = lVar9;
                                              thunk_FUN_040ec700((long *)(lVar7 + 0x30),lVar9);
                                              lVar9 = FUN_04077674(*unaff_x26,3);
                                              uVar6 = FUN_04077674(*unaff_x25,4);
                                              FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                              puVar2 = PTR_DAT_092c2548;
                                              if (lVar9 == 0) goto LAB_072a61ac;
                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                *(undefined8 *)(lVar9 + 0x20) = uVar6;
                                                thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x20),
                                                                   uVar6);
                                                uVar6 = FUN_04077674(*unaff_x25,4);
                                                FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                puVar2 = PTR_DAT_092c24e0;
                                                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                                  *(undefined8 *)(lVar9 + 0x28) = uVar6;
                                                  thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x28),
                                                                     uVar6);
                                                  uVar6 = FUN_04077674(*unaff_x25,4);
                                                  FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar6;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x30),
                                                                       uVar6);
                                                    puVar2 = PTR_DAT_092c2528;
                                                    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0)
                                                    {
                                                      *(long *)(lVar7 + 0x38) = lVar9;
                                                      thunk_FUN_040ec700((long *)(lVar7 + 0x38),
                                                                         lVar9);
                                                      lVar9 = FUN_04077674(*unaff_x26,3);
                                                      uVar6 = FUN_04077674(*unaff_x25,4);
                                                      FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                      puVar2 = PTR_DAT_092c25d0;
                                                      if (lVar9 == 0) goto LAB_072a61ac;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar9 + 0x20) = uVar6;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar9 + 0x20),uVar6);
                                                        uVar6 = FUN_04077674(*unaff_x25,4);
                                                        FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                        puVar2 = PTR_DAT_092c2510;
                                                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar9 + 0x28) = uVar6;
                                                          thunk_FUN_040ec700((undefined8 *)
                                                                             (lVar9 + 0x28),uVar6);
                                                          uVar6 = FUN_04077674(*unaff_x25,4);
                                                          FUN_07593f88(uVar6,*(undefined8 *)puVar2,0
                                                                      );
                                                          if (2 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x30) = uVar6;
                                                            thunk_FUN_040ec700((undefined8 *)
                                                                               (lVar9 + 0x30),uVar6)
                                                            ;
                                                            puVar2 = PTR_DAT_092c2520;
                                                            if (4 < *(uint *)(lVar7 + 0x18)) {
                                                              *(long *)(lVar7 + 0x40) = lVar9;
                                                              thunk_FUN_040ec700((long *)(lVar7 + 
                                                  0x40),lVar9);
                                                  lVar9 = FUN_04077674(*unaff_x26,3);
                                                  uVar6 = FUN_04077674(*unaff_x25,4);
                                                  FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                  puVar2 = PTR_DAT_092c25e0;
                                                  if (lVar9 == 0) goto LAB_072a61ac;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar6;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x20),
                                                                       uVar6);
                                                    uVar6 = FUN_04077674(*unaff_x25,4);
                                                    FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                    puVar2 = PTR_DAT_092c2588;
                                                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar9 + 0x28) = uVar6;
                                                      thunk_FUN_040ec700((undefined8 *)
                                                                         (lVar9 + 0x28),uVar6);
                                                      uVar6 = FUN_04077674(*unaff_x25,4);
                                                      FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                      if (2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x30) = uVar6;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar9 + 0x30),uVar6);
                                                        puVar5 = PTR_DAT_092c25f8;
                                                        puVar4 = PTR_DAT_092c2530;
                                                        puVar3 = PTR_DAT_092c24d8;
                                                        puVar2 = PTR_DAT_092c2208;
                                                        if (5 < *(uint *)(lVar7 + 0x18)) {
                                                          *(long *)(lVar7 + 0x48) = lVar9;
                                                          thunk_FUN_040ec700((long *)(lVar7 + 0x48),
                                                                             lVar9);
                                                          plVar8 = (long *)(*(long *)(*unaff_x23 +
                                                                                     0xb8) + 0x20);
                                                          *plVar8 = lVar7;
                                                          thunk_FUN_040ec700(plVar8,lVar7);
                                                          uVar6 = FUN_04077674(*unaff_x25,0x16);
                                                          FUN_07593f88(uVar6,*(undefined8 *)puVar4,0
                                                                      );
                                                          puVar11 = (undefined8 *)
                                                                    (*(long *)(*unaff_x23 + 0xb8) +
                                                                    0x28);
                                                          *puVar11 = uVar6;
                                                          thunk_FUN_040ec700(puVar11,uVar6);
                                                          uVar6 = FUN_04077674(*unaff_x24,0x40);
                                                          FUN_07593f88(uVar6,*(undefined8 *)puVar3,0
                                                                      );
                                                          puVar11 = (undefined8 *)
                                                                    (*(long *)(*unaff_x23 + 0xb8) +
                                                                    0x30);
                                                          *puVar11 = uVar6;
                                                          thunk_FUN_040ec700(puVar11,uVar6);
                                                          lVar7 = FUN_04077674(*(undefined8 *)puVar2
                                                                               ,2);
                                                          uVar6 = FUN_04077674(*unaff_x24,7);
                                                          FUN_07593f88(uVar6,*(undefined8 *)puVar5,0
                                                                      );
                                                          puVar3 = PTR_DAT_092c25f0;
                                                          if (lVar7 == 0) goto LAB_072a61ac;
                                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar7 + 0x20) = uVar6;
                                                            thunk_FUN_040ec700((undefined8 *)
                                                                               (lVar7 + 0x20),uVar6)
                                                            ;
                                                            uVar6 = FUN_04077674(*unaff_x24,7);
                                                            FUN_07593f88(uVar6,*(undefined8 *)puVar3
                                                                         ,0);
                                                            puVar4 = PTR_DAT_092c24e8;
                                                            puVar3 = PTR_DAT_092c2238;
                                                            if ((*(uint *)(lVar7 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar7 + 0x28) = uVar6;
                                                              thunk_FUN_040ec700((undefined8 *)
                                                                                 (lVar7 + 0x28),
                                                                                 uVar6);
                                                              plVar8 = (long *)(*(long *)(*unaff_x23
                                                                                         + 0xb8) +
                                                                               0x38);
                                                              *plVar8 = lVar7;
                                                              thunk_FUN_040ec700(plVar8,lVar7);
                                                              lVar7 = FUN_04077674(*(undefined8 *)
                                                                                    puVar3,2);
                                                              lVar9 = FUN_04077674(*(undefined8 *)
                                                                                    puVar2,2);
                                                              uVar6 = FUN_04077674(*unaff_x24,0x20);
                                                              FUN_07593f88(uVar6,*(undefined8 *)
                                                                                  puVar4,0);
                                                              puVar3 = PTR_DAT_092c2570;
                                                              if (lVar9 == 0) goto LAB_072a61ac;
                                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                                *(undefined8 *)(lVar9 + 0x20) =
                                                                     uVar6;
                                                                thunk_FUN_040ec700((undefined8 *)
                                                                                   (lVar9 + 0x20),
                                                                                   uVar6);
                                                                uVar6 = FUN_04077674(*unaff_x24,0x20
                                                                                    );
                                                                FUN_07593f88(uVar6,*(undefined8 *)
                                                                                    puVar3,0);
                                                                if ((*(uint *)(lVar9 + 0x18) &
                                                                    0xfffffffe) != 0) {
                                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                                       uVar6;
                                                                  thunk_FUN_040ec700((undefined8 *)
                                                                                     (lVar9 + 0x28),
                                                                                     uVar6);
                                                                  puVar3 = PTR_DAT_092c2568;
                                                                  if (lVar7 == 0) goto LAB_072a61ac;
                                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                                    *(long *)(lVar7 + 0x20) = lVar9;
                                                                    thunk_FUN_040ec700((long *)(
                                                  lVar7 + 0x20),lVar9);
                                                  lVar9 = FUN_04077674(*(undefined8 *)puVar2,2);
                                                  uVar6 = FUN_04077674(*unaff_x24,0x20);
                                                  FUN_07593f88(uVar6,*(undefined8 *)puVar3,0);
                                                  puVar2 = PTR_DAT_092c25c8;
                                                  if (lVar9 == 0) goto LAB_072a61ac;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar6;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x20),
                                                                       uVar6);
                                                    uVar6 = FUN_04077674(*unaff_x24,0x20);
                                                    FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar9 + 0x28) = uVar6;
                                                      thunk_FUN_040ec700((undefined8 *)
                                                                         (lVar9 + 0x28),uVar6);
                                                      puVar3 = PTR_DAT_092c2560;
                                                      puVar2 = PTR_DAT_092c2558;
                                                      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(long *)(lVar7 + 0x28) = lVar9;
                                                        thunk_FUN_040ec700((long *)(lVar7 + 0x28),
                                                                           lVar9);
                                                        plVar8 = (long *)(*(long *)(*unaff_x23 +
                                                                                   0xb8) + 0x40);
                                                        *plVar8 = lVar7;
                                                        thunk_FUN_040ec700(plVar8,lVar7);
                                                        uVar6 = FUN_04077674(*unaff_x24,8);
                                                        FUN_07593f88(uVar6,*(undefined8 *)puVar3,0);
                                                        puVar11 = (undefined8 *)
                                                                  (*(long *)(*unaff_x23 + 0xb8) +
                                                                  0x48);
                                                        *puVar11 = uVar6;
                                                        thunk_FUN_040ec700(puVar11,uVar6);
                                                        uVar6 = FUN_04077674(*unaff_x24,8);
                                                        FUN_07593f88(uVar6,*(undefined8 *)puVar2,0);
                                                        puVar11 = (undefined8 *)
                                                                  (*(long *)(*unaff_x23 + 0xb8) +
                                                                  0x50);
                                                        *puVar11 = uVar6;
                                                        thunk_FUN_040ec700(puVar11,uVar6);
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


