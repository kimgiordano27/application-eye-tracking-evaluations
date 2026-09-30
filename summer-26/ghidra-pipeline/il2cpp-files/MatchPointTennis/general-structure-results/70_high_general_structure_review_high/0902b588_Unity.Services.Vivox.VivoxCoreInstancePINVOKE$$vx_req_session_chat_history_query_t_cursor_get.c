/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_cursor_get
ENTRY_POINT: 0902b588
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_cursor_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  ushort unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x27;
  
  FUN_04447ba8(PTR_DAT_09fc0580);
  FUN_04447ba8(PTR_DAT_09f20d00);
  FUN_04447ba8(PTR_DAT_09f20d08);
  FUN_04447ba8(PTR_DAT_09fc0540);
  FUN_04447ba8(PTR_DAT_09fc0560);
  *(undefined1 *)(unaff_x25 + 0x6b0) = 1;
  puVar1 = PTR_DAT_09f1e5f0;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a80df4();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x24;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x22;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28));
  *(ushort *)(unaff_x19 + 0x30) = unaff_w20;
  lVar3 = FUN_04447c90(*(undefined8 *)puVar1,8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_09fba400;
      thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = unaff_x24;
        thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_09fc0540;
          thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30));
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = unaff_x23;
            thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_09fc0580;
              thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = unaff_x22;
                thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x48));
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_09fc0538;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x50));
                  puVar2 = PTR_DAT_09f1ee00;
                  puVar1 = PTR_DAT_09f1ede0;
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x58) = unaff_x21;
                    thunk_FUN_044bb4b4();
                    uVar4 = FUN_078b57fc(lVar3,0);
                    puVar6 = (undefined8 *)(unaff_x19 + 0x38);
                    *puVar6 = uVar4;
                    thunk_FUN_044bb4b4(puVar6,uVar4);
                    lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                    FUN_05bad610(lVar3,*(undefined8 *)puVar1);
                    if ((0xff < unaff_w20) && ((unaff_w20 & 0xff) != 0)) {
                      uVar5 = System_Collections_Generic_ObjectEqualityComparer<InternedString>__IndexOf
                                        (&stack0x0000000c,*(undefined8 *)PTR_DAT_09fc0548);
                      uVar4 = uVar5;
                      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                        uVar4 = thunk_FUN_044a54b4(*unaff_x27);
                      }
                      FUN_090265e4(uVar4,lVar3,*(undefined8 *)PTR_DAT_09fc0560,uVar5);
                    }
                    puVar1 = PTR_DAT_09f20d00;
                    if (lVar3 != 0) {
                      if (0 < *(int *)(lVar3 + 0x18)) {
                        uVar5 = *puVar6;
                        uVar4 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar3,0);
                        uVar4 = FUN_078b4f58(uVar5,*(undefined8 *)puVar1,uVar4,0);
                        *puVar6 = uVar4;
                        thunk_FUN_044bb4b4(puVar6,uVar4);
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


