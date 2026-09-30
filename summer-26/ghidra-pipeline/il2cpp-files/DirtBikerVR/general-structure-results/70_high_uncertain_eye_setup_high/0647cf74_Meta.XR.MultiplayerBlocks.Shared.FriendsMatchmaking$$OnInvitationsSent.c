/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$OnInvitationsSent
ENTRY_POINT: 0647cf74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__OnInvitationsSent(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar12;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x5b0));
  FUN_03a8a718(PTR_DAT_084975c0);
  FUN_03a8a718(PTR_DAT_084975e0);
  FUN_03a8a718(PTR_DAT_084975d0);
  FUN_03a8a718(PTR_DAT_084975f8);
  FUN_03a8a718(PTR_DAT_08497600);
  FUN_03a8a718(PTR_DAT_08497608);
  FUN_03a8a718(PTR_DAT_08497610);
  FUN_03a8a718(PTR_DAT_08497618);
  FUN_03a8a718(PTR_DAT_084884b0);
  FUN_03a8a718(PTR_DAT_08497620);
  FUN_03a8a718(PTR_DAT_084975f0);
  FUN_03a8a718(PTR_DAT_084884b8);
  FUN_03a8a718(PTR_DAT_08497628);
  FUN_03a8a718(PTR_DAT_08488f10);
  FUN_03a8a718(PTR_DAT_08497630);
  FUN_03a8a718(PTR_DAT_08486c00);
  FUN_03a8a718(PTR_DAT_08497638);
  FUN_03a8a718(PTR_DAT_084884c8);
  FUN_03a8a718(PTR_DAT_084884d0);
  FUN_03a8a718(PTR_DAT_08497640);
  FUN_03a8a718(PTR_DAT_084884e0);
  FUN_03a8a718(PTR_DAT_084884e8);
  FUN_03a8a718(PTR_DAT_084884f0);
  FUN_03a8a718(PTR_DAT_084884f8);
  FUN_03a8a718(PTR_DAT_08488f48);
  FUN_03a8a718(PTR_DAT_08497648);
  FUN_03a8a718(PTR_DAT_08497650);
  FUN_03a8a718(PTR_DAT_08488508);
  FUN_03a8a718(PTR_DAT_08488510);
  FUN_03a8a718(PTR_DAT_08488518);
  FUN_03a8a718(PTR_DAT_08488520);
  FUN_03a8a718(PTR_DAT_08497658);
  FUN_03a8a718(PTR_DAT_08486c30);
  FUN_03a8a718(PTR_DAT_08497660);
  *(undefined1 *)(unaff_x29 + 0x176) = 1;
  uVar10 = thunk_FUN_03ac74bc(*unaff_x28);
  FUN_04de7d48(uVar10,*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20),uVar10);
  uVar10 = thunk_FUN_03ac74bc(*unaff_x27);
  FUN_04de7d48(uVar10,*unaff_x26);
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd0),uVar10);
  uVar10 = thunk_FUN_03ac74bc(*unaff_x25);
  FUN_04de7d48(uVar10,*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0x188) = uVar10;
  thunk_FUN_03afed3c(unaff_x19 + 0x188,uVar10);
  uVar10 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_04de7d48(uVar10,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar10;
  thunk_FUN_03afed3c(unaff_x19 + 0x1a8,uVar10);
  *(undefined4 *)(unaff_x19 + 0x1c8) = 0xffffffff;
  FUN_0679343c();
  lVar11 = FUN_070a560c(*unaff_x21,0);
  plVar12 = (long *)(unaff_x19 + 0x10);
  *plVar12 = lVar11;
  thunk_FUN_03afed3c(plVar12,lVar11);
  if (*plVar12 != 0) {
    lVar11 = FUN_070a59b8(*plVar12,*(undefined8 *)PTR_DAT_08486c30,1,0);
    plVar12 = (long *)(unaff_x19 + 0x18);
    *plVar12 = lVar11;
    thunk_FUN_03afed3c(plVar12,lVar11);
    puVar8 = PTR_DAT_084975f8;
    if (*plVar12 != 0) {
      uVar10 = FUN_070a56c4(*plVar12,*(undefined8 *)PTR_DAT_084975f8,1,0);
      *(undefined8 *)(unaff_x19 + 0x28) = uVar10;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x28),uVar10);
      puVar4 = PTR_DAT_084884f8;
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084884f8,1,0);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar10;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x30),uVar10);
        puVar2 = PTR_DAT_084884e0;
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084884e0,1,0);
          *(undefined8 *)(unaff_x19 + 0x38) = uVar10;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x38),uVar10);
          puVar7 = PTR_DAT_08488520;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08488520,1,0);
            *(undefined8 *)(unaff_x19 + 0x40) = uVar10;
            thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x40),uVar10);
            puVar9 = PTR_DAT_08497600;
            if (*(long *)(unaff_x19 + 0x18) != 0) {
              uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08497600,1,0)
              ;
              *(undefined8 *)(unaff_x19 + 0x48) = uVar10;
              thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x48),uVar10);
              puVar1 = PTR_DAT_084884d0;
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084884d0,1,
                                      0);
                *(undefined8 *)(unaff_x19 + 0x50) = uVar10;
                thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x50),uVar10);
                puVar5 = PTR_DAT_08488508;
                if (*(long *)(unaff_x19 + 0x18) != 0) {
                  uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08488508,
                                        1,0);
                  *(undefined8 *)(unaff_x19 + 0x58) = uVar10;
                  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x58),uVar10);
                  puVar6 = PTR_DAT_08488510;
                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                          *(undefined8 *)PTR_DAT_08488510,1,0);
                    *(undefined8 *)(unaff_x19 + 0x60) = uVar10;
                    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60),uVar10);
                    puVar3 = PTR_DAT_084884e8;
                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                      uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                            *(undefined8 *)PTR_DAT_084884e8,1,0);
                      *(undefined8 *)(unaff_x19 + 0x68) = uVar10;
                      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x68),uVar10);
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                              *(undefined8 *)PTR_DAT_084884b0,1,0);
                        *(undefined8 *)(unaff_x19 + 0x70) = uVar10;
                        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x70),uVar10);
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                *(undefined8 *)PTR_DAT_084884b8,1,0);
                          *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
                          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x78),uVar10);
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                  *(undefined8 *)PTR_DAT_084884f0,1,0);
                            *(undefined8 *)(unaff_x19 + 0x80) = uVar10;
                            thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x80),uVar10);
                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                              uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                    *(undefined8 *)PTR_DAT_08497628,1,0);
                              *(undefined8 *)(unaff_x19 + 0x88) = uVar10;
                              thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x88),uVar10);
                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                      *(undefined8 *)PTR_DAT_08497610,1,0);
                                *(undefined8 *)(unaff_x19 + 0x90) = uVar10;
                                thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x90),uVar10);
                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                  uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                        *(undefined8 *)PTR_DAT_08488518,1,0);
                                  *(undefined8 *)(unaff_x19 + 0x98) = uVar10;
                                  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x98),uVar10);
                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                          *(undefined8 *)PTR_DAT_084884c8,1,0);
                                    *(undefined8 *)(unaff_x19 + 0xa0) = uVar10;
                                    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xa0),uVar10);
                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                      uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                            *(undefined8 *)PTR_DAT_08497608,1,0);
                                      *(undefined8 *)(unaff_x19 + 0xa8) = uVar10;
                                      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xa8),uVar10);
                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                        uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                              *(undefined8 *)PTR_DAT_08497650,1,0);
                                        *(undefined8 *)(unaff_x19 + 0xb0) = uVar10;
                                        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xb0),uVar10);
                                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                                          uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                                *(undefined8 *)PTR_DAT_08497640,1,0)
                                          ;
                                          *(undefined8 *)(unaff_x19 + 0xb8) = uVar10;
                                          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xb8),uVar10
                                                            );
                                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                                            uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 0x18),
                                                                  *(undefined8 *)PTR_DAT_08497620,1,
                                                                  0);
                                            *(undefined8 *)(unaff_x19 + 0xc0) = uVar10;
                                            thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xc0),
                                                               uVar10);
                                            if (*(long *)(unaff_x19 + 0x10) != 0) {
                                              lVar11 = FUN_070a59b8(*(long *)(unaff_x19 + 0x10),
                                                                    *(undefined8 *)PTR_DAT_08486c00,
                                                                    1,0);
                                              plVar12 = (long *)(unaff_x19 + 200);
                                              *plVar12 = lVar11;
                                              thunk_FUN_03afed3c(plVar12,lVar11);
                                              if (*plVar12 != 0) {
                                                uVar10 = FUN_070a56c4(*plVar12,*(undefined8 *)puVar8
                                                                      ,1,0);
                                                *(undefined8 *)(unaff_x19 + 0xd8) = uVar10;
                                                thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd8),
                                                                   uVar10);
                                                if (*(long *)(unaff_x19 + 200) != 0) {
                                                  uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 200),
                                                                        *(undefined8 *)puVar4,1,0);
                                                  *(undefined8 *)(unaff_x19 + 0xe0) = uVar10;
                                                  thunk_FUN_03afed3c((undefined8 *)
                                                                     (unaff_x19 + 0xe0),uVar10);
                                                  if (*(long *)(unaff_x19 + 200) != 0) {
                                                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 200)
                                                                          ,*(undefined8 *)puVar2,1,0
                                                                         );
                                                    *(undefined8 *)(unaff_x19 + 0xe8) = uVar10;
                                                    thunk_FUN_03afed3c((undefined8 *)
                                                                       (unaff_x19 + 0xe8),uVar10);
                                                    if (*(long *)(unaff_x19 + 200) != 0) {
                                                      uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                     200),
                                                                            *(undefined8 *)puVar7,1,
                                                                            0);
                                                      *(undefined8 *)(unaff_x19 + 0xf0) = uVar10;
                                                      thunk_FUN_03afed3c((undefined8 *)
                                                                         (unaff_x19 + 0xf0),uVar10);
                                                      if (*(long *)(unaff_x19 + 200) != 0) {
                                                        uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                       200),
                                                                              *(undefined8 *)puVar9,
                                                                              1,0);
                                                        *(undefined8 *)(unaff_x19 + 0xf8) = uVar10;
                                                        thunk_FUN_03afed3c((undefined8 *)
                                                                           (unaff_x19 + 0xf8),uVar10
                                                                          );
                                                        if (*(long *)(unaff_x19 + 200) != 0) {
                                                          uVar10 = FUN_070a56c4(*(long *)(unaff_x19
                                                                                         + 200),
                                                                                *(undefined8 *)
                                                                                 puVar1,1,0);
                                                          *(undefined8 *)(unaff_x19 + 0x100) =
                                                               uVar10;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x100,
                                                                             uVar10);
                                                          if (*(long *)(unaff_x19 + 200) != 0) {
                                                            uVar10 = FUN_070a56c4(*(long *)(
                                                  unaff_x19 + 200),*(undefined8 *)puVar5,1,0);
                                                  *(undefined8 *)(unaff_x19 + 0x108) = uVar10;
                                                  thunk_FUN_03afed3c(unaff_x19 + 0x108,uVar10);
                                                  if (*(long *)(unaff_x19 + 200) != 0) {
                                                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 200)
                                                                          ,*(undefined8 *)puVar6,1,0
                                                                         );
                                                    *(undefined8 *)(unaff_x19 + 0x110) = uVar10;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x110,uVar10);
                                                    if (*(long *)(unaff_x19 + 200) != 0) {
                                                      uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                     200),
                                                                            *(undefined8 *)puVar3,1,
                                                                            0);
                                                      *(undefined8 *)(unaff_x19 + 0x118) = uVar10;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x118,uVar10);
                                                      if (*(long *)(unaff_x19 + 200) != 0) {
                                                        uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                       200),
                                                                              *(undefined8 *)
                                                                               PTR_DAT_084884b0,1,0)
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x120) = uVar10;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x120,uVar10)
                                                        ;
                                                        if (*(long *)(unaff_x19 + 200) != 0) {
                                                          uVar10 = FUN_070a56c4(*(long *)(unaff_x19
                                                                                         + 200),
                                                                                *(undefined8 *)
                                                                                 PTR_DAT_084884b8,1,
                                                                                0);
                                                          *(undefined8 *)(unaff_x19 + 0x128) =
                                                               uVar10;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x128,
                                                                             uVar10);
                                                          if (*(long *)(unaff_x19 + 200) != 0) {
                                                            uVar10 = FUN_070a56c4(*(long *)(
                                                  unaff_x19 + 200),*(undefined8 *)PTR_DAT_084884f0,1
                                                  ,0);
                                                  *(undefined8 *)(unaff_x19 + 0x130) = uVar10;
                                                  thunk_FUN_03afed3c(unaff_x19 + 0x130,uVar10);
                                                  if (*(long *)(unaff_x19 + 200) != 0) {
                                                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 200)
                                                                          ,*(undefined8 *)
                                                                            PTR_DAT_08497628,1,0);
                                                    *(undefined8 *)(unaff_x19 + 0x138) = uVar10;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x138,uVar10);
                                                    if (*(long *)(unaff_x19 + 200) != 0) {
                                                      uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                     200),
                                                                            *(undefined8 *)
                                                                             PTR_DAT_08497610,1,0);
                                                      *(undefined8 *)(unaff_x19 + 0x140) = uVar10;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x140,uVar10);
                                                      if (*(long *)(unaff_x19 + 200) != 0) {
                                                        uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                       200),
                                                                              *(undefined8 *)
                                                                               PTR_DAT_08488518,1,0)
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x148) = uVar10;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x148,uVar10)
                                                        ;
                                                        if (*(long *)(unaff_x19 + 200) != 0) {
                                                          uVar10 = FUN_070a56c4(*(long *)(unaff_x19
                                                                                         + 200),
                                                                                *(undefined8 *)
                                                                                 PTR_DAT_084884c8,1,
                                                                                0);
                                                          *(undefined8 *)(unaff_x19 + 0x150) =
                                                               uVar10;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x150,
                                                                             uVar10);
                                                          if (*(long *)(unaff_x19 + 200) != 0) {
                                                            uVar10 = FUN_070a56c4(*(long *)(
                                                  unaff_x19 + 200),*(undefined8 *)PTR_DAT_08497608,1
                                                  ,0);
                                                  *(undefined8 *)(unaff_x19 + 0x158) = uVar10;
                                                  thunk_FUN_03afed3c(unaff_x19 + 0x158,uVar10);
                                                  if (*(long *)(unaff_x19 + 200) != 0) {
                                                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 + 200)
                                                                          ,*(undefined8 *)
                                                                            PTR_DAT_08497650,1,0);
                                                    *(undefined8 *)(unaff_x19 + 0x160) = uVar10;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x160,uVar10);
                                                    if (*(long *)(unaff_x19 + 200) != 0) {
                                                      uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                     200),
                                                                            *(undefined8 *)
                                                                             PTR_DAT_08497640,1,0);
                                                      *(undefined8 *)(unaff_x19 + 0x168) = uVar10;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x168,uVar10);
                                                      if (*(long *)(unaff_x19 + 200) != 0) {
                                                        uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                       200),
                                                                              *(undefined8 *)
                                                                               PTR_DAT_08497620,1,0)
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x170) = uVar10;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x170,uVar10)
                                                        ;
                                                        if (*(long *)(unaff_x19 + 200) != 0) {
                                                          uVar10 = FUN_070a56c4(*(long *)(unaff_x19
                                                                                         + 200),
                                                                                *(undefined8 *)
                                                                                 PTR_DAT_08497660,1,
                                                                                0);
                                                          *(undefined8 *)(unaff_x19 + 0x178) =
                                                               uVar10;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x178,
                                                                             uVar10);
                                                          if (*(long *)(unaff_x19 + 0x10) != 0) {
                                                            uVar10 = FUN_070a59b8(*(long *)(
                                                  unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_08497618,
                                                  1,0);
                                                  *(undefined8 *)(unaff_x19 + 0x180) = uVar10;
                                                  thunk_FUN_03afed3c(unaff_x19 + 0x180,uVar10);
                                                  if (*(long *)(unaff_x19 + 0x180) != 0) {
                                                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                   0x180),
                                                                          *(undefined8 *)
                                                                           PTR_DAT_08497630,1,0);
                                                    *(undefined8 *)(unaff_x19 + 400) = uVar10;
                                                    thunk_FUN_03afed3c(unaff_x19 + 400,uVar10);
                                                    if (*(long *)(unaff_x19 + 0x180) != 0) {
                                                      uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                     0x180),
                                                                            *(undefined8 *)
                                                                             PTR_DAT_08497638,1,0);
                                                      *(undefined8 *)(unaff_x19 + 0x198) = uVar10;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x198,uVar10);
                                                      if (*(long *)(unaff_x19 + 0x10) != 0) {
                                                        uVar10 = FUN_070a59b8(*(long *)(unaff_x19 +
                                                                                       0x10),
                                                                              *(undefined8 *)
                                                                               PTR_DAT_08488f48,1,0)
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1a0) = uVar10;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x1a0,uVar10)
                                                        ;
                                                        if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                                                          uVar10 = FUN_070a56c4(*(long *)(unaff_x19
                                                                                         + 0x1a0),
                                                                                *(undefined8 *)
                                                                                 PTR_DAT_08488f10,1,
                                                                                0);
                                                          *(undefined8 *)(unaff_x19 + 0x1b0) =
                                                               uVar10;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x1b0,
                                                                             uVar10);
                                                          if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                                                            uVar10 = FUN_070a56c4(*(long *)(
                                                  unaff_x19 + 0x1a0),*(undefined8 *)PTR_DAT_08497648
                                                  ,1,0);
                                                  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar10;
                                                  thunk_FUN_03afed3c(unaff_x19 + 0x1b8,uVar10);
                                                  if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                                                    uVar10 = FUN_070a56c4(*(long *)(unaff_x19 +
                                                                                   0x1a0),
                                                                          *(undefined8 *)
                                                                           PTR_DAT_08497658,1,0);
                                                    *(undefined8 *)(unaff_x19 + 0x1c0) = uVar10;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x1c0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_03a8a9c0();
}


