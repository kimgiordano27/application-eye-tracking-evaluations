/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_cursor_set
ENTRY_POINT: 0902b4f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_cursor_set
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort unaff_w20;
  long unaff_x25;
  long unaff_x27;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x27 + 0x530);
  if ((*(byte *)(unaff_x25 + 0x6b0) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fc0530);
    FUN_04447ba8(PTR_DAT_09f1ede0);
    FUN_04447ba8(PTR_DAT_09f1fbb8);
    FUN_04447ba8(PTR_DAT_09f1ee00);
    FUN_04447ba8(PTR_DAT_09f26eb0);
    FUN_04447ba8(PTR_DAT_09fc0548);
    FUN_04447ba8(PTR_DAT_09f20de0);
    FUN_04447ba8(PTR_DAT_09f1e5f0);
    FUN_04447ba8(PTR_DAT_09fc0538);
    FUN_04447ba8(PTR_DAT_09fba400);
    FUN_04447ba8(PTR_DAT_09fc0580);
    FUN_04447ba8(PTR_DAT_09f20d00);
    FUN_04447ba8(PTR_DAT_09f20d08);
    FUN_04447ba8(PTR_DAT_09fc0540);
    FUN_04447ba8(PTR_DAT_09fc0560);
    *(undefined1 *)(unaff_x25 + 0x6b0) = 1;
  }
  puVar1 = PTR_DAT_09f1e5f0;
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a80df4(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x20),param_4);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x28),param_5);
  *(ushort *)(param_1 + 0x30) = unaff_w20;
  lVar3 = FUN_04447c90(*(undefined8 *)puVar1,8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_09fba400;
      thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = param_2;
        thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x28),param_2);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_09fc0540;
          thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30));
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = param_3;
            thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x38),param_3);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_09fc0580;
              thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = param_4;
                thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x48),param_4);
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_09fc0538;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x50));
                  puVar2 = PTR_DAT_09f1ee00;
                  puVar1 = PTR_DAT_09f1ede0;
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x58) = param_5;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x58),param_5);
                    uVar4 = FUN_078b57fc(lVar3,0);
                    puVar7 = (undefined8 *)(param_1 + 0x38);
                    *puVar7 = uVar4;
                    thunk_FUN_044bb4b4(puVar7,uVar4);
                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                    FUN_05bad610(lVar3,*(undefined8 *)puVar1);
                    if ((0xff < unaff_w20) && ((unaff_w20 & 0xff) != 0)) {
                      uVar5 = System_Collections_Generic_ObjectEqualityComparer<InternedString>__IndexOf
                                        (&stack0x0000000c,*(undefined8 *)PTR_DAT_09fc0548);
                      lVar6 = *plVar8;
                      uVar4 = uVar5;
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        uVar4 = thunk_FUN_044a54b4(lVar6);
                      }
                      FUN_090265e4(uVar4,lVar3,*(undefined8 *)PTR_DAT_09fc0560,uVar5);
                    }
                    puVar1 = PTR_DAT_09f20d00;
                    if (lVar3 != 0) {
                      if (0 < *(int *)(lVar3 + 0x18)) {
                        uVar5 = *puVar7;
                        uVar4 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar3,0);
                        uVar4 = FUN_078b4f58(uVar5,*(undefined8 *)puVar1,uVar4,0);
                        *puVar7 = uVar4;
                        thunk_FUN_044bb4b4(puVar7,uVar4);
                      }
                      return;
                    }
                    goto 
                    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_participant_uri_set
                    ;
                  }
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

  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_participant_uri_set
  :
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


