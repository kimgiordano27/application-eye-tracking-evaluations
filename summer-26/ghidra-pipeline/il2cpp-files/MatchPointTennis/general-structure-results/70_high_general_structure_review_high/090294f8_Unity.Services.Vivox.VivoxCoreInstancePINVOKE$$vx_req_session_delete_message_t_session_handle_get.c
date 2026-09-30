/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_delete_message_t_session_handle_get
ENTRY_POINT: 090294f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_delete_message_t_session_handle_get
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ushort unaff_w20;
  
  puVar3 = PTR_DAT_09fc0530;
  if ((DAT_0a5336aa & 1) == 0) {
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
    FUN_04447ba8(PTR_DAT_09f20d00);
    FUN_04447ba8(PTR_DAT_09f20d08);
    FUN_04447ba8(PTR_DAT_09fc0540);
    FUN_04447ba8(PTR_DAT_09fc0560);
    DAT_0a5336aa = 1;
  }
  puVar1 = PTR_DAT_09f1e5f0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a80df4(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x20),param_4);
  *(ushort *)(param_1 + 0x28) = unaff_w20;
  lVar4 = FUN_04447c90(*(undefined8 *)puVar1,6);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09fba400;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x20));
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x28) = param_2;
        thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),param_2);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09fc0540;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
          if (3 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x38) = param_3;
            thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38),param_3);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09fc0538;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x40));
              puVar2 = PTR_DAT_09f1ee00;
              puVar1 = PTR_DAT_09f1ede0;
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x48) = param_4;
                thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x48),param_4);
                uVar5 = FUN_078b57fc(lVar4,0);
                puVar8 = (undefined8 *)(param_1 + 0x30);
                *puVar8 = uVar5;
                thunk_FUN_044bb4b4(puVar8,uVar5);
                lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_05bad610(lVar4,*(undefined8 *)puVar1);
                if ((0xff < unaff_w20) && ((unaff_w20 & 0xff) != 0)) {
                  uVar6 = System_Collections_Generic_ObjectEqualityComparer<InternedString>__IndexOf
                                    (&stack0x0000000c,*(undefined8 *)PTR_DAT_09fc0548);
                  lVar7 = *(long *)puVar3;
                  uVar5 = uVar6;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    uVar5 = thunk_FUN_044a54b4(lVar7);
                  }
                  FUN_090265e4(uVar5,lVar4,*(undefined8 *)PTR_DAT_09fc0560,uVar6);
                }
                puVar3 = PTR_DAT_09f20d00;
                if (lVar4 != 0) {
                  if (0 < *(int *)(lVar4 + 0x18)) {
                    uVar6 = *puVar8;
                    uVar5 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar4,0);
                    uVar5 = FUN_078b4f58(uVar6,*(undefined8 *)puVar3,uVar5,0);
                    *puVar8 = uVar5;
                    thunk_FUN_044bb4b4(puVar8,uVar5);
                  }
                  return;
                }
                goto LAB_0902981c;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_0902981c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


