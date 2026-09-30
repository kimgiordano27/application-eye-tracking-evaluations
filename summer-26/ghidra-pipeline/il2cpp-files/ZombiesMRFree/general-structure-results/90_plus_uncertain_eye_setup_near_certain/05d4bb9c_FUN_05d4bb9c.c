/*
FUNCTION_NAME: FUN_05d4bb9c
ENTRY_POINT: 05d4bb9c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_05d4bb9c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  int *piVar16;
  
  puVar5 = PTR_DAT_06fb92b8;
  puVar4 = PTR_DAT_06fb92b0;
  puVar3 = PTR_DAT_06fb92a8;
  puVar2 = PTR_DAT_06fb92a0;
  if ((DAT_07398b91 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb92c0);
    FUN_02fe925c(PTR_DAT_06fb92c8);
    FUN_02fe925c(PTR_DAT_06fb92b0);
    FUN_02fe925c(PTR_DAT_06fb4a38);
    FUN_02fe925c(PTR_DAT_06fb92d0);
    FUN_02fe925c(PTR_DAT_06fb92d8);
    FUN_02fe925c(PTR_DAT_06fb92a8);
    FUN_02fe925c(PTR_DAT_06fb92e0);
    FUN_02fe925c(PTR_DAT_06fb92e8);
    FUN_02fe925c(PTR_DAT_06fb92a0);
    FUN_02fe925c(PTR_DAT_06fb92f0);
    FUN_02fe925c(PTR_DAT_06fb92f8);
    FUN_02fe925c(PTR_DAT_06fb9300);
    FUN_02fe925c(PTR_DAT_06fb9308);
    FUN_02fe925c(PTR_DAT_06fb9310);
    FUN_02fe925c(PTR_DAT_06fb9318);
    FUN_02fe925c(PTR_DAT_06fb92b8);
    FUN_02fe925c(PTR_DAT_06fb9320);
    FUN_02fe925c(PTR_DAT_06fb9328);
    DAT_07398b91 = 1;
  }
  lVar9 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
  FUN_0442fab4(lVar9,*(undefined8 *)puVar3);
  uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,5);
  FUN_05a1740c(uVar10,*(undefined8 *)puVar5,0);
  puVar2 = PTR_DAT_06fb92d8;
  if (lVar9 != 0) {
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)PTR_DAT_06fb92d8;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar3 = PTR_DAT_06fb9310;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = uVar10;
        thunk_FUN_03048534(puVar11,uVar10);
      }
      else {
        FUN_044302e8(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,4);
      FUN_05a1740c(uVar10,*(undefined8 *)puVar3,0);
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)puVar2;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      puVar3 = PTR_DAT_06fb92f0;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar11 = uVar10;
          thunk_FUN_03048534(puVar11,uVar10);
        }
        else {
          FUN_044302e8(lVar9,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,4);
        FUN_05a1740c(uVar10,*(undefined8 *)puVar3,0);
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar3 = PTR_DAT_06fb92f8;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *puVar11 = uVar10;
            thunk_FUN_03048534(puVar11,uVar10);
          }
          else {
            FUN_044302e8(lVar9,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,4);
          FUN_05a1740c(uVar10,*(undefined8 *)puVar3,0);
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar3 = PTR_DAT_06fb9300;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *puVar11 = uVar10;
              thunk_FUN_03048534(puVar11,uVar10);
            }
            else {
              FUN_044302e8(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,5);
            FUN_05a1740c(uVar10,*(undefined8 *)puVar3,0);
            lVar13 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            puVar8 = PTR_DAT_06fb9328;
            puVar7 = PTR_DAT_06fb9318;
            puVar6 = PTR_DAT_06fb9308;
            puVar5 = PTR_DAT_06fb92c8;
            puVar3 = PTR_DAT_06fb92c0;
            puVar2 = PTR_DAT_06fb4a38;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                *puVar11 = uVar10;
                thunk_FUN_03048534(puVar11,uVar10);
              }
              else {
                FUN_044302e8(lVar9,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar9;
              thunk_FUN_03048534(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar9);
              uVar10 = FUN_02fe9340(*(undefined8 *)puVar3,0x18);
              FUN_05a1740c(uVar10,*(undefined8 *)puVar8,0);
              puVar11 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar11 = uVar10;
              thunk_FUN_03048534(puVar11,uVar10);
              uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,0x18);
              FUN_05a1740c(uVar10,*(undefined8 *)puVar7,0);
              puVar11 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar11 = uVar10;
              thunk_FUN_03048534(puVar11,uVar10);
              lVar9 = FUN_02fe9340(*(undefined8 *)puVar5,0x18);
              uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,6);
              FUN_05a1740c(uVar10,*(undefined8 *)puVar6,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar10;
                  thunk_FUN_03048534((undefined8 *)(lVar9 + 0x20),uVar10);
                  uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,0);
                  if (1 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar10;
                    thunk_FUN_03048534();
                    lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                    if (lVar13 == 0)
                    goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                    if (*(int *)(lVar13 + 0x18) != 0) {
                      *(undefined4 *)(lVar13 + 0x20) = 3;
                      if (2 < *(uint *)(lVar9 + 0x18)) {
                        *(long *)(lVar9 + 0x30) = lVar13;
                        thunk_FUN_03048534();
                        lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                        if (lVar13 == 0)
                        goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                        if (*(int *)(lVar13 + 0x18) != 0) {
                          *(undefined4 *)(lVar13 + 0x20) = 4;
                          if (3 < *(uint *)(lVar9 + 0x18)) {
                            *(long *)(lVar9 + 0x38) = lVar13;
                            thunk_FUN_03048534();
                            lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                            if (lVar13 == 0)
                            goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                            if (*(int *)(lVar13 + 0x18) != 0) {
                              *(undefined4 *)(lVar13 + 0x20) = 5;
                              if (4 < *(uint *)(lVar9 + 0x18)) {
                                *(long *)(lVar9 + 0x40) = lVar13;
                                thunk_FUN_03048534();
                                lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                                if (lVar13 == 0)
                                goto 
                                OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                                if (*(int *)(lVar13 + 0x18) != 0) {
                                  *(undefined4 *)(lVar13 + 0x20) = 0x13;
                                  if (5 < *(uint *)(lVar9 + 0x18)) {
                                    *(long *)(lVar9 + 0x48) = lVar13;
                                    thunk_FUN_03048534();
                                    lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                                    if (lVar13 == 0)
                                    goto 
                                    OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                    ;
                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                      *(undefined4 *)(lVar13 + 0x20) = 7;
                                      if (6 < *(uint *)(lVar9 + 0x18)) {
                                        *(long *)(lVar9 + 0x50) = lVar13;
                                        thunk_FUN_03048534();
                                        lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                                        if (lVar13 == 0)
                                        goto 
                                        OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                        ;
                                        if (*(int *)(lVar13 + 0x18) != 0) {
                                          *(undefined4 *)(lVar13 + 0x20) = 8;
                                          if (7 < *(uint *)(lVar9 + 0x18)) {
                                            *(long *)(lVar9 + 0x58) = lVar13;
                                            thunk_FUN_03048534();
                                            lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                                            if (lVar13 == 0)
                                            goto 
                                            OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                            ;
                                            if (*(int *)(lVar13 + 0x18) != 0) {
                                              *(undefined4 *)(lVar13 + 0x20) = 0x14;
                                              if (8 < *(uint *)(lVar9 + 0x18)) {
                                                *(long *)(lVar9 + 0x60) = lVar13;
                                                thunk_FUN_03048534();
                                                lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                                                if (lVar13 == 0)
                                                goto 
                                                OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                ;
                                                if (*(int *)(lVar13 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar13 + 0x20) = 10;
                                                  if (9 < *(uint *)(lVar9 + 0x18)) {
                                                    *(long *)(lVar9 + 0x68) = lVar13;
                                                    thunk_FUN_03048534();
                                                    lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1);
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                    if (10 < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0x70) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x15;
                                                    if (0xb < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0x78) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xd;
                                                    if (0xc < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0x80) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0x88) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x16;
                                                    if (0xe < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0x90) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x10;
                                                    if (0xf < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0x98) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x11;
                                                    if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0xa0) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x12;
                                                    if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0xa8) = lVar13;
                                                      thunk_FUN_03048534();
                                                      lVar13 = FUN_02fe9340(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x17;
                                                    if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0xb0) = lVar13;
                                                      thunk_FUN_03048534((long *)(lVar9 + 0xb0));
                                                      uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,0)
                                                      ;
                                                      if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0xb8) = uVar10;
                                                        thunk_FUN_03048534((undefined8 *)
                                                                           (lVar9 + 0xb8),uVar10);
                                                        uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,
                                                                              0);
                                                        if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0xc0) = uVar10;
                                                          thunk_FUN_03048534((undefined8 *)
                                                                             (lVar9 + 0xc0),uVar10);
                                                          uVar10 = FUN_02fe9340(*(undefined8 *)
                                                                                 puVar4,0);
                                                          if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 200) = uVar10;
                                                            thunk_FUN_03048534((undefined8 *)
                                                                               (lVar9 + 200),uVar10)
                                                            ;
                                                            uVar10 = FUN_02fe9340(*(undefined8 *)
                                                                                   puVar4,0);
                                                            if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0xd0) = uVar10
                                                              ;
                                                              thunk_FUN_03048534((undefined8 *)
                                                                                 (lVar9 + 0xd0),
                                                                                 uVar10);
                                                              uVar10 = FUN_02fe9340(*(undefined8 *)
                                                                                     puVar4,0);
                                                              puVar5 = PTR_DAT_06fb92e8;
                                                              puVar3 = PTR_DAT_06fb92e0;
                                                              if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0xd8) =
                                                                     uVar10;
                                                                thunk_FUN_03048534();
                                                                plVar12 = (long *)(*(long *)(*(long 
                                                  *)puVar2 + 0xb8) + 0x18);
                                                  *plVar12 = lVar9;
                                                  thunk_FUN_03048534(plVar12,lVar9);
                                                  lVar9 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
                                                  FUN_043b7398(lVar9,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_06fb92d0;
                                                  if (lVar9 != 0) {
                                                    lVar13 = *(long *)PTR_DAT_06fb92d0;
                                                    piVar16 = (int *)(lVar9 + 0x1c);
                                                    *piVar16 = *piVar16 + 1;
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    puVar15 = (uint *)(lVar9 + 0x18);
                                                    uVar1 = *puVar15;
                                                    if (lVar14 != 0) {
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *puVar15 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar16 = *piVar16 + 1;
                                                      }
                                                      else {
                                                        FUN_043b7bec(lVar9,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar14 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar16 = *piVar16 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  puVar3 = PTR_DAT_06fb9320;
                                                  uVar1 = *puVar15;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *puVar15 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar14 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar9,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar12 = lVar9;
                                                  thunk_FUN_03048534(plVar12,lVar9);
                                                  uVar10 = FUN_02fe9340(*(undefined8 *)puVar4,5);
                                                  FUN_05a1740c(uVar10,*(undefined8 *)puVar3,0);
                                                  puVar11 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x28);
                                                  *puVar11 = uVar10;
                                                  thunk_FUN_03048534(puVar11,uVar10);
                                                  return;
                                                  }
                                                  }
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
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
                FUN_02fe94f0();
              }
            }
          }
        }
      }
    }
  }
OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


