/*
FUNCTION_NAME: UnityEngine.InputSystem.Pointer$$FinishSetup
ENTRY_POINT: 059c8f48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_InputSystem_Pointer__FinishSetup(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 059c8f48 to 05ac8f4f has its CatchHandler @ 059c8f90 */
                    /* try { // try from 059c8f50 to 05ac8f53 has its CatchHandler @ 059c8f80 */
  FUN_02f08768(Method_System_Collections_Generic_List<BsonReader_ContainerContext>_Add__);
                    /* try { // try from 059c8f54 to 05ac8f57 has its CatchHandler @ 059c8f7c */
                    /* try { // try from 059c8f58 to 05ac8f5b has its CatchHandler @ 059c8f74 */
                    /* try { // try from 059c8f5c to 05ac8fab has its CatchHandler @ 059c8c88 */
  FUN_02f08768(Method_System_Collections_Generic_List<BsonReader_ContainerContext>_RemoveAt__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8e6c with catch @ 059c8f68
                        */
  FUN_02f08768(Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
              );
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8e7c with catch @ 059c8f6c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8e70 with catch @ 059c8f70
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8f58 with catch @ 059c8f74
                        */
  FUN_02f08768(
              Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
              );
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8e44 with catch @ 059c8f78
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8f54 with catch @ 059c8f7c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8f50 with catch @ 059c8f80
                        */
  FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8e94 with catch @ 059c8f84
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8de0 with catch @ 059c8f88
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8d7c with catch @ 059c8f8c
                        */
  FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 059c8f48 with catch @ 059c8f90
                        */
  FUN_02f08768(PTR_DAT_067c9cb8);
  FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
                    /* try { // try from 059c8fac to 05ac8faf has its CatchHandler @ 059c8fbc */
  FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__)
  ;
                    /* catch() { ... } // from try @ 059c8fac with catch @ 059c8fbc */
  FUN_02f08768(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__)
  ;
                    /* try { // try from 059c8fc0 to 05ac8fc7 has its CatchHandler @ 059c8fd0 */
                    /* try { // try from 059c8fc8 to 05ac8fd3 has its CatchHandler @ 059c8c88 */
  FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059c8fc0 with catch @ 059c8fd0
                        */
  FUN_02f08768(PTR_DAT_067d6b88);
  FUN_02f08768(PTR_DAT_067d6b90);
  *(undefined1 *)(unaff_x21 + 0xd0d) = 1;
  puVar1 = PTR_DAT_067c9cb8;
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059531d0();
  FUN_0624193c();
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_0623f858(lVar6,0);
  puVar2 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__;
  if (lVar6 != 0) {
    FUN_0623f514(lVar6,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__
                 ,0);
    FUN_0624193c(lVar6,*(undefined8 *)puVar2,0);
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0623f858(lVar7,0);
    puVar2 = Method_System_Collections_Generic_List<BsonReader_ContainerContext>__ctor__;
    if (lVar7 != 0) {
      FUN_0623f468(lVar7,1,0);
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_05992370(lVar8,0);
      puVar5 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__;
      puVar4 = Method_System_Collections_Generic_List<BsonReader_ContainerContext>_RemoveAt__;
      puVar3 = PTR_DAT_067d6b90;
      if (lVar8 != 0) {
        FUN_0623f514(lVar8,*(undefined8 *)
                            Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                     ,0);
        FUN_03e325ec(lVar8,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
        uVar10 = *(undefined8 *)puVar5;
        *(long *)(unaff_x19 + 0x2e0) = lVar8;
        FUN_0624193c(lVar7,uVar10,0);
        FUN_06247510(lVar7,*(undefined8 *)(unaff_x19 + 0x2e0),0);
        lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_0623f858(lVar8,0);
        if (lVar8 != 0) {
          FUN_0623f468(lVar8,1,0);
          lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_05992370(lVar9,0);
          puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
          puVar3 = Method_System_Collections_Generic_List<BsonReader_ContainerContext>_Add__;
          puVar2 = Method_System_Collections_Generic_List<BodyPoseData_JointData>_get_Item__;
          puVar1 = PTR_DAT_067d6b88;
          if (lVar9 != 0) {
            FUN_0623f514(lVar9,*(undefined8 *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__
                         ,0);
            FUN_03e325ec(lVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
            uVar10 = *(undefined8 *)puVar5;
            *(long *)(unaff_x19 + 0x2e8) = lVar9;
            FUN_0624193c(lVar8,uVar10,0);
            FUN_06247510(lVar8,*(undefined8 *)(unaff_x19 + 0x2e8),0);
            FUN_06247510(lVar6,lVar7,0);
            FUN_06247510(lVar6,lVar8,0);
            in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x260);
            FUN_0624b7dc(&stack0x00000008,lVar6,0);
            FUN_059c9348();
            if (DAT_06bb435f == '\0') {
              FUN_02f08768(PTR_DAT_067c9848);
              DAT_06bb435f = '\x01';
            }
            FUN_059c9418(**(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8),
                         (*(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1]);
            uVar11 = *(undefined8 *)(unaff_x19 + 0x2e0);
            uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
            FUN_04d8cf5c();
            FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar3);
            uVar11 = *(undefined8 *)(unaff_x19 + 0x2e8);
            uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
            FUN_04d8cf5c();
            FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar3);
            puVar1 = PTR_DAT_067ccfb0;
            uVar11 = *(undefined8 *)(unaff_x19 + 0x2e0);
            uVar10 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ccfb0);
            FUN_04d8cf5c();
            puVar2 = PTR_DAT_067ccfb8;
            FUN_034369a8(uVar11,uVar10,*(undefined8 *)PTR_DAT_067ccfb8);
            uVar11 = *(undefined8 *)(unaff_x19 + 0x2e8);
            uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            FUN_04d8cf5c();
            FUN_034369a8(uVar11,uVar10,*(undefined8 *)puVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


