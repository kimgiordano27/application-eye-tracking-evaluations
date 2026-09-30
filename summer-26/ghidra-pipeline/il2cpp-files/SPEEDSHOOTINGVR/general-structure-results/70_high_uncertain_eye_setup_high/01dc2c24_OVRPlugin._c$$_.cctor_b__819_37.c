/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_37
ENTRY_POINT: 01dc2c24
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_37(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  lVar2 = FUN_00fdc388(*param_1,unaff_w19);
  if (unaff_w19 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
                    /* try { // try from 01dc2c54 to 01ec2c57 has its CatchHandler @ 01dc2e38 */
      *(undefined1 *)(lVar2 + 0x20 + uVar3) = *(undefined1 *)(unaff_x21 + uVar3);
      uVar3 = uVar3 + 1;
    } while (unaff_w19 != uVar3);
  }
                    /* try { // try from 01dc2c68 to 01ec2c6b has its CatchHandler @ 01dc2e30 */
                    /* try { // try from 01dc2c7c to 01ec2c7f has its CatchHandler @ 01dc2e2c */
                    /* WARNING: Could not recover jumptable at 0x01dc2c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 01dc2c88 to 01ec2caf has its CatchHandler @ 01dc2e38 */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


