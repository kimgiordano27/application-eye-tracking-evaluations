/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_velocity_get
ENTRY_POINT: 078b6860
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_velocity_get
               (void)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 unaff_x23;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
            ();
  *(undefined8 *)(unaff_x19 + 0x14) = unaff_x23;
  thunk_FUN_03afed3c(unaff_x19 + 0x14);
  lVar8 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                    ();
  if (lVar8 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_078b7484;
  }
  in_stack_00000028 = FUN_067c4bec(lVar8,0);
  uVar9 = FUN_0666e8e0(&stack0x00000028,0);
  if ((uVar9 & 1) == 0) {
    *unaff_x19 = 6;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    FUN_0666e9a8(&stack0x00000028,0);
    if (*(long *)(unaff_x19 + 0x14) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x14) + 0x10) != 0) {
      sVar2 = FUN_07336274(&stack0x00001ca0,0);
      if (sVar2 == 0) {
        if (*(long *)(unaff_x19 + 0x14) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084ec1d8,&stack0x00001320);
        uVar4 = FUN_065c412c(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo,uVar4,0);
        uVar4 = FUN_065c0764(uVar4,*(undefined8 *)
                                    System_Collections_Generic_List<TypeIdentifier>_TypeInfo,0);
        FUN_078c790c(uVar4,0);
      }
    }
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo);
    FUN_0679343c(lVar8,0);
    if (lVar8 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    *(undefined4 *)(lVar8 + 0x10) = 0;
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    thunk_FUN_03afed3c();
    if (*(long *)(unaff_x19 + 0x14) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar3 = FUN_07336274(&stack0x00001ca0,0);
    *(uint *)(lVar8 + 0x20) = uVar3 & 0xffff;
    *(long *)(unaff_x20 + 0x20) = lVar8;
    thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar8);
    puVar11 = (undefined8 *)(unaff_x19 + 0xc);
    uVar9 = FUN_065cd268(*puVar11,0);
    puVar1 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar9 & 1) == 0) {
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar12 = *(long **)(unaff_x20 + 0x48);
      if (plVar12 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar12,*(long *)
                                     System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23)
      ;
LAB_078b6484:
      lVar8 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      uVar9 = 0;
      if (lVar8 != 0) {
        plVar12 = *(long **)(unaff_x20 + 0x48);
        if (plVar12 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)puVar1,0x23);
LAB_078b64ec:
        plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
        if (plVar12 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar8 = *plVar12;
        uVar4 = *puVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_03ac43c4(plVar12,*(long *)
                                       System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                              ,0);
LAB_078b6558:
        uVar9 = (*(code *)*puVar5)(plVar12,uVar4,puVar5[1]);
      }
    }
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar4 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                      (uVar9,*(undefined8 *)(unaff_x20 + 0x20));
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo);
    FUN_078c41d8(uVar6,uVar4,2,0,0);
    puVar5 = (undefined8 *)(unaff_x19 + 10);
    plVar12 = (long *)*puVar5;
    if (plVar12 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar4 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo
                          ,0xb);
LAB_078b6610:
    (*(code *)*puVar7)(plVar12,uVar4,uVar6,puVar7[1]);
    *puVar5 = 0;
    thunk_FUN_03afed3c(puVar5,0);
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


