/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_position_set
ENTRY_POINT: 078b66dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_position_set
               (void)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  short sVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  long *unaff_x24;
  undefined8 uVar26;
  long unaff_x26;
  long *unaff_x27;
  undefined1 auVar27 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  plVar24 = *(long **)(unaff_x20 + 0x48);
  if (plVar24 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_078b7484;
  }
  lVar20 = *plVar24;
  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *unaff_x24) {
        puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 0x23) * 0x10 + 0x138);
        goto LAB_078b6734;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar17 = (undefined8 *)FUN_03ac43c4(plVar24,*unaff_x24,0x23);
LAB_078b6734:
  lVar20 = (*(code *)*puVar17)(plVar24,puVar17[1]);
  auVar8._8_8_ = in_stack_00000020;
  auVar8._0_8_ = in_stack_00000018;
  auVar27._8_8_ = in_stack_00000020;
  auVar27._0_8_ = in_stack_00000018;
  uVar14 = 1;
  if (lVar20 != 0) {
    uVar14 = 2;
  }
  unaff_x19[0xe] = uVar14;
  lVar20 = *(long *)(unaff_x20 + 0x40);
  if (lVar20 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_078b7484;
  }
  iVar1 = *(int *)(lVar20 + 0x10);
  if (iVar1 == 0) {
    uVar18 = *(undefined8 *)(lVar20 + 0x18);
    FUN_0529a878(&stack0x000017e0,*(undefined4 *)(lVar20 + 0x20),*(undefined8 *)PTR_DAT_08491c30);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar26 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x28);
    uVar25 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo)
    ;
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
              (uVar25,uVar14,uVar18,0,uVar26);
    *(undefined8 *)(unaff_x19 + 0x14) = uVar25;
    thunk_FUN_03afed3c(unaff_x19 + 0x14,uVar25);
    lVar20 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                       ();
    if (lVar20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    in_stack_00000028 = FUN_067c4bec(lVar20,0);
    uVar21 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar21 & 1) != 0) {
      FUN_0666e9a8(&stack0x00000028,0);
      if (*(long *)(unaff_x19 + 0x14) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      if (*(int *)(*(long *)(unaff_x19 + 0x14) + 0x10) != 0) {
        sVar12 = FUN_07336274(&stack0x00001ca0,0);
        if (sVar12 == 0) {
          if (*(long *)(unaff_x19 + 0x14) == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          uVar18 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084ec1d8,&stack0x00001320);
          uVar18 = FUN_065c412c(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo,uVar18
                                ,0);
          uVar18 = FUN_065c0764(uVar18,*(undefined8 *)
                                        System_Collections_Generic_List<TypeIdentifier>_TypeInfo,0);
          FUN_078c790c(uVar18,0);
        }
      }
      lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrackAsset>_TypeInfo);
      FUN_0679343c(lVar20,0);
      auVar10._8_8_ = in_stack_00000020;
      auVar10._0_8_ = in_stack_00000018;
      auVar9._8_8_ = in_stack_00000020;
      auVar9._0_8_ = in_stack_00000018;
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      *(undefined4 *)(lVar20 + 0x10) = 0;
      if (unaff_x20 == 0) {
        _in_stack_00000018 = auVar10;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
        _in_stack_00000018 = auVar9;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x18);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x19 + 0x14) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      uVar13 = FUN_07336274(&stack0x00001ca0,0);
      *(uint *)(lVar20 + 0x20) = uVar13 & 0xffff;
      *(long *)(unaff_x20 + 0x20) = lVar20;
      thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar20);
      goto LAB_078b640c;
    }
    *unaff_x19 = 6;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
  }
  else if (iVar1 == 1) {
    plVar24 = *(long **)(unaff_x20 + 0x60);
    if (plVar24 == (long *)0x0) {
      _in_stack_00000018 = auVar8;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar24;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)System_Collections_Generic_List<Transform>_TypeInfo)
        {
          puVar17 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_078b6900;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_03ac43c4(plVar24,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,0);
LAB_078b6900:
    uVar18 = (*(code *)*puVar17)(plVar24,puVar17[1]);
    puVar17 = (undefined8 *)(unaff_x20 + 0x38);
    *puVar17 = uVar18;
    thunk_FUN_03afed3c(puVar17);
    plVar24 = (long *)*unaff_x21;
    if (plVar24 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar24;
    plVar23 = (long *)*puVar17;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x24) {
          puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 0x1d) * 0x10 + 0x138);
          goto LAB_078b69f0;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)FUN_03ac43c4(plVar24,*unaff_x24,0x1d);
