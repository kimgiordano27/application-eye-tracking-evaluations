/*
FUNCTION_NAME: FUN_02139cbc
ENTRY_POINT: 02139cbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


undefined8 FUN_02139cbc(long param_1,undefined8 param_2,int param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 local_34 [2];
  
  puVar3 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
                    /* try { // try from 02139cdc to 02239cdf has its CatchHandler @ 02139ce0 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02139cdc with catch @ 02139ce0
                       try { // try from 02139ce0 to 02239cff has its CatchHandler @ 02139c0c */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02139c98 with catch @ 02139ce4
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02139c74 with catch @ 02139ce8
                        */
  if ((DAT_03781182 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
                    /* try { // try from 02139d00 to 02239d03 has its CatchHandler @ 02139d14 */
    DAT_03781182 = 1;
  }
                    /* catch() { ... } // from try @ 02139d00 with catch @ 02139d14 */
  uVar5 = FUN_017b4f64(param_2,**(undefined8 **)(*(long *)puVar3 + 0xb8),0);
  if ((uVar5 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<CanvasHelper>_Add__);
    FUN_016ec5b8(uVar6,uVar8,0);
    uVar8 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_RemoveAt__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar8);
  }
                    /* try { // try from 02139d20 to 02239d2b has its CatchHandler @ 02139d40 */
  uVar5 = FUN_015ff8a0(param_1,0);
                    /* try { // try from 02139d2c to 02239d37 has its CatchHandler @ 02139c0c */
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 02139d38 to 02239d3f has its CatchHandler @ 02139d40 */
    if (param_1 == 0) goto LAB_02139e1c;
    iVar12 = *(int *)(param_1 + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02139d20 with catch @ 02139d40
                       catch(type#2 @ 00000000) { ... } // from try @ 02139d38 with catch @ 02139d40
                        */
    if (0xffff < iVar12) {
      local_34[0] = 0xffff;
      uVar6 = thunk_FUN_00d48444(
                                Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                                );
      uVar6 = thunk_FUN_00d61fa0(uVar6,local_34);
      uVar8 = thunk_FUN_00d48444(
                                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WireframeMode_var
                                );
      uVar6 = FUN_015f6780(uVar8,uVar6,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar9 = thunk_FUN_00d48444(
                                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__
                                );
      FUN_016ec624(uVar8,uVar6,uVar9,0);
      uVar6 = thunk_FUN_00d48444(
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_RemoveAt__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar6);
    }
  }
  else {
    iVar12 = 0;
  }
  lVar1 = (ulong)*param_4 + (long)(iVar12 << 1) + 4;
  if (param_3 < lVar1) {
    uVar6 = 0;
  }
  else {
    lVar7 = FUN_017bd58c(param_2,0);
    uVar2 = *param_4;
    *(short *)((int)uVar2 + lVar7) = (short)iVar12;
    if (0 < iVar12) {
      if (param_1 == 0) {
LAB_02139e1c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      puVar11 = (undefined2 *)(lVar7 + (int)uVar2);
      iVar10 = 0;
      do {
        puVar11 = puVar11 + 1;
        uVar4 = FUN_015fa29c(param_1,iVar10,0);
        iVar10 = iVar10 + 1;
        *puVar11 = uVar4;
      } while (iVar12 != iVar10);
    }
    uVar6 = 1;
    *param_4 = (uint)lVar1;
  }
  return uVar6;
}


