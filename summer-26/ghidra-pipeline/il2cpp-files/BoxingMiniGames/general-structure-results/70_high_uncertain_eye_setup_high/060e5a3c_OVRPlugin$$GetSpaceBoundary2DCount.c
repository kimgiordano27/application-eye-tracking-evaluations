/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2DCount
ENTRY_POINT: 060e5a3c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2DCount(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  lVar4 = FUN_03642a4c(*unaff_x22,1);
  if (lVar4 == 0) goto LAB_060e647c;
  if (*(int *)(lVar4 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    *(undefined4 *)(lVar4 + 0x20) = 0x11;
    if (0x10 < uVar1) {
      *(long *)(unaff_x19 + 0xa0) = lVar4;
      thunk_FUN_036b7ad0();
      lVar4 = FUN_03642a4c(*unaff_x22,1);
      if (lVar4 == 0) goto LAB_060e647c;
      if (*(int *)(lVar4 + 0x18) != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        *(undefined4 *)(lVar4 + 0x20) = 0x12;
        if (0x11 < uVar1) {
          *(long *)(unaff_x19 + 0xa8) = lVar4;
          thunk_FUN_036b7ad0();
          lVar4 = FUN_03642a4c(*unaff_x22,1);
          if (lVar4 == 0) goto LAB_060e647c;
          if (*(int *)(lVar4 + 0x18) != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            *(undefined4 *)(lVar4 + 0x20) = 0x13;
            if (0x12 < uVar1) {
              *(long *)(unaff_x19 + 0xb0) = lVar4;
              thunk_FUN_036b7ad0();
              lVar4 = FUN_03642a4c(*unaff_x22,1);
              if (lVar4 == 0) goto LAB_060e647c;
              if (*(int *)(lVar4 + 0x18) != 0) {
                uVar1 = *(uint *)(unaff_x19 + 0x18);
                *(undefined4 *)(lVar4 + 0x20) = 0x14;
                if (0x13 < uVar1) {
                  *(long *)(unaff_x19 + 0xb8) = lVar4;
                  thunk_FUN_036b7ad0((long *)(unaff_x19 + 0xb8));
                  uVar5 = FUN_03642a4c(*unaff_x22,0);
                  if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
                    thunk_FUN_036b7ad0();
                    lVar4 = FUN_03642a4c(*unaff_x22,1);
                    if (lVar4 == 0) goto LAB_060e647c;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      uVar1 = *(uint *)(unaff_x19 + 0x18);
                      *(undefined4 *)(lVar4 + 0x20) = 0x16;
                      if (0x15 < uVar1) {
                        *(long *)(unaff_x19 + 200) = lVar4;
                        thunk_FUN_036b7ad0();
                        lVar4 = FUN_03642a4c(*unaff_x22,1);
                        if (lVar4 == 0) goto LAB_060e647c;
                        if (*(int *)(lVar4 + 0x18) != 0) {
                          uVar1 = *(uint *)(unaff_x19 + 0x18);
                          *(undefined4 *)(lVar4 + 0x20) = 0x17;
                          if (0x16 < uVar1) {
                            *(long *)(unaff_x19 + 0xd0) = lVar4;
                            thunk_FUN_036b7ad0();
                            lVar4 = FUN_03642a4c(*unaff_x22,1);
                            if (lVar4 == 0) goto LAB_060e647c;
                            if (*(int *)(lVar4 + 0x18) != 0) {
                              uVar1 = *(uint *)(unaff_x19 + 0x18);
                              *(undefined4 *)(lVar4 + 0x20) = 0x18;
                              if (0x17 < uVar1) {
                                *(long *)(unaff_x19 + 0xd8) = lVar4;
                                thunk_FUN_036b7ad0();
                                lVar4 = FUN_03642a4c(*unaff_x22,1);
                                if (lVar4 == 0) goto LAB_060e647c;
                                if (*(int *)(lVar4 + 0x18) != 0) {
                                  uVar1 = *(uint *)(unaff_x19 + 0x18);
                                  *(undefined4 *)(lVar4 + 0x20) = 0x19;
                                  if (0x18 < uVar1) {
                                    *(long *)(unaff_x19 + 0xe0) = lVar4;
                                    thunk_FUN_036b7ad0((long *)(unaff_x19 + 0xe0));
                                    uVar5 = FUN_03642a4c(*unaff_x22,0);
                                    puVar3 = PTR_DAT_07a22fe8;
                                    puVar2 = PTR_DAT_07a22f90;
                                    if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0xe8) = uVar5;
                                      thunk_FUN_036b7ad0();
                                      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
                                      thunk_FUN_036b7ad0();
                                      lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                      FUN_04529000(lVar4,*(undefined8 *)puVar3);
                                      puVar2 = PTR_DAT_07a24940;
                                      if (lVar4 != 0) {
                                        lVar8 = *(long *)(lVar4 + 0x10);
                                        lVar9 = *(long *)PTR_DAT_07a24940;
                                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6
                                            ;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,6,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7
                                            ;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,7,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8
                                            ;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,8,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9
                                            ;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,9,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xb;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0xb,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xc;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0xc,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xd;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0xd,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xe;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0xe,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x10;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x11;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x12;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x12,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x13;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x15;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x15,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x16;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x17;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x17,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x18;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,0x18,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2
                                            ;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,2,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3
                                            ;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          }
                                          else {
                                            FUN_04529890(lVar4,3,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 == 0) goto LAB_060e647c;
                                          }
                                          puVar2 = PTR_DAT_07a24960;
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4
                                            ;
                                          }
                                          else {
                                            FUN_04529890(lVar4,4,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                          }
                                          plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                                          *plVar6 = lVar4;
                                          thunk_FUN_036b7ad0(plVar6,lVar4);
                                          uVar5 = FUN_03642a4c(*unaff_x22,5);
                                          FUN_05d3bc48(uVar5,*(undefined8 *)puVar2,0);
                                          puVar7 = (undefined8 *)
                                                   (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                          *puVar7 = uVar5;
                                          thunk_FUN_036b7ad0(puVar7,uVar5);
                                          return;
                                        }
                                      }
LAB_060e647c:
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c18();
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
  FUN_03642c20();
}