LAB_078b69f0:
    uVar14 = (*(code *)*puVar17)(plVar24,puVar17[1]);
    auVar7._8_8_ = in_stack_00000020;
    auVar7._0_8_ = in_stack_00000018;
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    if (plVar23 == (long *)0x0) {
      _in_stack_00000018 = auVar7;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar23;
    uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x30);
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 3) * 0x10 + 0x138);
          goto LAB_078b6ae0;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_03ac43c4(plVar23,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,3
                          );
LAB_078b6ae0:
    lVar20 = (*(code *)*puVar17)(plVar23,uVar14,uVar18,puVar17[1]);
    if (lVar20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    in_stack_00000028 = FUN_067c4bec(lVar20,0);
    uVar21 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar21 & 1) == 0) {
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
      auVar6._8_8_ = in_stack_00000020;
      auVar6._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar24 = *(long **)(unaff_x20 + 0x38);
      if (plVar24 == (long *)0x0) {
        _in_stack_00000018 = auVar6;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar24;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 5) * 0x10 + 0x138);
            goto LAB_078b5d90;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_03ac43c4(plVar24,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,5);
LAB_078b5d90:
      lVar20 = (*(code *)*puVar17)(plVar24,puVar17[1]);
                    /* try { // try from 078b5d9c to 079b5dc3 has its CatchHandler @ 078b5ed8 */
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar20,0);
      uVar21 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar21 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
                    /* try { // try from 078b5dc4 to 079b5ddb has its CatchHandler @ 078b5ecc */
        FUN_0666e9a8(&stack0x00000028,0);
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar24 = *(long **)(unaff_x20 + 0x38);
        if ((DAT_0898793f & 1) == 0) {
          FUN_03a8a718(PTR_DAT_0848af98);
          DAT_0898793f = 1;
        }
        if (plVar24 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar24;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        uVar18 = *(undefined8 *)PTR_DAT_0848af98;
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_078b5ea4;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_03ac43c4(plVar24,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,7);
LAB_078b5ea4:
        (*(code *)*puVar17)(&stack0x000017e0,plVar24,uVar18,puVar17[1]);
        memcpy(&stack0x00001ce0,&stack0x000017e0,0x4b8);
        uVar14 = unaff_x19[0xe];
        uVar18 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
        memset(&stack0x00000030,0,0x4c0);
        FUN_078b75cc(uVar18,uVar14,1,&stack0x000004f0,&stack0x00000030);
        lVar20 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                           ();
        if (lVar20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar20,0);
        uVar21 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar21 & 1) != 0) {
          FUN_0666e9a8(&stack0x00000028,0);
          lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       System_Collections_Generic_List<TrackAsset>_TypeInfo);
          FUN_0679343c(lVar20,0);
          auVar5._8_8_ = in_stack_00000020;
          auVar5._0_8_ = in_stack_00000018;
          auVar4._8_8_ = in_stack_00000020;
          auVar4._0_8_ = in_stack_00000018;
          if (lVar20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          *(undefined4 *)(lVar20 + 0x10) = 1;
          puVar11 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
          if (unaff_x20 == 0) {
            _in_stack_00000018 = auVar5;
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar24 = *(long **)(unaff_x20 + 0x38);
          if (plVar24 == (long *)0x0) {
            _in_stack_00000018 = auVar4;
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar19 = *plVar24;
          uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) ==
                  *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
                puVar17 = (undefined8 *)(lVar19 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                goto LAB_078b6038;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar17 = (undefined8 *)
                    FUN_03ac43c4(plVar24,*(long *)
                                          System_Collections_Generic_List<TreeInstance>_TypeInfo,2);
LAB_078b6038:
          uVar18 = (*(code *)*puVar17)(plVar24,puVar17[1]);
          *(undefined8 *)(lVar20 + 0x28) = uVar18;
          thunk_FUN_03afed3c();
          *(long *)(unaff_x20 + 0x20) = lVar20;
          thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar20);
          plVar24 = *(long **)(unaff_x20 + 0x38);
          if (plVar24 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar20 = *plVar24;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar11) {
                puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_078b60bc;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar17 = (undefined8 *)FUN_03ac43c4(plVar24,*(long *)puVar11,1);
LAB_078b60bc:
          _in_stack_00000018 = (*(code *)*puVar17)(plVar24,puVar17[1]);
          uVar18 = FUN_0674aae0(&stack0x00000018,0);
          *(undefined8 *)(unaff_x19 + 0xc) = uVar18;
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
  else if (iVar1 == 2) {
    plVar24 = *(long **)(unaff_x20 + 0x58);
    if (plVar24 == (long *)0x0) {
      _in_stack_00000018 = auVar27;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar24;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
          puVar17 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_078b6978;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_03ac43c4(plVar24,*(long *)
                                    System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo,
                           0);
LAB_078b6978:
    uVar18 = (*(code *)*puVar17)(plVar24,puVar17[1]);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar18;
    thunk_FUN_03afed3c();
    plVar24 = *(long **)(unaff_x20 + 0x48);
    if (plVar24 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar24;
    plVar23 = *(long **)(unaff_x20 + 0x30);
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x24) {
          puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 0x16) * 0x10 + 0x138);
          goto FUN_078b6a68;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)FUN_03ac43c4(plVar24,*unaff_x24,0x16);
FUN_078b6a68:
    uVar18 = (*(code *)*puVar17)(plVar24,puVar17[1]);
    auVar3._8_8_ = in_stack_00000020;
    auVar3._0_8_ = in_stack_00000018;
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    if (plVar23 == (long *)0x0) {
      _in_stack_00000018 = auVar3;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar23;
    uVar25 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x30);
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 2) * 0x10 + 0x138);
          goto LAB_078b6b70;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_03ac43c4(plVar23,*(long *)
                                    System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                           ,2);
LAB_078b6b70:
    lVar20 = (*(code *)*puVar17)(plVar23,uVar18,uVar25,puVar17[1]);
    if (lVar20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    in_stack_00000028 = FUN_067c4bec(lVar20,0);
    uVar21 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar21 & 1) == 0) {
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
      puVar11 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
      auVar2._8_8_ = in_stack_00000020;
      auVar2._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar24 = *(long **)(unaff_x20 + 0x30);
      if (plVar24 == (long *)0x0) {
        _in_stack_00000018 = auVar2;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar24;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_078b5d0c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_03ac43c4(plVar24,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,1);
LAB_078b5d0c:
      _in_stack_00000018 = (*(code *)*puVar17)(plVar24,puVar17[1]);
      uVar18 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 0xc) = uVar18;
      thunk_FUN_03afed3c();
      plVar24 = *(long **)(unaff_x20 + 0x30);
      if (plVar24 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar24;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar11) {
            puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 5) * 0x10 + 0x138);
            goto LAB_078b60fc;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar17 = (undefined8 *)FUN_03ac43c4(plVar24,*(long *)puVar11,5);
