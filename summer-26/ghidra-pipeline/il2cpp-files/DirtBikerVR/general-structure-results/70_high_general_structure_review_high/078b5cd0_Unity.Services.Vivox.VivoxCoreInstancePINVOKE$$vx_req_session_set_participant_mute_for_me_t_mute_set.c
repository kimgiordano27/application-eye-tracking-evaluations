/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_participant_mute_for_me_t_mute_set
ENTRY_POINT: 078b5cd0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_mute_set
               (undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000028;
  long in_stack_00002198;
  
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  *unaff_x19 = 0xffffffff;
  uStack0000000000000028 = param_1;
  FUN_0666e9a8(&stack0x00000028,0);
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo);
  FUN_0679343c(lVar4,0);
  auVar2._8_8_ = in_stack_00000020;
  auVar2._0_8_ = in_stack_00000018;
  auVar1._8_8_ = in_stack_00000020;
  auVar1._0_8_ = in_stack_00000018;
  if (lVar4 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    *(undefined4 *)(lVar4 + 0x10) = 1;
    puVar3 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
    if (unaff_x20 == 0) {
      _in_stack_00000018 = auVar2;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      plVar13 = *(long **)(unaff_x20 + 0x38);
      if (plVar13 == (long *)0x0) {
        _in_stack_00000018 = auVar1;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      else {
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
        uVar6 = (*(code *)*puVar5)(plVar13,puVar5[1]);
        *(undefined8 *)(lVar4 + 0x28) = uVar6;
        thunk_FUN_03afed3c();
        *(long *)(unaff_x20 + 0x20) = lVar4;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar4);
        plVar13 = *(long **)(unaff_x20 + 0x38);
        if (plVar13 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
        }
        else {
          lVar4 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_078b60bc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar3,1);
LAB_078b60bc:
          _in_stack_00000018 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          uVar6 = FUN_0674aae0(&stack0x00000018,0);
          *(undefined8 *)(unaff_x19 + 0xc) = uVar6;
          thunk_FUN_03afed3c();
          puVar5 = (undefined8 *)(unaff_x19 + 0xc);
          uVar11 = FUN_065cd268(*puVar5,0);
          puVar3 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
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
            lVar4 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                  goto LAB_078b6484;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_03ac43c4(plVar13,*(long *)
                                           System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo
                                  ,0x23);
LAB_078b6484:
            lVar4 = (*(code *)*puVar7)(plVar13,puVar7[1]);
            uVar11 = 0;
            if (lVar4 != 0) {
              plVar13 = *(long **)(unaff_x20 + 0x48);
              if (plVar13 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              lVar4 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                    puVar7 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                    goto LAB_078b64ec;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar3,0x23);
LAB_078b64ec:
              plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
              if (plVar13 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              lVar4 = *plVar13;
              uVar6 = *puVar5;
              uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo)
                  {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_078b6558;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)
                       FUN_03ac43c4(plVar13,*(long *)
                                             System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                    ,0);
LAB_078b6558:
              uVar11 = (*(code *)*puVar7)(plVar13,uVar6,puVar7[1]);
            }
          }
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
          }
          else {
            uVar6 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                              (uVar11,*(undefined8 *)(unaff_x20 + 0x20));
            uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        System_Collections_Generic_List<TriangleER>_TypeInfo);
            FUN_078c41d8(uVar8,uVar6,2,0,0);
            puVar7 = (undefined8 *)(unaff_x19 + 10);
            plVar13 = (long *)*puVar7;
            if (plVar13 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
            }
            else {
              lVar4 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
              uVar6 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar4 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                    goto LAB_078b6610;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_03ac43c4(plVar13,*(long *)
                                             System_Collections_Generic_List<TransactionItem>_TypeInfo
                                    ,0xb);
LAB_078b6610:
              (*(code *)*puVar9)(plVar13,uVar6,uVar8,puVar9[1]);
              *puVar7 = 0;
              thunk_FUN_03afed3c(puVar7,0);
              *puVar5 = 0;
              thunk_FUN_03afed3c(puVar5,0);
              *unaff_x19 = 0xfffffffe;
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_0666d184(unaff_x19 + 2,0);
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


