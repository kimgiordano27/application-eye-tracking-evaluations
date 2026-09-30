/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVSyncCount
ENTRY_POINT: 051e3300
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVSyncCount(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar11;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  int *piVar12;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x398));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066093a0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066093a8);
  *(undefined1 *)(unaff_x22 + 0x62c) = 1;
  lVar7 = thunk_FUN_02cea894(*unaff_x23);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (lVar7,*unaff_x19);
  uVar8 = FUN_02ce7ad4(*unaff_x21,4);
  FUN_04e5d48c(uVar8,*unaff_x20,0);
  puVar2 = PTR_DAT_06609350;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_06609350;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = PTR_DAT_06609390;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_039683cc(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = FUN_02ce7ad4(*unaff_x21,5);
      FUN_04e5d48c(uVar8,*(undefined8 *)puVar3,0);
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)puVar2;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar3 = PTR_DAT_06609370;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_039683cc(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = FUN_02ce7ad4(*unaff_x21,5);
        FUN_04e5d48c(uVar8,*(undefined8 *)puVar3,0);
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        puVar3 = PTR_DAT_06609378;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_039683cc(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = FUN_02ce7ad4(*unaff_x21,5);
          FUN_04e5d48c(uVar8,*(undefined8 *)puVar3,0);
          lVar9 = *(long *)(lVar7 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar3 = PTR_DAT_066093a8;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
            }
            else {
              FUN_039683cc(lVar7,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = FUN_02ce7ad4(*unaff_x21,5);
            FUN_04e5d48c(uVar8,*(undefined8 *)puVar3,0);
            lVar9 = *(long *)(lVar7 + 0x10);
            lVar10 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            puVar6 = PTR_DAT_06609398;
            puVar5 = PTR_DAT_06609380;
            puVar4 = PTR_DAT_06609348;
            puVar3 = PTR_DAT_06609340;
            puVar2 = PTR_DAT_06604b60;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
              }
              else {
                FUN_039683cc(lVar7,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
              uVar8 = FUN_02ce7ad4(*(undefined8 *)puVar3,0x1a);
              FUN_04e5d48c(uVar8,*(undefined8 *)puVar6,0);
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar8;
              uVar8 = FUN_02ce7ad4(*unaff_x21,0x1a);
              FUN_04e5d48c(uVar8,*(undefined8 *)puVar5,0);
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar8;
              lVar7 = FUN_02ce7ad4(*(undefined8 *)puVar4,0x1a);
              uVar8 = FUN_02ce7ad4(*unaff_x21,0);
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = uVar8;
                  puVar3 = PTR_DAT_066093a0;
                  uVar8 = FUN_02ce7ad4(*unaff_x21,6);
                  FUN_04e5d48c(uVar8,*(undefined8 *)puVar3,0);
                  if (1 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x28) = uVar8;
                    lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                    if (lVar9 == 0) goto LAB_051e4298;
                    if (*(int *)(lVar9 + 0x18) != 0) {
                      *(undefined4 *)(lVar9 + 0x20) = 3;
                      if (2 < *(uint *)(lVar7 + 0x18)) {
                        *(long *)(lVar7 + 0x30) = lVar9;
                        lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                        if (lVar9 == 0) goto LAB_051e4298;
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          *(undefined4 *)(lVar9 + 0x20) = 4;
                          if (3 < *(uint *)(lVar7 + 0x18)) {
                            *(long *)(lVar7 + 0x38) = lVar9;
                            lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                            if (lVar9 == 0) goto LAB_051e4298;
                            if (*(int *)(lVar9 + 0x18) != 0) {
                              *(undefined4 *)(lVar9 + 0x20) = 5;
                              if (4 < *(uint *)(lVar7 + 0x18)) {
                                *(long *)(lVar7 + 0x40) = lVar9;
                                uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                                if (5 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x48) = uVar8;
                                  lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                  if (lVar9 == 0) goto LAB_051e4298;
                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                    *(undefined4 *)(lVar9 + 0x20) = 7;
                                    if (6 < *(uint *)(lVar7 + 0x18)) {
                                      *(long *)(lVar7 + 0x50) = lVar9;
                                      lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                      if (lVar9 == 0) goto LAB_051e4298;
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        *(undefined4 *)(lVar9 + 0x20) = 8;
                                        if (7 < *(uint *)(lVar7 + 0x18)) {
                                          *(long *)(lVar7 + 0x58) = lVar9;
                                          lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                          if (lVar9 == 0) goto LAB_051e4298;
                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                            *(undefined4 *)(lVar9 + 0x20) = 9;
                                            if (8 < *(uint *)(lVar7 + 0x18)) {
                                              *(long *)(lVar7 + 0x60) = lVar9;
                                              lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                              if (lVar9 == 0) goto LAB_051e4298;
                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                *(undefined4 *)(lVar9 + 0x20) = 10;
                                                if (9 < *(uint *)(lVar7 + 0x18)) {
                                                  *(long *)(lVar7 + 0x68) = lVar9;
                                                  uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                                                  if (10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x70) = uVar8;
                                                    lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                    if (lVar9 == 0) goto LAB_051e4298;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0xc;
                                                      if (0xb < *(uint *)(lVar7 + 0x18)) {
                                                        *(long *)(lVar7 + 0x78) = lVar9;
                                                        lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                        if (lVar9 == 0) goto LAB_051e4298;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0xd;
                                                          if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                            *(long *)(lVar7 + 0x80) = lVar9;
                                                            lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                            if (lVar9 == 0) goto LAB_051e4298;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0xe;
                                                              if (0xd < *(uint *)(lVar7 + 0x18)) {
                                                                *(long *)(lVar7 + 0x88) = lVar9;
                                                                lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                                if (lVar9 == 0) goto LAB_051e4298;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0xf;
                                                                  if (0xe < *(uint *)(lVar7 + 0x18))
                                                                  {
                                                                    *(long *)(lVar7 + 0x90) = lVar9;
                                                                    uVar8 = FUN_02ce7ad4(*unaff_x21,
                                                                                         0);
                                                                    if (0xf < *(uint *)(lVar7 + 0x18
                                                                                       )) {
                                                                      *(undefined8 *)(lVar7 + 0x98)
                                                                           = uVar8;
                                                                      lVar9 = FUN_02ce7ad4(*
                                                  unaff_x21,1);
                                                  if (lVar9 == 0) goto LAB_051e4298;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar9 + 0x20) = 0x11;
                                                    if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                                      *(long *)(lVar7 + 0xa0) = lVar9;
                                                      lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                      if (lVar9 == 0) goto LAB_051e4298;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar9 + 0x20) = 0x12;
                                                        if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                                          *(long *)(lVar7 + 0xa8) = lVar9;
                                                          lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                          if (lVar9 == 0) goto LAB_051e4298;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar9 + 0x20) = 0x13;
                                                            if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                                              *(long *)(lVar7 + 0xb0) = lVar9;
                                                              lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                              if (lVar9 == 0) goto LAB_051e4298;
                                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar9 + 0x20) = 0x14
                                                                ;
                                                                if (0x13 < *(uint *)(lVar7 + 0x18))
                                                                {
                                                                  *(long *)(lVar7 + 0xb8) = lVar9;
                                                                  uVar8 = FUN_02ce7ad4(*unaff_x21,0)
                                                                  ;
                                                                  if (0x14 < *(uint *)(lVar7 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar7 + 0xc0) =
                                                                         uVar8;
                                                                    lVar9 = FUN_02ce7ad4(*unaff_x21,
                                                                                         1);
                                                                    if (lVar9 == 0)
                                                                    goto LAB_051e4298;
                                                                    if (*(int *)(lVar9 + 0x18) != 0)
                                                                    {
                                                                      *(undefined4 *)(lVar9 + 0x20)
                                                                           = 0x16;
                                                                      if (0x15 < *(uint *)(lVar7 + 
                                                  0x18)) {
                                                    *(long *)(lVar7 + 200) = lVar9;
                                                    lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                    if (lVar9 == 0) goto LAB_051e4298;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0x17;
                                                      if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                        *(long *)(lVar7 + 0xd0) = lVar9;
                                                        lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                        if (lVar9 == 0) goto LAB_051e4298;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0x18;
                                                          if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                            *(long *)(lVar7 + 0xd8) = lVar9;
                                                            lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                            if (lVar9 == 0) goto LAB_051e4298;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0x19;
                                                              if (0x18 < *(uint *)(lVar7 + 0x18)) {
                                                                *(long *)(lVar7 + 0xe0) = lVar9;
                                                                uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                                                                if (0x19 < *(uint *)(lVar7 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar7 + 0xe8) =
                                                                       uVar8;
                                                                  puVar4 = PTR_DAT_06609368;
                                                                  *(long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x18) = lVar7;
                                                  puVar3 = PTR_DAT_06609360;
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
                                                  FUN_03920118(lVar7,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_06609358;
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)PTR_DAT_06609358;
                                                    piVar12 = (int *)(lVar7 + 0x1c);
                                                    *piVar12 = *piVar12 + 1;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    puVar11 = (uint *)(lVar7 + 0x18);
                                                    uVar1 = *puVar11;
                                                    if (lVar10 != 0) {
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *puVar11 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar12 = *piVar12 + 1;
                                                      }
                                                      else {
                                                        FUN_03920910(lVar7,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  puVar3 = PTR_DAT_06609388;
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar7;
                                                  uVar8 = FUN_02ce7ad4(*unaff_x21,5);
                                                  FUN_04e5d48c(uVar8,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar8;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_051e4298;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
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
                FUN_02ce7c84();
              }
            }
          }
        }
      }
    }
  }
LAB_051e4298:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