LAB_078b60fc:
      uVar18 = (*(code *)*puVar17)(plVar24,puVar17[1]);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar18;
      thunk_FUN_03afed3c(unaff_x19 + 0x10);
      lVar20 = FUN_078b567c();
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar20,0);
      uVar21 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar21 & 1) == 0) {
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
        uVar14 = unaff_x19[0xe];
        plVar24 = *(long **)(unaff_x20 + 0x30);
        if ((DAT_0898793f & 1) == 0) {
          FUN_03a8a718(PTR_DAT_0848af98);
          DAT_0898793f = 1;
        }
        if (plVar24 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar24;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        uVar18 = *(undefined8 *)PTR_DAT_0848af98;
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar17 = (undefined8 *)(lVar20 + (long)(*piVar22 + 4) * 0x10 + 0x138);
              goto LAB_078b6234;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_03ac43c4(plVar24,*(long *)
                                        System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                               ,4);
LAB_078b6234:
        (*(code *)*puVar17)(&stack0x00001320,plVar24,uVar18,puVar17[1]);
        memcpy(&stack0x000017e0,&stack0x00001320,0x4b8);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        auVar27 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
        uVar18 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
        memset(&stack0x000009a8,0,0x4c0);
        FUN_078b748c(uVar18,uVar14,2,&stack0x00000e68,auVar27._0_8_,auVar27._8_8_,&stack0x000009a8);
        lVar20 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                           ();
        if (lVar20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar20,0);
        uVar21 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar21 & 1) != 0) {
          FUN_0666e9a8(&stack0x00000028,0);
          lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       System_Collections_Generic_List<TrackAsset>_TypeInfo);
          FUN_0679343c(lVar20,0);
          if (lVar20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          *(undefined4 *)(lVar20 + 0x10) = 2;
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar24 = *(long **)(unaff_x20 + 0x30);
          if (plVar24 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar19 = *plVar24;
          uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) ==
                  *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
                puVar17 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_078b63e0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar17 = (undefined8 *)
                    FUN_03ac43c4(plVar24,*(long *)
                                          System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                                 ,0);
LAB_078b63e0:
          uVar18 = (*(code *)*puVar17)(plVar24,puVar17[1]);
          *(undefined8 *)(lVar20 + 0x28) = uVar18;
          thunk_FUN_03afed3c();
          *(long *)(unaff_x20 + 0x20) = lVar20;
          thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar20);
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
    puVar17 = (undefined8 *)(unaff_x19 + 0xc);
    uVar21 = FUN_065cd268(*puVar17,0);
    puVar11 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar21 & 1) == 0) {
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar24 = *(long **)(unaff_x20 + 0x48);
      if (plVar24 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar24;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar15 = (undefined8 *)(lVar20 + (long)(*piVar22 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_03ac43c4(plVar24,*(long *)
                                      System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23
                            );
LAB_078b6484:
      lVar20 = (*(code *)*puVar15)(plVar24,puVar15[1]);
      uVar21 = 0;
      if (lVar20 != 0) {
        plVar24 = *(long **)(unaff_x20 + 0x48);
        if (plVar24 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar24;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar11) {
              puVar15 = (undefined8 *)(lVar20 + (long)(*piVar22 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)FUN_03ac43c4(plVar24,*(long *)puVar11,0x23);
LAB_078b64ec:
        plVar24 = (long *)(*(code *)*puVar15)(plVar24,puVar15[1]);
        if (plVar24 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar24;
        uVar18 = *puVar17;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_03ac43c4(plVar24,*(long *)
                                        System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                               ,0);
LAB_078b6558:
        uVar21 = (*(code *)*puVar15)(plVar24,uVar18,puVar15[1]);
      }
    }
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar18 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                       (uVar21,*(undefined8 *)(unaff_x20 + 0x20));
    uVar25 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo)
    ;
    FUN_078c41d8(uVar25,uVar18,2,0,0);
    puVar15 = (undefined8 *)(unaff_x19 + 10);
    plVar24 = (long *)*puVar15;
    if (plVar24 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar24;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    uVar18 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar16 = (undefined8 *)(lVar20 + (long)(*piVar22 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)
              FUN_03ac43c4(plVar24,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
    (*(code *)*puVar16)(plVar24,uVar18,uVar25,puVar16[1]);
    *puVar15 = 0;
    thunk_FUN_03afed3c(puVar15,0);
    *puVar17 = 0;
    thunk_FUN_03afed3c(puVar17,0);
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


