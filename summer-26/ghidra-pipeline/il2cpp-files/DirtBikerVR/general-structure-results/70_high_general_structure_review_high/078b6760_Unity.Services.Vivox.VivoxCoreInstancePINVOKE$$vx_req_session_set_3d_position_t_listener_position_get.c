/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_position_get
ENTRY_POINT: 078b6760
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_5
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_position_get
               (void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int in_w9;
  ulong uVar15;
  int *piVar16;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long *unaff_x24;
  long unaff_x26;
  long *unaff_x27;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  auVar20._8_8_ = in_stack_00000020;
  auVar20._0_8_ = in_stack_00000018;
  if (in_w9 == 1) {
    plVar17 = *(long **)(unaff_x20 + 0x60);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)System_Collections_Generic_List<Transform>_TypeInfo)
        {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_078b6900;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_03ac43c4(plVar17,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,0);
LAB_078b6900:
    uVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
    puVar11 = (undefined8 *)(unaff_x20 + 0x38);
    *puVar11 = uVar12;
    thunk_FUN_03afed3c(puVar11);
    plVar17 = (long *)*unaff_x21;
    if (plVar17 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar14 = *plVar17;
    plVar18 = (long *)*puVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x1d) * 0x10 + 0x138);
          goto LAB_078b69f0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03ac43c4(plVar17,*unaff_x24,0x1d);
LAB_078b69f0:
    uVar8 = (*(code *)*puVar11)(plVar17,puVar11[1]);
    auVar6._8_8_ = in_stack_00000020;
    auVar6._0_8_ = in_stack_00000018;
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    if (plVar18 == (long *)0x0) {
      _in_stack_00000018 = auVar6;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar14 = *plVar18;
    uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x30);
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
          goto LAB_078b6ae0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_03ac43c4(plVar18,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,3
                          );
LAB_078b6ae0:
    lVar14 = (*(code *)*puVar11)(plVar18,uVar8,uVar12,puVar11[1]);
    if (lVar14 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    in_stack_00000028 = FUN_067c4bec(lVar14,0);
    uVar15 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar15 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_0666e9a8(&stack0x00000028,0);
      auVar5._8_8_ = in_stack_00000020;
      auVar5._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar17 = *(long **)(unaff_x20 + 0x38);
      if (plVar17 == (long *)0x0) {
        _in_stack_00000018 = auVar5;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto LAB_078b5d90;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_03ac43c4(plVar17,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,5);
LAB_078b5d90:
      lVar14 = (*(code *)*puVar11)(plVar17,puVar11[1]);
      if (lVar14 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar14,0);
      uVar15 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar15 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_0666e9a8(&stack0x00000028,0);
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar17 = *(long **)(unaff_x20 + 0x38);
        if ((DAT_0898793f & 1) == 0) {
          FUN_03a8a718(PTR_DAT_0848af98);
          DAT_0898793f = 1;
        }
        if (plVar17 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        uVar12 = *(undefined8 *)PTR_DAT_0848af98;
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
              goto LAB_078b5ea4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_03ac43c4(plVar17,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,7);
LAB_078b5ea4:
        (*(code *)*puVar11)(&stack0x000017e0,plVar17,uVar12,puVar11[1]);
        memcpy(&stack0x00001ce0,&stack0x000017e0,0x4b8);
        uVar8 = unaff_x19[0xe];
        uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
        memset(&stack0x00000030,0,0x4c0);
        FUN_078b75cc(uVar12,uVar8,1,&stack0x000004f0,&stack0x00000030);
        lVar14 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                           ();
        if (lVar14 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar14,0);
        uVar15 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar15 & 1) != 0) {
          FUN_0666e9a8(&stack0x00000028,0);
          lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       System_Collections_Generic_List<TrackAsset>_TypeInfo);
          FUN_0679343c(lVar14,0);
          auVar4._8_8_ = in_stack_00000020;
          auVar4._0_8_ = in_stack_00000018;
          auVar3._8_8_ = in_stack_00000020;
          auVar3._0_8_ = in_stack_00000018;
          if (lVar14 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          *(undefined4 *)(lVar14 + 0x10) = 1;
          puVar7 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
          if (unaff_x20 == 0) {
            _in_stack_00000018 = auVar4;
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar17 = *(long **)(unaff_x20 + 0x38);
          if (plVar17 == (long *)0x0) {
            _in_stack_00000018 = auVar3;
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar13 = *plVar17;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
                puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_078b6038;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_03ac43c4(plVar17,*(long *)
                                          System_Collections_Generic_List<TreeInstance>_TypeInfo,2);
LAB_078b6038:
          uVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
          *(undefined8 *)(lVar14 + 0x28) = uVar12;
          thunk_FUN_03afed3c();
          *(long *)(unaff_x20 + 0x20) = lVar14;
          thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar14);
          plVar17 = *(long **)(unaff_x20 + 0x38);
          if (plVar17 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar14 = *plVar17;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_078b60bc;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_03ac43c4(plVar17,*(long *)puVar7,1);
LAB_078b60bc:
          _in_stack_00000018 = (*(code *)*puVar11)(plVar17,puVar11[1]);
          uVar12 = FUN_0674aae0(&stack0x00000018,0);
          *(undefined8 *)(unaff_x19 + 0xc) = uVar12;
          thunk_FUN_03afed3c();
          goto LAB_078b640c;
        }
        *unaff_x19 = 5;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
    }
  }
  else if (in_w9 == 2) {
    plVar17 = *(long **)(unaff_x20 + 0x58);
    if (plVar17 == (long *)0x0) {
      _in_stack_00000018 = auVar20;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_078b6978;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_03ac43c4(plVar17,*(long *)
                                    System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo,
                           0);
LAB_078b6978:
    uVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar12;
    thunk_FUN_03afed3c();
    plVar17 = *(long **)(unaff_x20 + 0x48);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar14 = *plVar17;
    plVar18 = *(long **)(unaff_x20 + 0x30);
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x24) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x16) * 0x10 + 0x138);
          goto FUN_078b6a68;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03ac43c4(plVar17,*unaff_x24,0x16);
