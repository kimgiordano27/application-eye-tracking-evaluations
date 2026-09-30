/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 06385728
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  byte bVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long lVar3;
  long unaff_x22;
  long in_stack_00000048;
  
  uVar2 = FUN_062454e8();
                    /* try { // try from 06385740 to 06485743 has its CatchHandler @ 06385754 */
  bVar1 = *(byte *)(*(long *)PTR_DAT_07d96678 + 0x130);
                    /* catch() { ... } // from try @ 06385740 with catch @ 06385754 */
  if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07d96678))
  {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
                    /* try { // try from 0638576c to 06485783 has its CatchHandler @ 06385798 */
  lVar3 = unaff_x19[7];
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0x98) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
                    /* try { // try from 06385784 to 0648578f has its CatchHandler @ 063855c0 */
  FUN_06276eb8(uVar2,lVar3,0);
                    /* try { // try from 06385790 to 06485797 has its CatchHandler @ 06385798 */
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


