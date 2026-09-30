/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 03794d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  
  piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
                    /* try { // try from 03794d5c to 03894d5f has its CatchHandler @ 03795354 */
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
      goto LAB_03794d60;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
                    /* try { // try from 03794d3c to 03894d43 has its CatchHandler @ 037953e4 */
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_03794d60:
                    /* try { // try from 03794d60 to 03894e63 has its CatchHandler @ 03794ad4 */
                    /* WARNING: Could not recover jumptable at 0x03794d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


