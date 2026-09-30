/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_edit_message_t_session_handle_get
ENTRY_POINT: 0856f188
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_edit_message_t_session_handle_get
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  int unaff_w23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_1 = *unaff_x24;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3[1] == 0) {
                    /* try { // try from 0856f1b0 to 0866f1b3 has its CatchHandler @ 0856f2ac */
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar3 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ee20);
                    /* try { // try from 0856f1e0 to 0866f1eb has its CatchHandler @ 0856f2e8 */
    FUN_061da510(uVar1,uVar4,*(undefined8 *)PTR_DAT_0932ee28,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *puVar3 = uVar1;
                    /* try { // try from 0856f200 to 0866f207 has its CatchHandler @ 0856f2e4 */
    thunk_FUN_040ec700(puVar3,uVar1);
  }
  FUN_05c282d8();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    in_stack_00000008._4_4_ = unaff_w23 - *(int *)(*(long *)(unaff_x19 + 0x30) + 0x18);
    if (in_stack_00000008._4_4_ == 0) {
      return;
    }
    lVar2 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,6);
    uVar1 = thunk_FUN_089d03e8();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = uVar1;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x20),uVar1);
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_092937c8;
          thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x28));
          uVar1 = FUN_07676bc4((long)&stack0x00000008 + 4,0);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = uVar1;
            thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x30),uVar1);
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_0932ee40;
              thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x38));
              if (4 < *(uint *)(lVar2 + 0x18)) {
                puVar3 = (undefined8 *)PTR_DAT_0928f648;
                if (in_stack_00000008._4_4_ < 2) {
                  puVar3 = (undefined8 *)PTR_DAT_09285978;
                }
                *(undefined8 *)(lVar2 + 0x40) = *puVar3;
                thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x40));
                if (5 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)PTR_DAT_0932ee38;
                  thunk_FUN_040ec700();
                  uVar1 = FUN_074e71ac(lVar2,0);
                  if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
                  }
                  FUN_08978b08(uVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


