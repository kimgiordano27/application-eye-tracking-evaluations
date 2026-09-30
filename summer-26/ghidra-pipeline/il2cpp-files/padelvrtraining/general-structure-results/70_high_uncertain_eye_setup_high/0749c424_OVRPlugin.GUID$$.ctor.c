/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 0749c424
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GUID___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  int *piVar11;
  
  thunk_FUN_03d1023c();
  lVar4 = FUN_03d2d394(*unaff_x24,0x18);
  uVar5 = FUN_03d2d394(*unaff_x22,6);
  FUN_0708f30c(uVar5,*unaff_x21,0);
  if (lVar4 == 0) goto LAB_0749d0c0;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x20),uVar5);
    uVar5 = FUN_03d2d394(*unaff_x22,0);
    if (1 < *(uint *)(lVar4 + 0x18)) {
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      thunk_FUN_03d1023c();
      lVar6 = FUN_03d2d394(*unaff_x22,1);
      if (lVar6 == 0) goto LAB_0749d0c0;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined4 *)(lVar6 + 0x20) = 3;
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(long *)(lVar4 + 0x30) = lVar6;
          thunk_FUN_03d1023c();
          lVar6 = FUN_03d2d394(*unaff_x22,1);
          if (lVar6 == 0) goto LAB_0749d0c0;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = 4;
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(long *)(lVar4 + 0x38) = lVar6;
              thunk_FUN_03d1023c();
              lVar6 = FUN_03d2d394(*unaff_x22,1);
              if (lVar6 == 0) goto LAB_0749d0c0;
              if (*(int *)(lVar6 + 0x18) != 0) {
                *(undefined4 *)(lVar6 + 0x20) = 5;
                if (4 < *(uint *)(lVar4 + 0x18)) {
                  *(long *)(lVar4 + 0x40) = lVar6;
                  thunk_FUN_03d1023c();
                  lVar6 = FUN_03d2d394(*unaff_x22,1);
                  if (lVar6 == 0) goto LAB_0749d0c0;
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(undefined4 *)(lVar6 + 0x20) = 0x13;
                    if (5 < *(uint *)(lVar4 + 0x18)) {
                      *(long *)(lVar4 + 0x48) = lVar6;
                      thunk_FUN_03d1023c();
                      lVar6 = FUN_03d2d394(*unaff_x22,1);
                      if (lVar6 == 0) goto LAB_0749d0c0;
                      if (*(int *)(lVar6 + 0x18) != 0) {
                        *(undefined4 *)(lVar6 + 0x20) = 7;
                        if (6 < *(uint *)(lVar4 + 0x18)) {
                          *(long *)(lVar4 + 0x50) = lVar6;
                          thunk_FUN_03d1023c();
                          lVar6 = FUN_03d2d394(*unaff_x22,1);
                          if (lVar6 == 0) goto LAB_0749d0c0;
                          if (*(int *)(lVar6 + 0x18) != 0) {
                            *(undefined4 *)(lVar6 + 0x20) = 8;
                            if (7 < *(uint *)(lVar4 + 0x18)) {
                              *(long *)(lVar4 + 0x58) = lVar6;
                              thunk_FUN_03d1023c();
                              lVar6 = FUN_03d2d394(*unaff_x22,1);
                              if (lVar6 == 0) goto LAB_0749d0c0;
                              if (*(int *)(lVar6 + 0x18) != 0) {
                                *(undefined4 *)(lVar6 + 0x20) = 0x14;
                                if (8 < *(uint *)(lVar4 + 0x18)) {
                                  *(long *)(lVar4 + 0x60) = lVar6;
                                  thunk_FUN_03d1023c();
                                  lVar6 = FUN_03d2d394(*unaff_x22,1);
                                  if (lVar6 == 0) goto LAB_0749d0c0;
                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                    *(undefined4 *)(lVar6 + 0x20) = 10;
                                    if (9 < *(uint *)(lVar4 + 0x18)) {
                                      *(long *)(lVar4 + 0x68) = lVar6;
                                      thunk_FUN_03d1023c();
                                      lVar6 = FUN_03d2d394(*unaff_x22,1);
                                      if (lVar6 == 0) goto LAB_0749d0c0;
                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                        *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                        if (10 < *(uint *)(lVar4 + 0x18)) {
                                          *(long *)(lVar4 + 0x70) = lVar6;
                                          thunk_FUN_03d1023c();
                                          lVar6 = FUN_03d2d394(*unaff_x22,1);
                                          if (lVar6 == 0) goto LAB_0749d0c0;
                                          if (*(int *)(lVar6 + 0x18) != 0) {
                                            *(undefined4 *)(lVar6 + 0x20) = 0x15;
                                            if (0xb < *(uint *)(lVar4 + 0x18)) {
                                              *(long *)(lVar4 + 0x78) = lVar6;
                                              thunk_FUN_03d1023c();
                                              lVar6 = FUN_03d2d394(*unaff_x22,1);
                                              if (lVar6 == 0) goto LAB_0749d0c0;
                                              if (*(int *)(lVar6 + 0x18) != 0) {
                                                *(undefined4 *)(lVar6 + 0x20) = 0xd;
                                                if (0xc < *(uint *)(lVar4 + 0x18)) {
                                                  *(long *)(lVar4 + 0x80) = lVar6;
                                                  thunk_FUN_03d1023c();
                                                  lVar6 = FUN_03d2d394(*unaff_x22,1);
                                                  if (lVar6 == 0) goto LAB_0749d0c0;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(lVar4 + 0x18)) {
                                                      *(long *)(lVar4 + 0x88) = lVar6;
                                                      thunk_FUN_03d1023c();
                                                      lVar6 = FUN_03d2d394(*unaff_x22,1);
                                                      if (lVar6 == 0) goto LAB_0749d0c0;
                                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar6 + 0x20) = 0x16;
                                                        if (0xe < *(uint *)(lVar4 + 0x18)) {
                                                          *(long *)(lVar4 + 0x90) = lVar6;
                                                          thunk_FUN_03d1023c();
                                                          lVar6 = FUN_03d2d394(*unaff_x22,1);
                                                          if (lVar6 == 0) goto LAB_0749d0c0;
                                                          if (*(int *)(lVar6 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar6 + 0x20) = 0x10;
                                                            if (0xf < *(uint *)(lVar4 + 0x18)) {
                                                              *(long *)(lVar4 + 0x98) = lVar6;
                                                              thunk_FUN_03d1023c();
                                                              lVar6 = FUN_03d2d394(*unaff_x22,1);
                                                              if (lVar6 == 0) goto LAB_0749d0c0;
                                                              if (*(int *)(lVar6 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar6 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(long *)(lVar4 + 0xa0) = lVar6;
                                                                  thunk_FUN_03d1023c();
                                                                  lVar6 = FUN_03d2d394(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar6 == 0) goto LAB_0749d0c0;
                                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                                    *(undefined4 *)(lVar6 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(long *)(lVar4 + 0xa8) = lVar6;
                                                    thunk_FUN_03d1023c();
                                                    lVar6 = FUN_03d2d394(*unaff_x22,1);
                                                    if (lVar6 == 0) goto LAB_0749d0c0;
                                                    if (*(int *)(lVar6 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar6 + 0x20) = 0x17;
                                                      if (0x12 < *(uint *)(lVar4 + 0x18)) {
                                                        *(long *)(lVar4 + 0xb0) = lVar6;
                                                        thunk_FUN_03d1023c((long *)(lVar4 + 0xb0));
                                                        uVar5 = FUN_03d2d394(*unaff_x22,0);
                                                        if (0x13 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0xb8) = uVar5;
                                                          thunk_FUN_03d1023c((undefined8 *)
                                                                             (lVar4 + 0xb8),uVar5);
                                                          uVar5 = FUN_03d2d394(*unaff_x22,0);
                                                          if (0x14 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0xc0) = uVar5;
                                                            thunk_FUN_03d1023c((undefined8 *)
                                                                               (lVar4 + 0xc0),uVar5)
                                                            ;
                                                            uVar5 = FUN_03d2d394(*unaff_x22,0);
                                                            if (0x15 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 200) = uVar5;
                                                              thunk_FUN_03d1023c((undefined8 *)
                                                                                 (lVar4 + 200),uVar5
                                                                                );
                                                              uVar5 = FUN_03d2d394(*unaff_x22,0);
                                                              if (0x16 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0xd0) =
                                                                     uVar5;
                                                                thunk_FUN_03d1023c((undefined8 *)
                                                                                   (lVar4 + 0xd0),
                                                                                   uVar5);
                                                                uVar5 = FUN_03d2d394(*unaff_x22,0);
                                                                puVar3 = PTR_DAT_09223c38;
                                                                puVar2 = PTR_DAT_09223c30;
                                                                if (0x17 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0xd8) =
                                                                       uVar5;
                                                                  thunk_FUN_03d1023c();
                                                                  plVar7 = (long *)(*(long *)(*
                                                  unaff_x23 + 0xb8) + 0x18);
                                                  *plVar7 = lVar4;
                                                  thunk_FUN_03d1023c(plVar7,lVar4);
                                                  lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
                                                  FUN_059d2ef0(lVar4,*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_09223c20;
                                                  if (lVar4 != 0) {
                                                    lVar6 = *(long *)PTR_DAT_09223c20;
                                                    piVar11 = (int *)(lVar4 + 0x1c);
                                                    *piVar11 = *piVar11 + 1;
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    puVar10 = (uint *)(lVar4 + 0x18);
                                                    uVar1 = *puVar10;
                                                    if (lVar9 != 0) {
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *puVar10 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar11 = *piVar11 + 1;
                                                      }
                                                      else {
                                                        FUN_059d3744(lVar4,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar6 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar6 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_0749d0c0;
                                                  }
                                                  puVar2 = PTR_DAT_09223c70;
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_059d3744(lVar4,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar7 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar7 = lVar4;
                                                  thunk_FUN_03d1023c(plVar7,lVar4);
                                                  uVar5 = FUN_03d2d394(*unaff_x22,5);
                                                  FUN_0708f30c(uVar5,*(undefined8 *)puVar2,0);
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar8 = uVar5;
                                                  thunk_FUN_03d1023c(puVar8,uVar5);
                                                  return;
                                                  }
                                                  }
LAB_0749d0c0:
                    /* WARNING: Subroutine does not return */
                                                  FUN_03d2d548();
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_03d2d550();
}


