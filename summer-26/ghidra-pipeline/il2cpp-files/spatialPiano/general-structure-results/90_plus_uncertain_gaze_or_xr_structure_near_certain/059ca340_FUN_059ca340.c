/*
FUNCTION_NAME: FUN_059ca340
ENTRY_POINT: 059ca340
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 238
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_059ca340(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_68;
  
  puVar2 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  if ((DAT_06bc1d1e & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Count__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_set_Item__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__);
                    /* try { // try from 059ca3dc to 05aca4cb has its CatchHandler @ 059ca3dc
                       catch() { ... } // from try @ 059ca3dc with catch @ 059ca3dc
                       catch() { ... } // from try @ 059ca5ac with catch @ 059ca3dc
                       catch() { ... } // from try @ 059ca680 with catch @ 059ca3dc
                       catch() { ... } // from try @ 059ca72c with catch @ 059ca3dc */
    FUN_02f08768(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__);
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
    FUN_02f08768(
                Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                );
    FUN_02f08768(
                Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__
                );
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
    FUN_02f08768(PTR_DAT_067d6b88);
    FUN_02f08768(PTR_DAT_067d6b90);
    DAT_06bc1d1e = 1;
  }
  puVar3 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__;
  puVar1 = PTR_DAT_067c9cb8;
  local_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059531d0(param_1,0);
  FUN_0624193c(param_1,*(undefined8 *)puVar3,0);
  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_0623f858(lVar7,0);
  puVar2 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__;
  if (lVar7 != 0) {
    FUN_0623f514(lVar7,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__
                 ,0);
                    /* try { // try from 059ca4cc to 05aca4f3 has its CatchHandler @ 059ca6f0 */
    FUN_0624193c(lVar7,*(undefined8 *)puVar2,0);
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0623f858(lVar8,0);
    puVar2 = Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>__ctor__;
    if (lVar8 != 0) {
      FUN_0623f468(lVar8,1,0);
      lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_059a0670(lVar9,0);
      puVar5 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__;
      puVar4 = Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__;
      puVar3 = PTR_DAT_067d6b90;
      if (lVar9 != 0) {
                    /* try { // try from 059ca530 to 05aca55b has its CatchHandler @ 059ca6ec */
        FUN_0623f514(lVar9,*(undefined8 *)
                            Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                     ,0);
        FUN_03e2ef28(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
        uVar11 = *(undefined8 *)puVar5;
        *(long *)(param_1 + 0x2e0) = lVar9;
        FUN_0624193c(lVar8,uVar11,0);
        FUN_06247510(lVar8,*(undefined8 *)(param_1 + 0x2e0),0);
        lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_0623f858(lVar9,0);
        if (lVar9 != 0) {
          FUN_0623f468(lVar9,1,0);
                    /* try { // try from 059ca5a0 to 05aca5ab has its CatchHandler @ 059ca6e4 */
          lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    /* try { // try from 059ca5ac to 05aca663 has its CatchHandler @ 059ca3dc */
          FUN_059a0670(lVar10,0);
          puVar6 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__;
          puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
          puVar3 = Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__;
          puVar1 = 
          Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__;
          puVar2 = PTR_DAT_067d6b88;
          if (lVar10 != 0) {
            FUN_0623f514(lVar10,*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__
                         ,0);
            FUN_03e2ef28(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
            uVar11 = *(undefined8 *)puVar5;
            *(long *)(param_1 + 0x2e8) = lVar10;
            FUN_0624193c(lVar9,uVar11,0);
            FUN_06247510(lVar9,*(undefined8 *)(param_1 + 0x2e8),0);
            FUN_06247510(lVar7,lVar8,0);
            FUN_06247510(lVar7,lVar9,0);
            local_68 = *(undefined8 *)(param_1 + 0x260);
            FUN_0624b7dc(&local_68,lVar7,0);
                    /* try { // try from 059ca664 to 05aca66b has its CatchHandler @ 059ca6f4 */
            FUN_059ca7b0(param_1,2);
                    /* try { // try from 059ca66c to 05aca66f has its CatchHandler @ 059ca6e8 */
                    /* try { // try from 059ca670 to 05aca673 has its CatchHandler @ 059ca6e0 */
            if (DAT_06bb8a4b == '\0') {
                    /* try { // try from 059ca674 to 05aca677 has its CatchHandler @ 059ca6dc */
                    /* try { // try from 059ca678 to 05aca67b has its CatchHandler @ 059ca6d4 */
                    /* try { // try from 059ca67c to 05aca67f has its CatchHandler @ 059ca6d8 */
              FUN_02f08768(PTR_DAT_067c9850);
                    /* try { // try from 059ca680 to 05aca70f has its CatchHandler @ 059ca3dc */
              DAT_06bb8a4b = '\x01';
            }
            FUN_059ca880(param_1,**(undefined8 **)(*(long *)PTR_DAT_067c9850 + 0xb8));
            uVar12 = *(undefined8 *)(param_1 + 0x2e0);
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            FUN_04d8cf5c(uVar11,param_1,*(undefined8 *)puVar6,0);
            FUN_03487ec4(uVar12,uVar11,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca678 with catch @ 059ca6d4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca67c with catch @ 059ca6d8
                        */
            uVar12 = *(undefined8 *)(param_1 + 0x2e8);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca674 with catch @ 059ca6dc
                        */
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca670 with catch @ 059ca6e0
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca5a0 with catch @ 059ca6e4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca66c with catch @ 059ca6e8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca530 with catch @ 059ca6ec
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca4cc with catch @ 059ca6f0
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059ca664 with catch @ 059ca6f4
                        */
            FUN_04d8cf5c(uVar11,param_1,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__,0);
            FUN_03487ec4(uVar12,uVar11,*(undefined8 *)puVar3);
            puVar2 = 
            Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Count__;
                    /* try { // try from 059ca710 to 05aca713 has its CatchHandler @ 059ca720 */
            uVar12 = *(undefined8 *)(param_1 + 0x2e0);
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                         Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Count__
                                       );
                    /* catch() { ... } // from try @ 059ca710 with catch @ 059ca720 */
                    /* try { // try from 059ca724 to 05aca72b has its CatchHandler @ 059ca734 */
                    /* try { // try from 059ca72c to 05aca737 has its CatchHandler @ 059ca3dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059ca724 with catch @ 059ca734
                        */
            FUN_04d8cf5c(uVar11,param_1,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__
                         ,0);
            puVar1 = 
            Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_set_Item__;
            FUN_034367bc(uVar12,uVar11,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_set_Item__
                        );
            uVar12 = *(undefined8 *)(param_1 + 0x2e8);
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
            FUN_04d8cf5c(uVar11,param_1,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__,0);
            FUN_034367bc(uVar12,uVar11,*(undefined8 *)puVar1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


