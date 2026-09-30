/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 07408200
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


void OVRPlugin_Qpl__DestroyMarkerHandle(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  int *piVar15;
  
  puVar5 = PTR_DAT_08eb63e0;
  puVar4 = PTR_DAT_08eb63d8;
  puVar3 = PTR_DAT_08eb63d0;
  puVar2 = PTR_DAT_08eb63c8;
                    /* try { // try from 0740820c to 0750820f has its CatchHandler @ 0740822c */
                    /* try { // try from 07408210 to 07508233 has its CatchHandler @ 07407f48 */
                    /* catch() { ... } // from try @ 0740820c with catch @ 0740822c */
                    /* try { // try from 07408234 to 07508247 has its CatchHandler @ 074082a8 */
  if ((DAT_0941ea2c & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb63e8);
                    /* catch() { ... } // from try @ 07408060 with catch @ 07408248
                       try { // try from 07408248 to 0750825f has its CatchHandler @ 07407f48 */
    FUN_03c8f898(PTR_DAT_08eb63f0);
    FUN_03c8f898(PTR_DAT_08eb63d8);
                    /* try { // try from 07408260 to 07508263 has its CatchHandler @ 07408284 */
                    /* try { // try from 07408264 to 0750828b has its CatchHandler @ 07407f48 */
    FUN_03c8f898(PTR_DAT_08eb1b48);
    FUN_03c8f898(PTR_DAT_08eb63f8);
    FUN_03c8f898(PTR_DAT_08eb6400);
                    /* catch() { ... } // from try @ 07408260 with catch @ 07408284 */
    FUN_03c8f898(PTR_DAT_08eb6408);
                    /* try { // try from 0740828c to 07508293 has its CatchHandler @ 074082a8 */
                    /* try { // try from 07408294 to 0750829f has its CatchHandler @ 07407f48 */
    FUN_03c8f898(PTR_DAT_08eb63d0);
                    /* try { // try from 074082a0 to 075082a7 has its CatchHandler @ 074082a8 */
    FUN_03c8f898(PTR_DAT_08eb63c8);
                    /* catch() { ... } // from try @ 07408234 with catch @ 074082a8
                       catch() { ... } // from try @ 0740828c with catch @ 074082a8
                       catch() { ... } // from try @ 074082a0 with catch @ 074082a8 */
    FUN_03c8f898(PTR_DAT_08eb6410);
    FUN_03c8f898(PTR_DAT_08eb6418);
    FUN_03c8f898(PTR_DAT_08eb6420);
    FUN_03c8f898(PTR_DAT_08eb63e0);
    FUN_03c8f898(PTR_DAT_08eb6428);
    FUN_03c8f898(PTR_DAT_08eb6430);
    FUN_03c8f898(PTR_DAT_08eb6438);
    FUN_03c8f898(PTR_DAT_08eb6440);
    FUN_03c8f898(PTR_DAT_08eb6448);
    FUN_03c8f898(PTR_DAT_08eb6450);
    DAT_0941ea2c = 1;
  }
  lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_052124c0(lVar8,*(undefined8 *)puVar3);
  uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,4);
  FUN_0701f51c(uVar9,*(undefined8 *)puVar5,0);
  puVar2 = PTR_DAT_08eb63f8;
  if (lVar8 != 0) {
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)PTR_DAT_08eb63f8;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar3 = PTR_DAT_08eb6438;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_03d233cc(puVar10,uVar9);
      }
      else {
        FUN_05212cf4(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,5);
      FUN_0701f51c(uVar9,*(undefined8 *)puVar3,0);
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar13 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      puVar3 = PTR_DAT_08eb6418;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar10 = uVar9;
          thunk_FUN_03d233cc(puVar10,uVar9);
        }
        else {
          FUN_05212cf4(lVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,5);
        FUN_0701f51c(uVar9,*(undefined8 *)puVar3,0);
        lVar12 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        puVar3 = PTR_DAT_08eb6420;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = uVar9;
            thunk_FUN_03d233cc(puVar10,uVar9);
          }
          else {
            FUN_05212cf4(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,5);
          FUN_0701f51c(uVar9,*(undefined8 *)puVar3,0);
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar3 = PTR_DAT_08eb6450;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = uVar9;
              thunk_FUN_03d233cc(puVar10,uVar9);
            }
            else {
              FUN_05212cf4(lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,5);
            FUN_0701f51c(uVar9,*(undefined8 *)puVar3,0);
            lVar12 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            puVar7 = PTR_DAT_08eb6440;
            puVar6 = PTR_DAT_08eb6428;
            puVar5 = PTR_DAT_08eb63f0;
            puVar3 = PTR_DAT_08eb63e8;
            puVar2 = PTR_DAT_08eb1b48;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *puVar10 = uVar9;
                thunk_FUN_03d233cc(puVar10,uVar9);
              }
              else {
                FUN_05212cf4(lVar8,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
              thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar8);
              uVar9 = FUN_03c8f97c(*(undefined8 *)puVar3,0x1a);
              FUN_0701f51c(uVar9,*(undefined8 *)puVar7,0);
              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar10 = uVar9;
              thunk_FUN_03d233cc(puVar10,uVar9);
              uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,0x1a);
              FUN_0701f51c(uVar9,*(undefined8 *)puVar6,0);
              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar10 = uVar9;
              thunk_FUN_03d233cc(puVar10,uVar9);
              lVar8 = FUN_03c8f97c(*(undefined8 *)puVar5,0x1a);
              uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,0);
              puVar3 = PTR_DAT_08eb6448;
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined8 *)(lVar8 + 0x20) = uVar9;
                  thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x20),uVar9);
                  uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,6);
                  FUN_0701f51c(uVar9,*(undefined8 *)puVar3,0);
                  if (1 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined8 *)(lVar8 + 0x28) = uVar9;
                    thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x28),uVar9);
                    lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                    if (lVar12 == 0) goto LAB_07409440;
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      *(undefined4 *)(lVar12 + 0x20) = 3;
                      if (2 < *(uint *)(lVar8 + 0x18)) {
                        *(long *)(lVar8 + 0x30) = lVar12;
                        thunk_FUN_03d233cc();
                        lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                        if (lVar12 == 0) goto LAB_07409440;
                        if (*(int *)(lVar12 + 0x18) != 0) {
                          *(undefined4 *)(lVar12 + 0x20) = 4;
                          if (3 < *(uint *)(lVar8 + 0x18)) {
                            *(long *)(lVar8 + 0x38) = lVar12;
                            thunk_FUN_03d233cc();
                            lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                            if (lVar12 == 0) goto LAB_07409440;
                            if (*(int *)(lVar12 + 0x18) != 0) {
                              *(undefined4 *)(lVar12 + 0x20) = 5;
                              if (4 < *(uint *)(lVar8 + 0x18)) {
                                *(long *)(lVar8 + 0x40) = lVar12;
                                thunk_FUN_03d233cc((long *)(lVar8 + 0x40));
                                uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,0);
                                if (5 < *(uint *)(lVar8 + 0x18)) {
                                  *(undefined8 *)(lVar8 + 0x48) = uVar9;
                                  thunk_FUN_03d233cc();
                                  lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                                  if (lVar12 == 0) goto LAB_07409440;
                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                    *(undefined4 *)(lVar12 + 0x20) = 7;
                                    if (6 < *(uint *)(lVar8 + 0x18)) {
                                      *(long *)(lVar8 + 0x50) = lVar12;
                                      thunk_FUN_03d233cc();
                                      lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                                      if (lVar12 == 0) goto LAB_07409440;
                                      if (*(int *)(lVar12 + 0x18) != 0) {
                                        *(undefined4 *)(lVar12 + 0x20) = 8;
                                        if (7 < *(uint *)(lVar8 + 0x18)) {
                                          *(long *)(lVar8 + 0x58) = lVar12;
                                          thunk_FUN_03d233cc();
                                          lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                                          if (lVar12 == 0) goto LAB_07409440;
                                          if (*(int *)(lVar12 + 0x18) != 0) {
                                            *(undefined4 *)(lVar12 + 0x20) = 9;
                                            if (8 < *(uint *)(lVar8 + 0x18)) {
                                              *(long *)(lVar8 + 0x60) = lVar12;
                                              thunk_FUN_03d233cc();
                                              lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                                              if (lVar12 == 0) goto LAB_07409440;
                                              if (*(int *)(lVar12 + 0x18) != 0) {
                                                *(undefined4 *)(lVar12 + 0x20) = 10;
                                                if (9 < *(uint *)(lVar8 + 0x18)) {
                                                  *(long *)(lVar8 + 0x68) = lVar12;
                                                  thunk_FUN_03d233cc((long *)(lVar8 + 0x68));
                                                  uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,0);
                                                  if (10 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x70) = uVar9;
                                                    thunk_FUN_03d233cc();
                                                    lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar12 + 0x20) = 0xc;
                                                      if (0xb < *(uint *)(lVar8 + 0x18)) {
                                                        *(long *)(lVar8 + 0x78) = lVar12;
                                                        thunk_FUN_03d233cc();
                                                        lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,
                                                                              1);
                                                        if (lVar12 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar12 + 0x20) = 0xd;
                                                          if (0xc < *(uint *)(lVar8 + 0x18)) {
                                                            *(long *)(lVar8 + 0x80) = lVar12;
                                                            thunk_FUN_03d233cc();
                                                            lVar12 = FUN_03c8f97c(*(undefined8 *)
                                                                                   puVar4,1);
                                                            if (lVar12 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar12 + 0x20) = 0xe;
                                                              if (0xd < *(uint *)(lVar8 + 0x18)) {
                                                                *(long *)(lVar8 + 0x88) = lVar12;
                                                                thunk_FUN_03d233cc();
                                                                lVar12 = FUN_03c8f97c(*(undefined8 *
                                                                                       )puVar4,1);
                                                                if (lVar12 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar12 + 0x20) =
                                                                       0xf;
                                                                  if (0xe < *(uint *)(lVar8 + 0x18))
                                                                  {
                                                                    *(long *)(lVar8 + 0x90) = lVar12
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar8 + 0x90));
                                                  uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,0);
                                                  if (0xf < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x98) = uVar9;
                                                    thunk_FUN_03d233cc();
                                                    lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar12 + 0x20) = 0x11;
                                                      if (0x10 < *(uint *)(lVar8 + 0x18)) {
                                                        *(long *)(lVar8 + 0xa0) = lVar12;
                                                        thunk_FUN_03d233cc();
                                                        lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,
                                                                              1);
                                                        if (lVar12 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar12 + 0x20) = 0x12;
                                                          if (0x11 < *(uint *)(lVar8 + 0x18)) {
                                                            *(long *)(lVar8 + 0xa8) = lVar12;
                                                            thunk_FUN_03d233cc();
                                                            lVar12 = FUN_03c8f97c(*(undefined8 *)
                                                                                   puVar4,1);
                                                            if (lVar12 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar12 + 0x20) = 0x13;
                                                              if (0x12 < *(uint *)(lVar8 + 0x18)) {
                                                                *(long *)(lVar8 + 0xb0) = lVar12;
                                                                thunk_FUN_03d233cc();
                                                                lVar12 = FUN_03c8f97c(*(undefined8 *
                                                                                       )puVar4,1);
                                                                if (lVar12 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar12 + 0x20) =
                                                                       0x14;
                                                                  if (0x13 < *(uint *)(lVar8 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar8 + 0xb8) = lVar12
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar8 + 0xb8));
                                                  uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,0);
                                                  if (0x14 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xc0) = uVar9;
                                                    thunk_FUN_03d233cc();
                                                    lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,1);
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar12 + 0x20) = 0x16;
                                                      if (0x15 < *(uint *)(lVar8 + 0x18)) {
                                                        *(long *)(lVar8 + 200) = lVar12;
                                                        thunk_FUN_03d233cc();
                                                        lVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,
                                                                              1);
                                                        if (lVar12 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar12 + 0x20) = 0x17;
                                                          if (0x16 < *(uint *)(lVar8 + 0x18)) {
                                                            *(long *)(lVar8 + 0xd0) = lVar12;
                                                            thunk_FUN_03d233cc();
                                                            lVar12 = FUN_03c8f97c(*(undefined8 *)
                                                                                   puVar4,1);
                                                            if (lVar12 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar12 + 0x20) = 0x18;
                                                              if (0x17 < *(uint *)(lVar8 + 0x18)) {
                                                                *(long *)(lVar8 + 0xd8) = lVar12;
                                                                thunk_FUN_03d233cc();
                                                                lVar12 = FUN_03c8f97c(*(undefined8 *
                                                                                       )puVar4,1);
                                                                if (lVar12 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar12 + 0x20) =
                                                                       0x19;
                                                                  if (0x18 < *(uint *)(lVar8 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar8 + 0xe0) = lVar12
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar8 + 0xe0));
                                                  uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,0);
                                                  puVar5 = PTR_DAT_08eb6410;
                                                  puVar3 = PTR_DAT_08eb6408;
                                                  if (0x19 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xe8) = uVar9;
                                                    thunk_FUN_03d233cc();
                                                    plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x18);
                                                    *plVar11 = lVar8;
                                                    thunk_FUN_03d233cc(plVar11,lVar8);
                                                    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_051c29a0(lVar8,*(undefined8 *)puVar3);
                                                    puVar3 = PTR_DAT_08eb6400;
                                                    if (lVar8 != 0) {
                                                      lVar12 = *(long *)PTR_DAT_08eb6400;
                                                      piVar15 = (int *)(lVar8 + 0x1c);
                                                      *piVar15 = *piVar15 + 1;
                                                      lVar13 = *(long *)(lVar8 + 0x10);
                                                      puVar14 = (uint *)(lVar8 + 0x18);
                                                      uVar1 = *puVar14;
                                                      if (lVar13 != 0) {
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *puVar14 = uVar1 + 1;
                                                          *(undefined4 *)
                                                           (lVar13 + (long)(int)uVar1 * 4 + 0x20) =
                                                               6;
                                                          *piVar15 = *piVar15 + 1;
                                                        }
                                                        else {
                                                          FUN_051c31f4(lVar8,6,*(undefined8 *)
                                                                                (*(long *)(*(long *)
                                                  (lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_07409440;
                                                  }
                                                  puVar3 = PTR_DAT_08eb6430;
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar8,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar8;
                                                  thunk_FUN_03d233cc(plVar11,lVar8);
                                                  uVar9 = FUN_03c8f97c(*(undefined8 *)puVar4,5);
                                                  FUN_0701f51c(uVar9,*(undefined8 *)puVar3,0);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x28);
                                                  *puVar10 = uVar9;
                                                  thunk_FUN_03d233cc(puVar10,uVar9);
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


