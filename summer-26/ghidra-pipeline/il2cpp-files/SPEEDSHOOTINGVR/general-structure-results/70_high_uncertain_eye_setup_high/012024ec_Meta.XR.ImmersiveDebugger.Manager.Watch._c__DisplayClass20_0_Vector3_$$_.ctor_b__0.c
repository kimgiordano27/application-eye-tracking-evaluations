/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$<.ctor>b__0
ENTRY_POINT: 012024ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>__<_ctor>b__0(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  FUN_01dc37f8();
  if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
    uVar3 = 0;
    uVar1 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
                    /* try { // try from 01202504 to 01302507 has its CatchHandler @ 01202b0c */
    do {
                    /* try { // try from 01202508 to 01302513 has its CatchHandler @ 01202b3c */
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01202614 to 0130261b has its CatchHandler @ 01202b00 */
        FUN_00fdc53c();
      }
      FUN_01fb5e84(*(undefined8 *)(unaff_x21 + 0x20 + uVar3 * 8),0);
                    /* try { // try from 01202524 to 0130252f has its CatchHandler @ 01202b34 */
      FUN_01dc3848();
      uVar1 = (ulong)*(uint *)(unaff_x21 + 0x18);
                    /* try { // try from 01202530 to 0130253b has its CatchHandler @ 01202b30 */
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  }
                    /* try { // try from 01202544 to 0130254b has its CatchHandler @ 01202b20 */
  FUN_01dc37f8();
                    /* try { // try from 0120254c to 0130255f has its CatchHandler @ 01202b18 */
  uVar2 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar2 = FUN_01d5e86c(uVar2,0);
  FUN_01fb5e84(uVar2,0);
  FUN_01dc3848();
                    /* WARNING: Could not recover jumptable at 0x012025a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x168))();
  return;
}


