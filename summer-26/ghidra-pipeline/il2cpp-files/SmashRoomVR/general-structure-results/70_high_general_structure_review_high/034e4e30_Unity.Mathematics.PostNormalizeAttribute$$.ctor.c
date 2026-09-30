/*
FUNCTION_NAME: Unity.Mathematics.PostNormalizeAttribute$$.ctor
ENTRY_POINT: 034e4e30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Mathematics_PostNormalizeAttribute___ctor(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long *unaff_x23;
  long *plVar6;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  if (unaff_x23 != (long *)0x0) {
    uVar3 = (ulong)*(ushort *)(*unaff_x23 + 0x12e);
    if (uVar3 != 0) {
      lVar2 = *(long *)(*unaff_x23 + 0xb0) + 8;
      do {
        if (*(long *)(lVar2 + -8) == *unaff_x24) goto LAB_034e4e88;
        uVar3 = uVar3 - 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar3 != 0);
    }
    FUN_01ae9f78();
LAB_034e4e88:
    FUN_0251b808(param_1);
    if (unaff_x21 != 0) {
      FUN_03440cd0();
      lVar2 = *unaff_x20;
      if (lVar2 != 0) {
        lVar5 = *(long *)(lVar2 + 0x80);
        plVar6 = *(long **)(lVar2 + 0x48);
        uVar1 = thunk_FUN_01afaadc(*unaff_x25);
        if (plVar6 != (long *)0x0) {
          lVar2 = *plVar6;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x24) {
                lVar2 = lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138;
                goto LAB_034e4f20;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar3 != 0);
          }
          lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,6);
LAB_034e4f20:
          FUN_0251b808(uVar1,plVar6,*(undefined8 *)(lVar2 + 8),0);
          if (lVar5 != 0) {
            FUN_03440e30(lVar5,uVar1,0);
            lVar2 = *unaff_x20;
            if (lVar2 != 0) {
              lVar5 = *(long *)(lVar2 + 0x80);
              plVar6 = *(long **)(lVar2 + 0x48);
              uVar1 = thunk_FUN_01afaadc(*unaff_x25);
              if (plVar6 != (long *)0x0) {
                lVar2 = *plVar6;
                uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                if (uVar3 != 0) {
                  piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar4 + -2) == *unaff_x24) {
                      lVar2 = lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138;
                      goto LAB_034e4fb8;
                    }
                    uVar3 = uVar3 - 1;
                    piVar4 = piVar4 + 4;
                  } while (uVar3 != 0);
                }
                lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,6);
LAB_034e4fb8:
                FUN_0251b808(uVar1,plVar6,*(undefined8 *)(lVar2 + 8),0);
                if (lVar5 != 0) {
                  FUN_03440d80(lVar5,uVar1,0);
                  lVar2 = *unaff_x20;
                  if (lVar2 != 0) {
                    lVar5 = *(long *)(lVar2 + 0x88);
                    plVar6 = *(long **)(lVar2 + 0x48);
                    uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                    if (plVar6 != (long *)0x0) {
                      lVar2 = *plVar6;
                      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                      if (uVar3 != 0) {
                        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar4 + -2) == *unaff_x24) {
                            lVar2 = lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138;
                            goto LAB_034e5050;
                          }
                          uVar3 = uVar3 - 1;
                          piVar4 = piVar4 + 4;
                        } while (uVar3 != 0);
                      }
                      lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,7);
LAB_034e5050:
                      FUN_0251b808(uVar1,plVar6,*(undefined8 *)(lVar2 + 8),0);
                      if (lVar5 != 0) {
                        FUN_03440cd0(lVar5,uVar1,0);
                        lVar2 = *unaff_x20;
                        if (lVar2 != 0) {
                          lVar5 = *(long *)(lVar2 + 0x88);
                          plVar6 = *(long **)(lVar2 + 0x48);
                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                          if (plVar6 != (long *)0x0) {
                            lVar2 = *plVar6;
                            uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                            if (uVar3 != 0) {
                              piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar4 + -2) == *unaff_x24) {
                                  lVar2 = lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138;
                                  goto LAB_034e50e8;
                                }
                                uVar3 = uVar3 - 1;
                                piVar4 = piVar4 + 4;
                              } while (uVar3 != 0);
                            }
                            lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,7);
LAB_034e50e8:
                            FUN_0251b808(uVar1,plVar6,*(undefined8 *)(lVar2 + 8),0);
                            if (lVar5 != 0) {
                              FUN_03440e30(lVar5,uVar1,0);
                              lVar2 = *unaff_x20;
                              if (lVar2 != 0) {
                                lVar5 = *(long *)(lVar2 + 0x88);
                                plVar6 = *(long **)(lVar2 + 0x48);
                                uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                if (plVar6 != (long *)0x0) {
                                  lVar2 = *plVar6;
                                  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                                  if (uVar3 != 0) {
                                    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar4 + -2) == *unaff_x24) {
                                        lVar2 = lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138;
                                        goto LAB_034e5180;
                                      }
                                      uVar3 = uVar3 - 1;
                                      piVar4 = piVar4 + 4;
                                    } while (uVar3 != 0);
                                  }
                                  lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,7);
LAB_034e5180:
                                  FUN_0251b808(uVar1,plVar6,*(undefined8 *)(lVar2 + 8),0);
                                  if (lVar5 != 0) {
                                    FUN_03440d80(lVar5,uVar1,0);
                                    lVar2 = *unaff_x20;
                                    if (lVar2 != 0) {
                                      lVar5 = *(long *)(lVar2 + 0x90);
                                      plVar6 = *(long **)(lVar2 + 0x48);
                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                      if (plVar6 != (long *)0x0) {
                                        lVar2 = *plVar6;
                                        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                                        if (uVar3 != 0) {
                                          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar4 + -2) == *unaff_x24) {
                                              lVar2 = lVar2 + (long)(*piVar4 + 8) * 0x10 + 0x138;
                                              goto LAB_034e5218;
                                            }
                                            uVar3 = uVar3 - 1;
                                            piVar4 = piVar4 + 4;
                                          } while (uVar3 != 0);
                                        }
                                        lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,8);
LAB_034e5218:
                                        FUN_0251b808(uVar1,plVar6,*(undefined8 *)(lVar2 + 8),0);
                                        if (lVar5 != 0) {
                                          FUN_03440cd0(lVar5,uVar1,0);
                                          lVar2 = *unaff_x20;
                                          if (lVar2 != 0) {
                                            lVar5 = *(long *)(lVar2 + 0x90);
                                            plVar6 = *(long **)(lVar2 + 0x48);
                                            uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                            if (plVar6 != (long *)0x0) {
                                              lVar2 = *plVar6;
                                              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                                              if (uVar3 != 0) {
                                                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar4 + -2) == *unaff_x24) {
                                                    lVar2 = lVar2 + (long)(*piVar4 + 8) * 0x10 +
                                                            0x138;
                                                    goto LAB_034e52b0;
                                                  }
                                                  uVar3 = uVar3 - 1;
                                                  piVar4 = piVar4 + 4;
                                                } while (uVar3 != 0);
                                              }
                                              lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,8);
LAB_034e52b0:
                                              FUN_0251b808(uVar1,plVar6,*(undefined8 *)(lVar2 + 8),0
                                                          );
                                              if (lVar5 != 0) {
                                                FUN_03440e30(lVar5,uVar1,0);
                                                lVar2 = *unaff_x20;
                                                if (lVar2 != 0) {
                                                  lVar5 = *(long *)(lVar2 + 0x90);
                                                  plVar6 = *(long **)(lVar2 + 0x48);
                                                  uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                  if (plVar6 != (long *)0x0) {
                                                    lVar2 = *plVar6;
                                                    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                                                    if (uVar3 != 0) {
                                                      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                                      do {
                                                        if (*(long *)(piVar4 + -2) == *unaff_x24) {
                                                          lVar2 = lVar2 + (long)(*piVar4 + 8) * 0x10
                                                                  + 0x138;
                                                          goto LAB_034e5348;
                                                        }
                                                        uVar3 = uVar3 - 1;
                                                        piVar4 = piVar4 + 4;
                                                      } while (uVar3 != 0);
                                                    }
                                                    lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,8);
LAB_034e5348:
                                                    FUN_0251b808(uVar1,plVar6,
                                                                 *(undefined8 *)(lVar2 + 8),0);
                                                    if (lVar5 != 0) {
                                                      FUN_03440d80(lVar5,uVar1,0);
                                                      lVar2 = *unaff_x20;
                                                      if (lVar2 != 0) {
                                                        lVar5 = *(long *)(lVar2 + 0x98);
                                                        plVar6 = *(long **)(lVar2 + 0x48);
                                                        uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                        if (plVar6 != (long *)0x0) {
                                                          lVar2 = *plVar6;
                                                          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            piVar4 = (int *)(*(long *)(lVar2 + 0xb0)
                                                                            + 8);
                                                            do {
                                                              if (*(long *)(piVar4 + -2) ==
                                                                  *unaff_x24) {
                                                                lVar2 = lVar2 + (long)(*piVar4 + 9)
                                                                                * 0x10 + 0x138;
                                                                goto LAB_034e53e0;
                                                              }
                                                              uVar3 = uVar3 - 1;
                                                              piVar4 = piVar4 + 4;
                                                            } while (uVar3 != 0);
                                                          }
                                                          lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,9);
LAB_034e53e0:
                                                          FUN_0251b808(uVar1,plVar6,
                                                                       *(undefined8 *)(lVar2 + 8),0)
                                                          ;
                                                          if (lVar5 != 0) {
                                                            FUN_03440cd0(lVar5,uVar1,0);
                                                            lVar2 = *unaff_x20;
                                                            if (lVar2 != 0) {
                                                              lVar5 = *(long *)(lVar2 + 0x98);
                                                              plVar6 = *(long **)(lVar2 + 0x48);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              if (plVar6 != (long *)0x0) {
                                                                lVar2 = *plVar6;
                                                                uVar3 = (ulong)*(ushort *)
                                                                                (lVar2 + 0x12e);
                                                                if (uVar3 != 0) {
                                                                  piVar4 = (int *)(*(long *)(lVar2 +
                                                                                            0xb0) +
                                                                                  8);
                                                                  do {
                                                                    if (*(long *)(piVar4 + -2) ==
                                                                        *unaff_x24) {
                                                                      lVar2 = lVar2 + (long)(*piVar4
                                                                                            + 9) *
                                                                                      0x10 + 0x138;
                                                                      goto 
                                                  Unity_Mathematics_Random__NextUInt2;
                                                  }
                                                  uVar3 = uVar3 - 1;
                                                  piVar4 = piVar4 + 4;
                                                  } while (uVar3 != 0);
                                                  }
                                                  lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,9);
Unity_Mathematics_Random__NextUInt2:
                                                  FUN_0251b808(uVar1,plVar6,
                                                               *(undefined8 *)(lVar2 + 8),0);
                                                  if (lVar5 != 0) {
                                                    FUN_03440e30(lVar5,uVar1,0);
                                                    lVar2 = *unaff_x20;
                                                    if (lVar2 != 0) {
                                                      lVar5 = *(long *)(lVar2 + 0x98);
                                                      plVar6 = *(long **)(lVar2 + 0x48);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      if (plVar6 != (long *)0x0) {
                                                        lVar2 = *plVar6;
                                                        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                                                        if (uVar3 != 0) {
                                                          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) +
                                                                          8);
                                                          do {
                                                            if (*(long *)(piVar4 + -2) == *unaff_x24
                                                               ) {
                                                              lVar2 = lVar2 + (long)(*piVar4 + 9) *
                                                                              0x10 + 0x138;
                                                              goto LAB_034e5510;
                                                            }
                                                            uVar3 = uVar3 - 1;
                                                            piVar4 = piVar4 + 4;
                                                          } while (uVar3 != 0);
                                                        }
                                                        lVar2 = FUN_01ae9f78(plVar6,*unaff_x24,9);
LAB_034e5510:
                                                        FUN_0251b808(uVar1,plVar6,
                                                                     *(undefined8 *)(lVar2 + 8),0);
                                                        if (lVar5 != 0) {
                                                          FUN_03440d80(lVar5,uVar1,0);
                                                          if (*unaff_x20 != 0) {
                                                            *(long **)(*unaff_x20 + 0x48) =
                                                                 unaff_x19;
                                                            thunk_FUN_01b4f09c();
                                                            if (unaff_x19 == (long *)0x0) {
                                                              return;
                                                            }
                                                            if (*unaff_x20 != 0) {
                                                              lVar2 = *(long *)(*unaff_x20 + 0x50);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar5 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar5 + -8) ==
                                                                      *unaff_x24) goto LAB_034e55c8;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar5 = lVar5 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_01ae9f78();
LAB_034e55c8:
                                                              FUN_0251b808(uVar1);
                                                              if (lVar2 != 0) {
                                                                FUN_03440c78(lVar2,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar2 = *(long *)(*unaff_x20 +
                                                                                   0x50);
                                                                  uVar1 = thunk_FUN_01afaadc(*
                                                  unaff_x25);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                      goto LAB_034e5654;
                                                      uVar3 = uVar3 - 1;
                                                      lVar5 = lVar5 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
LAB_034e5654:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440dd8(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x50);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto LAB_034e56e0;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
LAB_034e56e0:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440d28(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x58);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24) goto LAB_034e5770;
                                                              uVar3 = uVar3 - 1;
                                                              lVar5 = lVar5 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_01ae9f78();
LAB_034e5770:
                                                          FUN_0251b808(uVar1);
                                                          if (lVar2 != 0) {
                                                            FUN_03440c78(lVar2,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar2 = *(long *)(*unaff_x20 + 0x58);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar5 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar5 + -8) ==
                                                                      *unaff_x24) goto LAB_034e5800;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar5 = lVar5 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_01ae9f78();
LAB_034e5800:
                                                              FUN_0251b808(uVar1);
                                                              if (lVar2 != 0) {
                                                                FUN_03440dd8(lVar2,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar2 = *(long *)(*unaff_x20 +
                                                                                   0x58);
                                                                  uVar1 = thunk_FUN_01afaadc(*
                                                  unaff_x25);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                      goto LAB_034e5890;
                                                      uVar3 = uVar3 - 1;
                                                      lVar5 = lVar5 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
LAB_034e5890:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440d28(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x60);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto LAB_034e5920;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
LAB_034e5920:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440c78(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x60);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24) goto LAB_034e59b0;
                                                              uVar3 = uVar3 - 1;
                                                              lVar5 = lVar5 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_01ae9f78();
LAB_034e59b0:
                                                          FUN_0251b808(uVar1);
                                                          if (lVar2 != 0) {
                                                            FUN_03440dd8(lVar2,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar2 = *(long *)(*unaff_x20 + 0x60);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar5 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar5 + -8) ==
                                                                      *unaff_x24) goto LAB_034e5a40;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar5 = lVar5 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_01ae9f78();
LAB_034e5a40:
                                                              FUN_0251b808(uVar1);
                                                              if (lVar2 != 0) {
                                                                FUN_03440d28(lVar2,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar2 = *(long *)(*unaff_x20 +
                                                                                   0x68);
                                                                  uVar1 = thunk_FUN_01afaadc(*
                                                  unaff_x25);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                      goto LAB_034e5ad0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar5 = lVar5 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
LAB_034e5ad0:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440c78(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x68);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto LAB_034e5b60;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
LAB_034e5b60:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440dd8(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x68);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24)
                                                              goto 
                                                  Unity_Mathematics_Random__NextDouble2;
                                                  uVar3 = uVar3 - 1;
                                                  lVar5 = lVar5 + 0x10;
                                                  } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
Unity_Mathematics_Random__NextDouble2:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440d28(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x70);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto LAB_034e5c80;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
LAB_034e5c80:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440c78(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x70);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24) goto LAB_034e5d10;
                                                              uVar3 = uVar3 - 1;
                                                              lVar5 = lVar5 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_01ae9f78();
LAB_034e5d10:
                                                          FUN_0251b808(uVar1);
                                                          if (lVar2 != 0) {
                                                            FUN_03440dd8(lVar2,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar2 = *(long *)(*unaff_x20 + 0x70);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar5 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar5 + -8) ==
                                                                      *unaff_x24) goto LAB_034e5da0;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar5 = lVar5 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_01ae9f78();
LAB_034e5da0:
                                                              FUN_0251b808(uVar1);
                                                              if (lVar2 != 0) {
                                                                FUN_03440d28(lVar2,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar2 = *(long *)(*unaff_x20 +
                                                                                   0x78);
                                                                  uVar1 = thunk_FUN_01afaadc(*
                                                  unaff_x25);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                      goto LAB_034e5e30;
                                                      uVar3 = uVar3 - 1;
                                                      lVar5 = lVar5 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
LAB_034e5e30:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440c78(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x78);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto Unity_Mathematics_Random__NextDouble4
                                                          ;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
Unity_Mathematics_Random__NextDouble4:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440dd8(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x78);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24) goto LAB_034e5f50;
                                                              uVar3 = uVar3 - 1;
                                                              lVar5 = lVar5 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_01ae9f78();
LAB_034e5f50:
                                                          FUN_0251b808(uVar1);
                                                          if (lVar2 != 0) {
                                                            FUN_03440d28(lVar2,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar2 = *(long *)(*unaff_x20 + 0x80);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar5 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar5 + -8) ==
                                                                      *unaff_x24) goto LAB_034e5fe0;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar5 = lVar5 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_01ae9f78();
LAB_034e5fe0:
                                                              FUN_0251b808(uVar1);
                                                              if (lVar2 != 0) {
                                                                FUN_03440c78(lVar2,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar2 = *(long *)(*unaff_x20 +
                                                                                   0x80);
                                                                  uVar1 = thunk_FUN_01afaadc(*
                                                  unaff_x25);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                      goto LAB_034e6070;
                                                      uVar3 = uVar3 - 1;
                                                      lVar5 = lVar5 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
LAB_034e6070:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440dd8(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x80);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto LAB_034e6100;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
LAB_034e6100:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440d28(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x88);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24) goto LAB_034e6190;
                                                              uVar3 = uVar3 - 1;
                                                              lVar5 = lVar5 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_01ae9f78();
LAB_034e6190:
                                                          FUN_0251b808(uVar1);
                                                          if (lVar2 != 0) {
                                                            FUN_03440c78(lVar2,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar2 = *(long *)(*unaff_x20 + 0x88);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar5 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar5 + -8) ==
                                                                      *unaff_x24) goto LAB_034e6220;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar5 = lVar5 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_01ae9f78();
LAB_034e6220:
                                                              FUN_0251b808(uVar1);
                                                              if (lVar2 != 0) {
                                                                FUN_03440dd8(lVar2,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar2 = *(long *)(*unaff_x20 +
                                                                                   0x88);
                                                                  uVar1 = thunk_FUN_01afaadc(*
                                                  unaff_x25);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                      goto 
                                                  Unity_Mathematics_Random__NextDouble2Direction;
                                                  uVar3 = uVar3 - 1;
                                                  lVar5 = lVar5 + 0x10;
                                                  } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
Unity_Mathematics_Random__NextDouble2Direction:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440d28(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x90);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto LAB_034e6340;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
LAB_034e6340:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440c78(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x90);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24) goto LAB_034e63d0;
                                                              uVar3 = uVar3 - 1;
                                                              lVar5 = lVar5 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_01ae9f78();
LAB_034e63d0:
                                                          FUN_0251b808(uVar1);
                                                          if (lVar2 != 0) {
                                                            FUN_03440dd8(lVar2,uVar1,0);
                                                            if (*unaff_x20 != 0) {
                                                              lVar2 = *(long *)(*unaff_x20 + 0x90);
                                                              uVar1 = thunk_FUN_01afaadc(*unaff_x25)
                                                              ;
                                                              uVar3 = (ulong)*(ushort *)
                                                                              (*unaff_x19 + 0x12e);
                                                              if (uVar3 != 0) {
                                                                lVar5 = *(long *)(*unaff_x19 + 0xb0)
                                                                        + 8;
                                                                do {
                                                                  if (*(long *)(lVar5 + -8) ==
                                                                      *unaff_x24) goto LAB_034e6460;
                                                                  uVar3 = uVar3 - 1;
                                                                  lVar5 = lVar5 + 0x10;
                                                                } while (uVar3 != 0);
                                                              }
                                                              FUN_01ae9f78();
LAB_034e6460:
                                                              FUN_0251b808(uVar1);
                                                              if (lVar2 != 0) {
                                                                FUN_03440d28(lVar2,uVar1,0);
                                                                if (*unaff_x20 != 0) {
                                                                  lVar2 = *(long *)(*unaff_x20 +
                                                                                   0x98);
                                                                  uVar1 = thunk_FUN_01afaadc(*
                                                  unaff_x25);
                                                  uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                                  if (uVar3 != 0) {
                                                    lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                    do {
                                                      if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                      goto LAB_034e64f0;
                                                      uVar3 = uVar3 - 1;
                                                      lVar5 = lVar5 + 0x10;
                                                    } while (uVar3 != 0);
                                                  }
                                                  FUN_01ae9f78();
LAB_034e64f0:
                                                  FUN_0251b808(uVar1);
                                                  if (lVar2 != 0) {
                                                    FUN_03440c78(lVar2,uVar1,0);
                                                    if (*unaff_x20 != 0) {
                                                      lVar2 = *(long *)(*unaff_x20 + 0x98);
                                                      uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                      uVar3 = (ulong)*(ushort *)(*unaff_x19 + 0x12e)
                                                      ;
                                                      if (uVar3 != 0) {
                                                        lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                        do {
                                                          if (*(long *)(lVar5 + -8) == *unaff_x24)
                                                          goto LAB_034e6580;
                                                          uVar3 = uVar3 - 1;
                                                          lVar5 = lVar5 + 0x10;
                                                        } while (uVar3 != 0);
                                                      }
                                                      FUN_01ae9f78();
LAB_034e6580:
                                                      FUN_0251b808(uVar1);
                                                      if (lVar2 != 0) {
                                                        FUN_03440dd8(lVar2,uVar1,0);
                                                        if (*unaff_x20 != 0) {
                                                          lVar2 = *(long *)(*unaff_x20 + 0x98);
                                                          uVar1 = thunk_FUN_01afaadc(*unaff_x25);
                                                          uVar3 = (ulong)*(ushort *)
                                                                          (*unaff_x19 + 0x12e);
                                                          if (uVar3 != 0) {
                                                            lVar5 = *(long *)(*unaff_x19 + 0xb0) + 8
                                                            ;
                                                            do {
                                                              if (*(long *)(lVar5 + -8) ==
                                                                  *unaff_x24) goto LAB_034e6610;
                                                              uVar3 = uVar3 - 1;
                                                              lVar5 = lVar5 + 0x10;
                                                            } while (uVar3 != 0);
                                                          }
                                                          FUN_01ae9f78();
LAB_034e6610:
                                                          FUN_0251b808(uVar1);
                                                          if (lVar2 != 0) {
                                                            FUN_03440d28(lVar2,uVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


