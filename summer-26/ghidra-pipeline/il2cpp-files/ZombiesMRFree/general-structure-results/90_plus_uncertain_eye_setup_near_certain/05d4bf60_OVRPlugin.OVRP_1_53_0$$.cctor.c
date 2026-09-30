/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 05d4bf60
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


void OVRPlugin_OVRP_1_53_0___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 in_w9;
  long lVar9;
  long in_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  uint *puVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  int *piVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
                    /* catch() { ... } // from try @ 05d4bd78 with catch @ 05d4bf60
                       try { // try from 05d4bf60 to 05e4bf77 has its CatchHandler @ 05d4bc60 */
  *(undefined4 *)(unaff_x19 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x20;
  thunk_FUN_03048534();
                    /* catch() { ... } // from try @ 05d4bf78 with catch @ 05d4bf9c */
  **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                    /* try { // try from 05d4bfa4 to 05e4bfab has its CatchHandler @ 05d4bfc0 */
  thunk_FUN_03048534(*(undefined8 *)(*unaff_x23 + 0xb8));
                    /* try { // try from 05d4bfac to 05e4bfb7 has its CatchHandler @ 05d4bc60 */
  uVar4 = FUN_02fe9340(*unaff_x26,0x18);
                    /* try { // try from 05d4bfb8 to 05e4bfbf has its CatchHandler @ 05d4bfc0 */
                    /* catch() { ... } // from try @ 05d4bf4c with catch @ 05d4bfc0
                       catch() { ... } // from try @ 05d4bfa4 with catch @ 05d4bfc0
                       catch() { ... } // from try @ 05d4bfb8 with catch @ 05d4bfc0 */
                    /* try { // try from 05d4bfc4 to 05e4c0c7 has its CatchHandler @ 05d4bfc4
                       catch() { ... } // from try @ 05d4bfc4 with catch @ 05d4bfc4
                       catch() { ... } // from try @ 05d4c158 with catch @ 05d4bfc4
                       catch() { ... } // from try @ 05d4c220 with catch @ 05d4bfc4
                       catch() { ... } // from try @ 05d4c25c with catch @ 05d4bfc4
                       catch() { ... } // from try @ 05d4c28c with catch @ 05d4bfc4
                       catch() { ... } // from try @ 05d4c2c4 with catch @ 05d4bfc4
                       catch() { ... } // from try @ 05d4c2e0 with catch @ 05d4bfc4
                       catch() { ... } // from try @ 05d4c310 with catch @ 05d4bfc4 */
  FUN_05a1740c(uVar4,*unaff_x27,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_03048534(puVar5,uVar4);
  uVar4 = FUN_02fe9340(*unaff_x22,0x18);
  FUN_05a1740c(uVar4,*unaff_x25,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  thunk_FUN_03048534(puVar5,uVar4);
  lVar6 = FUN_02fe9340(*unaff_x24,0x18);
  uVar4 = FUN_02fe9340(*unaff_x22,6);
  FUN_05a1740c(uVar4,*unaff_x21,0);
  if (lVar6 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    thunk_FUN_03048534((undefined8 *)(lVar6 + 0x20),uVar4);
    uVar4 = FUN_02fe9340(*unaff_x22,0);
    if (1 < *(uint *)(lVar6 + 0x18)) {
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      thunk_FUN_03048534();
      lVar7 = FUN_02fe9340(*unaff_x22,1);
      if (lVar7 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined4 *)(lVar7 + 0x20) = 3;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(long *)(lVar6 + 0x30) = lVar7;
          thunk_FUN_03048534();
          lVar7 = FUN_02fe9340(*unaff_x22,1);
          if (lVar7 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined4 *)(lVar7 + 0x20) = 4;
            if (3 < *(uint *)(lVar6 + 0x18)) {
              *(long *)(lVar6 + 0x38) = lVar7;
              thunk_FUN_03048534();
              lVar7 = FUN_02fe9340(*unaff_x22,1);
              if (lVar7 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
              if (*(int *)(lVar7 + 0x18) != 0) {
                *(undefined4 *)(lVar7 + 0x20) = 5;
                if (4 < *(uint *)(lVar6 + 0x18)) {
                  *(long *)(lVar6 + 0x40) = lVar7;
                  thunk_FUN_03048534();
                  lVar7 = FUN_02fe9340(*unaff_x22,1);
                  if (lVar7 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    *(undefined4 *)(lVar7 + 0x20) = 0x13;
                    if (5 < *(uint *)(lVar6 + 0x18)) {
                      *(long *)(lVar6 + 0x48) = lVar7;
                      thunk_FUN_03048534();
                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                      if (lVar7 == 0)
                      goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        *(undefined4 *)(lVar7 + 0x20) = 7;
                        if (6 < *(uint *)(lVar6 + 0x18)) {
                          *(long *)(lVar6 + 0x50) = lVar7;
                          thunk_FUN_03048534();
                          lVar7 = FUN_02fe9340(*unaff_x22,1);
                          if (lVar7 == 0)
                          goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                          if (*(int *)(lVar7 + 0x18) != 0) {
                            *(undefined4 *)(lVar7 + 0x20) = 8;
                            if (7 < *(uint *)(lVar6 + 0x18)) {
                              *(long *)(lVar6 + 0x58) = lVar7;
                              thunk_FUN_03048534();
                              lVar7 = FUN_02fe9340(*unaff_x22,1);
                              if (lVar7 == 0)
                              goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                              if (*(int *)(lVar7 + 0x18) != 0) {
                                *(undefined4 *)(lVar7 + 0x20) = 0x14;
                                if (8 < *(uint *)(lVar6 + 0x18)) {
                                  *(long *)(lVar6 + 0x60) = lVar7;
                                  thunk_FUN_03048534();
                                  lVar7 = FUN_02fe9340(*unaff_x22,1);
                                  if (lVar7 == 0)
                                  goto 
                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    *(undefined4 *)(lVar7 + 0x20) = 10;
                                    if (9 < *(uint *)(lVar6 + 0x18)) {
                                      *(long *)(lVar6 + 0x68) = lVar7;
                                      thunk_FUN_03048534();
                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                      if (lVar7 == 0)
                                      goto 
                                      OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                      ;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        *(undefined4 *)(lVar7 + 0x20) = 0xb;
                                        if (10 < *(uint *)(lVar6 + 0x18)) {
                                          *(long *)(lVar6 + 0x70) = lVar7;
                                          thunk_FUN_03048534();
                                          lVar7 = FUN_02fe9340(*unaff_x22,1);
                                          if (lVar7 == 0)
                                          goto 
                                          OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                          ;
                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                            *(undefined4 *)(lVar7 + 0x20) = 0x15;
                                            if (0xb < *(uint *)(lVar6 + 0x18)) {
                                              *(long *)(lVar6 + 0x78) = lVar7;
                                              thunk_FUN_03048534();
                                              lVar7 = FUN_02fe9340(*unaff_x22,1);
                                              if (lVar7 == 0)
                                              goto 
                                              OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                              ;
                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                *(undefined4 *)(lVar7 + 0x20) = 0xd;
                                                if (0xc < *(uint *)(lVar6 + 0x18)) {
                                                  *(long *)(lVar6 + 0x80) = lVar7;
                                                  thunk_FUN_03048534();
                                                  lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                  if (lVar7 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(lVar6 + 0x18)) {
                                                      *(long *)(lVar6 + 0x88) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x16;
                                                    if (0xe < *(uint *)(lVar6 + 0x18)) {
                                                      *(long *)(lVar6 + 0x90) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x10;
                                                    if (0xf < *(uint *)(lVar6 + 0x18)) {
                                                      *(long *)(lVar6 + 0x98) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x11;
                                                    if (0x10 < *(uint *)(lVar6 + 0x18)) {
                                                      *(long *)(lVar6 + 0xa0) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x12;
                                                    if (0x11 < *(uint *)(lVar6 + 0x18)) {
                                                      *(long *)(lVar6 + 0xa8) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x17;
                                                    if (0x12 < *(uint *)(lVar6 + 0x18)) {
                                                      *(long *)(lVar6 + 0xb0) = lVar7;
                                                      thunk_FUN_03048534((long *)(lVar6 + 0xb0));
                                                      uVar4 = FUN_02fe9340(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 0xb8) = uVar4;
                                                        thunk_FUN_03048534((undefined8 *)
                                                                           (lVar6 + 0xb8),uVar4);
                                                        uVar4 = FUN_02fe9340(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0xc0) = uVar4;
                                                          thunk_FUN_03048534((undefined8 *)
                                                                             (lVar6 + 0xc0),uVar4);
                                                          uVar4 = FUN_02fe9340(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 200) = uVar4;
                                                            thunk_FUN_03048534((undefined8 *)
                                                                               (lVar6 + 200),uVar4);
                                                            uVar4 = FUN_02fe9340(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(lVar6 + 0x18)) {
                                                              *(undefined8 *)(lVar6 + 0xd0) = uVar4;
                                                              thunk_FUN_03048534((undefined8 *)
                                                                                 (lVar6 + 0xd0),
                                                                                 uVar4);
                                                              uVar4 = FUN_02fe9340(*unaff_x22,0);
                                                              puVar3 = PTR_DAT_06fb92e8;
                                                              puVar2 = PTR_DAT_06fb92e0;
                                                              if (0x17 < *(uint *)(lVar6 + 0x18)) {
                                                                *(undefined8 *)(lVar6 + 0xd8) =
                                                                     uVar4;
                                                                thunk_FUN_03048534();
                                                                plVar8 = (long *)(*(long *)(*
                                                  unaff_x23 + 0xb8) + 0x18);
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_03048534(plVar8,lVar6);
                                                  lVar6 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
                                                  FUN_043b7398(lVar6,*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_06fb92d0;
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)PTR_DAT_06fb92d0;
                                                    piVar11 = (int *)(lVar6 + 0x1c);
                                                    *piVar11 = *piVar11 + 1;
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    puVar10 = (uint *)(lVar6 + 0x18);
                                                    uVar1 = *puVar10;
                                                    if (lVar9 != 0) {
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *puVar10 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar11 = *piVar11 + 1;
                                                      }
                                                      else {
                                                        FUN_043b7bec(lVar6,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar7 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar7 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  }
                                                  puVar2 = PTR_DAT_06fb9320;
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_043b7bec(lVar6,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar8 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_03048534(plVar8,lVar6);
                                                  uVar4 = FUN_02fe9340(*unaff_x22,5);
                                                  FUN_05a1740c(uVar4,*(undefined8 *)puVar2,0);
                                                  puVar5 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar5 = uVar4;
                                                  thunk_FUN_03048534(puVar5,uVar4);
                                                  return;
                                                  }
                                                  }
OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry:
                    /* WARNING: Subroutine does not return */
                                                  FUN_02fe94e8();
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


