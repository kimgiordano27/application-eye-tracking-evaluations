/*
FUNCTION_NAME: FUN_04078b58
ENTRY_POINT: 04078b58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_04078b58(undefined8 param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint local_4c;
  uint local_48;
  uint local_44;
  
                    /* try { // try from 04078b60 to 04178b7b has its CatchHandler @ 04078be8 */
                    /* try { // try from 04078b80 to 04178b9b has its CatchHandler @ 04078be4 */
  if ((DAT_0483e5b0 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      );
                    /* try { // try from 04078b9c to 04178bff has its CatchHandler @ 040788d8 */
    DAT_0483e5b0 = 1;
  }
                    /* catch() { ... } // from try @ 04078ae8 with catch @ 04078ba0 */
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 04078a04 with catch @ 04078ba4 */
                    /* catch() { ... } // from try @ 04078ad0 with catch @ 04078ba8 */
                    /* catch() { ... } // from try @ 040789ec with catch @ 04078bac */
    uVar4 = FUN_040388e8(param_2,0);
                    /* catch() { ... } // from try @ 04078ab8 with catch @ 04078bb0 */
    if ((uVar4 & 1) == 0) {
      uVar6 = FUN_04038918(param_2,0);
      uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04587420);
      uVar7 = FUN_03406290(uVar7,uVar6,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      FUN_034f6754(uVar6,uVar7,0);
    }
    else {
                    /* catch() { ... } // from try @ 040789d4 with catch @ 04078bb4 */
                    /* catch() { ... } // from try @ 0407899c with catch @ 04078bb8 */
                    /* catch() { ... } // from try @ 04078998 with catch @ 04078bbc */
      if (-1 < (int)(param_4 | param_3 | param_5)) {
                    /* catch() { ... } // from try @ 04078b30 with catch @ 04078bc0 */
                    /* catch() { ... } // from try @ 04078a4c with catch @ 04078bc4 */
                    /* catch() { ... } // from try @ 04078aa0 with catch @ 04078bc8 */
        iVar2 = FUN_03582fa8(param_2,0);
                    /* catch() { ... } // from try @ 040789bc with catch @ 04078bcc */
                    /* catch() { ... } // from try @ 04078afc with catch @ 04078bd0 */
        if ((int)(param_5 + param_3) <= iVar2) {
                    /* catch() { ... } // from try @ 04078a18 with catch @ 04078bdc */
          plVar5 = (long *)thunk_FUN_01ecaf38(param_2,0);
          puVar1 = 
          Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
          ;
                    /* catch() { ... } // from try @ 04078b80 with catch @ 04078be4 */
          if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 04078b60 with catch @ 04078be8 */
                    /* catch() { ... } // from try @ 04078a7c with catch @ 04078bec */
            uVar6 = (**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
                    /* try { // try from 04078c00 to 04178c03 has its CatchHandler @ 04078c1c */
                    /* try { // try from 04078c04 to 04178c1b has its CatchHandler @ 04078c20 */
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar1);
            }
                    /* catch() { ... } // from try @ 04078c00 with catch @ 04078c1c
                       try { // try from 04078c1c to 04178c3f has its CatchHandler @ 040788d8 */
                    /* catch() { ... } // from try @ 04078c04 with catch @ 04078c20 */
            uVar3 = thunk_FUN_01f40210(uVar6,0);
            if (DAT_0483e5c0 == (code *)0x0) {
              DAT_0483e5c0 = (code *)FUN_01f087c4(
                                                 "UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)"
                                                 );
                    /* try { // try from 04078c40 to 04178c57 has its CatchHandler @ 04078cd0 */
            }
                    /* try { // try from 04078c58 to 04178cbf has its CatchHandler @ 040788d8 */
                    /* WARNING: Could not recover jumptable at 0x04078c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*DAT_0483e5c0)(param_1,param_2,param_3,param_4,param_5,uVar3);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      local_44 = param_3;
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_44);
      local_48 = param_4;
      uVar7 = thunk_FUN_01efb3a4(puVar1);
      uVar7 = thunk_FUN_01f113fc(uVar7,&local_48);
      local_4c = param_5;
      uVar8 = thunk_FUN_01efb3a4(puVar1);
                    /* try { // try from 04078cc0 to 04178ccf has its CatchHandler @ 04078cd0 */
      uVar8 = thunk_FUN_01f113fc(uVar8,&local_4c);
                    /* catch() { ... } // from try @ 04078c40 with catch @ 04078cd0
                       catch() { ... } // from try @ 04078cc0 with catch @ 04078cd0 */
      uVar9 = thunk_FUN_01efb3a4(PTR_DAT_04587428);
                    /* try { // try from 04078cd4 to 04178cd7 has its CatchHandler @ 04078ce0 */
                    /* try { // try from 04078cd8 to 04178d9f has its CatchHandler @ 040788d8 */
                    /* catch() { ... } // from try @ 04078cd4 with catch @ 04078ce0 */
      uVar7 = FUN_0340f334(uVar9,uVar6,uVar7,uVar8,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      FUN_034f7db4(uVar6,uVar7,0);
    }
    uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04587430);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar6 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(
                            Method_System_Security_Cryptography_RijndaelManagedTransform_TransformFinalBlock__
                            );
  FUN_034efd20(uVar6,uVar7,0);
  uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04587430);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


