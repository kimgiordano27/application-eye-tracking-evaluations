/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_speaker_position_get
ENTRY_POINT: 078b6260
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_speaker_position_get
               (void *param_1,void *param_2,size_t param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *plVar11;
  long unaff_x26;
  long *unaff_x27;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  memcpy(param_1,param_2,param_3);
  if (*(long *)(unaff_x19 + 0x10) == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    auVar12 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo);
    memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
    memset(&stack0x000009a8,0,0x4c0);
    FUN_078b748c(uVar2,unaff_w21,2,&stack0x00000e68,auVar12._0_8_,auVar12._8_8_,&stack0x000009a8);
    lVar3 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                      ();
    if (lVar3 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      in_stack_00000028 = FUN_067c4bec(lVar3,0);
      uVar4 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_0666e9a8(&stack0x00000028,0);
        lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar3,0);
        if (lVar3 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar3 + 0x10) = 2;
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar11 = *(long **)(unaff_x20 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar9 = *plVar11;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_078b63e0;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_03ac43c4(plVar11,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,0);
LAB_078b63e0:
        uVar2 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        *(undefined8 *)(lVar3 + 0x28) = uVar2;
        thunk_FUN_03afed3c();
        *(long *)(unaff_x20 + 0x20) = lVar3;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar3);
        puVar5 = (undefined8 *)(unaff_x19 + 0xc);
        uVar4 = FUN_065cd268(*puVar5,0);
        puVar1 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
        if ((uVar4 & 1) == 0) {
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar11 = *(long **)(unaff_x20 + 0x48);
          if (plVar11 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar3 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
                goto LAB_078b6484;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_03ac43c4(plVar11,*(long *)
                                         System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,
                                0x23);
LAB_078b6484:
          lVar3 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          uVar4 = 0;
          if (lVar3 != 0) {
            plVar11 = *(long **)(unaff_x20 + 0x48);
            if (plVar11 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar3 = *plVar11;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
                  goto LAB_078b64ec;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar1,0x23);
LAB_078b64ec:
            plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
            if (plVar11 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar3 = *plVar11;
            uVar2 = *puVar5;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_078b6558;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_03ac43c4(plVar11,*(long *)
                                           System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                  ,0);
LAB_078b6558:
            uVar4 = (*(code *)*puVar6)(plVar11,uVar2,puVar6[1]);
          }
        }
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                          (uVar4,*(undefined8 *)(unaff_x20 + 0x20));
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TriangleER>_TypeInfo);
        FUN_078c41d8(uVar7,uVar2,2,0,0);
        puVar6 = (undefined8 *)(unaff_x19 + 10);
        plVar11 = (long *)*puVar6;
        if (plVar11 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar3 = *plVar11;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        uVar2 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
              goto LAB_078b6610;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar11,*(long *)
                                       System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb
                             );
LAB_078b6610:
        (*(code *)*puVar8)(plVar11,uVar2,uVar7,puVar8[1]);
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


