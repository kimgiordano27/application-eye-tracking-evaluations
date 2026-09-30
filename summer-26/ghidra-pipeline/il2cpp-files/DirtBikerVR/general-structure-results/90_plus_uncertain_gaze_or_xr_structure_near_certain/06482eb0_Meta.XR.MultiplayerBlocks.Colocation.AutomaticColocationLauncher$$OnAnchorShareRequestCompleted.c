/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 06482eb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long in_x9;
  ulong uVar2;
  long in_x10;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      FUN_03ac43c4();
      break;
    }
    in_ZR = *(long *)(in_x10 + 8) == param_2;
    in_x10 = in_x10 + 0x10;
  }
  FUN_05e42d5c();
  if (unaff_x21 != 0) {
    FUN_070a12f4();
    if (*unaff_x20 != 0) {
      lVar4 = *(long *)(*unaff_x20 + 0xe0);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
      if (uVar2 != 0) {
        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
        do {
          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06482f70;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar2 != 0);
      }
      FUN_03ac43c4();
LAB_06482f70:
      FUN_05e42d5c(uVar1);
      if (lVar4 != 0) {
        FUN_070a1244(lVar4,uVar1,0);
        if (*unaff_x20 != 0) {
          lVar4 = *(long *)(*unaff_x20 + 0xe8);
          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
          if (uVar2 != 0) {
            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
            do {
              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06483000;
              uVar2 = uVar2 - 1;
              lVar3 = lVar3 + 0x10;
            } while (uVar2 != 0);
          }
          FUN_03ac43c4();
LAB_06483000:
          FUN_05e42d5c(uVar1);
          if (lVar4 != 0) {
            FUN_070a1194(lVar4,uVar1,0);
            if (*unaff_x20 != 0) {
              lVar4 = *(long *)(*unaff_x20 + 0xe8);
              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
              if (uVar2 != 0) {
                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                do {
                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06483090;
                  uVar2 = uVar2 - 1;
                  lVar3 = lVar3 + 0x10;
                } while (uVar2 != 0);
              }
              FUN_03ac43c4();
LAB_06483090:
              FUN_05e42d5c(uVar1);
              if (lVar4 != 0) {
                FUN_070a12f4(lVar4,uVar1,0);
                if (*unaff_x20 != 0) {
                  lVar4 = *(long *)(*unaff_x20 + 0xe8);
                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                  if (uVar2 != 0) {
                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                    do {
                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06483120;
                      uVar2 = uVar2 - 1;
                      lVar3 = lVar3 + 0x10;
                    } while (uVar2 != 0);
                  }
                  FUN_03ac43c4();
LAB_06483120:
                  FUN_05e42d5c(uVar1);
                  if (lVar4 != 0) {
                    FUN_070a1244(lVar4,uVar1,0);
                    if (*unaff_x20 != 0) {
                      lVar4 = *(long *)(*unaff_x20 + 0xf0);
                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                      if (uVar2 != 0) {
                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                        do {
                          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_064831b0;
                          uVar2 = uVar2 - 1;
                          lVar3 = lVar3 + 0x10;
                        } while (uVar2 != 0);
                      }
                      FUN_03ac43c4();
LAB_064831b0:
                      FUN_05e42d5c(uVar1);
                      if (lVar4 != 0) {
                        FUN_070a1194(lVar4,uVar1,0);
                        if (*unaff_x20 != 0) {
                          lVar4 = *(long *)(*unaff_x20 + 0xf0);
                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                          if (uVar2 != 0) {
                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                            do {
                              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06483240;
                              uVar2 = uVar2 - 1;
                              lVar3 = lVar3 + 0x10;
                            } while (uVar2 != 0);
                          }
                          FUN_03ac43c4();
LAB_06483240:
                          FUN_05e42d5c(uVar1);
                          if (lVar4 != 0) {
                            FUN_070a12f4(lVar4,uVar1,0);
                            if (*unaff_x20 != 0) {
                              lVar4 = *(long *)(*unaff_x20 + 0xf0);
                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                              if (uVar2 != 0) {
                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                do {
                                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_064832d0;
                                  uVar2 = uVar2 - 1;
                                  lVar3 = lVar3 + 0x10;
                                } while (uVar2 != 0);
                              }
                              FUN_03ac43c4();
LAB_064832d0:
                              FUN_05e42d5c(uVar1);
                              if (lVar4 != 0) {
                                FUN_070a1244(lVar4,uVar1,0);
                                if (*unaff_x20 != 0) {
                                  lVar4 = *(long *)(*unaff_x20 + 0xf8);
                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                  if (uVar2 != 0) {
                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                    do {
                                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06483360;
                                      uVar2 = uVar2 - 1;
                                      lVar3 = lVar3 + 0x10;
                                    } while (uVar2 != 0);
                                  }
                                  FUN_03ac43c4();
LAB_06483360:
                                  FUN_05e42d5c(uVar1);
                                  if (lVar4 != 0) {
                                    FUN_070a1194(lVar4,uVar1,0);
                                    if (*unaff_x20 != 0) {
                                      lVar4 = *(long *)(*unaff_x20 + 0xf8);
                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                      if (uVar2 != 0) {
                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                        do {
                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                          goto LAB_064833f0;
                                          uVar2 = uVar2 - 1;
                                          lVar3 = lVar3 + 0x10;
                                        } while (uVar2 != 0);
                                      }
                                      FUN_03ac43c4();
LAB_064833f0:
                                      FUN_05e42d5c(uVar1);
                                      if (lVar4 != 0) {
                                        FUN_070a12f4(lVar4,uVar1,0);
                                        if (*unaff_x20 != 0) {
                                          lVar4 = *(long *)(*unaff_x20 + 0xf8);
                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                          if (uVar2 != 0) {
                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                            do {
                                              if (*(long *)(lVar3 + -8) == *unaff_x24)
                                              goto LAB_06483480;
                                              uVar2 = uVar2 - 1;
                                              lVar3 = lVar3 + 0x10;
                                            } while (uVar2 != 0);
                                          }
                                          FUN_03ac43c4();
LAB_06483480:
                                          FUN_05e42d5c(uVar1);
                                          if (lVar4 != 0) {
                                            FUN_070a1244(lVar4,uVar1,0);
                                            if (*unaff_x20 != 0) {
                                              lVar4 = *(long *)(*unaff_x20 + 0x100);
                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                              if (uVar2 != 0) {
                                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                do {
                                                  if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                  goto LAB_06483510;
                                                  uVar2 = uVar2 - 1;
                                                  lVar3 = lVar3 + 0x10;
                                                } while (uVar2 != 0);
                                              }
                                              FUN_03ac43c4();
LAB_06483510:
                                              FUN_05e42d5c(uVar1);
                                              if (lVar4 != 0) {
                                                FUN_070a1194(lVar4,uVar1,0);
                                                if (*unaff_x20 != 0) {
                                                  lVar4 = *(long *)(*unaff_x20 + 0x100);
                                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064835a0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064835a0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x100);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06483630;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06483630:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x108);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_064836c0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064836c0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x108);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06483750;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06483750:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x108);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064837e0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064837e0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x110);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06483870;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06483870:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x110);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06483900;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06483900:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a12f4(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x110);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06483990;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06483990:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1244(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x118);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06483a20;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06483a20:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1194(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x118);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06483ab0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06483ab0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a12f4(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x118);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06483b40;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06483b40:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1244(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x120);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06483bd0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06483bd0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1194(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x120);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06483c60;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06483c60:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x120);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06483cf0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06483cf0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x128);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06483d80;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06483d80:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x128);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06483e10;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06483e10:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x128);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06483ea0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06483ea0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x130);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06483f30;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06483f30:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x130);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06483fc0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06483fc0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a12f4(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x130);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06484050;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06484050:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1244(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x138);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064840e0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064840e0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1194(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x138);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06484170;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06484170:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a12f4(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x138);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06484200;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06484200:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1244(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x140);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06484290;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06484290:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1194(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x140);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06484320;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06484320:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x140);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_064843b0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_064843b0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x148);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06484440;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06484440:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x148);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_064844d0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_064844d0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x148);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06484560;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06484560:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x150);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_064845f0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_064845f0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x150);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06484680;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06484680:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a12f4(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x150);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06484710;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06484710:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1244(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x158);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064847a0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064847a0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1194(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x158);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06484830;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06484830:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a12f4(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x158);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_064848c0;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_064848c0:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1244(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x160);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06484950;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06484950:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a1194(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x160);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064849e0;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_064849e0:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x160);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06484a70;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06484a70:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x168);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06484b00;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06484b00:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x168);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06484b90;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06484b90:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x168);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06484c20;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06484c20:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a1244(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x170);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06484cb0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06484cb0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1194(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x170);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24)
                                                              goto 
                                                  Meta_XR_MultiplayerBlocks_Colocation_Anchor__Equals
                                                  ;
                                                  uVar2 = uVar2 - 1;
                                                  lVar3 = lVar3 + 0x10;
                                                  } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
