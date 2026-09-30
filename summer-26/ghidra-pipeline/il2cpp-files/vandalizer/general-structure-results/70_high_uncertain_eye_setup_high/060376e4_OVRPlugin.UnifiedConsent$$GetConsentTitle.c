/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentTitle
ENTRY_POINT: 060376e4
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


void OVRPlugin_UnifiedConsent__GetConsentTitle(long param_1)

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
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  uint *puVar14;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int *piVar15;
  
  *(undefined8 *)(param_1 + 0x20) = unaff_x20;
  thunk_FUN_0329bf60();
                    /* try { // try from 06037710 to 06137787 has its CatchHandler @ 060378c8 */
  uVar8 = FUN_031f21dc(*unaff_x22,4);
  FUN_05d2c79c(uVar8,*unaff_x23,0);
  lVar12 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_075f7b10;
  if (lVar12 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar9 = uVar8;
      thunk_FUN_0329bf60(puVar9,uVar8);
    }
    else {
      FUN_047af440();
    }
                    /* try { // try from 0603778c to 06137803 has its CatchHandler @ 060378cc */
    uVar8 = FUN_031f21dc(*unaff_x22,4);
    FUN_05d2c79c(uVar8,*(undefined8 *)puVar2,0);
    lVar12 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_075f7b18;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_0329bf60(puVar9,uVar8);
      }
      else {
                    /* try { // try from 06037808 to 0613787f has its CatchHandler @ 060378d0 */
        FUN_047af440();
      }
      uVar8 = FUN_031f21dc(*unaff_x22,4);
      FUN_05d2c79c(uVar8,*(undefined8 *)puVar2,0);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_075f7b20;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_0329bf60(puVar9,uVar8);
        }
        else {
          FUN_047af440();
        }
        uVar8 = FUN_031f21dc(*unaff_x22,5);
        FUN_05d2c79c(uVar8,*(undefined8 *)puVar2,0);
        lVar12 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar7 = PTR_DAT_075f7b48;
        puVar6 = PTR_DAT_075f7b38;
        puVar5 = PTR_DAT_075f7b28;
        puVar4 = PTR_DAT_075f7ae8;
        puVar3 = PTR_DAT_075f7ae0;
        puVar2 = PTR_DAT_075f2ea0;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar8;
            thunk_FUN_0329bf60(puVar9,uVar8);
          }
          else {
            FUN_047af440();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
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
          lVar12 = FUN_031f21dc(*(undefined8 *)puVar4,0x18);
          uVar8 = FUN_031f21dc(*unaff_x22,6);
          FUN_05d2c79c(uVar8,*(undefined8 *)puVar5,0);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) != 0) {
              *(undefined8 *)(lVar12 + 0x20) = uVar8;
              thunk_FUN_0329bf60((undefined8 *)(lVar12 + 0x20),uVar8);
              uVar8 = FUN_031f21dc(*unaff_x22,0);
              if (1 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x28) = uVar8;
                thunk_FUN_0329bf60();
                lVar10 = FUN_031f21dc(*unaff_x22,1);
                if (lVar10 == 0) goto LAB_06038648;
                if (*(int *)(lVar10 + 0x18) != 0) {
                  *(undefined4 *)(lVar10 + 0x20) = 3;
                  if (2 < *(uint *)(lVar12 + 0x18)) {
                    *(long *)(lVar12 + 0x30) = lVar10;
                    thunk_FUN_0329bf60();
                    lVar10 = FUN_031f21dc(*unaff_x22,1);
                    if (lVar10 == 0) goto LAB_06038648;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      *(undefined4 *)(lVar10 + 0x20) = 4;
                      if (3 < *(uint *)(lVar12 + 0x18)) {
                        *(long *)(lVar12 + 0x38) = lVar10;
                        thunk_FUN_0329bf60();
                        lVar10 = FUN_031f21dc(*unaff_x22,1);
                        if (lVar10 == 0) goto LAB_06038648;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          *(undefined4 *)(lVar10 + 0x20) = 5;
                          if (4 < *(uint *)(lVar12 + 0x18)) {
                            *(long *)(lVar12 + 0x40) = lVar10;
                            thunk_FUN_0329bf60();
                            lVar10 = FUN_031f21dc(*unaff_x22,1);
                            if (lVar10 == 0) goto LAB_06038648;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              *(undefined4 *)(lVar10 + 0x20) = 0x13;
                              if (5 < *(uint *)(lVar12 + 0x18)) {
                                *(long *)(lVar12 + 0x48) = lVar10;
                                thunk_FUN_0329bf60();
                                lVar10 = FUN_031f21dc(*unaff_x22,1);
                                if (lVar10 == 0) goto LAB_06038648;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  *(undefined4 *)(lVar10 + 0x20) = 7;
                                  if (6 < *(uint *)(lVar12 + 0x18)) {
                                    *(long *)(lVar12 + 0x50) = lVar10;
                                    thunk_FUN_0329bf60();
                                    lVar10 = FUN_031f21dc(*unaff_x22,1);
                                    if (lVar10 == 0) goto LAB_06038648;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined4 *)(lVar10 + 0x20) = 8;
                                      if (7 < *(uint *)(lVar12 + 0x18)) {
                                        *(long *)(lVar12 + 0x58) = lVar10;
                                        thunk_FUN_0329bf60();
                                        lVar10 = FUN_031f21dc(*unaff_x22,1);
                                        if (lVar10 == 0) goto LAB_06038648;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          *(undefined4 *)(lVar10 + 0x20) = 0x14;
                                          if (8 < *(uint *)(lVar12 + 0x18)) {
                                            *(long *)(lVar12 + 0x60) = lVar10;
                                            thunk_FUN_0329bf60();
                                            lVar10 = FUN_031f21dc(*unaff_x22,1);
                                            if (lVar10 == 0) goto LAB_06038648;
                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                              *(undefined4 *)(lVar10 + 0x20) = 10;
                                              if (9 < *(uint *)(lVar12 + 0x18)) {
                                                *(long *)(lVar12 + 0x68) = lVar10;
                                                thunk_FUN_0329bf60();
                                                lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                if (lVar10 == 0) goto LAB_06038648;
                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar10 + 0x20) = 0xb;
                                                  if (10 < *(uint *)(lVar12 + 0x18)) {
                                                    *(long *)(lVar12 + 0x70) = lVar10;
                                                    thunk_FUN_0329bf60();
                                                    lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                    if (lVar10 == 0) goto LAB_06038648;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar10 + 0x20) = 0x15;
                                                      if (0xb < *(uint *)(lVar12 + 0x18)) {
                                                        *(long *)(lVar12 + 0x78) = lVar10;
                                                        thunk_FUN_0329bf60();
                                                        lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                        if (lVar10 == 0) goto LAB_06038648;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                          if (0xc < *(uint *)(lVar12 + 0x18)) {
                                                            *(long *)(lVar12 + 0x80) = lVar10;
                                                            thunk_FUN_0329bf60();
                                                            lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                            if (lVar10 == 0) goto LAB_06038648;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                              if (0xd < *(uint *)(lVar12 + 0x18)) {
                                                                *(long *)(lVar12 + 0x88) = lVar10;
                                                                thunk_FUN_0329bf60();
                                                                lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                                if (lVar10 == 0) goto LAB_06038648;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0x16;
                                                                  if (0xe < *(uint *)(lVar12 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar12 + 0x90) =
                                                                         lVar10;
                                                                    thunk_FUN_0329bf60();
                                                                    lVar10 = FUN_031f21dc(*unaff_x22
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_06038648;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x10;
                                                                      if (0xf < *(uint *)(lVar12 + 
                                                  0x18)) {
                                                    *(long *)(lVar12 + 0x98) = lVar10;
                                                    thunk_FUN_0329bf60();
                                                    lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                    if (lVar10 == 0) goto LAB_06038648;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                      if (0x10 < *(uint *)(lVar12 + 0x18)) {
                                                        *(long *)(lVar12 + 0xa0) = lVar10;
                                                        thunk_FUN_0329bf60();
                                                        lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                        if (lVar10 == 0) goto LAB_06038648;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                          if (0x11 < *(uint *)(lVar12 + 0x18)) {
                                                            *(long *)(lVar12 + 0xa8) = lVar10;
                                                            thunk_FUN_0329bf60();
                                                            lVar10 = FUN_031f21dc(*unaff_x22,1);
                                                            if (lVar10 == 0) goto LAB_06038648;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                              if (0x12 < *(uint *)(lVar12 + 0x18)) {
                                                                *(long *)(lVar12 + 0xb0) = lVar10;
                                                                thunk_FUN_0329bf60((long *)(lVar12 +
                                                                                           0xb0));
                                                                uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                                if (0x13 < *(uint *)(lVar12 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar12 + 0xb8) =
                                                                       uVar8;
                                                                  thunk_FUN_0329bf60((undefined8 *)
                                                                                     (lVar12 + 0xb8)
                                                                                     ,uVar8);
                                                                  uVar8 = FUN_031f21dc(*unaff_x22,0)
                                                                  ;
                                                                  if (0x14 < *(uint *)(lVar12 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar12 + 0xc0) =
                                                                         uVar8;
                                                                    thunk_FUN_0329bf60((undefined8 *
                                                                                       )(lVar12 + 
                                                  0xc0),uVar8);
                                                  uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                  if (0x15 < *(uint *)(lVar12 + 0x18)) {
                                                    *(undefined8 *)(lVar12 + 200) = uVar8;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar12 + 200),
                                                                       uVar8);
                                                    uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                    if (0x16 < *(uint *)(lVar12 + 0x18)) {
                                                      *(undefined8 *)(lVar12 + 0xd0) = uVar8;
                                                      thunk_FUN_0329bf60((undefined8 *)
                                                                         (lVar12 + 0xd0),uVar8);
                                                      uVar8 = FUN_031f21dc(*unaff_x22,0);
                                                      puVar4 = PTR_DAT_075f7b08;
                                                      puVar3 = PTR_DAT_075f7b00;
                                                      if (0x17 < *(uint *)(lVar12 + 0x18)) {
                                                        *(undefined8 *)(lVar12 + 0xd8) = uVar8;
                                                        thunk_FUN_0329bf60();
                                                        plVar11 = (long *)(*(long *)(*(long *)puVar2
                                                                                    + 0xb8) + 0x18);
                                                        *plVar11 = lVar12;
                                                        thunk_FUN_0329bf60(plVar11,lVar12);
                                                        lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                     puVar4);
                                                        FUN_04751f00(lVar12,*(undefined8 *)puVar3);
                                                        puVar3 = PTR_DAT_075f7af0;
                                                        if (lVar12 != 0) {
                                                          lVar10 = *(long *)PTR_DAT_075f7af0;
                                                          piVar15 = (int *)(lVar12 + 0x1c);
                                                          *piVar15 = *piVar15 + 1;
                                                          lVar13 = *(long *)(lVar12 + 0x10);
                                                          puVar14 = (uint *)(lVar12 + 0x18);
                                                          uVar1 = *puVar14;
                                                          if (lVar13 != 0) {
                                                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                              *puVar14 = uVar1 + 1;
                                                              *(undefined4 *)
                                                               (lVar13 + (long)(int)uVar1 * 4 + 0x20
                                                               ) = 6;
                                                              *piVar15 = *piVar15 + 1;
                                                            }
                                                            else {
                                                              FUN_04752754(lVar12,6,*(undefined8 *)
                                                                                     (*(long *)(*(
                                                  long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
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
                                                    FUN_04752754(lVar12,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar12;
                                                  thunk_FUN_0329bf60(plVar11,lVar12);
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
      }
    }
  }
LAB_06038648:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


