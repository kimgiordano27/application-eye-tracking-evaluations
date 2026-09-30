/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_edit_message_t_session_handle_set
ENTRY_POINT: 0856f0f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_edit_message_t_session_handle_set
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iStack000000000000000c;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x170));
  FUN_04077588(PTR_DAT_0932ee20);
  FUN_04077588(PTR_DAT_092858e8);
                    /* try { // try from 0856f110 to 0866f133 has its CatchHandler @ 0856f2cc */
  FUN_04077588(PTR_DAT_0932ee28);
  FUN_04077588(PTR_DAT_0932ee30);
  FUN_04077588(PTR_DAT_092937c8);
  FUN_04077588(PTR_DAT_0932ee38);
  FUN_04077588(PTR_DAT_0932ee40);
  FUN_04077588(PTR_DAT_09285978);
                    /* try { // try from 0856f15c to 0866f167 has its CatchHandler @ 0856f2c0 */
  FUN_04077588(PTR_DAT_0928f648);
  *(undefined1 *)(unaff_x20 + 0xb0c) = 1;
  puVar3 = PTR_DAT_0932ee30;
  lVar7 = *(long *)(unaff_x19 + 0x30);
  iStack000000000000000c = 0;
  if (lVar7 != 0) {
                    /* try { // try from 0856f178 to 0866f17f has its CatchHandler @ 0856f2bc */
    iVar1 = *(int *)(lVar7 + 0x18);
    lVar4 = *(long *)PTR_DAT_0932ee30;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_0932ee18;
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar8 = puVar6[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar9 = *puVar6;
      lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ee20);
      FUN_061da510(lVar8,uVar9,*(undefined8 *)PTR_DAT_0932ee28,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar5 = lVar8;
      thunk_FUN_040ec700(plVar5,lVar8);
    }
    FUN_05c282d8(lVar7,lVar8,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      iStack000000000000000c = iVar1 - *(int *)(*(long *)(unaff_x19 + 0x30) + 0x18);
      if (iStack000000000000000c == 0) {
        return;
      }
      lVar7 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,6);
      uVar9 = thunk_FUN_089d03e8();
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          *(undefined8 *)(lVar7 + 0x20) = uVar9;
          thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x20),uVar9);
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_092937c8;
            thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x28));
            uVar9 = FUN_07676bc4(&stack0x0000000c,0);
            if (2 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x30) = uVar9;
              thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x30),uVar9);
              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_0932ee40;
                thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x38));
                if (4 < *(uint *)(lVar7 + 0x18)) {
                  puVar6 = (undefined8 *)PTR_DAT_0928f648;
                  if (iStack000000000000000c < 2) {
                    puVar6 = (undefined8 *)PTR_DAT_09285978;
                  }
                  *(undefined8 *)(lVar7 + 0x40) = *puVar6;
                  thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x40));
                  if (5 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)PTR_DAT_0932ee38;
                    thunk_FUN_040ec700();
                    uVar9 = FUN_074e71ac(lVar7,0);
                    if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
                    }
                    FUN_08978b08(uVar9,0);
                    return;
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


