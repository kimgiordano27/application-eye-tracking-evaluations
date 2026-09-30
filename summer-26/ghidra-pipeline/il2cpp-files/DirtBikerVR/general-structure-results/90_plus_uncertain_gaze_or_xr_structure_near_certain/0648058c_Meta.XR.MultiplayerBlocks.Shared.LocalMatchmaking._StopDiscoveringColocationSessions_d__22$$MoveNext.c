/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$MoveNext
ENTRY_POINT: 0648058c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__MoveNext
               (undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long in_x9;
  ulong uVar3;
  long in_x10;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  do {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      FUN_03ac43c4();
      break;
    }
    plVar1 = (long *)(in_x10 + 8);
    in_x10 = in_x10 + 0x10;
  } while (*plVar1 != param_2);
  FUN_05e42d5c();
  if (unaff_x21 != 0) {
    FUN_070a134c();
    if (*unaff_x20 != 0) {
      lVar5 = *(long *)(*unaff_x20 + 0x28);
      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
      if (uVar3 != 0) {
        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
        do {
          if (*(long *)(lVar4 + -8) == *unaff_x24) goto LAB_06480640;
          uVar3 = uVar3 - 1;
          lVar4 = lVar4 + 0x10;
        } while (uVar3 != 0);
      }
      FUN_03ac43c4();
LAB_06480640:
      FUN_05e42d5c(uVar2);
      if (lVar5 != 0) {
        FUN_070a129c(lVar5,uVar2,0);
        if (*unaff_x20 != 0) {
          lVar5 = *(long *)(*unaff_x20 + 0x30);
          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
          uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
          if (uVar3 != 0) {
            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
            do {
              if (*(long *)(lVar4 + -8) == *unaff_x24) goto LAB_064806d0;
              uVar3 = uVar3 - 1;
              lVar4 = lVar4 + 0x10;
            } while (uVar3 != 0);
          }
          FUN_03ac43c4();
LAB_064806d0:
          FUN_05e42d5c(uVar2);
          if (lVar5 != 0) {
            FUN_070a11ec(lVar5,uVar2,0);
            if (*unaff_x20 != 0) {
              lVar5 = *(long *)(*unaff_x20 + 0x30);
              uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
              uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
              if (uVar3 != 0) {
                lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                do {
                  if (*(long *)(lVar4 + -8) == *unaff_x24) goto LAB_06480760;
                  uVar3 = uVar3 - 1;
                  lVar4 = lVar4 + 0x10;
                } while (uVar3 != 0);
              }
              FUN_03ac43c4();
LAB_06480760:
              FUN_05e42d5c(uVar2);
              if (lVar5 != 0) {
                FUN_070a134c(lVar5,uVar2,0);
                if (*unaff_x20 != 0) {
                  lVar5 = *(long *)(*unaff_x20 + 0x30);
                  uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                  if (uVar3 != 0) {
                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                    do {
                      if (*(long *)(lVar4 + -8) == *unaff_x24) goto LAB_064807f0;
                      uVar3 = uVar3 - 1;
                      lVar4 = lVar4 + 0x10;
                    } while (uVar3 != 0);
                  }
                  FUN_03ac43c4();
LAB_064807f0:
                  FUN_05e42d5c(uVar2);
                  if (lVar5 != 0) {
                    FUN_070a129c(lVar5,uVar2,0);
                    if (*unaff_x20 != 0) {
                      lVar5 = *(long *)(*unaff_x20 + 0x38);
                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                      if (uVar3 != 0) {
                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                        do {
                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                          goto Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect___ctor;
                          uVar3 = uVar3 - 1;
                          lVar4 = lVar4 + 0x10;
                        } while (uVar3 != 0);
                      }
                      FUN_03ac43c4();
Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect___ctor:
                      FUN_05e42d5c(uVar2);
                      if (lVar5 != 0) {
                        FUN_070a11ec(lVar5,uVar2,0);
                        if (*unaff_x20 != 0) {
                          lVar5 = *(long *)(*unaff_x20 + 0x38);
                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                          uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                          if (uVar3 != 0) {
                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                            do {
                              if (*(long *)(lVar4 + -8) == *unaff_x24) goto LAB_06480910;
                              uVar3 = uVar3 - 1;
                              lVar4 = lVar4 + 0x10;
                            } while (uVar3 != 0);
                          }
                          FUN_03ac43c4();
LAB_06480910:
                          FUN_05e42d5c(uVar2);
                          if (lVar5 != 0) {
                            FUN_070a134c(lVar5,uVar2,0);
                            if (*unaff_x20 != 0) {
                              lVar5 = *(long *)(*unaff_x20 + 0x38);
                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                              uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                              if (uVar3 != 0) {
                                lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                do {
                                  if (*(long *)(lVar4 + -8) == *unaff_x24) goto LAB_064809a0;
                                  uVar3 = uVar3 - 1;
                                  lVar4 = lVar4 + 0x10;
                                } while (uVar3 != 0);
                              }
                              FUN_03ac43c4();
LAB_064809a0:
                              FUN_05e42d5c(uVar2);
                              if (lVar5 != 0) {
                                FUN_070a129c(lVar5,uVar2,0);
                                if (*unaff_x20 != 0) {
                                  lVar5 = *(long *)(*unaff_x20 + 0x40);
                                  uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                  if (uVar3 != 0) {
                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                    do {
                                      if (*(long *)(lVar4 + -8) == *unaff_x24) goto LAB_06480a30;
                                      uVar3 = uVar3 - 1;
                                      lVar4 = lVar4 + 0x10;
                                    } while (uVar3 != 0);
                                  }
                                  FUN_03ac43c4();
LAB_06480a30:
                                  FUN_05e42d5c(uVar2);
                                  if (lVar5 != 0) {
                                    FUN_070a11ec(lVar5,uVar2,0);
                                    if (*unaff_x20 != 0) {
                                      lVar5 = *(long *)(*unaff_x20 + 0x40);
                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                      if (uVar3 != 0) {
                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                        do {
                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                          goto LAB_06480ac0;
                                          uVar3 = uVar3 - 1;
                                          lVar4 = lVar4 + 0x10;
                                        } while (uVar3 != 0);
                                      }
                                      FUN_03ac43c4();
LAB_06480ac0:
                                      FUN_05e42d5c(uVar2);
                                      if (lVar5 != 0) {
                                        FUN_070a134c(lVar5,uVar2,0);
                                        if (*unaff_x20 != 0) {
                                          lVar5 = *(long *)(*unaff_x20 + 0x40);
                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                          uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                          if (uVar3 != 0) {
                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                            do {
                                              if (*(long *)(lVar4 + -8) == *unaff_x24)
                                              goto LAB_06480b50;
                                              uVar3 = uVar3 - 1;
                                              lVar4 = lVar4 + 0x10;
                                            } while (uVar3 != 0);
                                          }
                                          FUN_03ac43c4();
LAB_06480b50:
                                          FUN_05e42d5c(uVar2);
                                          if (lVar5 != 0) {
                                            FUN_070a129c(lVar5,uVar2,0);
                                            if (*unaff_x20 != 0) {
                                              lVar5 = *(long *)(*unaff_x20 + 0x48);
                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                              uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                              if (uVar3 != 0) {
                                                lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                do {
                                                  if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                  goto LAB_06480be0;
                                                  uVar3 = uVar3 - 1;
                                                  lVar4 = lVar4 + 0x10;
                                                } while (uVar3 != 0);
                                              }
                                              FUN_03ac43c4();
LAB_06480be0:
                                              FUN_05e42d5c(uVar2);
                                              if (lVar5 != 0) {
                                                FUN_070a11ec(lVar5,uVar2,0);
                                                if (*unaff_x20 != 0) {
                                                  lVar5 = *(long *)(*unaff_x20 + 0x48);
                                                  uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_06480c70;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06480c70:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a134c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x48);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06480d00;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06480d00:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a129c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x50);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06480d90;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06480d90:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a11ec(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x50);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_06480e20;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06480e20:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a134c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0x50);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_06480eb0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06480eb0:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a129c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x58);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06480f40;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06480f40:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a11ec(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x58);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06480fd0;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06480fd0:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a134c(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x58);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_06481060;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481060:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a129c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0x60);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_064810f0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064810f0:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a11ec(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x60);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06481180;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481180:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a134c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x60);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06481210;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481210:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a129c(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x68);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_064812a0;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064812a0:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a11ec(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0x68);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_06481330;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481330:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a134c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x68);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_064813c0;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_064813c0:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a129c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x70);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06481450;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481450:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a11ec(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x70);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_064814e0;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064814e0:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a134c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0x70);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_06481570;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481570:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a129c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x78);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06481600;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481600:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a11ec(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x78);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06481690;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481690:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a134c(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x78);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_06481720;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481720:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a129c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0x80);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_064817b0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064817b0:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a11ec(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x80);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06481840;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481840:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a134c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x80);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_064818d0;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064818d0:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a129c(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x88);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto FUN_06481960;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
FUN_06481960:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a11ec(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0x88);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_064819f0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064819f0:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a134c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x88);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06481a80;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481a80:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a129c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x90);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06481b10;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481b10:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a11ec(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x90);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_06481ba0;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481ba0:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a134c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0x90);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_06481c30;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481c30:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a129c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0x98);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06481cc0;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481cc0:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a11ec(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0x98);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06481d50;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481d50:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a134c(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0x98);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_06481de0;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06481de0:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a129c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0xa0);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_06481e70;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06481e70:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a11ec(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0xa0);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06481f00;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06481f00:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a134c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0xa0);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06481f90;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06481f90:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a129c(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0xa8);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_06482020;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06482020:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a11ec(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0xa8);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_064820b0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064820b0:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a134c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0xa8);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06482140;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06482140:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a129c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0xb0);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_064821d0;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064821d0:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a11ec(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0xb0);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_06482260;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06482260:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a134c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0xb0);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_064822f0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064822f0:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a129c(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0xb8);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_06482380;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06482380:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a11ec(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0xb8);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06482410;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06482410:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a134c(lVar5,uVar2,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar5 = *(long *)(*unaff_x20 + 0xb8);
                                                              uVar2 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar4 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar4 + -8) ==
                                                                      *unaff_x24) goto LAB_064824a0;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar4 = lVar4 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064824a0:
                                                              FUN_05e42d5c(uVar2);
                                                              if (lVar5 != 0) {
                                                                FUN_070a129c(lVar5,uVar2,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar5 = *(long *)(*unaff_x20 +
                                                                                   0xc0);
                                                                  uVar2 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                      goto LAB_06482530;
                                                      uVar3 = uVar3 - 1;
                                                      lVar4 = lVar4 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06482530:
                                                  FUN_05e42d5c(uVar2);
                                                  if (lVar5 != 0) {
                                                    FUN_070a11ec(lVar5,uVar2,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar5 = *(long *)(*unaff_x20 + 0xc0);
                                                      uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar4 + -8) == *unaff_x24)
                                                          goto LAB_064825c0;
                                                          uVar3 = uVar3 - 1;
                                                          lVar4 = lVar4 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_064825c0:
                                                      FUN_05e42d5c(uVar2);
                                                      if (lVar5 != 0) {
                                                        FUN_070a134c(lVar5,uVar2,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar5 = *(long *)(*unaff_x20 + 0xc0);
                                                          uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar4 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar4 + -8) ==
                                                                  *unaff_x24) goto LAB_06482650;
                                                              uVar3 = uVar3 - 1;
                                                              lVar4 = lVar4 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06482650:
                                                          FUN_05e42d5c(uVar2);
                                                          if (lVar5 != 0) {
                                                            FUN_070a129c(lVar5,uVar2,0);
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
                    }
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


