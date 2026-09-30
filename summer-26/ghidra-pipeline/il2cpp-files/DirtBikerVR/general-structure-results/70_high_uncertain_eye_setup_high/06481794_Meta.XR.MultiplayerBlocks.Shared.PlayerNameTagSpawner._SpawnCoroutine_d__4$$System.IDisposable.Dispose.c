/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 06481794
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2)

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
  
  FUN_03ac43c4(param_1,param_2,0xb);
  FUN_05e42d5c();
  if (unaff_x21 != 0) {
    FUN_070a11ec();
    if (*unaff_x20 != 0) {
      lVar4 = *(long *)(*unaff_x20 + 0x80);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
      if (uVar2 != 0) {
        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
        do {
          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06481840;
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
          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
          if (uVar2 != 0) {
            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
            do {
              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_064818d0;
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
              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
              if (uVar2 != 0) {
                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                do {
                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto FUN_06481960;
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
                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                  if (uVar2 != 0) {
                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                    do {
                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_064819f0;
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
                      lVar4 = *(long *)(*unaff_x20 + 0x88);
                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                      if (uVar2 != 0) {
                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                        do {
                          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06481a80;
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
                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                          if (uVar2 != 0) {
                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                            do {
                              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06481b10;
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
                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                              if (uVar2 != 0) {
                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                do {
                                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06481ba0;
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
                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                  if (uVar2 != 0) {
                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                    do {
                                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_06481c30;
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
                                      lVar4 = *(long *)(*unaff_x20 + 0x98);
                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
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
                                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
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
                                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                              if (uVar2 != 0) {
                                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                do {
                                                  if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                  goto LAB_06481de0;
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
                                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06481e70;
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
                                                      lVar4 = *(long *)(*unaff_x20 + 0xa0);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
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
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06481f90;
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
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
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
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xa8);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064820b0;
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
                                                      lVar4 = *(long *)(*unaff_x20 + 0xa8);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
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
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_064821d0;
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
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
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
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xb0);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_064822f0;
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
                                                      lVar4 = *(long *)(*unaff_x20 + 0xb8);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
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
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06482410;
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
                                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23)
                                                              ;
                                                              uVar2 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar2 != 0) {
                                                                lVar3 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
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
                                                                  lVar4 = *(long *)(*unaff_x20 +
                                                                                   0xc0);
                                                                  uVar1 = thunk_FUN_03ac74bc(*
                                                  unaff_x23);
                                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                      goto LAB_06482530;
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
                                                      lVar4 = *(long *)(*unaff_x20 + 0xc0);
                                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
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
                                                          uVar2 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar2 != 0) {
                                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar3 + -8) ==
                                                                  *unaff_x24) goto LAB_06482650;
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


