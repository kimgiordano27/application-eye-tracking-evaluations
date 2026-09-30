/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$.cctor
ENTRY_POINT: 05d4bfe8
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


void OVRPlugin_OVRP_1_54_0___cctor(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  int *piVar11;
  undefined8 *unaff_x25;
  
  FUN_05a1740c(param_1,*unaff_x25,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar4 = param_1;
  thunk_FUN_03048534(puVar4,param_1);
  lVar5 = FUN_02fe9340(*unaff_x24,0x18);
  uVar6 = FUN_02fe9340(*unaff_x22,6);
  FUN_05a1740c(uVar6,*unaff_x21,0);
  if (lVar5 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_03048534((undefined8 *)(lVar5 + 0x20),uVar6);
    uVar6 = FUN_02fe9340(*unaff_x22,0);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
      thunk_FUN_03048534();
      lVar7 = FUN_02fe9340(*unaff_x22,1);
      if (lVar7 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined4 *)(lVar7 + 0x20) = 3;
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(long *)(lVar5 + 0x30) = lVar7;
          thunk_FUN_03048534();
          lVar7 = FUN_02fe9340(*unaff_x22,1);
          if (lVar7 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined4 *)(lVar7 + 0x20) = 4;
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(long *)(lVar5 + 0x38) = lVar7;
              thunk_FUN_03048534();
              lVar7 = FUN_02fe9340(*unaff_x22,1);
              if (lVar7 == 0) goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
              if (*(int *)(lVar7 + 0x18) != 0) {
                *(undefined4 *)(lVar7 + 0x20) = 5;
                if (4 < *(uint *)(lVar5 + 0x18)) {
                  *(long *)(lVar5 + 0x40) = lVar7;
                  thunk_FUN_03048534();
                  lVar7 = FUN_02fe9340(*unaff_x22,1);
                  if (lVar7 == 0)
                  goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    *(undefined4 *)(lVar7 + 0x20) = 0x13;
                    if (5 < *(uint *)(lVar5 + 0x18)) {
                      *(long *)(lVar5 + 0x48) = lVar7;
                      thunk_FUN_03048534();
                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                      if (lVar7 == 0)
                      goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        *(undefined4 *)(lVar7 + 0x20) = 7;
                        if (6 < *(uint *)(lVar5 + 0x18)) {
                          *(long *)(lVar5 + 0x50) = lVar7;
                          thunk_FUN_03048534();
                          lVar7 = FUN_02fe9340(*unaff_x22,1);
                          if (lVar7 == 0)
                          goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                          if (*(int *)(lVar7 + 0x18) != 0) {
                            *(undefined4 *)(lVar7 + 0x20) = 8;
                            if (7 < *(uint *)(lVar5 + 0x18)) {
                              *(long *)(lVar5 + 0x58) = lVar7;
                              thunk_FUN_03048534();
                              lVar7 = FUN_02fe9340(*unaff_x22,1);
                              if (lVar7 == 0)
                              goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                              if (*(int *)(lVar7 + 0x18) != 0) {
                                *(undefined4 *)(lVar7 + 0x20) = 0x14;
                                if (8 < *(uint *)(lVar5 + 0x18)) {
                                  *(long *)(lVar5 + 0x60) = lVar7;
                                  thunk_FUN_03048534();
                                  lVar7 = FUN_02fe9340(*unaff_x22,1);
                                  if (lVar7 == 0)
                                  goto 
                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    *(undefined4 *)(lVar7 + 0x20) = 10;
                                    if (9 < *(uint *)(lVar5 + 0x18)) {
                                      *(long *)(lVar5 + 0x68) = lVar7;
                                      thunk_FUN_03048534();
                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                      if (lVar7 == 0)
                                      goto 
                                      OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                      ;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        *(undefined4 *)(lVar7 + 0x20) = 0xb;
                                        if (10 < *(uint *)(lVar5 + 0x18)) {
                                          *(long *)(lVar5 + 0x70) = lVar7;
                                          thunk_FUN_03048534();
                                          lVar7 = FUN_02fe9340(*unaff_x22,1);
                                          if (lVar7 == 0)
                                          goto 
                                          OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                          ;
                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                            *(undefined4 *)(lVar7 + 0x20) = 0x15;
                                            if (0xb < *(uint *)(lVar5 + 0x18)) {
                                              *(long *)(lVar5 + 0x78) = lVar7;
                                              thunk_FUN_03048534();
                                              lVar7 = FUN_02fe9340(*unaff_x22,1);
                                              if (lVar7 == 0)
                                              goto 
                                              OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                              ;
                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                *(undefined4 *)(lVar7 + 0x20) = 0xd;
                                                if (0xc < *(uint *)(lVar5 + 0x18)) {
                                                  *(long *)(lVar5 + 0x80) = lVar7;
                                                  thunk_FUN_03048534();
                                                  lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                  if (lVar7 == 0)
                                                  goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(lVar5 + 0x18)) {
                                                      *(long *)(lVar5 + 0x88) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x16;
                                                    if (0xe < *(uint *)(lVar5 + 0x18)) {
                                                      *(long *)(lVar5 + 0x90) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x10;
                                                    if (0xf < *(uint *)(lVar5 + 0x18)) {
                                                      *(long *)(lVar5 + 0x98) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x11;
                                                    if (0x10 < *(uint *)(lVar5 + 0x18)) {
                                                      *(long *)(lVar5 + 0xa0) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x12;
                                                    if (0x11 < *(uint *)(lVar5 + 0x18)) {
                                                      *(long *)(lVar5 + 0xa8) = lVar7;
                                                      thunk_FUN_03048534();
                                                      lVar7 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar7 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x17;
                                                    if (0x12 < *(uint *)(lVar5 + 0x18)) {
                                                      *(long *)(lVar5 + 0xb0) = lVar7;
                                                      thunk_FUN_03048534((long *)(lVar5 + 0xb0));
                                                      uVar6 = FUN_02fe9340(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0xb8) = uVar6;
                                                        thunk_FUN_03048534((undefined8 *)
                                                                           (lVar5 + 0xb8),uVar6);
                                                        uVar6 = FUN_02fe9340(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar5 + 0x18)) {
                                                          *(undefined8 *)(lVar5 + 0xc0) = uVar6;
                                                          thunk_FUN_03048534((undefined8 *)
                                                                             (lVar5 + 0xc0),uVar6);
                                                          uVar6 = FUN_02fe9340(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(lVar5 + 0x18)) {
                                                            *(undefined8 *)(lVar5 + 200) = uVar6;
                                                            thunk_FUN_03048534((undefined8 *)
                                                                               (lVar5 + 200),uVar6);
                                                            uVar6 = FUN_02fe9340(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(lVar5 + 0x18)) {
                                                              *(undefined8 *)(lVar5 + 0xd0) = uVar6;
                                                              thunk_FUN_03048534((undefined8 *)
                                                                                 (lVar5 + 0xd0),
                                                                                 uVar6);
                                                              uVar6 = FUN_02fe9340(*unaff_x22,0);
                                                              puVar3 = PTR_DAT_06fb92e8;
                                                              puVar2 = PTR_DAT_06fb92e0;
                                                              if (0x17 < *(uint *)(lVar5 + 0x18)) {
                                                                *(undefined8 *)(lVar5 + 0xd8) =
                                                                     uVar6;
                                                                thunk_FUN_03048534();
                                                                plVar8 = (long *)(*(long *)(*
                                                  unaff_x23 + 0xb8) + 0x18);
                                                  *plVar8 = lVar5;
                                                  thunk_FUN_03048534(plVar8,lVar5);
                                                  lVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
                                                  FUN_043b7398(lVar5,*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_06fb92d0;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)PTR_DAT_06fb92d0;
                                                    piVar11 = (int *)(lVar5 + 0x1c);
                                                    *piVar11 = *piVar11 + 1;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    puVar10 = (uint *)(lVar5 + 0x18);
                                                    uVar1 = *puVar10;
                                                    if (lVar9 != 0) {
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *puVar10 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar11 = *piVar11 + 1;
                                                      }
                                                      else {
                                                        FUN_043b7bec(lVar5,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar7 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar7 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar5,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar8 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar8 = lVar5;
                                                  thunk_FUN_03048534(plVar8,lVar5);
                                                  uVar6 = FUN_02fe9340(*unaff_x22,5);
                                                  FUN_05a1740c(uVar6,*(undefined8 *)puVar2,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar4 = uVar6;
                                                  thunk_FUN_03048534(puVar4,uVar6);
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