FUN_078b6a68:
    uVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
    auVar2._8_8_ = in_stack_00000020;
    auVar2._0_8_ = in_stack_00000018;
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    if (plVar18 == (long *)0x0) {
      _in_stack_00000018 = auVar2;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar14 = *plVar18;
    uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x30);
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_078b6b70;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_03ac43c4(plVar18,*(long *)
                                    System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                           ,2);
LAB_078b6b70:
    lVar14 = (*(code *)*puVar11)(plVar18,uVar12,uVar19,puVar11[1]);
    if (lVar14 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    in_stack_00000028 = FUN_067c4bec(lVar14,0);
    uVar15 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar15 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_0666e9a8(&stack0x00000028,0);
      puVar7 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
      auVar1._8_8_ = in_stack_00000020;
      auVar1._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar17 = *(long **)(unaff_x20 + 0x30);
      if (plVar17 == (long *)0x0) {
        _in_stack_00000018 = auVar1;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_078b5d0c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_03ac43c4(plVar17,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,1);
LAB_078b5d0c:
      _in_stack_00000018 = (*(code *)*puVar11)(plVar17,puVar11[1]);
      uVar12 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 0xc) = uVar12;
      thunk_FUN_03afed3c();
      plVar17 = *(long **)(unaff_x20 + 0x30);
      if (plVar17 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 5) * 0x10 + 0x138);
            goto LAB_078b60fc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_03ac43c4(plVar17,*(long *)puVar7,5);
LAB_078b60fc:
      uVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar12;
      thunk_FUN_03afed3c(unaff_x19 + 0x10);
      lVar14 = FUN_078b567c();
      if (lVar14 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar14,0);
      uVar15 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar15 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_0666e9a8(&stack0x00000028,0);
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar8 = unaff_x19[0xe];
        plVar17 = *(long **)(unaff_x20 + 0x30);
        if ((DAT_0898793f & 1) == 0) {
          FUN_03a8a718(PTR_DAT_0848af98);
          DAT_0898793f = 1;
        }
        if (plVar17 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        uVar12 = *(undefined8 *)PTR_DAT_0848af98;
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
              goto LAB_078b6234;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_03ac43c4(plVar17,*(long *)
                                        System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                               ,4);
LAB_078b6234:
        (*(code *)*puVar11)(&stack0x00001320,plVar17,uVar12,puVar11[1]);
        memcpy(&stack0x000017e0,&stack0x00001320,0x4b8);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        auVar20 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
        uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
        memset(&stack0x000009a8,0,0x4c0);
        FUN_078b748c(uVar12,uVar8,2,&stack0x00000e68,auVar20._0_8_,auVar20._8_8_,&stack0x000009a8);
        lVar14 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                           ();
        if (lVar14 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar14,0);
        uVar15 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar15 & 1) != 0) {
          FUN_0666e9a8(&stack0x00000028,0);
          lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       System_Collections_Generic_List<TrackAsset>_TypeInfo);
          FUN_0679343c(lVar14,0);
          if (lVar14 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          *(undefined4 *)(lVar14 + 0x10) = 2;
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar17 = *(long **)(unaff_x20 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar13 = *plVar17;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_078b63e0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_03ac43c4(plVar17,*(long *)
                                          System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                                 ,0);
LAB_078b63e0:
          uVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
          *(undefined8 *)(lVar14 + 0x28) = uVar12;
          thunk_FUN_03afed3c();
          *(long *)(unaff_x20 + 0x20) = lVar14;
          thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar14);
          goto LAB_078b640c;
        }
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
    }
  }
  else {
LAB_078b640c:
    puVar11 = (undefined8 *)(unaff_x19 + 0xc);
    uVar15 = FUN_065cd268(*puVar11,0);
    puVar7 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar15 & 1) == 0) {
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar17 = *(long **)(unaff_x20 + 0x48);
      if (plVar17 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_03ac43c4(plVar17,*(long *)
                                     System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23)
      ;
LAB_078b6484:
      lVar14 = (*(code *)*puVar9)(plVar17,puVar9[1]);
      uVar15 = 0;
      if (lVar14 != 0) {
        plVar17 = *(long **)(unaff_x20 + 0x48);
        if (plVar17 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4(plVar17,*(long *)puVar7,0x23);
LAB_078b64ec:
        plVar17 = (long *)(*(code *)*puVar9)(plVar17,puVar9[1]);
        if (plVar17 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar14 = *plVar17;
        uVar12 = *puVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_03ac43c4(plVar17,*(long *)
                                       System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                              ,0);
LAB_078b6558:
        uVar15 = (*(code *)*puVar9)(plVar17,uVar12,puVar9[1]);
      }
    }
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar12 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                       (uVar15,*(undefined8 *)(unaff_x20 + 0x20));
    uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo)
    ;
    FUN_078c41d8(uVar19,uVar12,2,0,0);
    puVar9 = (undefined8 *)(unaff_x19 + 10);
    plVar17 = (long *)*puVar9;
    if (plVar17 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    uVar12 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_03ac43c4(plVar17,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
    (*(code *)*puVar10)(plVar17,uVar12,uVar19,puVar10[1]);
    *puVar9 = 0;
    thunk_FUN_03afed3c(puVar9,0);
    *puVar11 = 0;
    thunk_FUN_03afed3c(puVar11,0);
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
    return;
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


