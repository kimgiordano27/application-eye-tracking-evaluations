/*
FUNCTION_NAME: FUN_065fa578
ENTRY_POINT: 065fa578
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_065fa578(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo;
                    /* try { // try from 065fa578 to 066fa57b has its CatchHandler @ 065fa5e4 */
  puVar1 = System_Action<object[],_int,_TransformAccessArray,_BatchedEvents_Event>_TypeInfo;
                    /* try { // try from 065fa590 to 066fa5a3 has its CatchHandler @ 065fa6bc */
  if ((DAT_073a0902 & 1) == 0) {
                    /* try { // try from 065fa5a4 to 066fa5ab has its CatchHandler @ 065fa5c8 */
    FUN_02fe925c(System_Action<object[],_int,_TransformAccessArray,_BatchedEvents_Event>_TypeInfo);
                    /* try { // try from 065fa5ac to 066fa5b3 has its CatchHandler @ 065fa6bc */
    FUN_02fe925c(System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo);
                    /* catch() { ... } // from try @ 065fa4d4 with catch @ 065fa5b4
                       try { // try from 065fa5b4 to 066fa613 has its CatchHandler @ 065f9e44 */
    DAT_073a0902 = 1;
  }
                    /* catch() { ... } // from try @ 065fa4b4 with catch @ 065fa5c0 */
                    /* catch() { ... } // from try @ 065fa228 with catch @ 065fa5c4 */
                    /* catch() { ... } // from try @ 065fa508 with catch @ 065fa5c8
                       catch() { ... } // from try @ 065fa5a4 with catch @ 065fa5c8 */
                    /* catch() { ... } // from try @ 065fa2a0 with catch @ 065fa5d4 */
  FUN_049d615c(**(undefined8 **)(*(long *)puVar1 + 0xb8),*(undefined8 *)puVar2);
  return;
}


