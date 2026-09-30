/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 02ff137c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  thunk_FUN_01b4f09c();
  puVar4 = StringLiteral_10436;
  puVar3 = StringLiteral_10389;
  if (0xc < *(uint *)(unaff_x20 + -0x60)) {
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)StringLiteral_10436;
    thunk_FUN_01b4f09c();
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_01b4f09c();
    lVar5 = FUN_01b47fd0(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,
                         0xd);
    if (lVar5 == 0) goto LAB_02ff2020;
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = *unaff_x24;
      thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x20));
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x28) = *unaff_x25;
        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x28));
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = *unaff_x26;
          thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x30));
          if (3 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x38) = *unaff_x27;
            thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x38));
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = *unaff_x23;
              thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x40));
              if (5 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)StringLiteral_10450;
                thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x48));
                if (6 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)StringLiteral_10417;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x50));
                  if (7 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)StringLiteral_10454;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x58));
                    if (8 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)StringLiteral_10447;
                      thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x60));
                      if (9 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x68) = *unaff_x22;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x68));
                        puVar3 = StringLiteral_10389;
                        if (10 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x70) = *unaff_x21;
                          thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x70));
                          puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__;
                          if (0xb < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x78) = *unaff_x28;
                            thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x78));
                            puVar2 = StringLiteral_10402;
                            if (0xc < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)puVar4;
                              thunk_FUN_01b4f09c();
                              plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                              *plVar6 = lVar5;
                              thunk_FUN_01b4f09c(plVar6,lVar5);
                              lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
                              *(undefined4 *)(lVar5 + 0x90) = 0x7ed;
                              FUN_03081994(lVar5,0);
                              *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar2;
                              thunk_FUN_01b4f09c();
                              *(undefined8 *)(lVar5 + 0x90) = DAT_00b91dc0;
                              lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,2);
                              if (lVar7 == 0) goto LAB_02ff2020;
                              if (*(int *)(lVar7 + 0x18) != 0) {
                                *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)StringLiteral_10451;
                                thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x20));
                                if (1 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)StringLiteral_10423
                                  ;
                                  thunk_FUN_01b4f09c();
                                  *(long *)(lVar5 + 0x18) = lVar7;
                                  thunk_FUN_01b4f09c((long *)(lVar5 + 0x18),lVar7);
                                  lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,1);
                                  if (lVar7 == 0) {
LAB_02ff2020:
                    /* WARNING: Subroutine does not return */
                                    FUN_01b48178();
                                  }
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    *(undefined8 *)(lVar7 + 0x20) =
                                         *(undefined8 *)StringLiteral_10439;
                                    thunk_FUN_01b4f09c();
                                    *(long *)(lVar5 + 0x28) = lVar7;
                                    thunk_FUN_01b4f09c((long *)(lVar5 + 0x28),lVar7);
                                    lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,1);
                                    puVar4 = StringLiteral_10460;
                                    if (lVar7 == 0) goto LAB_02ff2020;
                                    if (*(int *)(lVar7 + 0x18) != 0) {
                                      *(undefined8 *)(lVar7 + 0x20) =
                                           *(undefined8 *)StringLiteral_10434;
                                      thunk_FUN_01b4f09c();
                                      *(long *)(lVar5 + 0x20) = lVar7;
                                      thunk_FUN_01b4f09c((long *)(lVar5 + 0x20),lVar7);
                                      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)puVar4;
                                      thunk_FUN_01b4f09c();
                                      lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,1);
                                      if (lVar7 == 0) goto LAB_02ff2020;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        *(undefined8 *)(lVar7 + 0x20) =
                                             *(undefined8 *)StringLiteral_10420;
                                        thunk_FUN_01b4f09c();
                                        *(long *)(lVar5 + 0x38) = lVar7;
                                        thunk_FUN_01b4f09c((long *)(lVar5 + 0x38),lVar7);
                                        lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,1);
                                        puVar4 = StringLiteral_10457;
                                        if (lVar7 == 0) goto LAB_02ff2020;
                                        if (*(int *)(lVar7 + 0x18) != 0) {
                                          *(undefined8 *)(lVar7 + 0x20) =
                                               *(undefined8 *)StringLiteral_10457;
                                          thunk_FUN_01b4f09c();
                                          *(long *)(lVar5 + 0x40) = lVar7;
                                          thunk_FUN_01b4f09c((long *)(lVar5 + 0x40),lVar7);
                                          lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,1);
                                          if (lVar7 == 0) goto LAB_02ff2020;
                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                            *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar4;
                                            thunk_FUN_01b4f09c();
                                            *(long *)(lVar5 + 0x48) = lVar7;
                                            thunk_FUN_01b4f09c((long *)(lVar5 + 0x48),lVar7);
                                            lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,7);
                                            if (lVar7 == 0) goto LAB_02ff2020;
                                            if (*(int *)(lVar7 + 0x18) != 0) {
                                              *(undefined8 *)(lVar7 + 0x20) =
                                                   *(undefined8 *)StringLiteral_10422;
                                              thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x20));
                                              if (1 < *(uint *)(lVar7 + 0x18)) {
                                                *(undefined8 *)(lVar7 + 0x28) =
                                                     *(undefined8 *)StringLiteral_10459;
                                                thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x28));
                                                if (2 < *(uint *)(lVar7 + 0x18)) {
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)StringLiteral_10400;
                                                  thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x30));
                                                  if (3 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x38) =
                                                         *(undefined8 *)StringLiteral_10446;
                                                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x38))
                                                    ;
                                                    if (4 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x40) =
                                                           *(undefined8 *)StringLiteral_10404;
                                                      thunk_FUN_01b4f09c((undefined8 *)
                                                                         (lVar7 + 0x40));
                                                      if (5 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x48) =
                                                             *(undefined8 *)StringLiteral_10416;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar7 + 0x48));
                                                        if (6 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x50) =
                                                               *(undefined8 *)StringLiteral_10437;
                                                          thunk_FUN_01b4f09c();
                                                          *(long *)(lVar5 + 0x50) = lVar7;
                                                          thunk_FUN_01b4f09c((long *)(lVar5 + 0x50),
                                                                             lVar7);
                                                          lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1
                                                                               ,7);
                                                          if (lVar7 == 0) goto LAB_02ff2020;
                                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar7 + 0x20) =
                                                                 *(undefined8 *)StringLiteral_10452;
                                                            thunk_FUN_01b4f09c((undefined8 *)
                                                                               (lVar7 + 0x20));
                                                            if (1 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x28) =
                                                                   *(undefined8 *)
                                                                    StringLiteral_10449;
                                                              thunk_FUN_01b4f09c((undefined8 *)
                                                                                 (lVar7 + 0x28));
                                                              if (2 < *(uint *)(lVar7 + 0x18)) {
                                                                *(undefined8 *)(lVar7 + 0x30) =
                                                                     *(undefined8 *)
                                                                      StringLiteral_10453;
                                                                thunk_FUN_01b4f09c((undefined8 *)
                                                                                   (lVar7 + 0x30));
                                                                if (3 < *(uint *)(lVar7 + 0x18)) {
                                                                  *(undefined8 *)(lVar7 + 0x38) =
                                                                       *(undefined8 *)
                                                                        StringLiteral_10429;
                                                                  thunk_FUN_01b4f09c((undefined8 *)
                                                                                     (lVar7 + 0x38))
                                                                  ;
                                                                  if (4 < *(uint *)(lVar7 + 0x18)) {
                                                                    *(undefined8 *)(lVar7 + 0x40) =
                                                                         *(undefined8 *)
                                                                          StringLiteral_10435;
                                                                    thunk_FUN_01b4f09c((undefined8 *
                                                                                       )(lVar7 + 
                                                  0x40));
                                                  if (5 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x48) =
                                                         *(undefined8 *)StringLiteral_10407;
                                                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x48))
                                                    ;
                                                    if (6 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x50) =
                                                           *(undefined8 *)StringLiteral_10413;
                                                      thunk_FUN_01b4f09c();
                                                      *(long *)(lVar5 + 0x58) = lVar7;
                                                      thunk_FUN_01b4f09c((long *)(lVar5 + 0x58),
                                                                         lVar7);
                                                      lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,7);
                                                      if (lVar7 == 0) goto LAB_02ff2020;
                                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar7 + 0x20) =
                                                             *(undefined8 *)StringLiteral_10448;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar7 + 0x20));
                                                        if (1 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x28) =
                                                               *(undefined8 *)StringLiteral_10418;
                                                          thunk_FUN_01b4f09c((undefined8 *)
                                                                             (lVar7 + 0x28));
                                                          if (2 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x30) =
                                                                 *(undefined8 *)StringLiteral_10395;
                                                            thunk_FUN_01b4f09c((undefined8 *)
                                                                               (lVar7 + 0x30));
                                                            if (3 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x38) =
                                                                   *(undefined8 *)
                                                                    StringLiteral_10424;
                                                              thunk_FUN_01b4f09c((undefined8 *)
                                                                                 (lVar7 + 0x38));
                                                              if (4 < *(uint *)(lVar7 + 0x18)) {
                                                                *(undefined8 *)(lVar7 + 0x40) =
                                                                     *(undefined8 *)
                                                                      StringLiteral_10427;
                                                                thunk_FUN_01b4f09c((undefined8 *)
                                                                                   (lVar7 + 0x40));
                                                                if (5 < *(uint *)(lVar7 + 0x18)) {
                                                                  *(undefined8 *)(lVar7 + 0x48) =
                                                                       *(undefined8 *)
                                                                        StringLiteral_10455;
                                                                  thunk_FUN_01b4f09c((undefined8 *)
                                                                                     (lVar7 + 0x48))
                                                                  ;
                                                                  if (6 < *(uint *)(lVar7 + 0x18)) {
                                                                    *(undefined8 *)(lVar7 + 0x50) =
                                                                         *(undefined8 *)
                                                                          StringLiteral_10403;
                                                                    thunk_FUN_01b4f09c();
                                                                    *(long *)(lVar5 + 0x60) = lVar7;
                                                                    thunk_FUN_01b4f09c((long *)(
                                                  lVar5 + 0x60),lVar7);
                                                  lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,0xd);
                                                  if (lVar7 == 0) goto LAB_02ff2020;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)StringLiteral_10398;
                                                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    if (1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x28) =
                                                           *(undefined8 *)StringLiteral_10431;
                                                      thunk_FUN_01b4f09c((undefined8 *)
                                                                         (lVar7 + 0x28));
                                                      if (2 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x30) =
                                                             *(undefined8 *)StringLiteral_10405;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar7 + 0x30));
                                                        if (3 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x38) =
                                                               *(undefined8 *)StringLiteral_10440;
                                                          thunk_FUN_01b4f09c((undefined8 *)
                                                                             (lVar7 + 0x38));
                                                          puVar4 = StringLiteral_10433;
                                                          if (4 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x40) =
                                                                 *(undefined8 *)StringLiteral_10433;
                                                            thunk_FUN_01b4f09c((undefined8 *)
                                                                               (lVar7 + 0x40));
                                                            if (5 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x48) =
                                                                   *(undefined8 *)
                                                                    StringLiteral_10442;
                                                              thunk_FUN_01b4f09c((undefined8 *)
                                                                                 (lVar7 + 0x48));
                                                              if (6 < *(uint *)(lVar7 + 0x18)) {
                                                                *(undefined8 *)(lVar7 + 0x50) =
                                                                     *(undefined8 *)
                                                                      StringLiteral_10415;
                                                                thunk_FUN_01b4f09c((undefined8 *)
                                                                                   (lVar7 + 0x50));
                                                                if (7 < *(uint *)(lVar7 + 0x18)) {
                                                                  *(undefined8 *)(lVar7 + 0x58) =
                                                                       *(undefined8 *)
                                                                        StringLiteral_10414;
                                                                  thunk_FUN_01b4f09c((undefined8 *)
                                                                                     (lVar7 + 0x58))
                                                                  ;
                                                                  if (8 < *(uint *)(lVar7 + 0x18)) {
                                                                    *(undefined8 *)(lVar7 + 0x60) =
                                                                         *(undefined8 *)
                                                                          StringLiteral_10458;
                                                                    thunk_FUN_01b4f09c((undefined8 *
                                                                                       )(lVar7 + 
                                                  0x60));
                                                  if (9 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x68) =
                                                         *(undefined8 *)StringLiteral_10430;
                                                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x68))
                                                    ;
                                                    if (10 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x70) =
                                                           *(undefined8 *)StringLiteral_10406;
                                                      thunk_FUN_01b4f09c((undefined8 *)
                                                                         (lVar7 + 0x70));
                                                      if (0xb < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x78) =
                                                             *(undefined8 *)StringLiteral_10425;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar7 + 0x78));
                                                        puVar2 = 
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__
                                                  ;
                                                  if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x80) =
                                                         **(undefined8 **)
                                                           (*(long *)
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__
                                                  + 0xb8);
                                                  thunk_FUN_01b4f09c();
                                                  *(long *)(lVar5 + 0x68) = lVar7;
                                                  thunk_FUN_01b4f09c((long *)(lVar5 + 0x68),lVar7);
                                                  lVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,0xd);
                                                  if (lVar7 == 0) goto LAB_02ff2020;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)StringLiteral_10399;
                                                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    if (1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x28) =
                                                           *(undefined8 *)StringLiteral_10401;
                                                      thunk_FUN_01b4f09c((undefined8 *)
                                                                         (lVar7 + 0x28));
                                                      if (2 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x30) =
                                                             *(undefined8 *)StringLiteral_10409;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar7 + 0x30));
                                                        if (3 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x38) =
                                                               *(undefined8 *)StringLiteral_10444;
                                                          thunk_FUN_01b4f09c((undefined8 *)
                                                                             (lVar7 + 0x38));
                                                          if (4 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x40) =
                                                                 *(undefined8 *)puVar4;
                                                            thunk_FUN_01b4f09c((undefined8 *)
                                                                               (lVar7 + 0x40));
                                                            if (5 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0x48) =
                                                                   *(undefined8 *)
                                                                    StringLiteral_10410;
                                                              thunk_FUN_01b4f09c((undefined8 *)
                                                                                 (lVar7 + 0x48));
                                                              if (6 < *(uint *)(lVar7 + 0x18)) {
                                                                *(undefined8 *)(lVar7 + 0x50) =
                                                                     *(undefined8 *)
                                                                      StringLiteral_10421;
                                                                thunk_FUN_01b4f09c((undefined8 *)
                                                                                   (lVar7 + 0x50));
                                                                if (7 < *(uint *)(lVar7 + 0x18)) {
                                                                  *(undefined8 *)(lVar7 + 0x58) =
                                                                       *(undefined8 *)
                                                                        StringLiteral_10428;
                                                                  thunk_FUN_01b4f09c((undefined8 *)
                                                                                     (lVar7 + 0x58))
                                                                  ;
                                                                  if (8 < *(uint *)(lVar7 + 0x18)) {
                                                                    *(undefined8 *)(lVar7 + 0x60) =
                                                                         *(undefined8 *)
                                                                          StringLiteral_10411;
                                                                    thunk_FUN_01b4f09c((undefined8 *
                                                                                       )(lVar7 + 
                                                  0x60));
                                                  if (9 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x68) =
                                                         *(undefined8 *)StringLiteral_10445;
                                                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x68))
                                                    ;
                                                    if (10 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x70) =
                                                           *(undefined8 *)StringLiteral_10412;
                                                      thunk_FUN_01b4f09c((undefined8 *)
                                                                         (lVar7 + 0x70));
                                                      if (0xb < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x78) =
                                                             *(undefined8 *)StringLiteral_10443;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar7 + 0x78));
                                                        if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x80) =
                                                               **(undefined8 **)
                                                                 (*(long *)puVar2 + 0xb8);
                                                          thunk_FUN_01b4f09c();
                                                          plVar6 = (long *)(lVar5 + 0x70);
                                                          *plVar6 = lVar7;
                                                          thunk_FUN_01b4f09c(plVar6,lVar7);
                                                          *(undefined8 *)(lVar5 + 0x78) =
                                                               *(undefined8 *)(lVar5 + 0x68);
                                                          thunk_FUN_01b4f09c();
                                                          *(long *)(lVar5 + 0x80) = *plVar6;
                                                          thunk_FUN_01b4f09c();
                                                          *(undefined8 *)(lVar5 + 0x88) =
                                                               *(undefined8 *)(lVar5 + 0x68);
                                                          thunk_FUN_01b4f09c();
                                                          *(undefined1 *)(lVar5 + 0x98) = 0;
                                                          **(long **)(*(long *)puVar3 + 0xb8) =
                                                               lVar5;
                                                          thunk_FUN_01b4f09c(*(undefined8 *)
                                                                              (*(long *)puVar3 +
                                                                              0xb8),lVar5);
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
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_01b48180();
}


