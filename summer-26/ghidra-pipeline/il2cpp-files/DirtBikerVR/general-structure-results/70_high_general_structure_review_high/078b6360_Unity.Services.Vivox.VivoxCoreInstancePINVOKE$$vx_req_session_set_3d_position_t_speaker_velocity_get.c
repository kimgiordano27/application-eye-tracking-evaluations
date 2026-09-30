/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_speaker_velocity_get
ENTRY_POINT: 078b6360
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_speaker_velocity_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_x9;
  int *in_x10;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  long unaff_x26;
  long *unaff_x27;
  long in_stack_00002198;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_078b63e0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_078b63e0:
  uVar3 = (*(code *)*puVar2)();
  *(undefined8 *)(unaff_x21 + 0x28) = uVar3;
  thunk_FUN_03afed3c();
  *(long *)(unaff_x20 + 0x20) = unaff_x21;
  thunk_FUN_03afed3c();
  puVar2 = (undefined8 *)(unaff_x19 + 0xc);
  uVar4 = FUN_065cd268(*puVar2,0);
  puVar1 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
  if ((uVar4 & 1) == 0) {
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
    lVar8 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0x23) * 0x10 + 0x138);
          goto LAB_078b6484;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo
                          ,0x23);
LAB_078b6484:
    lVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    uVar4 = 0;
    if (lVar8 != 0) {
      plVar10 = *(long **)(unaff_x20 + 0x48);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar8 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0x23) * 0x10 + 0x138);
            goto LAB_078b64ec;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,0x23);
LAB_078b64ec:
      plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar8 = *plVar10;
      uVar3 = *puVar2;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_078b6558;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)
                                     System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                            ,0);
LAB_078b6558:
      uVar4 = (*(code *)*puVar5)(plVar10,uVar3,puVar5[1]);
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
                      (uVar4,*(undefined8 *)(unaff_x20 + 0x20));
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo);
    FUN_078c41d8(uVar6,uVar3,2,0,0);
    puVar5 = (undefined8 *)(unaff_x19 + 10);
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar8 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar3 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
            goto LAB_078b6610;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)
                                     System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
      (*(code *)*puVar7)(plVar10,uVar3,uVar6,puVar7[1]);
      *puVar5 = 0;
      thunk_FUN_03afed3c(puVar5,0);
      *puVar2 = 0;
      thunk_FUN_03afed3c(puVar2,0);
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


