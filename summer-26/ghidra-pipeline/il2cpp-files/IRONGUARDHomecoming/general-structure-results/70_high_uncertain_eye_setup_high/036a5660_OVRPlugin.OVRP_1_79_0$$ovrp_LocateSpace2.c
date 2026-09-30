/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_LocateSpace2
ENTRY_POINT: 036a5660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_LocateSpace2(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  
  while ((lVar1 = FUN_030f28e4(param_1,param_2,param_3), lVar1 != 0 &&
         (*(long *)(unaff_x19 + 0x58) != 0))) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
                    /* try { // try from 036a5680 to 037a568f has its CatchHandler @ 036a57ec */
    lVar1 = FUN_030f28e4(*(long *)(unaff_x19 + 0x58),unaff_w21,*unaff_x24);
    if (lVar1 == 0) break;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x25);
    }
                    /* try { // try from 036a56a0 to 037a56a3 has its CatchHandler @ 036a57e8 */
                    /* try { // try from 036a56a4 to 037a5747 has its CatchHandler @ 036a57f0 */
    FUN_040bcc4c(uVar2,uVar3,0);
    param_1 = *(long *)(unaff_x19 + 0x58);
    if (param_1 == 0) break;
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(param_1 + 0x18) <= (int)unaff_w21) {
      do {
        unaff_x20 = (ulong)unaff_w26;
        if (*(int *)(param_1 + 0x18) <= (int)unaff_w26) {
          return;
        }
        unaff_w26 = unaff_w26 + 1;
        unaff_w21 = unaff_w26;
      } while (*(int *)(param_1 + 0x18) <= (int)unaff_w26);
    }
    param_3 = *unaff_x24;
    param_2 = unaff_x20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


