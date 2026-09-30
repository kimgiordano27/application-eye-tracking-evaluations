/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_participant_mute_for_me_t_session_handle_set
ENTRY_POINT: 078b5a78
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_session_handle_set
               (void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar10;
  long *plVar11;
  long unaff_x26;
  long *unaff_x27;
  long in_stack_00002198;
  
  uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084ec1d8,&stack0x00001320);
  uVar3 = FUN_065c412c(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo,uVar3,0);
  uVar3 = FUN_065c0764(uVar3,*(undefined8 *)System_Collections_Generic_List<TypeIdentifier>_TypeInfo
                       ,0);
  FUN_078c790c(uVar3,0);
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo);
  FUN_0679343c(lVar4,0);
  if (lVar4 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    *(undefined4 *)(lVar4 + 0x10) = 0;
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x18);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x19 + 0x14) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      else {
        uVar2 = FUN_07336274(&stack0x00001ca0,0);
        *(uint *)(lVar4 + 0x20) = uVar2 & 0xffff;
        *(long *)(unaff_x20 + 0x20) = lVar4;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar4);
        puVar10 = (undefined8 *)(unaff_x19 + 0xc);
        uVar5 = FUN_065cd268(*puVar10,0);
        puVar1 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
        if ((uVar5 & 1) == 0) {
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
          lVar4 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0x23) * 0x10 + 0x138);
                goto LAB_078b6484;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_03ac43c4(plVar11,*(long *)
                                         System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,
                                0x23);
LAB_078b6484:
          lVar4 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          uVar5 = 0;
          if (lVar4 != 0) {
            plVar11 = *(long **)(unaff_x20 + 0x48);
            if (plVar11 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar4 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0x23) * 0x10 + 0x138);
                  goto LAB_078b64ec;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
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
            lVar4 = *plVar11;
            uVar3 = *puVar10;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_078b6558;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_03ac43c4(plVar11,*(long *)
                                           System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                  ,0);
LAB_078b6558:
            uVar5 = (*(code *)*puVar6)(plVar11,uVar3,puVar6[1]);
          }
        }
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
        }
        else {
          uVar3 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                            (uVar5,*(undefined8 *)(unaff_x20 + 0x20));
          uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      System_Collections_Generic_List<TriangleER>_TypeInfo);
          FUN_078c41d8(uVar7,uVar3,2,0,0);
          puVar6 = (undefined8 *)(unaff_x19 + 10);
          plVar11 = (long *)*puVar6;
          if (plVar11 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
          }
          else {
            lVar4 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            uVar3 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                  goto LAB_078b6610;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_03ac43c4(plVar11,*(long *)
                                           System_Collections_Generic_List<TransactionItem>_TypeInfo
                                  ,0xb);
LAB_078b6610:
            (*(code *)*puVar8)(plVar11,uVar3,uVar7,puVar8[1]);
            *puVar6 = 0;
            thunk_FUN_03afed3c(puVar6,0);
            *puVar10 = 0;
            thunk_FUN_03afed3c(puVar10,0);
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
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


