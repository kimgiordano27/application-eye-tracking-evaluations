/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_create
ENTRY_POINT: 0902c134
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_create
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *puVar9;
  ushort unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x18) = unaff_x22;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x21;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x20));
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x24;
  *(ushort *)(unaff_x19 + 0x38) = unaff_w20;
  lVar6 = FUN_04447c90(*unaff_x28,7);
  if (lVar6 == 0) {

    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_chat_history_get_last_read_t_session_handle_set
    :
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_09fba400;
                    /* try { // try from 0902c18c to 0912c227 has its CatchHandler @ 0902c18c
                       catch() { ... } // from try @ 0902c18c with catch @ 0902c18c
                       catch() { ... } // from try @ 0902c2cc with catch @ 0902c18c
                       catch() { ... } // from try @ 0902c31c with catch @ 0902c18c
                       catch() { ... } // from try @ 0902c368 with catch @ 0902c18c
                       catch() { ... } // from try @ 0902c3dc with catch @ 0902c18c */
    thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x20));
    if (1 < *(uint *)(lVar6 + 0x18)) {
      *(undefined8 *)(lVar6 + 0x28) = unaff_x23;
      thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x28));
      if (2 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_09fc0540;
        thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x30));
        if (3 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x38) = unaff_x22;
          thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x38));
          if (4 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_09fc0580;
            thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x40));
            if (5 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x48) = unaff_x21;
              thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x48));
              puVar5 = PTR_DAT_09fbf340;
              puVar4 = PTR_DAT_09f2e358;
              puVar3 = PTR_DAT_09f22ba0;
              puVar2 = PTR_DAT_09f1ee00;
              puVar1 = PTR_DAT_09f1ede0;
              if (6 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)PTR_DAT_09fc0570;
                thunk_FUN_044bb4b4();
                uVar7 = FUN_078b57fc(lVar6,0);
                puVar9 = (undefined8 *)(unaff_x19 + 0x40);
                *puVar9 = uVar7;
                thunk_FUN_044bb4b4(puVar9,uVar7);
                lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_05bad610(lVar6,*(undefined8 *)puVar1);
                in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x28);
                uVar7 = FUN_0613c790(&stack0x00000008,*(undefined8 *)puVar3);
                FUN_090265e4(uVar7,lVar6,*(undefined8 *)puVar4,uVar7);
                in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x30);
                uVar7 = FUN_0613c790(&stack0x00000008,*(undefined8 *)puVar3);
                FUN_090265e4(uVar7,lVar6,*(undefined8 *)puVar5,uVar7);
                if ((0xff < unaff_w20) && ((unaff_w20 & 0xff) != 0)) {
                  uVar8 = System_Collections_Generic_ObjectEqualityComparer<InternedString>__IndexOf
                                    (&stack0x0000001c,*(undefined8 *)PTR_DAT_09fc0548);
                  uVar7 = uVar8;
                  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                    uVar7 = thunk_FUN_044a54b4(*unaff_x27);
                  }
                  FUN_090265e4(uVar7,lVar6,*(undefined8 *)PTR_DAT_09fc0560,uVar8);
                }
                puVar1 = PTR_DAT_09f20d00;
                if (lVar6 != 0) {
                  if (0 < *(int *)(lVar6 + 0x18)) {
                    uVar8 = *puVar9;
                    uVar7 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar6,0);
                    uVar7 = FUN_078b4f58(uVar8,*(undefined8 *)puVar1,uVar7,0);
                    *puVar9 = uVar7;
                    thunk_FUN_044bb4b4(puVar9,uVar7);
                  }
                  return;
                }
                goto 
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_chat_history_get_last_read_t_session_handle_set
                ;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


