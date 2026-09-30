/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopDiscoveringColocationSessions
ENTRY_POINT: 0647e8b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopDiscoveringColocationSessions(void)

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
    FUN_070a12f4();
    if (*unaff_x20 != 0) {
      lVar4 = *(long *)(*unaff_x20 + 0x40);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
      if (uVar2 != 0) {
        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
        do {
          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647e930;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar2 != 0);
      }
      FUN_03ac43c4();
LAB_0647e930:
      FUN_05e42d5c(uVar1);
      if (lVar4 != 0) {
        FUN_070a1244(lVar4,uVar1,0);
        if (*unaff_x20 != 0) {
          lVar4 = *(long *)(*unaff_x20 + 0x48);
          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
          if (uVar2 != 0) {
            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
            do {
              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647e9c0;
              uVar2 = uVar2 - 1;
              lVar3 = lVar3 + 0x10;
            } while (uVar2 != 0);
          }
          FUN_03ac43c4();
LAB_0647e9c0:
          FUN_05e42d5c(uVar1);
          if (lVar4 != 0) {
            FUN_070a1194(lVar4,uVar1,0);
            if (*unaff_x20 != 0) {
              lVar4 = *(long *)(*unaff_x20 + 0x48);
              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
              if (uVar2 != 0) {
                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                do {
                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647ea50;
                  uVar2 = uVar2 - 1;
                  lVar3 = lVar3 + 0x10;
                } while (uVar2 != 0);
              }
              FUN_03ac43c4();
LAB_0647ea50:
              FUN_05e42d5c(uVar1);
              if (lVar4 != 0) {
                FUN_070a12f4(lVar4,uVar1,0);
                if (*unaff_x20 != 0) {
                  lVar4 = *(long *)(*unaff_x20 + 0x48);
                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                  if (uVar2 != 0) {
                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                    do {
                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647eae0;
                      uVar2 = uVar2 - 1;
                      lVar3 = lVar3 + 0x10;
                    } while (uVar2 != 0);
                  }
                  FUN_03ac43c4();
LAB_0647eae0:
                  FUN_05e42d5c(uVar1);
                  if (lVar4 != 0) {
                    FUN_070a1244(lVar4,uVar1,0);
                    if (*unaff_x20 != 0) {
                      lVar4 = *(long *)(*unaff_x20 + 0x50);
                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                      if (uVar2 != 0) {
                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                        do {
                          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647eb70;
                          uVar2 = uVar2 - 1;
                          lVar3 = lVar3 + 0x10;
                        } while (uVar2 != 0);
                      }
                      FUN_03ac43c4();
LAB_0647eb70:
                      FUN_05e42d5c(uVar1);
                      if (lVar4 != 0) {
                        FUN_070a1194(lVar4,uVar1,0);
                        if (*unaff_x20 != 0) {
                          lVar4 = *(long *)(*unaff_x20 + 0x50);
                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                          if (uVar2 != 0) {
                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                            do {
                              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647ec00;
                              uVar2 = uVar2 - 1;
                              lVar3 = lVar3 + 0x10;
                            } while (uVar2 != 0);
                          }
                          FUN_03ac43c4();
LAB_0647ec00:
                          FUN_05e42d5c(uVar1);
                          if (lVar4 != 0) {
                            FUN_070a12f4(lVar4,uVar1,0);
                            if (*unaff_x20 != 0) {
                              lVar4 = *(long *)(*unaff_x20 + 0x50);
                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                              if (uVar2 != 0) {
                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                do {
                                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647ec90;
                                  uVar2 = uVar2 - 1;
                                  lVar3 = lVar3 + 0x10;
                                } while (uVar2 != 0);
                              }
                              FUN_03ac43c4();
LAB_0647ec90:
                              FUN_05e42d5c(uVar1);
                              if (lVar4 != 0) {
                                FUN_070a1244(lVar4,uVar1,0);
                                if (*unaff_x20 != 0) {
                                  lVar4 = *(long *)(*unaff_x20 + 0x58);
                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                  if (uVar2 != 0) {
                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                    do {
                                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0647ed20;
                                      uVar2 = uVar2 - 1;
                                      lVar3 = lVar3 + 0x10;
                                    } while (uVar2 != 0);
                                  }
                                  FUN_03ac43c4();
LAB_0647ed20:
                                  FUN_05e42d5c(uVar1);
                                  if (lVar4 != 0) {
                                    FUN_070a1194(lVar4,uVar1,0);
                                    if (*unaff_x20 != 0) {
                                      lVar4 = *(long *)(*unaff_x20 + 0x58);
                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                      if (uVar2 != 0) {
                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                        do {
                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                          goto LAB_0647edb0;
                                          uVar2 = uVar2 - 1;
                                          lVar3 = lVar3 + 0x10;
                                        } while (uVar2 != 0);
                                      }
                                      FUN_03ac43c4();
LAB_0647edb0:
                                      FUN_05e42d5c(uVar1);
                                      if (lVar4 != 0) {
                                        FUN_070a12f4(lVar4,uVar1,0);
                                        if (*unaff_x20 != 0) {
                                          lVar4 = *(long *)(*unaff_x20 + 0x58);
                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                          if (uVar2 != 0) {
                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                            do {
                                              if (*(long *)(lVar3 + -8) == *unaff_x24)
                                              goto LAB_0647ee40;
                                              uVar2 = uVar2 - 1;
                                              lVar3 = lVar3 + 0x10;
                                            } while (uVar2 != 0);
                                          }
                                          FUN_03ac43c4();
LAB_0647ee40:
                                          FUN_05e42d5c(uVar1);
                                          if (lVar4 != 0) {
                                            FUN_070a1244(lVar4,uVar1,0);
                                            if (*unaff_x20 != 0) {
                                              lVar4 = *(long *)(*unaff_x20 + 0x60);
                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                              if (uVar2 != 0) {
                                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                do {
                                                  if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                  goto LAB_0647eed0;
                                                  uVar2 = uVar2 - 1;
                                                  lVar3 = lVar3 + 0x10;
                                                } while (uVar2 != 0);
                                              }
                                              FUN_03ac43c4();
LAB_0647eed0:
                                              FUN_05e42d5c(uVar1);
                                              if (lVar4 != 0) {
                                                FUN_070a1194(lVar4,uVar1,0);
                                                if (*unaff_x20 != 0) {
                                                  lVar4 = *(long *)(*unaff_x20 + 0x60);
                                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_0647ef60;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_0647ef60:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x60);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647eff0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647eff0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_0647f080;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647f080:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
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
                                                                      *unaff_x24) goto LAB_0647f110;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_0647f110:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
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
                                                      goto LAB_0647f1a0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_0647f1a0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x70);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647f230;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647f230:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_0647f2c0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647f2c0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a12f4(lVar4,uVar1,0);
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
                                                                      *unaff_x24) goto LAB_0647f350;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_0647f350:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1244(lVar4,uVar1,0);
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
                                                      goto LAB_0647f3e0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_0647f3e0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1194(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x78);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647f470;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647f470:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a12f4(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_0647f500;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647f500:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1244(lVar4,uVar1,0);
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
                                                                      *unaff_x24) goto LAB_0647f590;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_0647f590:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1194(lVar4,uVar1,0);
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
                                                      goto LAB_0647f620;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_0647f620:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x80);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647f6b0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647f6b0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_0647f740;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647f740:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
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
                                                                      *unaff_x24) goto LAB_0647f7d0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_0647f7d0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
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
                                                      goto LAB_0647f860;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_0647f860:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x90);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647f8f0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647f8f0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_0647f980;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647f980:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a12f4(lVar4,uVar1,0);
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
                                                                      *unaff_x24)
                                                                  goto 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAsHost>d__14__MoveNext
                                                  ;
                                                  uVar2 = uVar2 - 1;
                                                  lVar3 = lVar3 + 0x10;
                                                  } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAsHost>d__14__MoveNext:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x98);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647faa0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647faa0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_0647fb30;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647fb30:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a12f4(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x98);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_0647fbc0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_0647fbc0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1244(lVar4,uVar1,0);
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
                                                      goto LAB_0647fc50;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_0647fc50:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1194(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xa0);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647fce0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647fce0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a12f4(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0xa0);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_0647fd70;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647fd70:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1244(lVar4,uVar1,0);
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
                                                                      *unaff_x24) goto LAB_0647fe00;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_0647fe00:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1194(lVar4,uVar1,0);
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
                                                      goto LAB_0647fe90;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_0647fe90:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xa8);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_0647ff20;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_0647ff20:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_0647ffb0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_0647ffb0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
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
                                                                      *unaff_x24) goto LAB_06480040;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06480040:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xb0);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064800d0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064800d0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xb8);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06480160;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06480160:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
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
                                                                  *unaff_x24) goto LAB_064801f0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064801f0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a12f4(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0xb8);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06480280;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06480280:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1244(lVar4,uVar1,0);
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
                                                      goto LAB_06480310;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06480310:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1194(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0xc0);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_064803a0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_064803a0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a12f4(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0xc0);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06480430;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06480430:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1244(lVar4,uVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


