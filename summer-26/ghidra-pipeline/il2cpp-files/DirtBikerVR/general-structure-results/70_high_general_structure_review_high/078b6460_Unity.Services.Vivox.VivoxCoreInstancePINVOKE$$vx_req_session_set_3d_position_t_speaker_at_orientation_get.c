/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_speaker_at_orientation_get
ENTRY_POINT: 078b6460
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_speaker_at_orientation_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar7;
  long *unaff_x23;
  undefined8 uVar8;
  long unaff_x26;
  long *unaff_x27;
  long in_stack_00002198;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x23) * 0x10 + 0x138);
      goto LAB_078b6484;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_078b6484:
  lVar2 = (*(code *)*puVar1)();
  uVar8 = 0;
  if (lVar2 != 0) {
    plVar7 = *(long **)(unaff_x20 + 0x48);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0x23) * 0x10 + 0x138);
          goto LAB_078b64ec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar7,*unaff_x23,0x23);
LAB_078b64ec:
    plVar7 = (long *)(*(code *)*puVar1)(plVar7,puVar1[1]);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar2 = *plVar7;
    uVar8 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_078b6558;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_03ac43c4(plVar7,*(long *)
                                  System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                          ,0);
LAB_078b6558:
    uVar8 = (*(code *)*puVar1)(plVar7,uVar8,puVar1[1]);
  }
  if (unaff_x20 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    uVar8 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                      (uVar8,*(undefined8 *)(unaff_x20 + 0x20));
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo);
    FUN_078c41d8(uVar3,uVar8,2,0,0);
    puVar1 = (undefined8 *)(unaff_x19 + 10);
    plVar7 = (long *)*puVar1;
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar2 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      uVar8 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
            goto LAB_078b6610;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_03ac43c4(plVar7,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
      (*(code *)*puVar4)(plVar7,uVar8,uVar3,puVar4[1]);
      *puVar1 = 0;
      thunk_FUN_03afed3c(puVar1,0);
      *unaff_x21 = 0;
      thunk_FUN_03afed3c();
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


