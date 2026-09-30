/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCameraMinMaxDistance
ENTRY_POINT: 05d4bcac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_21
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCameraMinMaxDistance(long param_1)

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
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar14;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int *piVar15;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 800));
  FUN_02fe925c(PTR_DAT_06fb9328);
  *(undefined1 *)(unaff_x21 + 0xb91) = 1;
  lVar8 = thunk_FUN_0301080c(*unaff_x23);
  FUN_0442fab4(lVar8,*unaff_x19);
  uVar9 = FUN_02fe9340(*unaff_x22,5);
  FUN_05a1740c(uVar9,*unaff_x20,0);
  puVar2 = PTR_DAT_06fb92d8;
  if (lVar8 != 0) {
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)PTR_DAT_06fb92d8;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar3 = PTR_DAT_06fb9310;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_03048534(puVar10,uVar9);
      }
      else {
        FUN_044302e8(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = FUN_02fe9340(*unaff_x22,4);
      FUN_05a1740c(uVar9,*(undefined8 *)puVar3,0);
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar13 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      puVar3 = PTR_DAT_06fb92f0;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar10 = uVar9;
          thunk_FUN_03048534(puVar10,uVar9);
        }
        else {
          FUN_044302e8(lVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = FUN_02fe9340(*unaff_x22,4);
        FUN_05a1740c(uVar9,*(undefined8 *)puVar3,0);
        lVar12 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        puVar3 = PTR_DAT_06fb92f8;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = uVar9;
            thunk_FUN_03048534(puVar10,uVar9);
          }
          else {
            FUN_044302e8(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = FUN_02fe9340(*unaff_x22,4);
          FUN_05a1740c(uVar9,*(undefined8 *)puVar3,0);
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar3 = PTR_DAT_06fb9300;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = uVar9;
              thunk_FUN_03048534(puVar10,uVar9);
            }
            else {
              FUN_044302e8(lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = FUN_02fe9340(*unaff_x22,5);
            FUN_05a1740c(uVar9,*(undefined8 *)puVar3,0);
            lVar12 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            puVar7 = PTR_DAT_06fb9328;
            puVar6 = PTR_DAT_06fb9318;
            puVar5 = PTR_DAT_06fb9308;
            puVar4 = PTR_DAT_06fb92c8;
            puVar3 = PTR_DAT_06fb92c0;
            puVar2 = PTR_DAT_06fb4a38;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *puVar10 = uVar9;
                thunk_FUN_03048534(puVar10,uVar9);
              }
              else {
                FUN_044302e8(lVar8,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
              thunk_FUN_03048534(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar8);
              uVar9 = FUN_02fe9340(*(undefined8 *)puVar3,0x18);
              FUN_05a1740c(uVar9,*(undefined8 *)puVar7,0);
              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar10 = uVar9;
              thunk_FUN_03048534(puVar10,uVar9);
              uVar9 = FUN_02fe9340(*unaff_x22,0x18);
              FUN_05a1740c(uVar9,*(undefined8 *)puVar6,0);
              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar10 = uVar9;
              thunk_FUN_03048534(puVar10,uVar9);
              lVar8 = FUN_02fe9340(*(undefined8 *)puVar4,0x18);
              uVar9 = FUN_02fe9340(*unaff_x22,6);
              FUN_05a1740c(uVar9,*(undefined8 *)puVar5,0);
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined8 *)(lVar8 + 0x20) = uVar9;
                  thunk_FUN_03048534((undefined8 *)(lVar8 + 0x20),uVar9);
                  uVar9 = FUN_02fe9340(*unaff_x22,0);
                  if (1 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined8 *)(lVar8 + 0x28) = uVar9;
                    thunk_FUN_03048534();
                    lVar12 = FUN_02fe9340(*unaff_x22,1);
                    if (lVar12 == 0)
                    goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      *(undefined4 *)(lVar12 + 0x20) = 3;
                      if (2 < *(uint *)(lVar8 + 0x18)) {
                        *(long *)(lVar8 + 0x30) = lVar12;
                        thunk_FUN_03048534();
                        lVar12 = FUN_02fe9340(*unaff_x22,1);
                        if (lVar12 == 0)
                        goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                        if (*(int *)(lVar12 + 0x18) != 0) {
                          *(undefined4 *)(lVar12 + 0x20) = 4;
                          if (3 < *(uint *)(lVar8 + 0x18)) {
                            *(long *)(lVar8 + 0x38) = lVar12;
                            thunk_FUN_03048534();
                            lVar12 = FUN_02fe9340(*unaff_x22,1);
                            if (lVar12 == 0)
                            goto OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                            if (*(int *)(lVar12 + 0x18) != 0) {
                              *(undefined4 *)(lVar12 + 0x20) = 5;
                              if (4 < *(uint *)(lVar8 + 0x18)) {
                                *(long *)(lVar8 + 0x40) = lVar12;
                                thunk_FUN_03048534();
                                lVar12 = FUN_02fe9340(*unaff_x22,1);
                                if (lVar12 == 0)
                                goto 
                                OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry;
                                if (*(int *)(lVar12 + 0x18) != 0) {
                                  *(undefined4 *)(lVar12 + 0x20) = 0x13;
                                  if (5 < *(uint *)(lVar8 + 0x18)) {
                                    *(long *)(lVar8 + 0x48) = lVar12;
                                    thunk_FUN_03048534();
                                    lVar12 = FUN_02fe9340(*unaff_x22,1);
                                    if (lVar12 == 0)
                                    goto 
                                    OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                    ;
                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                      *(undefined4 *)(lVar12 + 0x20) = 7;
                                      if (6 < *(uint *)(lVar8 + 0x18)) {
                                        *(long *)(lVar8 + 0x50) = lVar12;
                                        thunk_FUN_03048534();
                                        lVar12 = FUN_02fe9340(*unaff_x22,1);
                                        if (lVar12 == 0)
                                        goto 
                                        OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                        ;
                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                          *(undefined4 *)(lVar12 + 0x20) = 8;
                                          if (7 < *(uint *)(lVar8 + 0x18)) {
                                            *(long *)(lVar8 + 0x58) = lVar12;
                                            thunk_FUN_03048534();
                                            lVar12 = FUN_02fe9340(*unaff_x22,1);
                                            if (lVar12 == 0)
                                            goto 
                                            OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                            ;
                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                              *(undefined4 *)(lVar12 + 0x20) = 0x14;
                                              if (8 < *(uint *)(lVar8 + 0x18)) {
                                                *(long *)(lVar8 + 0x60) = lVar12;
                                                thunk_FUN_03048534();
                                                lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                if (lVar12 == 0)
                                                goto 
                                                OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                ;
                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar12 + 0x20) = 10;
                                                  if (9 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x68) = lVar12;
                                                    thunk_FUN_03048534();
                                                    lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                    if (lVar12 == 0)
                                                    goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0xb;
                                                    if (10 < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0x70) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x15;
                                                    if (0xb < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0x78) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0xd;
                                                    if (0xc < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0x80) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0x88) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x16;
                                                    if (0xe < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0x90) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x10;
                                                    if (0xf < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0x98) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x11;
                                                    if (0x10 < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0xa0) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x12;
                                                    if (0x11 < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0xa8) = lVar12;
                                                      thunk_FUN_03048534();
                                                      lVar12 = FUN_02fe9340(*unaff_x22,1);
                                                      if (lVar12 == 0)
                                                      goto 
                                                  OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
                                                  ;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x17;
                                                    if (0x12 < *(uint *)(lVar8 + 0x18)) {
                                                      *(long *)(lVar8 + 0xb0) = lVar12;
                                                      thunk_FUN_03048534((long *)(lVar8 + 0xb0));
                                                      uVar9 = FUN_02fe9340(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 0xb8) = uVar9;
                                                        thunk_FUN_03048534((undefined8 *)
                                                                           (lVar8 + 0xb8),uVar9);
                                                        uVar9 = FUN_02fe9340(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar8 + 0x18)) {
                                                          *(undefined8 *)(lVar8 + 0xc0) = uVar9;
                                                          thunk_FUN_03048534((undefined8 *)
                                                                             (lVar8 + 0xc0),uVar9);
                                                          uVar9 = FUN_02fe9340(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(lVar8 + 0x18)) {
                                                            *(undefined8 *)(lVar8 + 200) = uVar9;
                                                            thunk_FUN_03048534((undefined8 *)
                                                                               (lVar8 + 200),uVar9);
                                                            uVar9 = FUN_02fe9340(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(lVar8 + 0x18)) {
                                                              *(undefined8 *)(lVar8 + 0xd0) = uVar9;
                                                              thunk_FUN_03048534((undefined8 *)
                                                                                 (lVar8 + 0xd0),
                                                                                 uVar9);
                                                              uVar9 = FUN_02fe9340(*unaff_x22,0);
                                                              puVar4 = PTR_DAT_06fb92e8;
                                                              puVar3 = PTR_DAT_06fb92e0;
                                                              if (0x17 < *(uint *)(lVar8 + 0x18)) {
                                                                *(undefined8 *)(lVar8 + 0xd8) =
                                                                     uVar9;
                                                                thunk_FUN_03048534();
                                                                plVar11 = (long *)(*(long *)(*(long 
                                                  *)puVar2 + 0xb8) + 0x18);
                                                  *plVar11 = lVar8;
                                                  thunk_FUN_03048534(plVar11,lVar8);
                                                  lVar8 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
                                                  FUN_043b7398(lVar8,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_06fb92d0;
                                                  if (lVar8 != 0) {
                                                    lVar12 = *(long *)PTR_DAT_06fb92d0;
                                                    piVar15 = (int *)(lVar8 + 0x1c);
                                                    *piVar15 = *piVar15 + 1;
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    puVar14 = (uint *)(lVar8 + 0x18);
                                                    uVar1 = *puVar14;
                                                    if (lVar13 != 0) {
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *puVar14 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar15 = *piVar15 + 1;
                                                      }
                                                      else {
                                                        FUN_043b7bec(lVar8,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
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
                                                    FUN_043b7bec(lVar8,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar8;
                                                  thunk_FUN_03048534(plVar11,lVar8);
                                                  uVar9 = FUN_02fe9340(*unaff_x22,5);
                                                  FUN_05a1740c(uVar9,*(undefined8 *)puVar3,0);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x28);
                                                  *puVar10 = uVar9;
                                                  thunk_FUN_03048534(puVar10,uVar9);
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


