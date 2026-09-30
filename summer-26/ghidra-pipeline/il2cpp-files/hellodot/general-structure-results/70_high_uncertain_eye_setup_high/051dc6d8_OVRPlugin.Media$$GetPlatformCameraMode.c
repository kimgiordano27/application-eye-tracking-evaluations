/*
FUNCTION_NAME: OVRPlugin.Media$$GetPlatformCameraMode
ENTRY_POINT: 051dc6d8
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


void OVRPlugin_Media__GetPlatformCameraMode(void)

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
  long lVar11;
  long lVar12;
  uint *puVar13;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar14;
  int *piVar15;
  
  puVar4 = PTR_DAT_06609130;
  puVar2 = PTR_DAT_06609128;
  puVar3 = PTR_DAT_06606c68;
  puVar14 = *(undefined8 **)(unaff_x23 + 0x120);
  if ((*(byte *)(unaff_x22 + 0x5bc) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609138);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607a58);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06606c68);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604b58);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609140);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609148);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609128);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607c08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607bb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609120);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607a78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607a88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609150);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609158);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607ad0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609160);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609130);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609168);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609170);
    *(undefined1 *)(unaff_x22 + 0x5bc) = 1;
  }
  lVar9 = thunk_FUN_02cea894(*puVar14);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (lVar9,*(undefined8 *)puVar2);
  uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,5);
  FUN_04e5d48c(uVar10,*(undefined8 *)puVar4,0);
  puVar2 = PTR_DAT_06609140;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)PTR_DAT_06609140;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar4 = PTR_DAT_06607ad0;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      }
      else {
        FUN_039683cc(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,4);
      FUN_04e5d48c(uVar10,*(undefined8 *)puVar4,0);
      lVar11 = *(long *)(lVar9 + 0x10);
      lVar12 = *(long *)puVar2;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      puVar4 = PTR_DAT_06607a78;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        }
        else {
          FUN_039683cc(lVar9,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,4);
        FUN_04e5d48c(uVar10,*(undefined8 *)puVar4,0);
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar4 = PTR_DAT_06607a88;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          }
          else {
            FUN_039683cc(lVar9,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,4);
          FUN_04e5d48c(uVar10,*(undefined8 *)puVar4,0);
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar4 = PTR_DAT_06609150;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
            }
            else {
              FUN_039683cc(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,5);
            FUN_04e5d48c(uVar10,*(undefined8 *)puVar4,0);
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            puVar8 = PTR_DAT_06609170;
            puVar7 = PTR_DAT_06609160;
            puVar6 = PTR_DAT_06609158;
            puVar5 = PTR_DAT_06609138;
            puVar4 = PTR_DAT_06607a58;
            puVar2 = PTR_DAT_06604b58;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              }
              else {
                FUN_039683cc(lVar9,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar9;
              uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar5,0x18);
              FUN_04e5d48c(uVar10,*(undefined8 *)puVar8,0);
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar10;
              uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,0x18);
              FUN_04e5d48c(uVar10,*(undefined8 *)puVar7,0);
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar10;
              lVar9 = FUN_02ce7ad4(*(undefined8 *)puVar4,0x18);
              uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,6);
              FUN_04e5d48c(uVar10,*(undefined8 *)puVar6,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar10;
                  uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,0);
                  if (1 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar10;
                    lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                    if (lVar11 == 0) goto LAB_051dd630;
                    if (*(int *)(lVar11 + 0x18) != 0) {
                      *(undefined4 *)(lVar11 + 0x20) = 3;
                      if (2 < *(uint *)(lVar9 + 0x18)) {
                        *(long *)(lVar9 + 0x30) = lVar11;
                        lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                        if (lVar11 == 0) goto LAB_051dd630;
                        if (*(int *)(lVar11 + 0x18) != 0) {
                          *(undefined4 *)(lVar11 + 0x20) = 4;
                          if (3 < *(uint *)(lVar9 + 0x18)) {
                            *(long *)(lVar9 + 0x38) = lVar11;
                            lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                            if (lVar11 == 0) goto LAB_051dd630;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              *(undefined4 *)(lVar11 + 0x20) = 5;
                              if (4 < *(uint *)(lVar9 + 0x18)) {
                                *(long *)(lVar9 + 0x40) = lVar11;
                                lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                                if (lVar11 == 0) goto LAB_051dd630;
                                if (*(int *)(lVar11 + 0x18) != 0) {
                                  *(undefined4 *)(lVar11 + 0x20) = 0x13;
                                  if (5 < *(uint *)(lVar9 + 0x18)) {
                                    *(long *)(lVar9 + 0x48) = lVar11;
                                    lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                                    if (lVar11 == 0) goto LAB_051dd630;
                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                      *(undefined4 *)(lVar11 + 0x20) = 7;
                                      if (6 < *(uint *)(lVar9 + 0x18)) {
                                        *(long *)(lVar9 + 0x50) = lVar11;
                                        lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                                        if (lVar11 == 0) goto LAB_051dd630;
                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                          *(undefined4 *)(lVar11 + 0x20) = 8;
                                          if (7 < *(uint *)(lVar9 + 0x18)) {
                                            *(long *)(lVar9 + 0x58) = lVar11;
                                            lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                                            if (lVar11 == 0) goto LAB_051dd630;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined4 *)(lVar11 + 0x20) = 0x14;
                                              if (8 < *(uint *)(lVar9 + 0x18)) {
                                                *(long *)(lVar9 + 0x60) = lVar11;
                                                lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                                                if (lVar11 == 0) goto LAB_051dd630;
                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar11 + 0x20) = 10;
                                                  if (9 < *(uint *)(lVar9 + 0x18)) {
                                                    *(long *)(lVar9 + 0x68) = lVar11;
                                                    lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0xb;
                                                      if (10 < *(uint *)(lVar9 + 0x18)) {
                                                        *(long *)(lVar9 + 0x70) = lVar11;
                                                        lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,
                                                                              1);
                                                        if (lVar11 == 0) goto LAB_051dd630;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x15;
                                                          if (0xb < *(uint *)(lVar9 + 0x18)) {
                                                            *(long *)(lVar9 + 0x78) = lVar11;
                                                            lVar11 = FUN_02ce7ad4(*(undefined8 *)
                                                                                   puVar3,1);
                                                            if (lVar11 == 0) goto LAB_051dd630;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                              if (0xc < *(uint *)(lVar9 + 0x18)) {
                                                                *(long *)(lVar9 + 0x80) = lVar11;
                                                                lVar11 = FUN_02ce7ad4(*(undefined8 *
                                                                                       )puVar3,1);
                                                                if (lVar11 == 0) goto LAB_051dd630;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < *(uint *)(lVar9 + 0x18))
                                                                  {
                                                                    *(long *)(lVar9 + 0x88) = lVar11
                                                                    ;
                                                                    lVar11 = FUN_02ce7ad4(*(
                                                  undefined8 *)puVar3,1);
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar11 + 0x20) = 0x16;
                                                    if (0xe < *(uint *)(lVar9 + 0x18)) {
                                                      *(long *)(lVar9 + 0x90) = lVar11;
                                                      lVar11 = FUN_02ce7ad4(*(undefined8 *)puVar3,1)
                                                      ;
                                                      if (lVar11 == 0) goto LAB_051dd630;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar11 + 0x20) = 0x10;
                                                        if (0xf < *(uint *)(lVar9 + 0x18)) {
                                                          *(long *)(lVar9 + 0x98) = lVar11;
                                                          lVar11 = FUN_02ce7ad4(*(undefined8 *)
                                                                                 puVar3,1);
                                                          if (lVar11 == 0) goto LAB_051dd630;
                                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar11 + 0x20) = 0x11;
                                                            if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                                              *(long *)(lVar9 + 0xa0) = lVar11;
                                                              lVar11 = FUN_02ce7ad4(*(undefined8 *)
                                                                                     puVar3,1);
                                                              if (lVar11 == 0) goto LAB_051dd630;
                                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar11 + 0x20) =
                                                                     0x12;
                                                                if (0x11 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(long *)(lVar9 + 0xa8) = lVar11;
                                                                  lVar11 = FUN_02ce7ad4(*(undefined8
                                                                                          *)puVar3,1
                                                                                       );
                                                                  if (lVar11 == 0)
                                                                  goto LAB_051dd630;
                                                                  if (*(int *)(lVar11 + 0x18) != 0)
                                                                  {
                                                                    *(undefined4 *)(lVar11 + 0x20) =
                                                                         0x17;
                                                                    if (0x12 < *(uint *)(lVar9 + 
                                                  0x18)) {
                                                    *(long *)(lVar9 + 0xb0) = lVar11;
                                                    uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,0);
                                                    if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0xb8) = uVar10;
                                                      uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,0)
                                                      ;
                                                      if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0xc0) = uVar10;
                                                        uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,
                                                                              0);
                                                        if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 200) = uVar10;
                                                          uVar10 = FUN_02ce7ad4(*(undefined8 *)
                                                                                 puVar3,0);
                                                          if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0xd0) = uVar10;
                                                            uVar10 = FUN_02ce7ad4(*(undefined8 *)
                                                                                   puVar3,0);
                                                            if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0xd8) = uVar10
                                                              ;
                                                              puVar4 = PTR_DAT_06607bb0;
                                                              *(long *)(*(long *)(*(long *)puVar2 +
                                                                                 0xb8) + 0x18) =
                                                                   lVar9;
                                                              puVar5 = PTR_DAT_06607c08;
                                                              lVar9 = thunk_FUN_02cea894(*(
                                                  undefined8 *)puVar4);
                                                  FUN_03920118(lVar9,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_06609148;
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)PTR_DAT_06609148;
                                                    piVar15 = (int *)(lVar9 + 0x1c);
                                                    *piVar15 = *piVar15 + 1;
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    puVar13 = (uint *)(lVar9 + 0x18);
                                                    uVar1 = *puVar13;
                                                    if (lVar12 != 0) {
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *puVar13 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar15 = *piVar15 + 1;
                                                      }
                                                      else {
                                                        FUN_03920910(lVar9,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_051dd630;
                                                  }
                                                  puVar4 = PTR_DAT_06609168;
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar9;
                                                  uVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,5);
                                                  FUN_04e5d48c(uVar10,*(undefined8 *)puVar4,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar10;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_051dd630;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
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
LAB_051dd630:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


