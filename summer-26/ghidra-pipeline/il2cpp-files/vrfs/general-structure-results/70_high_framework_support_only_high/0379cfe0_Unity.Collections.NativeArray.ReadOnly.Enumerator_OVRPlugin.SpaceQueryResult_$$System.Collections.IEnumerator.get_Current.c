/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0379cfe0
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06e4d3e0;
  if (param_1 != 0) {
    FUN_0451e868(param_1,0);
    FUN_0451e668(param_1,1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar2 = FUN_04515804();
                    /* try { // try from 0379d030 to 0389d03f has its CatchHandler @ 0379d0b8 */
    plVar3 = (long *)FUN_025ebfb4(0);
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x268))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x270));
                    /* try { // try from 0379d04c to 0389d057 has its CatchHandler @ 0379d0b4 */
      uVar4 = FUN_0379c820();
                    /* try { // try from 0379d058 to 0389d0cf has its CatchHandler @ 0379cf58 */
      FUN_0379d084(uVar4,uVar4,uVar2);
      FUN_051e4284();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


