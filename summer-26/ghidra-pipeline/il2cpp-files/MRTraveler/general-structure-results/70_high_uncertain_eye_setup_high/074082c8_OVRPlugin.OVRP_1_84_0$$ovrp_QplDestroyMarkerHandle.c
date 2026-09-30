/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 074082c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar13;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int *piVar14;
  
  FUN_03c8f898(PTR_DAT_08eb63e0);
  FUN_03c8f898(PTR_DAT_08eb6428);
  FUN_03c8f898(PTR_DAT_08eb6430);
  FUN_03c8f898(PTR_DAT_08eb6438);
  FUN_03c8f898(PTR_DAT_08eb6440);
  FUN_03c8f898(PTR_DAT_08eb6448);
  FUN_03c8f898(PTR_DAT_08eb6450);
                    /* try { // try from 0740831c to 075083c7 has its CatchHandler @ 0740831c
                       catch() { ... } // from try @ 0740831c with catch @ 0740831c
                       catch() { ... } // from try @ 07408414 with catch @ 0740831c
                       catch() { ... } // from try @ 0740845c with catch @ 0740831c
                       catch() { ... } // from try @ 0740848c with catch @ 0740831c */
  *(undefined1 *)(unaff_x21 + 0xa2c) = 1;
  lVar7 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_052124c0(lVar7,*unaff_x19);
  uVar8 = FUN_03c8f97c(*unaff_x22,4);
  FUN_0701f51c(uVar8,*unaff_x20,0);
  puVar2 = PTR_DAT_08eb63f8;
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x10);
    lVar12 = *(long *)PTR_DAT_08eb63f8;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = PTR_DAT_08eb6438;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_03d233cc(puVar9,uVar8);
      }
      else {
        FUN_05212cf4(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = FUN_03c8f97c(*unaff_x22,5);
      FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar12 = *(long *)puVar2;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar3 = PTR_DAT_08eb6418;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_03d233cc(puVar9,uVar8);
        }
        else {
          FUN_05212cf4(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = FUN_03c8f97c(*unaff_x22,5);
        FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
        lVar11 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        puVar3 = PTR_DAT_08eb6420;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar8;
            thunk_FUN_03d233cc(puVar9,uVar8);
          }
          else {
            FUN_05212cf4(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = FUN_03c8f97c(*unaff_x22,5);
          FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar3 = PTR_DAT_08eb6450;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar9 = uVar8;
              thunk_FUN_03d233cc(puVar9,uVar8);
            }
            else {
              FUN_05212cf4(lVar7,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = FUN_03c8f97c(*unaff_x22,5);
            FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            puVar6 = PTR_DAT_08eb6440;
            puVar5 = PTR_DAT_08eb6428;
            puVar4 = PTR_DAT_08eb63f0;
            puVar3 = PTR_DAT_08eb63e8;
            puVar2 = PTR_DAT_08eb1b48;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *puVar9 = uVar8;
                thunk_FUN_03d233cc(puVar9,uVar8);
              }
              else {
                FUN_05212cf4(lVar7,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
              thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar7);
              uVar8 = FUN_03c8f97c(*(undefined8 *)puVar3,0x1a);
              FUN_0701f51c(uVar8,*(undefined8 *)puVar6,0);
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar9 = uVar8;
              thunk_FUN_03d233cc(puVar9,uVar8);
              uVar8 = FUN_03c8f97c(*unaff_x22,0x1a);
              FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar9 = uVar8;
              thunk_FUN_03d233cc(puVar9,uVar8);
              lVar7 = FUN_03c8f97c(*(undefined8 *)puVar4,0x1a);
              uVar8 = FUN_03c8f97c(*unaff_x22,0);
              puVar3 = PTR_DAT_08eb6448;
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = uVar8;
                  thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x20),uVar8);
                  uVar8 = FUN_03c8f97c(*unaff_x22,6);
                  FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
                  if (1 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x28) = uVar8;
                    thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x28),uVar8);
                    lVar11 = FUN_03c8f97c(*unaff_x22,1);
                    if (lVar11 == 0) goto LAB_07409440;
                    if (*(int *)(lVar11 + 0x18) != 0) {
                      *(undefined4 *)(lVar11 + 0x20) = 3;
                      if (2 < *(uint *)(lVar7 + 0x18)) {
                        *(long *)(lVar7 + 0x30) = lVar11;
                        thunk_FUN_03d233cc();
                        lVar11 = FUN_03c8f97c(*unaff_x22,1);
                        if (lVar11 == 0) goto LAB_07409440;
                        if (*(int *)(lVar11 + 0x18) != 0) {
                          *(undefined4 *)(lVar11 + 0x20) = 4;
                          if (3 < *(uint *)(lVar7 + 0x18)) {
                            *(long *)(lVar7 + 0x38) = lVar11;
                            thunk_FUN_03d233cc();
                            lVar11 = FUN_03c8f97c(*unaff_x22,1);
                            if (lVar11 == 0) goto LAB_07409440;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              *(undefined4 *)(lVar11 + 0x20) = 5;
                              if (4 < *(uint *)(lVar7 + 0x18)) {
                                *(long *)(lVar7 + 0x40) = lVar11;
                                thunk_FUN_03d233cc((long *)(lVar7 + 0x40));
                                uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                if (5 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x48) = uVar8;
                                  thunk_FUN_03d233cc();
                                  lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                  if (lVar11 == 0) goto LAB_07409440;
                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                    *(undefined4 *)(lVar11 + 0x20) = 7;
                                    if (6 < *(uint *)(lVar7 + 0x18)) {
                                      *(long *)(lVar7 + 0x50) = lVar11;
                                      thunk_FUN_03d233cc();
                                      lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                      if (lVar11 == 0) goto LAB_07409440;
                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                        *(undefined4 *)(lVar11 + 0x20) = 8;
                                        if (7 < *(uint *)(lVar7 + 0x18)) {
                                          *(long *)(lVar7 + 0x58) = lVar11;
                                          thunk_FUN_03d233cc();
                                          lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                          if (lVar11 == 0) goto LAB_07409440;
                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                            *(undefined4 *)(lVar11 + 0x20) = 9;
                                            if (8 < *(uint *)(lVar7 + 0x18)) {
                                              *(long *)(lVar7 + 0x60) = lVar11;
                                              thunk_FUN_03d233cc();
                                              lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                              if (lVar11 == 0) goto LAB_07409440;
                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                *(undefined4 *)(lVar11 + 0x20) = 10;
                                                if (9 < *(uint *)(lVar7 + 0x18)) {
                                                  *(long *)(lVar7 + 0x68) = lVar11;
                                                  thunk_FUN_03d233cc((long *)(lVar7 + 0x68));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  if (10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x70) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                    if (lVar11 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0xc;
                                                      if (0xb < *(uint *)(lVar7 + 0x18)) {
                                                        *(long *)(lVar7 + 0x78) = lVar11;
                                                        thunk_FUN_03d233cc();
                                                        lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                        if (lVar11 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                          if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                            *(long *)(lVar7 + 0x80) = lVar11;
                                                            thunk_FUN_03d233cc();
                                                            lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                            if (lVar11 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar11 + 0x20) = 0xe;
                                                              if (0xd < *(uint *)(lVar7 + 0x18)) {
                                                                *(long *)(lVar7 + 0x88) = lVar11;
                                                                thunk_FUN_03d233cc();
                                                                lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                                if (lVar11 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0xf;
                                                                  if (0xe < *(uint *)(lVar7 + 0x18))
                                                                  {
                                                                    *(long *)(lVar7 + 0x90) = lVar11
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar7 + 0x90));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  if (0xf < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x98) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                    if (lVar11 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x11;
                                                      if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                                        *(long *)(lVar7 + 0xa0) = lVar11;
                                                        thunk_FUN_03d233cc();
                                                        lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                        if (lVar11 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x12;
                                                          if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                                            *(long *)(lVar7 + 0xa8) = lVar11;
                                                            thunk_FUN_03d233cc();
                                                            lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                            if (lVar11 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar11 + 0x20) = 0x13;
                                                              if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                                                *(long *)(lVar7 + 0xb0) = lVar11;
                                                                thunk_FUN_03d233cc();
                                                                lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                                if (lVar11 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0x14;
                                                                  if (0x13 < *(uint *)(lVar7 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar7 + 0xb8) = lVar11
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar7 + 0xb8));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xc0) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                    if (lVar11 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x16;
                                                      if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                        *(long *)(lVar7 + 200) = lVar11;
                                                        thunk_FUN_03d233cc();
                                                        lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                        if (lVar11 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x17;
                                                          if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                            *(long *)(lVar7 + 0xd0) = lVar11;
                                                            thunk_FUN_03d233cc();
                                                            lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                            if (lVar11 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar11 + 0x20) = 0x18;
                                                              if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                                *(long *)(lVar7 + 0xd8) = lVar11;
                                                                thunk_FUN_03d233cc();
                                                                lVar11 = FUN_03c8f97c(*unaff_x22,1);
                                                                if (lVar11 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0x19;
                                                                  if (0x18 < *(uint *)(lVar7 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar7 + 0xe0) = lVar11
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar7 + 0xe0));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  puVar4 = PTR_DAT_08eb6410;
                                                  puVar3 = PTR_DAT_08eb6408;
                                                  if (0x19 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe8) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x18);
                                                    *plVar10 = lVar7;
                                                    thunk_FUN_03d233cc(plVar10,lVar7);
                                                    lVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_051c29a0(lVar7,*(undefined8 *)puVar3);
                                                    puVar3 = PTR_DAT_08eb6400;
                                                    if (lVar7 != 0) {
                                                      lVar11 = *(long *)PTR_DAT_08eb6400;
                                                      piVar14 = (int *)(lVar7 + 0x1c);
                                                      *piVar14 = *piVar14 + 1;
                                                      lVar12 = *(long *)(lVar7 + 0x10);
                                                      puVar13 = (uint *)(lVar7 + 0x18);
                                                      uVar1 = *puVar13;
                                                      if (lVar12 != 0) {
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *puVar13 = uVar1 + 1;
                                                          *(undefined4 *)
                                                           (lVar12 + (long)(int)uVar1 * 4 + 0x20) =
                                                               6;
                                                          *piVar14 = *piVar14 + 1;
                                                        }
                                                        else {
                                                          FUN_051c31f4(lVar7,6,*(undefined8 *)
                                                                                (*(long *)(*(long *)
                                                  (lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  puVar3 = PTR_DAT_08eb6430;
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar10 = lVar7;
                                                  thunk_FUN_03d233cc(plVar10,lVar7);
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,5);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_03d233cc(puVar9,uVar8);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_07409440;
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
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
            }
          }
        }
      }
    }
  }
LAB_07409440:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


