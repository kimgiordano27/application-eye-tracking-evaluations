/*
FUNCTION_NAME: FUN_059c8ed8
ENTRY_POINT: 059c8ed8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_059c8ed8(long param_1)

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
  if ((DAT_06bc1d0d & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02f08768(PTR_DAT_067ccfb0);
    FUN_02f08768(Method_System_Collections_Generic_List<BodyPoseData_JointData>_get_Item__);
    FUN_02f08768(Method_System_Collections_Generic_List<BsonReader_ContainerContext>__ctor__);
    FUN_02f08768(PTR_DAT_067ccfb8);
    FUN_02f08768(Method_System_Collections_Generic_List<BsonReader_ContainerContext>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<BsonReader_ContainerContext>_RemoveAt__);
    FUN_02f08768(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
                );
    FUN_02f08768(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
                );
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
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
    DAT_06bc1d0d = 1;
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
    FUN_0624193c(lVar7,*(undefined8 *)puVar2,0);
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0623f858(lVar8,0);
    puVar2 = Method_System_Collections_Generic_List<BsonReader_ContainerContext>__ctor__;
    if (lVar8 != 0) {
      FUN_0623f468(lVar8,1,0);
      lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_05992370(lVar9,0);
      puVar5 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__;
      puVar4 = Method_System_Collections_Generic_List<BsonReader_ContainerContext>_RemoveAt__;
      puVar3 = PTR_DAT_067d6b90;
      if (lVar9 != 0) {
        FUN_0623f514(lVar9,*(undefined8 *)
                            Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                     ,0);
        FUN_03e325ec(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
        uVar11 = *(undefined8 *)puVar5;
        *(long *)(param_1 + 0x2e0) = lVar9;
        FUN_0624193c(lVar8,uVar11,0);
        FUN_06247510(lVar8,*(undefined8 *)(param_1 + 0x2e0),0);
        lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_0623f858(lVar9,0);
        if (lVar9 != 0) {
          FUN_0623f468(lVar9,1,0);
          lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_05992370(lVar10,0);
          puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
          puVar5 = 
          Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__;
          puVar3 = Method_System_Collections_Generic_List<BsonReader_ContainerContext>_Add__;
          puVar1 = Method_System_Collections_Generic_List<BodyPoseData_JointData>_get_Item__;
          puVar2 = PTR_DAT_067d6b88;
          if (lVar10 != 0) {
            FUN_0623f514(lVar10,*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__
                         ,0);
            FUN_03e325ec(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
            uVar11 = *(undefined8 *)puVar6;
            *(long *)(param_1 + 0x2e8) = lVar10;
            FUN_0624193c(lVar9,uVar11,0);
            FUN_06247510(lVar9,*(undefined8 *)(param_1 + 0x2e8),0);
            FUN_06247510(lVar7,lVar8,0);
            FUN_06247510(lVar7,lVar9,0);
            local_68 = *(undefined8 *)(param_1 + 0x260);
            FUN_0624b7dc(&local_68,lVar7,0);
            FUN_059c9348(param_1,2);
            if (DAT_06bb435f == '\0') {
              FUN_02f08768(PTR_DAT_067c9848);
              DAT_06bb435f = '\x01';
            }
            FUN_059c9418(**(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8),
                         (*(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1],param_1);
            uVar12 = *(undefined8 *)(param_1 + 0x2e0);
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            FUN_04d8cf5c(uVar11,param_1,*(undefined8 *)puVar5,0);
            FUN_03487f68(uVar12,uVar11,*(undefined8 *)puVar3);
            uVar12 = *(undefined8 *)(param_1 + 0x2e8);
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            FUN_04d8cf5c(uVar11,param_1,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__
                         ,0);
            FUN_03487f68(uVar12,uVar11,*(undefined8 *)puVar3);
            puVar2 = PTR_DAT_067ccfb0;
            uVar12 = *(undefined8 *)(param_1 + 0x2e0);
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ccfb0);
            FUN_04d8cf5c(uVar11,param_1,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
                         ,0);
            puVar1 = PTR_DAT_067ccfb8;
            FUN_034369a8(uVar12,uVar11,*(undefined8 *)PTR_DAT_067ccfb8);
            uVar12 = *(undefined8 *)(param_1 + 0x2e8);
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
            FUN_04d8cf5c(uVar11,param_1,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__
                         ,0);
            FUN_034369a8(uVar12,uVar11,*(undefined8 *)puVar1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


