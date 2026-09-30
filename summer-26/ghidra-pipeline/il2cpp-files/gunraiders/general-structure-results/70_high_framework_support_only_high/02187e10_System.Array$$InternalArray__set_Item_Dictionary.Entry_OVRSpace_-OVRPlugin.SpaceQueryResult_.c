/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 02187e10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  *(long **)(*(long *)(param_1 + 0xb8) + 0x10) = param_2;
  puVar1 = PTR_DAT_042392c0;
                    /* try { // try from 02187e18 to 02287e1b has its CatchHandler @ 02188394 */
                    /* try { // try from 02187e1c to 02287e2b has its CatchHandler @ 021883cc */
  if (*param_2 != param_3) {
LAB_02187ea8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02187ea8 to 02287eab has its CatchHandler @ 02188398 */
    FUN_01c5d748();
  }
                    /* try { // try from 02187e34 to 02287e3f has its CatchHandler @ 021883a0 */
  uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_042392c0 + 0xb8) + 0x20);
  uVar2 = thunk_FUN_01c496e0(param_3);
  FUN_03245f44();
  plVar3 = (long *)FUN_03316eac(uVar5,uVar2,0);
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = 0;
  }
  else {
    lVar4 = *unaff_x22;
                    /* try { // try from 02187e84 to 02287e8f has its CatchHandler @ 021883e0 */
    if ((*plVar3 != lVar4) ||
       (*(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = plVar3, *plVar3 != lVar4))
    goto LAB_02187ea8;
  }
                    /* try { // try from 02187eb8 to 02287edb has its CatchHandler @ 021883d4 */
  return;
}


