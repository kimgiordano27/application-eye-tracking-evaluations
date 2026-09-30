/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 0567d6b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetClientColorDesc(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong in_x9;
  uint uVar2;
  ulong in_x10;
  ulong uVar3;
  long in_x11;
  long in_x12;
  long lVar4;
  ulong in_x13;
  long unaff_x19;
  
  while (param_1 < in_x13) {
    *(undefined4 *)(in_x11 + param_1 * 4) = *(undefined4 *)(in_x12 + param_1 * 4);
    param_1 = param_1 + 1;
    if (in_x9 == param_1) {
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_0567d734;
      uVar3 = *(ulong *)(lVar4 + 0x18);
      uVar2 = (uint)uVar3;
      if ((int)uVar2 < 1) {
        return;
      }
      uVar1 = 0;
      goto LAB_0567d6fc;
    }
    if (in_x10 == param_1) break;
    if (param_2 == 0) goto LAB_0567d734;
    in_x13 = (ulong)*(uint *)(param_2 + 0x18);
  }
LAB_0567d730:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
LAB_0567d6fc:
                    /* try { // try from 0567d700 to 0577d703 has its CatchHandler @ 0567dc28 */
  if ((uVar3 & 0xffffffff) == uVar1) goto LAB_0567d730;
  if (param_3 == 0) {
LAB_0567d734:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(uint *)(param_3 + 0x18) <= uVar1) goto LAB_0567d730;
                    /* try { // try from 0567d714 to 0577d717 has its CatchHandler @ 0567db4c */
                    /* try { // try from 0567d718 to 0577d767 has its CatchHandler @ 0567ccdc */
  *(undefined4 *)(param_3 + 0x20 + uVar1 * 4) = *(undefined4 *)(lVar4 + 0x20 + uVar1 * 4);
  uVar1 = uVar1 + 1;
  if ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) == uVar1) {
    return;
  }
  goto LAB_0567d6fc;
}


