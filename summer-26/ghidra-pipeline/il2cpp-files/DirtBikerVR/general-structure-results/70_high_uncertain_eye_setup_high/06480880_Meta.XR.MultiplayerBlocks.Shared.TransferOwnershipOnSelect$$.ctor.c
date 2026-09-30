/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$.ctor
ENTRY_POINT: 06480880
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect___ctor(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  FUN_05e42d5c();
  if (unaff_x21 != 0) {
    FUN_070a11ec();
    if (*unaff_x20 != 0) {
      lVar4 = *(long *)(*unaff_x20 + 0x38);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
      if (uVar2 != 0) {
        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
        do {
          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480910;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar2 != 0);
      }
      FUN_03ac43c4();
LAB_06480910:
      FUN_05e42d5c(uVar1);
      if (lVar4 != 0) {
        FUN_070a134c(lVar4,uVar1,0);
        if (*unaff_x20 != 0) {
          lVar4 = *(long *)(*unaff_x20 + 0x38);
          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
          if (uVar2 != 0) {
            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
            do {
              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_064809a0;
              uVar2 = uVar2 - 1;
              lVar3 = lVar3 + 0x10;
            } while (uVar2 != 0);
          }
          FUN_03ac43c4();
LAB_064809a0:
          FUN_05e42d5c(uVar1);
          if (lVar4 != 0) {
            FUN_070a129c(lVar4,uVar1,0);
            if (*unaff_x20 != 0) {
              lVar4 = *(long *)(*unaff_x20 + 0x40);
              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
              if (uVar2 != 0) {
                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                do {
                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480a30;
                  uVar2 = uVar2 - 1;
                  lVar3 = lVar3 + 0x10;
                } while (uVar2 != 0);
              }
              FUN_03ac43c4();
LAB_06480a30:
              FUN_05e42d5c(uVar1);
              if (lVar4 != 0) {
                FUN_070a11ec(lVar4,uVar1,0);
                if (*unaff_x20 != 0) {
                  lVar4 = *(long *)(*unaff_x20 + 0x40);
                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                  if (uVar2 != 0) {
                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                    do {
                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480ac0;
                      uVar2 = uVar2 - 1;
                      lVar3 = lVar3 + 0x10;
                    } while (uVar2 != 0);
                  }
                  FUN_03ac43c4();
LAB_06480ac0:
                  FUN_05e42d5c(uVar1);
                  if (lVar4 != 0) {
                    FUN_070a134c(lVar4,uVar1,0);
                    if (*unaff_x20 != 0) {
                      lVar4 = *(long *)(*unaff_x20 + 0x40);
                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                      if (uVar2 != 0) {
                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                        do {
                          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480b50;
                          uVar2 = uVar2 - 1;
                          lVar3 = lVar3 + 0x10;
                        } while (uVar2 != 0);
                      }
                      FUN_03ac43c4();
LAB_06480b50:
                      FUN_05e42d5c(uVar1);
                      if (lVar4 != 0) {
                        FUN_070a129c(lVar4,uVar1,0);
                        if (*unaff_x20 != 0) {
                          lVar4 = *(long *)(*unaff_x20 + 0x48);
                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                          if (uVar2 != 0) {
                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                            do {
                              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480be0;
                              uVar2 = uVar2 - 1;
                              lVar3 = lVar3 + 0x10;
                            } while (uVar2 != 0);
                          }
                          FUN_03ac43c4();
LAB_06480be0:
                          FUN_05e42d5c(uVar1);
                          if (lVar4 != 0) {
                            FUN_070a11ec(lVar4,uVar1,0);
                            if (*unaff_x20 != 0) {
                              lVar4 = *(long *)(*unaff_x20 + 0x48);
                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                              if (uVar2 != 0) {
                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                do {
                                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480c70;
                                  uVar2 = uVar2 - 1;
                                  lVar3 = lVar3 + 0x10;
                                } while (uVar2 != 0);
                              }
                              FUN_03ac43c4();
LAB_06480c70:
                              FUN_05e42d5c(uVar1);
                              if (lVar4 != 0) {
                                FUN_070a134c(lVar4,uVar1,0);
                                if (*unaff_x20 != 0) {
                                  lVar4 = *(long *)(*unaff_x20 + 0x48);
                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                  if (uVar2 != 0) {
                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                    do {
                                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06480d00;
                                      uVar2 = uVar2 - 1;
                                      lVar3 = lVar3 + 0x10;
                                    } while (uVar2 != 0);
                                  }
                                  FUN_03ac43c4();
LAB_06480d00:
                                  FUN_05e42d5c(uVar1);
                                  if (lVar4 != 0) {
                                    FUN_070a129c(lVar4,uVar1,0);
                                    if (*unaff_x20 != 0) {
                                      lVar4 = *(long *)(*unaff_x20 + 0x50);
                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                      if (uVar2 != 0) {
                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                        do {
                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                          goto LAB_06480d90;
                                          uVar2 = uVar2 - 1;
                                          lVar3 = lVar3 + 0x10;
                                        } while (uVar2 != 0);
                                      }
                                      FUN_03ac43c4();
LAB_06480d90:
                                      FUN_05e42d5c(uVar1);
                                      if (lVar4 != 0) {
                                        FUN_070a11ec(lVar4,uVar1,0);
                                        if (*unaff_x20 != 0) {
                                          lVar4 = *(long *)(*unaff_x20 + 0x50);
                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                          if (uVar2 != 0) {
                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                            do {
                                              if (*(long *)(lVar3 + -8) == *unaff_x24)
                                              goto LAB_06480e20;
                                              uVar2 = uVar2 - 1;
                                              lVar3 = lVar3 + 0x10;
                                            } while (uVar2 != 0);
                                          }
                                          FUN_03ac43c4();
LAB_06480e20:
                                          FUN_05e42d5c(uVar1);
                                          if (lVar4 != 0) {
                                            FUN_070a134c(lVar4,uVar1,0);
                                            if (*unaff_x20 != 0) {
                                              lVar4 = *(long *)(*unaff_x20 + 0x50);
                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                              if (uVar2 != 0) {
                                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                do {
                                                  if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                  goto LAB_06480eb0;
                                                  uVar2 = uVar2 - 1;
                                                  lVar3 = lVar3 + 0x10;
                                                } while (uVar2 != 0);
                                              }
                                              FUN_03ac43c4();
LAB_06480eb0:
                                              FUN_05e42d5c(uVar1);
                                              if (lVar4 != 0) {
                                                FUN_070a129c(lVar4,uVar1,0);
                                                if (*unaff_x20 != 0) {
                                                  lVar4 = *(long *)(*unaff_x20 + 0x58);
                                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06480f40;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06480f40:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a11ec(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x58);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06480fd0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06480fd0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a134c(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x58);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06481060;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481060:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a129c(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x60);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_064810f0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064810f0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a11ec(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x60);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06481180;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481180:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a134c(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x60);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06481210;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481210:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a129c(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x68);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_064812a0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064812a0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a11ec(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x68);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06481330;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481330:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a134c(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x68);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064813c0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064813c0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a129c(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x70);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06481450;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481450:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a11ec(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x70);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_064814e0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064814e0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a134c(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x70);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06481570;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481570:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a129c(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x78);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06481600;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481600:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a11ec(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x78);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06481690;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481690:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a134c(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x78);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06481720;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481720:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a129c(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x80);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_064817b0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064817b0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a11ec(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x80);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06481840;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481840:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a134c(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x80);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_064818d0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_064818d0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a129c(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x88);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto FUN_06481960;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
FUN_06481960:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a11ec(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x88);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_064819f0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064819f0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a134c(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x88);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06481a80;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481a80:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a129c(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x90);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06481b10;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481b10:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a11ec(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x90);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06481ba0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481ba0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a134c(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x90);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06481c30;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481c30:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a129c(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x98);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06481cc0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481cc0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a11ec(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x98);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06481d50;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481d50:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a134c(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x98);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06481de0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481de0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a129c(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0xa0);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06481e70;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481e70:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a11ec(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xa0);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06481f00;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481f00:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a134c(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xa0);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06481f90;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481f90:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a129c(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0xa8);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06482020;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06482020:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a11ec(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0xa8);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_064820b0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064820b0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a134c(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xa8);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06482140;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06482140:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a129c(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xb0);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_064821d0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_064821d0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a11ec(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0xb0);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06482260;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06482260:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a134c(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0xb0);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_064822f0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064822f0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a129c(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xb8);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06482380;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06482380:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a11ec(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xb8);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06482410;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06482410:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a134c(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0xb8);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_064824a0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064824a0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a129c(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0xc0);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06482530;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06482530:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a11ec(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xc0);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064825c0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064825c0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a134c(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xc0);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06482650;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06482650:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a129c(lVar4,uVar1,0);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


