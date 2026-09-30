/*
FUNCTION_NAME: FUN_03fec79c
ENTRY_POINT: 03fec79c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_03fec79c(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  
  puVar4 = &local_30;
                    /* try { // try from 03fec7a0 to 040ec7a3 has its CatchHandler @ 03fec8d4 */
                    /* try { // try from 03fec7a4 to 040ec7ab has its CatchHandler @ 03fec8e4 */
                    /* try { // try from 03fec7b8 to 040ec7bb has its CatchHandler @ 03fec8e0 */
  if ((DAT_0483bba3 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04572b08);
    thunk_FUN_01efb3a4(StringLiteral_13785);
                    /* try { // try from 03fec7d4 to 040ec7d7 has its CatchHandler @ 03fec8d8 */
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
                    /* try { // try from 03fec7f0 to 040ec7f3 has its CatchHandler @ 03fec8e8 */
    DAT_0483bba3 = 1;
  }
                    /* try { // try from 03fec7f4 to 040ec8c3 has its CatchHandler @ 03fec620 */
  iVar1 = (**(code **)(*param_3 + 0x6e8))(param_3,*(undefined8 *)(*param_3 + 0x6f0));
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      if (param_3[0x19] == 0) goto LAB_03fec8b4;
      local_30 = FUN_0234d79c(param_3[0x19],*(undefined8 *)StringLiteral_13785);
      *(undefined4 *)(param_3 + 0x1a) = local_30;
      *(undefined4 *)((long)param_3 + 0xd4) = param_2;
      lVar6 = param_3[0x18];
      puVar5 = (undefined8 *)Method_Unity_Collections_NativeArray<float4>_Dispose__;
      uStack_2c = param_2;
    }
    else {
      if (iVar1 != 1) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* try { // try from 03fec8c4 to 040ec8c7 has its CatchHandler @ 03fec8f8 */
        uVar2 = thunk_FUN_01f117cc();
                    /* try { // try from 03fec8c8 to 040ec8cb has its CatchHandler @ 03fec8f0 */
                    /* try { // try from 03fec8cc to 040ec8cf has its CatchHandler @ 03fec8dc */
                    /* try { // try from 03fec8d0 to 040ec8d3 has its CatchHandler @ 03fec8e8 */
        FUN_034f7d58(uVar2,0);
                    /* catch() { ... } // from try @ 03fec7a0 with catch @ 03fec8d4
                       try { // try from 03fec8d4 to 040ec913 has its CatchHandler @ 03fec620 */
                    /* catch() { ... } // from try @ 03fec7d4 with catch @ 03fec8d8 */
                    /* catch() { ... } // from try @ 03fec8cc with catch @ 03fec8dc */
        uVar3 = thunk_FUN_01efb3a4(PTR_DAT_04584e40);
                    /* catch() { ... } // from try @ 03fec7b8 with catch @ 03fec8e0 */
                    /* catch() { ... } // from try @ 03fec7a4 with catch @ 03fec8e4 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03fec7f0 with catch @ 03fec8e8
                       catch() { ... } // from try @ 03fec8d0 with catch @ 03fec8e8 */
        FUN_01f08910(uVar2,uVar3);
      }
      if (param_3[0x19] == 0) goto LAB_03fec8b4;
      local_24 = FUN_0234d6c0(param_3[0x19],*(undefined8 *)PTR_DAT_04572b08);
      *(undefined4 *)(param_3 + 0x1a) = local_24;
      *(undefined4 *)((long)param_3 + 0xd4) = 0;
      lVar6 = param_3[0x17];
      puVar4 = &local_24;
      puVar5 = (undefined8 *)
               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
    }
    uVar2 = thunk_FUN_01f113fc(*puVar5,puVar4);
    if (param_4 == 0) {
LAB_03fec8b4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03faf2e4(param_4,lVar6,uVar2,0);
  }
  return;
}


