/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03c68f30
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c68e74 with catch @ 03c68f30
                       try { // try from 03c68f30 to 03d68f47 has its CatchHandler @ 03c68e30 */
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06768c98);
                    /* try { // try from 03c68f48 to 03d68f5f has its CatchHandler @ 03c68fcc */
  uVar3 = RootMotion_FinalIK_IKMappingSpine__Initiate(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
                    /* try { // try from 03c68f60 to 03d68fbb has its CatchHandler @ 03c68e30 */
    FUN_05027ef4(0);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0638da48,0);
}


