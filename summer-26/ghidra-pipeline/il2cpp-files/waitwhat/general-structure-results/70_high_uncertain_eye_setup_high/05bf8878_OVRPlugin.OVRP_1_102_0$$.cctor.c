/*
FUNCTION_NAME: OVRPlugin.OVRP_1_102_0$$.cctor
ENTRY_POINT: 05bf8878
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


void OVRPlugin_OVRP_1_102_0___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_042e4268(param_1,*unaff_x19);
  uVar7 = FUN_03188b1c(*unaff_x21,4);
  FUN_0585c08c(uVar7,*unaff_x20,0);
  puVar2 = PTR_DAT_07116f78;
  if (param_1 != 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)PTR_DAT_07116f78;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    puVar3 = PTR_DAT_07116fb8;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_042e4a64(param_1,uVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      uVar7 = FUN_03188b1c(*unaff_x21,5);
      FUN_0585c08c(uVar7,*(undefined8 *)puVar3,0);
      lVar9 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)puVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      puVar3 = PTR_DAT_07116f98;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        }
        else {
          FUN_042e4a64(param_1,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = FUN_03188b1c(*unaff_x21,5);
        FUN_0585c08c(uVar7,*(undefined8 *)puVar3,0);
        lVar9 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        puVar3 = PTR_DAT_07116fa0;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(param_1 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_1 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          }
          else {
            FUN_042e4a64(param_1,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = FUN_03188b1c(*unaff_x21,5);
          FUN_0585c08c(uVar7,*(undefined8 *)puVar3,0);
          lVar9 = *(long *)(param_1 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          puVar3 = PTR_DAT_07116fd0;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(param_1 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(param_1 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            }
            else {
              FUN_042e4a64(param_1,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar7 = FUN_03188b1c(*unaff_x21,5);
            FUN_0585c08c(uVar7,*(undefined8 *)puVar3,0);
            lVar9 = *(long *)(param_1 + 0x10);
            lVar10 = *(long *)puVar2;
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
            puVar6 = PTR_DAT_07116fc0;
            puVar5 = PTR_DAT_07116fa8;
            puVar4 = PTR_DAT_07116f70;
            puVar3 = PTR_DAT_07116f68;
            puVar2 = PTR_DAT_07112150;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(param_1 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(param_1 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
              }
              else {
                FUN_042e4a64(param_1,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = param_1;
              uVar7 = FUN_03188b1c(*(undefined8 *)puVar3,0x1a);
              FUN_0585c08c(uVar7,*(undefined8 *)puVar6,0);
              uVar8 = *unaff_x21;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar7;
              uVar7 = FUN_03188b1c(uVar8,0x1a);
              FUN_0585c08c(uVar7,*(undefined8 *)puVar5,0);
              uVar8 = *(undefined8 *)puVar4;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar7;
              lVar9 = FUN_03188b1c(uVar8,0x1a);
              uVar7 = FUN_03188b1c(*unaff_x21,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar7;
                  puVar3 = PTR_DAT_07116fc8;
                  uVar7 = FUN_03188b1c(*unaff_x21,6);
                  FUN_0585c08c(uVar7,*(undefined8 *)puVar3,0);
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar7;
                    lVar10 = FUN_03188b1c(*unaff_x21,1);
                    if (lVar10 == 0) goto LAB_05bf97d8;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      *(undefined4 *)(lVar10 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar9 + 0x30) = lVar10;
                        lVar10 = FUN_03188b1c(*unaff_x21,1);
                        if (lVar10 == 0) goto LAB_05bf97d8;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          *(undefined4 *)(lVar10 + 0x20) = 4;
                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar9 + 0x38) = lVar10;
                            lVar10 = FUN_03188b1c(*unaff_x21,1);
                            if (lVar10 == 0) goto LAB_05bf97d8;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar9 + 0x18);
                              *(undefined4 *)(lVar10 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar9 + 0x40) = lVar10;
                                uVar7 = FUN_03188b1c(*unaff_x21,0);
                                if (5 < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x48) = uVar7;
                                  lVar10 = FUN_03188b1c(*unaff_x21,1);
                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                    *(undefined4 *)(lVar10 + 0x20) = 7;
                                    if (6 < uVar1) {
                                      *(long *)(lVar9 + 0x50) = lVar10;
                                      lVar10 = FUN_03188b1c(*unaff_x21,1);
                                      if (lVar10 == 0) goto LAB_05bf97d8;
                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                        *(undefined4 *)(lVar10 + 0x20) = 8;
                                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                                          *(long *)(lVar9 + 0x58) = lVar10;
                                          lVar10 = FUN_03188b1c(*unaff_x21,1);
                                          if (lVar10 == 0) goto LAB_05bf97d8;
                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                            *(undefined4 *)(lVar10 + 0x20) = 9;
                                            if (8 < uVar1) {
                                              *(long *)(lVar9 + 0x60) = lVar10;
                                              lVar10 = FUN_03188b1c(*unaff_x21,1);
                                              if (lVar10 == 0) goto LAB_05bf97d8;
                                              if (*(int *)(lVar10 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar9 + 0x18);
                                                *(undefined4 *)(lVar10 + 0x20) = 10;
                                                if (9 < uVar1) {
                                                  *(long *)(lVar9 + 0x68) = lVar10;
                                                  uVar7 = FUN_03188b1c(*unaff_x21,0);
                                                  if (10 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x70) = uVar7;
                                                    lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      *(undefined4 *)(lVar10 + 0x20) = 0xc;
                                                      if (0xb < uVar1) {
                                                        *(long *)(lVar9 + 0x78) = lVar10;
                                                        lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                        if (lVar10 == 0) goto LAB_05bf97d8;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                                          *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                          if (0xc < uVar1) {
                                                            *(long *)(lVar9 + 0x80) = lVar10;
                                                            lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                            if (lVar10 == 0) goto LAB_05bf97d8;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                              if (0xd < uVar1) {
                                                                *(long *)(lVar9 + 0x88) = lVar10;
                                                                lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                                if (lVar10 == 0) goto LAB_05bf97d8;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0xf;
                                                                  if (0xe < uVar1) {
                                                                    *(long *)(lVar9 + 0x90) = lVar10
                                                                    ;
                                                                    uVar7 = FUN_03188b1c(*unaff_x21,
                                                                                         0);
                                                                    if ((*(uint *)(lVar9 + 0x18) &
                                                                        0xfffffff0) != 0) {
                                                                      *(undefined8 *)(lVar9 + 0x98)
                                                                           = uVar7;
                                                                      lVar10 = FUN_03188b1c(*
                                                  unaff_x21,1);
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                    if (0x10 < uVar1) {
                                                      *(long *)(lVar9 + 0xa0) = lVar10;
                                                      lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                      if (lVar10 == 0) goto LAB_05bf97d8;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                        if (0x11 < uVar1) {
                                                          *(long *)(lVar9 + 0xa8) = lVar10;
                                                          lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                          if (lVar10 == 0) goto LAB_05bf97d8;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x13;
                                                            if (0x12 < uVar1) {
                                                              *(long *)(lVar9 + 0xb0) = lVar10;
                                                              lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                              if (lVar10 == 0) goto LAB_05bf97d8;
                                                              if (*(int *)(lVar10 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar9 + 0x18);
                                                                *(undefined4 *)(lVar10 + 0x20) =
                                                                     0x14;
                                                                if (0x13 < uVar1) {
                                                                  *(long *)(lVar9 + 0xb8) = lVar10;
                                                                  uVar7 = FUN_03188b1c(*unaff_x21,0)
                                                                  ;
                                                                  if (0x14 < *(uint *)(lVar9 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar9 + 0xc0) =
                                                                         uVar7;
                                                                    lVar10 = FUN_03188b1c(*unaff_x21
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_05bf97d8;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      uVar1 = *(uint *)(lVar9 + 0x18
                                                                                       );
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x16;
                                                                      if (0x15 < uVar1) {
                                                                        *(long *)(lVar9 + 200) =
                                                                             lVar10;
                                                                        lVar10 = FUN_03188b1c(*
                                                  unaff_x21,1);
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                    if (0x16 < uVar1) {
                                                      *(long *)(lVar9 + 0xd0) = lVar10;
                                                      lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                      if (lVar10 == 0) goto LAB_05bf97d8;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x18;
                                                        if (0x17 < uVar1) {
                                                          *(long *)(lVar9 + 0xd8) = lVar10;
                                                          lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                          if (lVar10 == 0) goto LAB_05bf97d8;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x19;
                                                            if (0x18 < uVar1) {
                                                              *(long *)(lVar9 + 0xe0) = lVar10;
                                                              uVar7 = FUN_03188b1c(*unaff_x21,0);
                                                              if (0x19 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0xe8) =
                                                                     uVar7;
                                                                puVar3 = PTR_DAT_07116f88;
                                                                uVar7 = *(undefined8 *)
                                                                         PTR_DAT_07116f90;
                                                                *(long *)(*(long *)(*(long *)puVar2
                                                                                   + 0xb8) + 0x18) =
                                                                     lVar9;
                                                                lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_0428426c(lVar9,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_07116f80;
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)PTR_DAT_07116f80;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar9 + 0x1c) =
                                                             *(int *)(lVar9 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_04284aa0(lVar9,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf97d8;
                                                  }
                                                  puVar3 = PTR_DAT_07116fb0;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar9,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x21;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar9;
                                                  uVar7 = FUN_03188b1c(uVar7,5);
                                                  FUN_0585c08c(uVar7,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar7;
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


