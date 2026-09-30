/*
FUNCTION_NAME: OVRPlugin.OVRP_1_51_0$$.cctor
ENTRY_POINT: 05d4be50
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


void OVRPlugin_OVRP_1_51_0___cctor(void)

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
  uint *puVar14;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int *piVar15;
  
  FUN_044302e8();
  uVar8 = FUN_02fe9340(*unaff_x22,4);
  FUN_05a1740c(uVar8,*unaff_x23,0);
  lVar12 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_06fb9300;
  if (lVar12 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    /* try { // try from 05d4bebc to 05e4beeb has its CatchHandler @ 05d4bc60 */
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar9 = uVar8;
      thunk_FUN_03048534(puVar9,uVar8);
    }
    else {
      FUN_044302e8();
    }
    uVar8 = FUN_02fe9340(*unaff_x22,5);
    FUN_05a1740c(uVar8,*(undefined8 *)puVar2,0);
    lVar12 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar7 = PTR_DAT_06fb9328;
    puVar6 = PTR_DAT_06fb9318;
    puVar5 = PTR_DAT_06fb9308;
    puVar4 = PTR_DAT_06fb92c8;
    puVar3 = PTR_DAT_06fb92c0;
    puVar2 = PTR_DAT_06fb4a38;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_03048534(puVar9,uVar8);
      }
      else {
        FUN_044302e8();
      }
      **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
      thunk_FUN_03048534(*(undefined8 *)(*(long *)puVar2 + 0xb8));
      uVar8 = FUN_02fe9340(*(undefined8 *)puVar3,0x18);
      FUN_05a1740c(uVar8,*(undefined8 *)puVar7,0);
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar9 = uVar8;
      thunk_FUN_03048534(puVar9,uVar8);
      uVar8 = FUN_02fe9340(*unaff_x22,0x18);
      FUN_05a1740c(uVar8,*(undefined8 *)puVar6,0);
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *puVar9 = uVar8;
      thunk_FUN_03048534(puVar9,uVar8);
      lVar12 = FUN_02fe9340(*(undefined8 *)puVar4,0x18);
      uVar8 = FUN_02fe9340(*unaff_x22,6);
      FUN_05a1740c(uVar8,*(undefined8 *)puVar5,0);
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x18) != 0) {
          *(undefined8 *)(lVar12 + 0x20) = uVar8;
          thunk_FUN_03048534((undefined8 *)(lVar12 + 0x20),uVar8);
          uVar8 = FUN_02fe9340(*unaff_x22,0);
          if (1 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x28) = uVar8;
            thunk_FUN_03048534();
            lVar10 = FUN_02fe9340(*unaff_x22,1);
            if (lVar10 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
            if (*(int *)(lVar10 + 0x18) != 0) {
              *(undefined4 *)(lVar10 + 0x20) = 3;
              if (2 < *(uint *)(lVar12 + 0x18)) {
                *(long *)(lVar12 + 0x30) = lVar10;
                thunk_FUN_03048534();
                lVar10 = FUN_02fe9340(*unaff_x22,1);
                if (lVar10 == 0)
                goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                if (*(int *)(lVar10 + 0x18) != 0) {
                  *(undefined4 *)(lVar10 + 0x20) = 4;
                  if (3 < *(uint *)(lVar12 + 0x18)) {
                    *(long *)(lVar12 + 0x38) = lVar10;
                    thunk_FUN_03048534();
                    lVar10 = FUN_02fe9340(*unaff_x22,1);
                    if (lVar10 == 0)
                    goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      *(undefined4 *)(lVar10 + 0x20) = 5;
                      if (4 < *(uint *)(lVar12 + 0x18)) {
                        *(long *)(lVar12 + 0x40) = lVar10;
                        thunk_FUN_03048534();
                        lVar10 = FUN_02fe9340(*unaff_x22,1);
                        if (lVar10 == 0)
                        goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          *(undefined4 *)(lVar10 + 0x20) = 0x13;
                          if (5 < *(uint *)(lVar12 + 0x18)) {
                            *(long *)(lVar12 + 0x48) = lVar10;
                            thunk_FUN_03048534();
                            lVar10 = FUN_02fe9340(*unaff_x22,1);
                            if (lVar10 == 0)
                            goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              *(undefined4 *)(lVar10 + 0x20) = 7;
                              if (6 < *(uint *)(lVar12 + 0x18)) {
                                *(long *)(lVar12 + 0x50) = lVar10;
                                thunk_FUN_03048534();
                                lVar10 = FUN_02fe9340(*unaff_x22,1);
                                if (lVar10 == 0)
                                goto 
                                OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  *(undefined4 *)(lVar10 + 0x20) = 8;
                                  if (7 < *(uint *)(lVar12 + 0x18)) {
                                    *(long *)(lVar12 + 0x58) = lVar10;
                                    thunk_FUN_03048534();
                                    lVar10 = FUN_02fe9340(*unaff_x22,1);
                                    if (lVar10 == 0)
                                    goto 
                                    OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                    ;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined4 *)(lVar10 + 0x20) = 0x14;
                                      if (8 < *(uint *)(lVar12 + 0x18)) {
                                        *(long *)(lVar12 + 0x60) = lVar10;
                                        thunk_FUN_03048534();
                                        lVar10 = FUN_02fe9340(*unaff_x22,1);
                                        if (lVar10 == 0)
                                        goto 
                                        OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                        ;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          *(undefined4 *)(lVar10 + 0x20) = 10;
                                          if (9 < *(uint *)(lVar12 + 0x18)) {
                                            *(long *)(lVar12 + 0x68) = lVar10;
                                            thunk_FUN_03048534();
                                            lVar10 = FUN_02fe9340(*unaff_x22,1);
                                            if (lVar10 == 0)
                                            goto 
                                            OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                            ;
                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                              *(undefined4 *)(lVar10 + 0x20) = 0xb;
                                              if (10 < *(uint *)(lVar12 + 0x18)) {
                                                *(long *)(lVar12 + 0x70) = lVar10;
                                                thunk_FUN_03048534();
                                                lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                if (lVar10 == 0)
                                                goto 
                                                OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                ;
                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar10 + 0x20) = 0x15;
                                                  if (0xb < *(uint *)(lVar12 + 0x18)) {
                                                    *(long *)(lVar12 + 0x78) = lVar10;
                                                    thunk_FUN_03048534();
                                                    lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                    if (lVar10 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                    if (0xc < *(uint *)(lVar12 + 0x18)) {
                                                      *(long *)(lVar12 + 0x80) = lVar10;
                                                      thunk_FUN_03048534();
                                                      lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar10 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(lVar12 + 0x18)) {
                                                      *(long *)(lVar12 + 0x88) = lVar10;
                                                      thunk_FUN_03048534();
                                                      lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar10 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x16;
                                                    if (0xe < *(uint *)(lVar12 + 0x18)) {
                                                      *(long *)(lVar12 + 0x90) = lVar10;
                                                      thunk_FUN_03048534();
                                                      lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar10 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x10;
                                                    if (0xf < *(uint *)(lVar12 + 0x18)) {
                                                      *(long *)(lVar12 + 0x98) = lVar10;
                                                      thunk_FUN_03048534();
                                                      lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar10 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                    if (0x10 < *(uint *)(lVar12 + 0x18)) {
                                                      *(long *)(lVar12 + 0xa0) = lVar10;
                                                      thunk_FUN_03048534();
                                                      lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar10 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                    if (0x11 < *(uint *)(lVar12 + 0x18)) {
                                                      *(long *)(lVar12 + 0xa8) = lVar10;
                                                      thunk_FUN_03048534();
                                                      lVar10 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar10 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                    if (0x12 < *(uint *)(lVar12 + 0x18)) {
                                                      *(long *)(lVar12 + 0xb0) = lVar10;
                                                      thunk_FUN_03048534((long *)(lVar12 + 0xb0));
                                                      uVar8 = FUN_02fe9340(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(lVar12 + 0x18)) {
                                                        *(undefined8 *)(lVar12 + 0xb8) = uVar8;
                                                        thunk_FUN_03048534((undefined8 *)
                                                                           (lVar12 + 0xb8),uVar8);
                                                        uVar8 = FUN_02fe9340(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar12 + 0x18)) {
                                                          *(undefined8 *)(lVar12 + 0xc0) = uVar8;
                                                          thunk_FUN_03048534((undefined8 *)
                                                                             (lVar12 + 0xc0),uVar8);
                                                          uVar8 = FUN_02fe9340(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(lVar12 + 0x18)) {
                                                            *(undefined8 *)(lVar12 + 200) = uVar8;
                                                            thunk_FUN_03048534((undefined8 *)
                                                                               (lVar12 + 200),uVar8)
                                                            ;
                                                            uVar8 = FUN_02fe9340(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(lVar12 + 0x18)) {
                                                              *(undefined8 *)(lVar12 + 0xd0) = uVar8
                                                              ;
                                                              thunk_FUN_03048534((undefined8 *)
                                                                                 (lVar12 + 0xd0),
                                                                                 uVar8);
                                                              uVar8 = FUN_02fe9340(*unaff_x22,0);
                                                              puVar4 = PTR_DAT_06fb92e8;
                                                              puVar3 = PTR_DAT_06fb92e0;
                                                              if (0x17 < *(uint *)(lVar12 + 0x18)) {
                                                                *(undefined8 *)(lVar12 + 0xd8) =
                                                                     uVar8;
                                                                thunk_FUN_03048534();
                                                                plVar11 = (long *)(*(long *)(*(long 
                                                  *)puVar2 + 0xb8) + 0x18);
                                                  *plVar11 = lVar12;
                                                  thunk_FUN_03048534(plVar11,lVar12);
                                                  lVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_043b7398(lVar12,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_06fb92d0;
                                                  if (lVar12 != 0) {
                                                    lVar10 = *(long *)PTR_DAT_06fb92d0;
                                                    piVar15 = (int *)(lVar12 + 0x1c);
                                                    *piVar15 = *piVar15 + 1;
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    puVar14 = (uint *)(lVar12 + 0x18);
                                                    uVar1 = *puVar14;
                                                    if (lVar13 != 0) {
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *puVar14 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar15 = *piVar15 + 1;
                                                      }
                                                      else {
                                                        FUN_043b7bec(lVar12,6,*(undefined8 *)
                                                                               (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  puVar3 = PTR_DAT_06fb9320;
                                                  uVar1 = *puVar14;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar14 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar12,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar12;
                                                  thunk_FUN_03048534(plVar11,lVar12);
                                                  uVar8 = FUN_02fe9340(*unaff_x22,5);
                                                  FUN_05a1740c(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_03048534(puVar9,uVar8);
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
OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


