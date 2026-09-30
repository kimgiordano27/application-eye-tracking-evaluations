/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_removed_t_session_handle_get
ENTRY_POINT: 05fdb0f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_removed_t_session_handle_get
               (void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x22 + 0x288) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (unaff_x20 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 1);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar3 = *(long *)(unaff_x20 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x10);
      uVar4 = *unaff_x19;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
                    /* try { // try from 05fdb154 to 060db157 has its CatchHandler @ 05fdb374 */
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 05fdb168 to 060db16f has its CatchHandler @ 05fdb364 */
          lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + 0x20) = uVar4;
          *(uint *)(lVar5 + 0x28) = uVar1;
          return;
        }
        FUN_04041608();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


