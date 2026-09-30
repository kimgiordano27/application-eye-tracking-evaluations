/*
FUNCTION_NAME: FUN_065fa81c
ENTRY_POINT: 065fa81c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_065fa81c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo;
                    /* try { // try from 065fa834 to 066fa857 has its CatchHandler @ 065fa8b8 */
  if ((DAT_073a0904 & 1) == 0) {
    FUN_02fe925c(System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    FUN_02fe925c(System_Action<object[],_int,_TransformAccessArray,_BatchedEvents_Event>_TypeInfo);
    FUN_02fe925c(
                System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                );
    FUN_02fe925c(Pathfinding_Graphs_Navmesh_RecastMeshGatherer_MeshCacheItem_var);
    FUN_02fe925c(
                System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                );
                    /* try { // try from 065fa87c to 066fa87f has its CatchHandler @ 065fa8c4 */
    FUN_02fe925c(PTR_DAT_06f99928);
                    /* try { // try from 065fa884 to 066fa887 has its CatchHandler @ 065fa8bc */
    DAT_073a0904 = 1;
  }
                    /* try { // try from 065fa88c to 066fa897 has its CatchHandler @ 065fa8c8 */
  lVar7 = FUN_02fe9340(*(undefined8 *)puVar4,3);
  if (lVar7 != 0) {
                    /* try { // try from 065fa89c to 066fa89f has its CatchHandler @ 065fa8b4 */
    uVar1 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 065fa8a4 to 066fa8a7 has its CatchHandler @ 065fa8ac */
                    /* try { // try from 065fa8a8 to 066fa8df has its CatchHandler @ 065fa6c0 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa8a4 with catch @ 065fa8ac
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa7a4 with catch @ 065fa8b0
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa89c with catch @ 065fa8b4
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa834 with catch @ 065fa8b8
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa884 with catch @ 065fa8bc
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa7e8 with catch @ 065fa8c0
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa87c with catch @ 065fa8c4
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 065fa88c with catch @ 065fa8c8
                        */
    if (((uVar1 != 0) && (*(undefined8 *)(lVar7 + 0x20) = 0x400000001, uVar1 != 1)) &&
       (*(undefined8 *)(lVar7 + 0x28) = 0x500000001,
       puVar4 = System_Action<object[],_int,_TransformAccessArray,_BatchedEvents_Event>_TypeInfo,
       2 < uVar1)) {
                    /* try { // try from 065fa8e0 to 066fa8f7 has its CatchHandler @ 065faaa0 */
      *(undefined8 *)(lVar7 + 0x30) = 0x800000001;
                    /* try { // try from 065fa8f8 to 066faa8b has its CatchHandler @ 065fa6c0 */
      **(long **)(*(long *)puVar4 + 0xb8) = lVar7;
      puVar6 = 
      System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo;
      puVar5 = System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo;
      puVar3 = Pathfinding_Graphs_Navmesh_RecastMeshGatherer_MeshCacheItem_var;
      puVar2 = PTR_DAT_06f99928;
      thunk_FUN_03048534(*(undefined8 *)(*(long *)puVar4 + 0xb8));
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_03ca5674(0,0,0,*(undefined8 *)puVar6);
      uVar8 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
      UnityEngine_Rendering_Universal_DecalChunk__ResizeNativeArray(uVar8,0,*(undefined8 *)puVar5,0)
      ;
      FUN_06563808(uVar8,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


