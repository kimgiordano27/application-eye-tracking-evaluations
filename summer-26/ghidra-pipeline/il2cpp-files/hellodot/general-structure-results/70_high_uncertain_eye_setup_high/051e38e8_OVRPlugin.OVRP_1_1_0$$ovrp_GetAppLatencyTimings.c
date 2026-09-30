/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 051e38e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  uint *puVar8;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int *piVar9;
  
  lVar4 = FUN_02ce7ad4(param_1,1);
  if (lVar4 == 0) goto LAB_051e4298;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined4 *)(lVar4 + 0x20) = 0x11;
    if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
      *(long *)(unaff_x19 + 0xa0) = lVar4;
      lVar4 = FUN_02ce7ad4(*unaff_x21,1);
      if (lVar4 == 0) goto LAB_051e4298;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined4 *)(lVar4 + 0x20) = 0x12;
        if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 051e3940 to 052e3943 has its CatchHandler @ 051e3a2c */
          *(long *)(unaff_x19 + 0xa8) = lVar4;
          lVar4 = FUN_02ce7ad4(*unaff_x21,1);
          if (lVar4 == 0) goto LAB_051e4298;
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined4 *)(lVar4 + 0x20) = 0x13;
            if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
              *(long *)(unaff_x19 + 0xb0) = lVar4;
              lVar4 = FUN_02ce7ad4(*unaff_x21,1);
              if (lVar4 == 0) goto LAB_051e4298;
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined4 *)(lVar4 + 0x20) = 0x14;
                if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                  *(long *)(unaff_x19 + 0xb8) = lVar4;
                  uVar5 = FUN_02ce7ad4(*unaff_x21,0);
                  if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
                    lVar4 = FUN_02ce7ad4(*unaff_x21,1);
                    if (lVar4 == 0) goto LAB_051e4298;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      *(undefined4 *)(lVar4 + 0x20) = 0x16;
                      if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                        *(long *)(unaff_x19 + 200) = lVar4;
                        lVar4 = FUN_02ce7ad4(*unaff_x21,1);
                        if (lVar4 == 0) goto LAB_051e4298;
                        if (*(int *)(lVar4 + 0x18) != 0) {
                          *(undefined4 *)(lVar4 + 0x20) = 0x17;
                          if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
                            *(long *)(unaff_x19 + 0xd0) = lVar4;
                            lVar4 = FUN_02ce7ad4(*unaff_x21,1);
                            if (lVar4 == 0) goto LAB_051e4298;
                            if (*(int *)(lVar4 + 0x18) != 0) {
                              *(undefined4 *)(lVar4 + 0x20) = 0x18;
                              if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
                                *(long *)(unaff_x19 + 0xd8) = lVar4;
                                lVar4 = FUN_02ce7ad4(*unaff_x21,1);
                                if (lVar4 == 0) goto LAB_051e4298;
                                if (*(int *)(lVar4 + 0x18) != 0) {
                                  *(undefined4 *)(lVar4 + 0x20) = 0x19;
                                  if (0x18 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(long *)(unaff_x19 + 0xe0) = lVar4;
                                    uVar5 = FUN_02ce7ad4(*unaff_x21,0);
                                    if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0xe8) = uVar5;
                                      puVar3 = PTR_DAT_06609368;
                                      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
                                      puVar2 = PTR_DAT_06609360;
                                      lVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
                                      FUN_03920118(lVar4,*(undefined8 *)puVar2);
                                      puVar2 = PTR_DAT_06609358;
                                      if (lVar4 != 0) {
                                        lVar6 = *(long *)PTR_DAT_06609358;
                                        piVar9 = (int *)(lVar4 + 0x1c);
                                        *piVar9 = *piVar9 + 1;
                                        lVar7 = *(long *)(lVar4 + 0x10);
                                        puVar8 = (uint *)(lVar4 + 0x18);
                                        uVar1 = *puVar8;
                                        if (lVar7 != 0) {
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 6
                                            ;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,6,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 7
                                            ;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,7,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 8
                                            ;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,8,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 9
                                            ;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,9,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xb;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0xb,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xc;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0xc,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xd;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0xd,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0xe;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0xe,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x10;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x11;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x12;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x12,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x13;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x15;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x15,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x16;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x17;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x17,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                 0x18;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,0x18,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2
                                            ;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,2,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3
                                            ;
                                            *piVar9 = *piVar9 + 1;
                                          }
                                          else {
                                            FUN_03920910(lVar4,3,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            lVar6 = *(long *)puVar2;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_051e4298;
                                          }
                                          puVar2 = PTR_DAT_06609388;
                                          uVar1 = *puVar8;
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *puVar8 = uVar1 + 1;
                                            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4
                                            ;
                                          }
                                          else {
                                            FUN_03920910(lVar4,4,*(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                          }
                                          *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = lVar4;
                                          uVar5 = FUN_02ce7ad4(*unaff_x21,5);
                                          FUN_04e5d48c(uVar5,*(undefined8 *)puVar2,0);
                                          *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) =
                                               uVar5;
                                          return;
                                        }
                                      }
LAB_051e4298:
                    /* WARNING: Subroutine does not return */
                                      FUN_02ce7c7c();
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
  FUN_02ce7c84();
}


