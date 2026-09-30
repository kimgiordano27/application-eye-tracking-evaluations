/*
FUNCTION_NAME: FUN_01e4b5d4
ENTRY_POINT: 01e4b5d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 FUN_01e4b5d4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if ((DAT_0377fc69 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_0377fc69 = 1;
  }
  uVar9 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  iVar2 = (**(code **)(*param_1 + 0x428))(param_1,*(undefined8 *)(*param_1 + 0x430));
  lVar8 = *param_1;
  if (iVar2 == 1) {
                    /* try { // try from 01e4b640 to 01f4b64f has its CatchHandler @ 01e4b734 */
    uVar4 = (**(code **)(lVar8 + 0x218))(param_1,*(undefined8 *)(lVar8 + 0x220));
    (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    if ((uVar4 & 1) == 0) {
      uVar9 = (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
      iVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
      if (iVar2 != 0xf) {
        uVar9 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
        uVar9 = FUN_00da4fb8(uVar9,2);
                    /* try { // try from 01e4b770 to 01f4b777 has its CatchHandler @ 01e4b778 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01e4b770 with catch @ 01e4b778
                        */
        uVar3 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
        local_48 = thunk_FUN_00d48444(PTR_DAT_033f4de0);
        uStack_40 = 0xffffffffffffffff;
        local_38 = uVar3;
        uVar5 = FUN_017a7f78(&local_48,0);
        FUN_00ac2be8(uVar9);
        FUN_00acb0b4(uVar9,uVar5);
        FUN_00acb320(uVar9,0,uVar5);
        FUN_00ac2be8(uVar9);
        puVar1 = Method_System_Collections_Generic_List_Enumerator<HandGrabPose>_MoveNext__;
        uVar5 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_List_Enumerator<HandGrabPose>_MoveNext__
                                  );
        FUN_00acb0b4(uVar9,uVar5);
        uVar5 = thunk_FUN_00d48444(puVar1);
                    /* try { // try from 01e4b808 to 01f4b887 has its CatchHandler @ 01e4b808
                       catch() { ... } // from try @ 01e4b808 with catch @ 01e4b808
                       catch() { ... } // from try @ 01e4b89c with catch @ 01e4b808
                       catch() { ... } // from try @ 01e4b930 with catch @ 01e4b808
                       catch() { ... } // from try @ 01e4b940 with catch @ 01e4b808
                       catch() { ... } // from try @ 01e4b95c with catch @ 01e4b808
                       catch() { ... } // from try @ 01e4b980 with catch @ 01e4b808
                       catch() { ... } // from try @ 01e4b994 with catch @ 01e4b808 */
        FUN_00acb320(uVar9,1,uVar5);
        thunk_FUN_00d48444(
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                          );
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar5 = thunk_FUN_00d48444(
                                  Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
                                  );
        uVar7 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                                  );
        uVar7 = thunk_FUN_00d6225c(param_1,uVar7);
        FUN_01f74808(uVar6,uVar5,uVar9,uVar7,0);
        goto LAB_01e4b864;
      }
                    /* try { // try from 01e4b6a4 to 01f4b6af has its CatchHandler @ 01e4b730 */
      (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    }
                    /* try { // try from 01e4b6b4 to 01f4b6bf has its CatchHandler @ 01e4b72c */
    return uVar9;
  }
  uVar3 = (**(code **)(lVar8 + 0x198))(param_1,*(undefined8 *)(lVar8 + 0x1a0));
                    /* try { // try from 01e4b6d4 to 01f4b6d7 has its CatchHandler @ 01e4b724 */
  local_48 = thunk_FUN_00d48444(PTR_DAT_033f4de0);
  uStack_40 = 0xffffffffffffffff;
  local_38 = uVar3;
  uVar9 = FUN_017a7f78(&local_48,0);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                    );
                    /* try { // try from 01e4b708 to 01f4b70b has its CatchHandler @ 01e4b728 */
  uVar6 = thunk_FUN_00d62348();
                    /* try { // try from 01e4b70c to 01f4b70f has its CatchHandler @ 01e4b720 */
                    /* try { // try from 01e4b710 to 01f4b717 has its CatchHandler @ 01e4b5a8 */
  FUN_00ac2be8();
                    /* try { // try from 01e4b718 to 01f4b71b has its CatchHandler @ 01e4b71c */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e4b718 with catch @ 01e4b71c
                       try { // try from 01e4b71c to 01f4b743 has its CatchHandler @ 01e4b5a8 */
  uVar5 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtn_s64_f64__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e4b70c with catch @ 01e4b720
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e4b6d4 with catch @ 01e4b724
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e4b708 with catch @ 01e4b728
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e4b6b4 with catch @ 01e4b72c
                        */
  uVar7 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_Remove__
                            );
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e4b6a4 with catch @ 01e4b730
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e4b640 with catch @ 01e4b734
                        */
  uVar7 = thunk_FUN_00d6225c(param_1,uVar7);
                    /* try { // try from 01e4b744 to 01f4b747 has its CatchHandler @ 01e4b754 */
                    /* try { // try from 01e4b748 to 01f4b76f has its CatchHandler @ 01e4b5a8 */
  FUN_01f74414(uVar6,uVar5,uVar9,uVar7,0);
                    /* catch() { ... } // from try @ 01e4b744 with catch @ 01e4b754 */
LAB_01e4b864:
  uVar9 = thunk_FUN_00d48444(Obi_IShapeMatchingConstraintsUser_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar9);
}


