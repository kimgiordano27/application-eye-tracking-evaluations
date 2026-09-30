/*
FUNCTION_NAME: OVRPlugin.OVRP_1_101_0$$.cctor
ENTRY_POINT: 05bf87fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_101_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_03188a78(PTR_DAT_07116f98);
  FUN_03188a78(PTR_DAT_07116fa0);
  FUN_03188a78(PTR_DAT_07116f60);
  FUN_03188a78(PTR_DAT_07116fa8);
  FUN_03188a78(PTR_DAT_07116fb0);
  FUN_03188a78(PTR_DAT_07116fb8);
  FUN_03188a78(PTR_DAT_07116fc0);
  FUN_03188a78(PTR_DAT_07116fc8);
  FUN_03188a78(PTR_DAT_07116fd0);
  *(undefined1 *)(unaff_x23 + 0xe44) = 1;
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x22);
  FUN_042e4268(lVar7,*unaff_x19);
  uVar8 = FUN_03188b1c(*unaff_x21,4);
  FUN_0585c08c(uVar8,*unaff_x20,0);
  puVar2 = PTR_DAT_07116f78;
  if (lVar7 != 0) {
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)PTR_DAT_07116f78;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = PTR_DAT_07116fb8;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_042e4a64(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = FUN_03188b1c(*unaff_x21,5);
      FUN_0585c08c(uVar8,*(undefined8 *)puVar3,0);
      lVar10 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar3 = PTR_DAT_07116f98;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_042e4a64(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = FUN_03188b1c(*unaff_x21,5);
        FUN_0585c08c(uVar8,*(undefined8 *)puVar3,0);
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        puVar3 = PTR_DAT_07116fa0;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_042e4a64(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = FUN_03188b1c(*unaff_x21,5);
          FUN_0585c08c(uVar8,*(undefined8 *)puVar3,0);
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar3 = PTR_DAT_07116fd0;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
            }
            else {
              FUN_042e4a64(lVar7,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = FUN_03188b1c(*unaff_x21,5);
            FUN_0585c08c(uVar8,*(undefined8 *)puVar3,0);
            lVar10 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            puVar6 = PTR_DAT_07116fc0;
            puVar5 = PTR_DAT_07116fa8;
            puVar4 = PTR_DAT_07116f70;
            puVar3 = PTR_DAT_07116f68;
            puVar2 = PTR_DAT_07112150;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
              }
              else {
                FUN_042e4a64(lVar7,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
              uVar8 = FUN_03188b1c(*(undefined8 *)puVar3,0x1a);
              FUN_0585c08c(uVar8,*(undefined8 *)puVar6,0);
              uVar9 = *unaff_x21;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar8;
              uVar8 = FUN_03188b1c(uVar9,0x1a);
              FUN_0585c08c(uVar8,*(undefined8 *)puVar5,0);
              uVar9 = *(undefined8 *)puVar4;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar8;
              lVar7 = FUN_03188b1c(uVar9,0x1a);
              uVar8 = FUN_03188b1c(*unaff_x21,0);
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = uVar8;
                  puVar3 = PTR_DAT_07116fc8;
                  uVar8 = FUN_03188b1c(*unaff_x21,6);
                  FUN_0585c08c(uVar8,*(undefined8 *)puVar3,0);
                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar7 + 0x28) = uVar8;
                    lVar10 = FUN_03188b1c(*unaff_x21,1);
                    if (lVar10 == 0) goto LAB_05bf97d8;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      *(undefined4 *)(lVar10 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar7 + 0x30) = lVar10;
                        lVar10 = FUN_03188b1c(*unaff_x21,1);
                        if (lVar10 == 0) goto LAB_05bf97d8;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          *(undefined4 *)(lVar10 + 0x20) = 4;
                          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar7 + 0x38) = lVar10;
                            lVar10 = FUN_03188b1c(*unaff_x21,1);
                            if (lVar10 == 0) goto LAB_05bf97d8;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar7 + 0x18);
                              *(undefined4 *)(lVar10 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar7 + 0x40) = lVar10;
                                uVar8 = FUN_03188b1c(*unaff_x21,0);
                                if (5 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x48) = uVar8;
                                  lVar10 = FUN_03188b1c(*unaff_x21,1);
                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                    *(undefined4 *)(lVar10 + 0x20) = 7;
                                    if (6 < uVar1) {
                                      *(long *)(lVar7 + 0x50) = lVar10;
                                      lVar10 = FUN_03188b1c(*unaff_x21,1);
                                      if (lVar10 == 0) goto LAB_05bf97d8;
                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                        *(undefined4 *)(lVar10 + 0x20) = 8;
                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                                          *(long *)(lVar7 + 0x58) = lVar10;
                                          lVar10 = FUN_03188b1c(*unaff_x21,1);
                                          if (lVar10 == 0) goto LAB_05bf97d8;
                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar7 + 0x18);
                                            *(undefined4 *)(lVar10 + 0x20) = 9;
                                            if (8 < uVar1) {
                                              *(long *)(lVar7 + 0x60) = lVar10;
                                              lVar10 = FUN_03188b1c(*unaff_x21,1);
                                              if (lVar10 == 0) goto LAB_05bf97d8;
                                              if (*(int *)(lVar10 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                *(undefined4 *)(lVar10 + 0x20) = 10;
                                                if (9 < uVar1) {
                                                  *(long *)(lVar7 + 0x68) = lVar10;
                                                  uVar8 = FUN_03188b1c(*unaff_x21,0);
                                                  if (10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x70) = uVar8;
                                                    lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      *(undefined4 *)(lVar10 + 0x20) = 0xc;
                                                      if (0xb < uVar1) {
                                                        *(long *)(lVar7 + 0x78) = lVar10;
                                                        lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                        if (lVar10 == 0) goto LAB_05bf97d8;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                                          *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                          if (0xc < uVar1) {
                                                            *(long *)(lVar7 + 0x80) = lVar10;
                                                            lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                            if (lVar10 == 0) goto LAB_05bf97d8;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar7 + 0x18);
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                              if (0xd < uVar1) {
                                                                *(long *)(lVar7 + 0x88) = lVar10;
                                                                lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                                if (lVar10 == 0) goto LAB_05bf97d8;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0xf;
                                                                  if (0xe < uVar1) {
                                                                    *(long *)(lVar7 + 0x90) = lVar10
                                                                    ;
                                                                    uVar8 = FUN_03188b1c(*unaff_x21,
                                                                                         0);
                                                                    if ((*(uint *)(lVar7 + 0x18) &
                                                                        0xfffffff0) != 0) {
                                                                      *(undefined8 *)(lVar7 + 0x98)
                                                                           = uVar8;
                                                                      lVar10 = FUN_03188b1c(*
                                                  unaff_x21,1);
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                    if (0x10 < uVar1) {
                                                      *(long *)(lVar7 + 0xa0) = lVar10;
                                                      lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                      if (lVar10 == 0) goto LAB_05bf97d8;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                        if (0x11 < uVar1) {
                                                          *(long *)(lVar7 + 0xa8) = lVar10;
                                                          lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                          if (lVar10 == 0) goto LAB_05bf97d8;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar7 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x13;
                                                            if (0x12 < uVar1) {
                                                              *(long *)(lVar7 + 0xb0) = lVar10;
                                                              lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                              if (lVar10 == 0) goto LAB_05bf97d8;
                                                              if (*(int *)(lVar10 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                                *(undefined4 *)(lVar10 + 0x20) =
                                                                     0x14;
                                                                if (0x13 < uVar1) {
                                                                  *(long *)(lVar7 + 0xb8) = lVar10;
                                                                  uVar8 = FUN_03188b1c(*unaff_x21,0)
                                                                  ;
                                                                  if (0x14 < *(uint *)(lVar7 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar7 + 0xc0) =
                                                                         uVar8;
                                                                    lVar10 = FUN_03188b1c(*unaff_x21
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_05bf97d8;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      uVar1 = *(uint *)(lVar7 + 0x18
                                                                                       );
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x16;
                                                                      if (0x15 < uVar1) {
                                                                        *(long *)(lVar7 + 200) =
                                                                             lVar10;
                                                                        lVar10 = FUN_03188b1c(*
                                                  unaff_x21,1);
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                    if (0x16 < uVar1) {
                                                      *(long *)(lVar7 + 0xd0) = lVar10;
                                                      lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                      if (lVar10 == 0) goto LAB_05bf97d8;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x18;
                                                        if (0x17 < uVar1) {
                                                          *(long *)(lVar7 + 0xd8) = lVar10;
                                                          lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                          if (lVar10 == 0) goto LAB_05bf97d8;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar7 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x19;
                                                            if (0x18 < uVar1) {
                                                              *(long *)(lVar7 + 0xe0) = lVar10;
                                                              uVar8 = FUN_03188b1c(*unaff_x21,0);
                                                              if (0x19 < *(uint *)(lVar7 + 0x18)) {
                                                                *(undefined8 *)(lVar7 + 0xe8) =
                                                                     uVar8;
                                                                puVar3 = PTR_DAT_07116f88;
                                                                uVar8 = *(undefined8 *)
                                                                         PTR_DAT_07116f90;
                                                                *(long *)(*(long *)(*(long *)puVar2
                                                                                   + 0xb8) + 0x18) =
                                                                     lVar7;
                                                                lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_0428426c(lVar7,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_07116f80;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)PTR_DAT_07116f80;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar7 + 0x1c) =
                                                             *(int *)(lVar7 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_04284aa0(lVar7,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  puVar3 = PTR_DAT_07116fb0;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x21;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar7;
                                                  uVar8 = FUN_03188b1c(uVar8,5);
                                                  FUN_0585c08c(uVar8,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar8;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_05bf97d8;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
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
                FUN_03188ce0();
              }
            }
          }
        }
      }
    }
  }
LAB_05bf97d8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


