/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_speaker_up_orientation_set
ENTRY_POINT: 078b64dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_speaker_up_orientation_set
               (long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  long unaff_x26;
  long *unaff_x27;
  long in_stack_00002198;
  
  plVar1 = (long *)(**(code **)(param_1 + (long)(*in_x10 + 0x23) * 0x10 + 0x138))();
  if (plVar1 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    lVar5 = *plVar1;
    uVar8 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_078b6558;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_03ac43c4(plVar1,*(long *)
                                  System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                          ,0);
LAB_078b6558:
    uVar8 = (*(code *)*puVar2)(plVar1,uVar8,puVar2[1]);
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      uVar8 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                        (uVar8,*(undefined8 *)(unaff_x20 + 0x20));
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo
                                );
      FUN_078c41d8(uVar3,uVar8,2,0,0);
      puVar2 = (undefined8 *)(unaff_x19 + 10);
      plVar1 = (long *)*puVar2;
      if (plVar1 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      else {
        lVar5 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar8 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
              goto LAB_078b6610;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_03ac43c4(plVar1,*(long *)
                                      System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb)
        ;
LAB_078b6610:
        (*(code *)*puVar4)(plVar1,uVar8,uVar3,puVar4[1]);
        *puVar2 = 0;
        thunk_FUN_03afed3c(puVar2,0);
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
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


