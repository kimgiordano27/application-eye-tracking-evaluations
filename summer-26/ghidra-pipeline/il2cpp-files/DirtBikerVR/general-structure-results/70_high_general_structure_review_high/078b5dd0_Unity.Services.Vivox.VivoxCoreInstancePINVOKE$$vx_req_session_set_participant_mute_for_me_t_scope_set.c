/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_participant_mute_for_me_t_scope_set
ENTRY_POINT: 078b5dd0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_scope_set
               (void)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x22;
  undefined8 uVar14;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  plVar13 = *(long **)(unaff_x20 + 0x38);
  if ((*(byte *)(unaff_x22 + 0x93f) & 1) == 0) {
                    /* try { // try from 078b5ddc to 079b5ec3 has its CatchHandler @ 078b58ac */
    FUN_03a8a718(PTR_DAT_0848af98);
    *(undefined1 *)(unaff_x22 + 0x93f) = 1;
  }
  if (plVar13 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_0848af98;
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 7) * 0x10 + 0x138);
          goto LAB_078b5ea4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar13,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,7)
    ;
LAB_078b5ea4:
    (*(code *)*puVar5)(&stack0x000017e0,plVar13,uVar14,puVar5[1]);
    memcpy(&stack0x00001ce0,&stack0x000017e0,0x4b8);
    uVar1 = unaff_x19[0xe];
    uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo)
    ;
    memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
    memset(&stack0x00000030,0,0x4c0);
    FUN_078b75cc(uVar14,uVar1,1,&stack0x000004f0,&stack0x00000030);
    lVar9 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                      ();
    if (lVar9 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      in_stack_00000028 = FUN_067c4bec(lVar9,0);
      uVar11 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar11 & 1) == 0) {
        *unaff_x19 = 5;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_0666e9a8(&stack0x00000028,0);
        lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar9,0);
        auVar3._8_8_ = in_stack_00000020;
        auVar3._0_8_ = in_stack_00000018;
        auVar2._8_8_ = in_stack_00000020;
        auVar2._0_8_ = in_stack_00000018;
        if (lVar9 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar9 + 0x10) = 1;
        puVar4 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
        if (unaff_x20 == 0) {
          _in_stack_00000018 = auVar3;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar13 = *(long **)(unaff_x20 + 0x38);
        if (plVar13 == (long *)0x0) {
          _in_stack_00000018 = auVar2;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_078b6038;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       System_Collections_Generic_List<TreeInstance>_TypeInfo,2);
LAB_078b6038:
        uVar14 = (*(code *)*puVar5)(plVar13,puVar5[1]);
        *(undefined8 *)(lVar9 + 0x28) = uVar14;
        thunk_FUN_03afed3c();
        *(long *)(unaff_x20 + 0x20) = lVar9;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar9);
        plVar13 = *(long **)(unaff_x20 + 0x38);
        if (plVar13 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_078b60bc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,1);
LAB_078b60bc:
        _in_stack_00000018 = (*(code *)*puVar5)(plVar13,puVar5[1]);
        uVar14 = FUN_0674aae0(&stack0x00000018,0);
        *(undefined8 *)(unaff_x19 + 0xc) = uVar14;
        thunk_FUN_03afed3c();
        puVar5 = (undefined8 *)(unaff_x19 + 0xc);
        uVar11 = FUN_065cd268(*puVar5,0);
        puVar4 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
        if ((uVar11 & 1) == 0) {
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar13 = *(long **)(unaff_x20 + 0x48);
          if (plVar13 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar9 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                goto LAB_078b6484;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_03ac43c4(plVar13,*(long *)
                                         System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,
                                0x23);
LAB_078b6484:
          lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          uVar11 = 0;
          if (lVar9 != 0) {
            plVar13 = *(long **)(unaff_x20 + 0x48);
            if (plVar13 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                  goto LAB_078b64ec;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0x23);
LAB_078b64ec:
            plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
            if (plVar13 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar9 = *plVar13;
            uVar14 = *puVar5;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_078b6558;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_03ac43c4(plVar13,*(long *)
                                           System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                  ,0);
LAB_078b6558:
            uVar11 = (*(code *)*puVar6)(plVar13,uVar14,puVar6[1]);
          }
        }
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar14 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                           (uVar11,*(undefined8 *)(unaff_x20 + 0x20));
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TriangleER>_TypeInfo);
        FUN_078c41d8(uVar7,uVar14,2,0,0);
        puVar6 = (undefined8 *)(unaff_x19 + 10);
        plVar13 = (long *)*puVar6;
        if (plVar13 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        uVar14 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
              goto LAB_078b6610;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb
                             );
LAB_078b6610:
        (*(code *)*puVar8)(plVar13,uVar14,uVar7,puVar8[1]);
        *puVar6 = 0;
        thunk_FUN_03afed3c(puVar6,0);
        *puVar5 = 0;
        thunk_FUN_03afed3c(puVar5,0);
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_0666d184(unaff_x19 + 2,0);
      }
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
        return;
      }
    }
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


