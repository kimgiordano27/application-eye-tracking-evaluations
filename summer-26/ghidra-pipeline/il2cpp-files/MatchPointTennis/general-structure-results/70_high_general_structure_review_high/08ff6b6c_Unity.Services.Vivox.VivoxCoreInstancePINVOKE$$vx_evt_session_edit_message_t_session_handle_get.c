/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_session_handle_get
ENTRY_POINT: 08ff6b6c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_session_handle_get
          (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f20e28);
    FUN_04447ba8(PTR_DAT_09f21278);
    *(undefined1 *)(unaff_x20 + 0x502) = 1;
  }
  puVar1 = PTR_DAT_09f20e28;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar3 = *(ulong *)(param_3 + 0x18);
                    /* try { // try from 08ff6b9c to 090f6c7b has its CatchHandler @ 08ff6b9c
                       catch() { ... } // from try @ 08ff6b9c with catch @ 08ff6b9c
                       catch() { ... } // from try @ 08ff6fd4 with catch @ 08ff6b9c
                       catch() { ... } // from try @ 08ff7054 with catch @ 08ff6b9c
                       catch() { ... } // from try @ 08ff7080 with catch @ 08ff6b9c
                       catch() { ... } // from try @ 08ff70ec with catch @ 08ff6b9c */
  if (uVar3 == 0) {
    return 0;
  }
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      if ((uVar3 & 0xffffffff) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar3 = FUN_078b3160(*(undefined8 *)(param_3 + 0x20 + uVar4 * 8),*(undefined8 *)puVar1,5,0);
      if ((uVar3 & 1) != 0) {
        return *(undefined8 *)puVar1;
      }
      uVar3 = (ulong)*(uint *)(param_3 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(param_3 + 0x18));
  }
  uVar2 = FUN_078b5f20(*(undefined8 *)PTR_DAT_09f21278,param_3,0);
  return uVar2;
}


