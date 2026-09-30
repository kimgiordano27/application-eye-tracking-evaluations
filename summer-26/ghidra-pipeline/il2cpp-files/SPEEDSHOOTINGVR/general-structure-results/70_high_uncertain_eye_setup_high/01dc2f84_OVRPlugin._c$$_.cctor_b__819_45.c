/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_45
ENTRY_POINT: 01dc2f84
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


void OVRPlugin_<>c__<_cctor>b__819_45(ulong param_1,long *param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 01dc2f94 to 01ec2fa3 has its CatchHandler @ 01dc3180 */
    FUN_00fdc2e4(PTR_DAT_0235ab78);
    FUN_00fdc2e4(PTR_DAT_0235ab80);
    FUN_00fdc2e4(PTR_DAT_02351770);
                    /* try { // try from 01dc2fb8 to 01ec2fbb has its CatchHandler @ 01dc3160 */
    FUN_00fdc2e4(PTR_DAT_02351a28);
    *(undefined1 *)(unaff_x26 + 0xaae) = 1;
  }
  puVar1 = PTR_DAT_0235ab80;
                    /* try { // try from 01dc2fd4 to 01ec2fd7 has its CatchHandler @ 01dc317c */
  if (*(long *)(*unaff_x25 + 0x38) == 0) {
    FUN_0103c2a0();
  }
                    /* try { // try from 01dc2fe4 to 01ec2fe7 has its CatchHandler @ 01dc3158 */
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_0103c2a0();
  }
  if (param_4 == 0) {
    param_3 = 1;
  }
  if (unaff_w19 == 0) {
    unaff_x22 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x01dc3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1d8))
            (param_2,param_3,param_4,unaff_x22,unaff_w19,unaff_w20 & 1,
             *(undefined8 *)(*param_2 + 0x1e0));
  return;
}


