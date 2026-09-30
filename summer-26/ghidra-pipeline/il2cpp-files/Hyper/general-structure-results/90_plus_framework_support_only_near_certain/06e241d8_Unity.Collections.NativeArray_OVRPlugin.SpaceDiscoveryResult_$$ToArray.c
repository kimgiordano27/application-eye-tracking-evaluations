/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 06e241d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long *unaff_x22;
  long lStack0000000000000008;
  undefined8 *in_stack_00000010;
  
  lStack0000000000000008 = param_1;
  __cxa_end_catch();
  plVar5 = (long *)*in_stack_00000010;
                    /* try { // try from 06e241e8 to 06f241ff has its CatchHandler @ 06e2426c */
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 06e24200 to 06f2425b has its CatchHandler @ 06e24010 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06e24238;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,*unaff_x22,0);
LAB_06e24238:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (lStack0000000000000008 == 0) {
                    /* try { // try from 06e2425c to 06f2426b has its CatchHandler @ 06e2426c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


