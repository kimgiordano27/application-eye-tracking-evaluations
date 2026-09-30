/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 047a5dac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (long *param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  
  local_48 = param_2;
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (FUN_04447ba8(PTR_DAT_09f252c0), *(long *)(param_3 + 0x38) == 0)) {
    FUN_04482014(param_3);
  }
                    /* try { // try from 047a5dfc to 048a5dff has its CatchHandler @ 047a653c */
  local_44 = 0;
                    /* try { // try from 047a5e00 to 048a5e0b has its CatchHandler @ 047a6588 */
  iVar3 = thunk_FUN_04457530(param_1,0);
  if (iVar3 < 2) {
    uVar4 = FUN_07a56bec(param_1,0);
    puVar1 = PTR_DAT_09f252c0;
                    /* try { // try from 047a5e18 to 048a5e23 has its CatchHandler @ 047a6578 */
    if ((int)uVar4 < 1) {
      bVar2 = false;
    }
    else {
                    /* try { // try from 047a5e24 to 048a5e2f has its CatchHandler @ 047a6570 */
      uVar8 = 0;
      bVar2 = true;
      do {
                    /* try { // try from 047a5e38 to 048a5e3f has its CatchHandler @ 047a6550 */
                    /* try { // try from 047a5e40 to 048a5e53 has its CatchHandler @ 047a6548 */
        memcpy(&local_44,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
               (ulong)*(uint *)(*param_1 + 0x104));
        local_58[0] = local_44;
                    /* try { // try from 047a5e5c to 048a5ea7 has its CatchHandler @ 047a65cc */
        uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),local_58);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar1);
        }
        uVar6 = FUN_0956d854(&local_48,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        if ((uVar6 & 1) != 0) {
          return bVar2;
        }
        uVar8 = uVar8 + 1;
        bVar2 = uVar8 < uVar4;
      } while (uVar4 != uVar8);
    }
    return bVar2;
  }
                    /* try { // try from 047a5ed8 to 048a5ef3 has its CatchHandler @ 047a6594 */
  thunk_FUN_044adef4(PTR_DAT_09f25260);
  uVar5 = thunk_FUN_0448520c();
  uVar7 = thunk_FUN_044adef4(PTR_DAT_09f25268);
                    /* try { // try from 047a5ef4 to 048a5f03 has its CatchHandler @ 047a656c */
  FUN_07a4f424(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 047a5f0c to 048a5f13 has its CatchHandler @ 047a6568 */
  FUN_04447d10(uVar5,param_3);
}


