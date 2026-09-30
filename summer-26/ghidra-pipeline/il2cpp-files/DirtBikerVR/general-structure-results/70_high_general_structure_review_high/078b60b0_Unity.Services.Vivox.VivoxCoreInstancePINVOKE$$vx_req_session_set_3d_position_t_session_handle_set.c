/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_session_handle_set
ENTRY_POINT: 078b60b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_set
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w9;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long *plVar10;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00002198;
  
  _in_stack_00000018 = (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  uVar2 = FUN_0674aae0(&stack0x00000018,0);
  *(undefined8 *)(unaff_x19 + 0xc) = uVar2;
  thunk_FUN_03afed3c();
  puVar9 = (undefined8 *)(unaff_x19 + 0xc);
  uVar3 = FUN_065cd268(*puVar9,0);
  puVar1 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar10 = *(long **)(unaff_x20 + 0x48);
    if (plVar10 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar7 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0x23) * 0x10 + 0x138);
          goto LAB_078b6484;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo
                          ,0x23);
LAB_078b6484:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar3 = 0;
    if (lVar7 != 0) {
      plVar10 = *(long **)(unaff_x20 + 0x48);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0x23) * 0x10 + 0x138);
            goto LAB_078b64ec;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x23);
LAB_078b64ec:
      plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar7 = *plVar10;
      uVar2 = *puVar9;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_078b6558;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)
                                     System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                            ,0);
LAB_078b6558:
      uVar3 = (*(code *)*puVar4)(plVar10,uVar2,puVar4[1]);
    }
  }
  if (unaff_x20 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    uVar2 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                      (uVar3,*(undefined8 *)(unaff_x20 + 0x20));
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo);
    FUN_078c41d8(uVar5,uVar2,2,0,0);
    puVar4 = (undefined8 *)(unaff_x19 + 10);
    plVar10 = (long *)*puVar4;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar2 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
            goto LAB_078b6610;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)
                                     System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
      (*(code *)*puVar6)(plVar10,uVar2,uVar5,puVar6[1]);
      *puVar4 = 0;
      thunk_FUN_03afed3c(puVar4,0);
      *puVar9 = 0;
      thunk_FUN_03afed3c(puVar9,0);
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
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


