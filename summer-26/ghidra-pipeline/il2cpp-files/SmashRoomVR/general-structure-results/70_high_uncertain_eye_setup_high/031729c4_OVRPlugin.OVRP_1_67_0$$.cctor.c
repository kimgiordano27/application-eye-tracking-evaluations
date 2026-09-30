/*
FUNCTION_NAME: OVRPlugin.OVRP_1_67_0$$.cctor
ENTRY_POINT: 031729c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_67_0___cctor(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  uint uVar4;
  
                    /* try { // try from 031729c4 to 032729c7 has its CatchHandler @ 03172b00 */
                    /* try { // try from 031729c8 to 032729e3 has its CatchHandler @ 03172b10 */
  if (*(char *)(unaff_x19 + 0x54) != '\0') {
    lVar2 = FUN_0391c2b8();
                    /* try { // try from 031729e4 to 03272b27 has its CatchHandler @ 03172760 */
    if ((lVar2 == 0) || (lVar2 = FUN_01ed7d50(lVar2,*(undefined8 *)StringLiteral_4012), lVar2 == 0))
    {
LAB_03172a44:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_03172a44;
        FUN_038fe3fc(lVar3,0,0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}


