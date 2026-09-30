/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 090c0d28
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef__ToString(void)

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
  
  lVar4 = FUN_04947fd0(*unaff_x22,1);
  if (lVar4 == 0) goto LAB_090c18ec;
  if (*(int *)(lVar4 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    *(undefined4 *)(lVar4 + 0x20) = 10;
    if (9 < uVar1) {
      *(long *)(unaff_x19 + 0x68) = lVar4;
      thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x68));
      uVar5 = FUN_04947fd0(*unaff_x22,0);
      if (10 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x70) = uVar5;
        thunk_FUN_049ee3d8();
        lVar4 = FUN_04947fd0(*unaff_x22,1);
        if (lVar4 == 0) goto LAB_090c18ec;
        if (*(int *)(lVar4 + 0x18) != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          *(undefined4 *)(lVar4 + 0x20) = 0xc;
          if (0xb < uVar1) {
            *(long *)(unaff_x19 + 0x78) = lVar4;
            thunk_FUN_049ee3d8();
            lVar4 = FUN_04947fd0(*unaff_x22,1);
            if (lVar4 == 0) goto LAB_090c18ec;
            if (*(int *)(lVar4 + 0x18) != 0) {
              uVar1 = *(uint *)(unaff_x19 + 0x18);
              *(undefined4 *)(lVar4 + 0x20) = 0xd;
              if (0xc < uVar1) {
                *(long *)(unaff_x19 + 0x80) = lVar4;
                thunk_FUN_049ee3d8();
                    /* try { // try from 090c0e08 to 091c0e0b has its CatchHandler @ 090c1018 */
                    /* try { // try from 090c0e0c to 091c0e5f has its CatchHandler @ 090c1028 */
                lVar4 = FUN_04947fd0(*unaff_x22,1);
                if (lVar4 == 0) goto LAB_090c18ec;
                if (*(int *)(lVar4 + 0x18) != 0) {
                  uVar1 = *(uint *)(unaff_x19 + 0x18);
                  *(undefined4 *)(lVar4 + 0x20) = 0xe;
                  if (0xd < uVar1) {
                    *(long *)(unaff_x19 + 0x88) = lVar4;
                    thunk_FUN_049ee3d8();
                    lVar4 = FUN_04947fd0(*unaff_x22,1);
                    if (lVar4 == 0) goto LAB_090c18ec;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      uVar1 = *(uint *)(unaff_x19 + 0x18);
                      *(undefined4 *)(lVar4 + 0x20) = 0xf;
                      if (0xe < uVar1) {
                        *(long *)(unaff_x19 + 0x90) = lVar4;
                        thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x90));
                        uVar5 = FUN_04947fd0(*unaff_x22,0);
                        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                          *(undefined8 *)(unaff_x19 + 0x98) = uVar5;
                          thunk_FUN_049ee3d8();
                          lVar4 = FUN_04947fd0(*unaff_x22,1);
                          if (lVar4 == 0) goto LAB_090c18ec;
                          if (*(int *)(lVar4 + 0x18) != 0) {
                            uVar1 = *(uint *)(unaff_x19 + 0x18);
                            *(undefined4 *)(lVar4 + 0x20) = 0x11;
                            if (0x10 < uVar1) {
                              *(long *)(unaff_x19 + 0xa0) = lVar4;
                              thunk_FUN_049ee3d8();
                              lVar4 = FUN_04947fd0(*unaff_x22,1);
                              if (lVar4 == 0) goto LAB_090c18ec;
                              if (*(int *)(lVar4 + 0x18) != 0) {
                                uVar1 = *(uint *)(unaff_x19 + 0x18);
                                *(undefined4 *)(lVar4 + 0x20) = 0x12;
                                if (0x11 < uVar1) {
                                  *(long *)(unaff_x19 + 0xa8) = lVar4;
                                  thunk_FUN_049ee3d8();
                                  lVar4 = FUN_04947fd0(*unaff_x22,1);
                                  if (lVar4 == 0) goto LAB_090c18ec;
                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                    uVar1 = *(uint *)(unaff_x19 + 0x18);
                                    *(undefined4 *)(lVar4 + 0x20) = 0x13;
                                    if (0x12 < uVar1) {
                                      *(long *)(unaff_x19 + 0xb0) = lVar4;
                                      thunk_FUN_049ee3d8();
                                      lVar4 = FUN_04947fd0(*unaff_x22,1);
                                      if (lVar4 == 0) goto LAB_090c18ec;
                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                        uVar1 = *(uint *)(unaff_x19 + 0x18);
                                        *(undefined4 *)(lVar4 + 0x20) = 0x14;
                                        if (0x13 < uVar1) {
                                          *(long *)(unaff_x19 + 0xb8) = lVar4;
                                          thunk_FUN_049ee3d8((long *)(unaff_x19 + 0xb8));
                                          uVar5 = FUN_04947fd0(*unaff_x22,0);
                                          if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
                                            thunk_FUN_049ee3d8();
                                            lVar4 = FUN_04947fd0(*unaff_x22,1);
                                            if (lVar4 == 0) goto LAB_090c18ec;
                                            if (*(int *)(lVar4 + 0x18) != 0) {
                                              uVar1 = *(uint *)(unaff_x19 + 0x18);
                                              *(undefined4 *)(lVar4 + 0x20) = 0x16;
                                              if (0x15 < uVar1) {
                                                *(long *)(unaff_x19 + 200) = lVar4;
                                                thunk_FUN_049ee3d8();
                                                lVar4 = FUN_04947fd0(*unaff_x22,1);
                                                if (lVar4 == 0) goto LAB_090c18ec;
                                                if (*(int *)(lVar4 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                  *(undefined4 *)(lVar4 + 0x20) = 0x17;
                                                  if (0x16 < uVar1) {
                                                    *(long *)(unaff_x19 + 0xd0) = lVar4;
                                                    thunk_FUN_049ee3d8();
                                                    lVar4 = FUN_04947fd0(*unaff_x22,1);
                                                    if (lVar4 == 0) goto LAB_090c18ec;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                      *(undefined4 *)(lVar4 + 0x20) = 0x18;
                                                      if (0x17 < uVar1) {
                                                        *(long *)(unaff_x19 + 0xd8) = lVar4;
                                                        thunk_FUN_049ee3d8();
                                                        lVar4 = FUN_04947fd0(*unaff_x22,1);
                                                        if (lVar4 == 0) goto LAB_090c18ec;
                                                        if (*(int *)(lVar4 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                          *(undefined4 *)(lVar4 + 0x20) = 0x19;
                                                          if (0x18 < uVar1) {
                                                            *(long *)(unaff_x19 + 0xe0) = lVar4;
                                                            thunk_FUN_049ee3d8((long *)(unaff_x19 +
                                                                                       0xe0));
                                                            uVar5 = FUN_04947fd0(*unaff_x22,0);
                                                            puVar3 = PTR_DAT_0ac77fe0;
                                                            puVar2 = PTR_DAT_0ac77f88;
                                                            if (0x19 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xe8) =
                                                                   uVar5;
                                                              thunk_FUN_049ee3d8();
                                                              *(long *)(*(long *)(*unaff_x23 + 0xb8)
                                                                       + 0x18) = unaff_x19;
                                                              thunk_FUN_049ee3d8();
                                                              lVar4 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_06b13594(lVar4,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_0ac79480;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_0ac79480;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_06b13e24(lVar4,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090c18ec;
                                                  }
                                                  puVar2 = PTR_DAT_0ac794a0;
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar6 = lVar4;
                                                  thunk_FUN_049ee3d8(plVar6,lVar4);
                                                  uVar5 = FUN_04947fd0(*unaff_x22,5);
                                                  FUN_08c82ec4(uVar5,*(undefined8 *)puVar2,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar7 = uVar5;
                                                  thunk_FUN_049ee3d8(puVar7,uVar5);
                                                  return;
                                                  }
                                                  }
LAB_090c18ec:
                    /* WARNING: Subroutine does not return */
                                                  FUN_0494818c();
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
  FUN_04948194();
}