Meta_XR_MultiplayerBlocks_Colocation_Anchor__Equals:
                                                  FUN_05e42d5c(uVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_070a12f4(lVar4,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar4 = *(long *)(*unaff_x20 + 0x170);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar2 != 0) {
                                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                          goto LAB_06484dd0;
                                                          uVar2 = uVar2 - 1;
                                                          lVar3 = lVar3 + 0x10;
                                                        } while (uVar2 != 0);
                                                      }
                                                      FUN_03ac43c4();
LAB_06484dd0:
                                                      FUN_05e42d5c(uVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_070a1244(lVar4,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar4 = *(long *)(*unaff_x20 + 0x178);
                                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06484e60;
                                                              uVar2 = uVar2 - 1;
                                                              lVar3 = lVar3 + 0x10;
                                                            } while (uVar2 != 0);
                                                          }
                                                          FUN_03ac43c4();
LAB_06484e60:
                                                          FUN_05e42d5c(uVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_070a1194(lVar4,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar4 = *(long *)(*unaff_x20 + 0x178);
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar3 + -8) ==
                                                                      *unaff_x24) goto LAB_06484ef0;
                                                                  uVar2 = uVar2 - 1;
                                                                  lVar3 = lVar3 + 0x10;
                                                                } while (uVar2 != 0);
                                                              }
                                                              FUN_03ac43c4();
LAB_06484ef0:
                                                              FUN_05e42d5c(uVar1);
                                                              if (lVar4 != 0) {
                                                                FUN_070a12f4(lVar4,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0x178);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06484f80;
                                                      uVar2 = uVar2 - 1;
                                                      lVar3 = lVar3 + 0x10;
                                                    } while (uVar2 != 0);
                                                  }
                                                  FUN_03ac43c4();
LAB_06484f80:
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
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


