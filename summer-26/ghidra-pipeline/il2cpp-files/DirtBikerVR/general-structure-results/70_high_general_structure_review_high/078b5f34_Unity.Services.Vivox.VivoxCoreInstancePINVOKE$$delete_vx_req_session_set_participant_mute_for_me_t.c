/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_session_set_participant_mute_for_me_t
ENTRY_POINT: 078b5f34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_set_participant_mute_for_me_t
               (long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  if (param_1 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_078b7484;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 078b5f28 with catch @ 078b5f38
                        */
  in_stack_00000028 = FUN_067c4bec(param_1,0);
  uVar4 = FUN_0666e8e0(&stack0x00000028,0);
  if ((uVar4 & 1) == 0) {
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
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo);
    FUN_0679343c(lVar5,0);
    auVar2._8_8_ = in_stack_00000020;
    auVar2._0_8_ = in_stack_00000018;
    auVar1._8_8_ = in_stack_00000020;
    auVar1._0_8_ = in_stack_00000018;
    if (lVar5 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    *(undefined4 *)(lVar5 + 0x10) = 1;
    puVar3 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
    if (unaff_x20 == 0) {
      _in_stack_00000018 = auVar2;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar13 = *(long **)(unaff_x20 + 0x38);
    if (plVar13 == (long *)0x0) {
      _in_stack_00000018 = auVar1;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar11 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_078b6038;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar13,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,2)
    ;
LAB_078b6038:
    uVar7 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
    thunk_FUN_03afed3c();
    *(long *)(unaff_x20 + 0x20) = lVar5;
    thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar5);
    plVar13 = *(long **)(unaff_x20 + 0x38);
    if (plVar13 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar5 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_078b60bc;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar3,1);
LAB_078b60bc:
    _in_stack_00000018 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    uVar7 = FUN_0674aae0(&stack0x00000018,0);
    *(undefined8 *)(unaff_x19 + 0xc) = uVar7;
    thunk_FUN_03afed3c();
    puVar6 = (undefined8 *)(unaff_x19 + 0xc);
    uVar4 = FUN_065cd268(*puVar6,0);
    puVar3 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar4 & 1) == 0) {
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
      lVar5 = *plVar13;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)
                                     System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23)
      ;
LAB_078b6484:
      lVar5 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      uVar4 = 0;
      if (lVar5 != 0) {
        plVar13 = *(long **)(unaff_x20 + 0x48);
        if (plVar13 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar5 = *plVar13;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar3,0x23);
LAB_078b64ec:
        plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
        if (plVar13 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar5 = *plVar13;
        uVar7 = *puVar6;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                              ,0);
LAB_078b6558:
        uVar4 = (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
      }
    }
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar7 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                      (uVar4,*(undefined8 *)(unaff_x20 + 0x20));
    uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo);
    FUN_078c41d8(uVar9,uVar7,2,0,0);
    puVar8 = (undefined8 *)(unaff_x19 + 10);
    plVar13 = (long *)*puVar8;
    if (plVar13 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar5 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar7 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar10 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_03ac43c4(plVar13,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
    (*(code *)*puVar10)(plVar13,uVar7,uVar9,puVar10[1]);
    *puVar8 = 0;
    thunk_FUN_03afed3c(puVar8,0);
    *puVar6 = 0;
    thunk_FUN_03afed3c(puVar6,0);
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


