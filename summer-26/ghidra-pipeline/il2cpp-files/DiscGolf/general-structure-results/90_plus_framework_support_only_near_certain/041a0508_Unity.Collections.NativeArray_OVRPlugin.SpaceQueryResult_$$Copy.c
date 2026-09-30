/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 041a0508
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x23;
  undefined8 *in_stack_00000008;
  
                    /* try { // try from 041a0508 to 042a056b has its CatchHandler @ 041a0424 */
  if (param_2 != 1) {
    FUN_029794b4();
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar3 = *plVar1;
  __cxa_end_catch();
  plVar1 = (long *)*in_stack_00000008;
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_041a0598;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar1,*unaff_x23,0);
LAB_041a0598:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


