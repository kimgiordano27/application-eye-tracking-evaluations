/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 03999d94
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(long param_1)

{
  uint uVar1;
  ulong in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  do {
                    /* catch() { ... } // from try @ 03999d88 with catch @ 03999d98 */
    if (in_x9 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
                    /* try { // try from 03999d9c to 03a99da3 has its CatchHandler @ 03999dac */
    if (unaff_x19 == 0) {
LAB_03999df0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = param_1 + unaff_x21;
                    /* try { // try from 03999da4 to 03a99daf has its CatchHandler @ 0399988c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03999d9c with catch @ 03999dac
                        */
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x28));
    if ((uVar1 & 1) == 0) {
LAB_03999ddc:
      return uVar1 & 1;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) goto LAB_03999ddc;
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_03999df0;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


