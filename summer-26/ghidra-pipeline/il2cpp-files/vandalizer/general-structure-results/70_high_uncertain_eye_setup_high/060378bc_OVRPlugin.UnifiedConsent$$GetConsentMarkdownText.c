/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentMarkdownText
ENTRY_POINT: 060378bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetConsentMarkdownText(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  uint *puVar14;
  undefined8 *unaff_x22;
  int *piVar15;
  
  puVar7 = PTR_DAT_075f7b48;
  puVar6 = PTR_DAT_075f7b38;
  puVar5 = PTR_DAT_075f7b28;
  puVar4 = PTR_DAT_075f7ae8;
  puVar3 = PTR_DAT_075f7ae0;
  puVar2 = PTR_DAT_075f2ea0;
                    /* try { // try from 060378bc to 061378ef has its CatchHandler @ 060374b4 */
  if (param_1 != 0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060378b8 with catch @ 060378c0
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060375f8 with catch @ 060378c4
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06037710 with catch @ 060378c8
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0603778c with catch @ 060378cc
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06037808 with catch @ 060378d0
                        */
    uVar1 = *(uint *)(unaff_x19 + 0x18);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06037694 with catch @ 060378d4
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06037614 with catch @ 060378d8
                        */
                    /* try { // try from 060378f0 to 061378f3 has its CatchHandler @ 0603791c */
                    /* try { // try from 060378f4 to 0613792b has its CatchHandler @ 060374b4 */
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
      thunk_FUN_0329bf60();
    }
    else {
                    /* catch() { ... } // from try @ 060378f0 with catch @ 0603791c */
                    /* try { // try from 0603792c to 06137933 has its CatchHandler @ 06037948 */
      FUN_047af440();
    }
                    /* try { // try from 06037934 to 0613793f has its CatchHandler @ 060374b4 */
                    /* try { // try from 06037940 to 06137947 has its CatchHandler @ 06037948 */
    **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0603792c with catch @ 06037948
                       catch(type#2 @ 00000000) { ... } // from try @ 06037940 with catch @ 06037948
                        */
    thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar2 + 0xb8));
    uVar8 = FUN_031f21dc(*(undefined8 *)puVar3,0x18);
    FUN_05d2c79c(uVar8,*(undefined8 *)puVar7,0);
    puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar9 = uVar8;
    thunk_FUN_0329bf60(puVar9,uVar8);
    uVar8 = FUN_031f21dc(*unaff_x22,0x18);
    FUN_05d2c79c(uVar8,*(undefined8 *)puVar6,0);
    puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *puVar9 = uVar8;
    thunk_FUN_0329bf60(puVar9,uVar8);
    lVar10 = FUN_031f21dc(*(undefined8 *)puVar4,0x18);
    uVar8 = FUN_031f21dc(*unaff_x22,6);
    FUN_05d2c79c(uVar8,*(undefined8 *)puVar5,0);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined8 *)(lVar10 + 0x20) = uVar8;
        thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0x20),uVar8);
        uVar8 = FUN_031f21dc(*unaff_x22,0);
        if (1 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x28) = uVar8;
          thunk_FUN_0329bf60();
          lVar11 = FUN_031f21dc(*unaff_x22,1);
          if (lVar11 == 0) goto LAB_06038648;
          if (*(int *)(lVar11 + 0x18) != 0) {
            *(undefined4 *)(lVar11 + 0x20) = 3;
            if (2 < *(uint *)(lVar10 + 0x18)) {
              *(long *)(lVar10 + 0x30) = lVar11;
              thunk_FUN_0329bf60();
              lVar11 = FUN_031f21dc(*unaff_x22,1);
              if (lVar11 == 0) goto LAB_06038648;
              if (*(int *)(lVar11 + 0x18) != 0) {
                *(undefined4 *)(lVar11 + 0x20) = 4;
                if (3 < *(uint *)(lVar10 + 0x18)) {
                  *(long *)(lVar10 + 0x38) = lVar11;
                  thunk_FUN_0329bf60();
                  lVar11 = FUN_031f21dc(*unaff_x22,1);
                  if (lVar11 == 0) goto LAB_06038648;
                  if (*(int *)(lVar11 + 0x18) != 0) {
                    *(undefined4 *)(lVar11 + 0x20) = 5;
                    if (4 < *(uint *)(lVar10 + 0x18)) {
                      *(long *)(lVar10 + 0x40) = lVar11;
                      thunk_FUN_0329bf60();
                      lVar11 = FUN_031f21dc(*unaff_x22,1);
                      if (lVar11 == 0) goto LAB_06038648;
                      if (*(int *)(lVar11 + 0x18) != 0) {
                        *(undefined4 *)(lVar11 + 0x20) = 0x13;
                        if (5 < *(uint *)(lVar10 + 0x18)) {
                          *(long *)(lVar10 + 0x48) = lVar11;
                          thunk_FUN_0329bf60();
                          lVar11 = FUN_031f21dc(*unaff_x22,1);
                          if (lVar11 == 0) goto LAB_06038648;
                          if (*(int *)(lVar11 + 0x18) != 0) {
                            *(undefined4 *)(lVar11 + 0x20) = 7;
                            if (6 < *(uint *)(lVar10 + 0x18)) {
                              *(long *)(lVar10 + 0x50) = lVar11;
                              thunk_FUN_0329bf60();
                              lVar11 = FUN_031f21dc(*unaff_x22,1);
                              if (lVar11 == 0) goto LAB_06038648;
                              if (*(int *)(lVar11 + 0x18) != 0) {
                                *(undefined4 *)(lVar11 + 0x20) = 8;
                                if (7 < *(uint *)(lVar10 + 0x18)) {
                                  *(long *)(lVar10 + 0x58) = lVar11;
                                  thunk_FUN_0329bf60();
                                  lVar11 = FUN_031f21dc(*unaff_x22,1);
                                  if (lVar11 == 0) goto LAB_06038648;
                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                    *(undefined4 *)(lVar11 + 0x20) = 0x14;
                                    if (8 < *(uint *)(lVar10 + 0x18)) {
                                      *(long *)(lVar10 + 0x60) = lVar11;
                                      thunk_FUN_0329bf60();
                                      lVar11 = FUN_031f21dc(*unaff_x22,1);
                                      if (lVar11 == 0) goto LAB_06038648;
                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                        *(undefined4 *)(lVar11 + 0x20) = 10;
                                        if (9 < *(uint *)(lVar10 + 0x18)) {
                                          *(long *)(lVar10 + 0x68) = lVar11;
                                          thunk_FUN_0329bf60();
                                          lVar11 = FUN_031f21dc(*unaff_x22,1);
                                          if (lVar11 == 0) goto LAB_06038648;
                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                            *(undefined4 *)(lVar11 + 0x20) = 0xb;
                                            if (10 < *(uint *)(lVar10 + 0x18)) {
                                              *(long *)(lVar10 + 0x70) = lVar11;
                                              thunk_FUN_0329bf60();
                                              lVar11 = FUN_031f21dc(*unaff_x22,1);
                                              if (lVar11 == 0) goto LAB_06038648;
                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                *(undefined4 *)(lVar11 + 0x20) = 0x15;
                                                if (0xb < *(uint *)(lVar10 + 0x18)) {
                                                  *(long *)(lVar10 + 0x78) = lVar11;
                                                  thunk_FUN_0329bf60();
                                                  lVar11 = FUN_031f21dc(*unaff_x22,1);
                                                  if (lVar11 == 0) goto LAB_06038648;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                    if (0xc < *(uint *)(lVar10 + 0x18)) {
                                                      *(long *)(lVar10 + 0x80) = lVar11;
                                                      thunk_FUN_0329bf60();
                                                      lVar11 = FUN_031f21dc(*unaff_x22,1);
                                                      if (lVar11 == 0) goto LAB_06038648;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar11 + 0x20) = 0xe;
                                                        if (0xd < *(uint *)(lVar10 + 0x18)) {
                                                          *(long *)(lVar10 + 0x88) = lVar11;
                                                          thunk_FUN_0329bf60();
                                                          lVar11 = FUN_031f21dc(*unaff_x22,1);
                                                          if (lVar11 == 0) goto LAB_06038648;
                                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar11 + 0x20) = 0x16;
                                                            if (0xe < *(uint *)(lVar10 + 0x18)) {
                                                              *(long *)(lVar10 + 0x90) = lVar11;
                                                              thunk_FUN_0329bf60();
                                                              lVar11 = FUN_031f21dc(*unaff_x22,1);
                                                              if (lVar11 == 0) goto LAB_06038648;
                                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar11 + 0x20) =
                                                                     0x10;
                                                                if (0xf < *(uint *)(lVar10 + 0x18))
                                                                {
                                                                  *(long *)(lVar10 + 0x98) = lVar11;
                                                                  thunk_FUN_0329bf60();
                                                                  lVar11 = FUN_031f21dc(*unaff_x22,1
                                                                                       );
                                                                  if (lVar11 == 0)
                                                                  goto LAB_06038648;
                                                                  if (*(int *)(lVar11 + 0x18) != 0)
                                                                  {
                                                                    *(undefined4 *)(lVar11 + 0x20) =
                                                                         0x11;
                                                                    if (0x10 < *(uint *)(lVar10 + 
                                                  0x18)) {
                                                    *(long *)(lVar10 + 0xa0) = lVar11;
                                                    thunk_FUN_0329bf60();
                                                    lVar11 = FUN_031f21dc(*unaff_x22,1);
                                                    if (lVar11 == 0) goto LAB_06038648;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x12;
                                                      if (0x11 < *(uint *)(lVar10 + 0x18)) {
                                                        *(long *)(lVar10 + 0xa8) = lVar11;
                                                        thunk_FUN_0329bf60();
                                                        lVar11 = FUN_031f21dc(*unaff_x22,1);
                                                        if (lVar11 == 0) goto LAB_06038648;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x17;
                                                          if (0x12 < *(uint *)(lVar10 + 0x18)) {
                                                            *(long *)(lVar10 + 0xb0) = lVar11;
                                                            thunk_FUN_0329bf60((long *)(lVar10 + 
                                                  0xb0));
                                                  uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                  if (0x13 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xb8) = uVar8;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar10 + 0xb8)
                                                                       ,uVar8);
                                                    uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                    if (0x14 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0xc0) = uVar8;
                                                      thunk_FUN_0329bf60((undefined8 *)
                                                                         (lVar10 + 0xc0),uVar8);
                                                      uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                      if (0x15 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 200) = uVar8;
                                                        thunk_FUN_0329bf60((undefined8 *)
                                                                           (lVar10 + 200),uVar8);
                                                        uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                        if (0x16 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0xd0) = uVar8;
                                                          thunk_FUN_0329bf60((undefined8 *)
                                                                             (lVar10 + 0xd0),uVar8);
                                                          uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                          puVar4 = PTR_DAT_075f7b08;
                                                          puVar3 = PTR_DAT_075f7b00;
                                                          if (0x17 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0xd8) = uVar8;
                                                            thunk_FUN_0329bf60();
                                                            plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x18);
                                                  *plVar12 = lVar10;
                                                  thunk_FUN_0329bf60(plVar12,lVar10);
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04751f00(lVar10,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_075f7af0;
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)PTR_DAT_075f7af0;
                                                    piVar15 = (int *)(lVar10 + 0x1c);
                                                    *piVar15 = *piVar15 + 1;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    puVar14 = (uint *)(lVar10 + 0x18);
                                                    uVar1 = *puVar14;
                                                    if (lVar13 != 0) {
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *puVar14 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar15 = *piVar15 + 1;
                                                      }
                                                      else {
                                                        FUN_04752754(lVar10,6,*(undefined8 *)
                                                                               (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_06038648;
                                                  }
                                                  puVar3 = PTR_DAT_075f7b40;
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_04752754(lVar10,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar12 = lVar10;
                                                  thunk_FUN_0329bf60(plVar12,lVar10);
                                                  uVar8 = FUN_031f21dc(*unaff_x22,5);
                                                  FUN_05d2c79c(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_0329bf60(puVar9,uVar8);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_06038648;
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
      FUN_031f2398();
    }
  }
LAB_06038648:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


