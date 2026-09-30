/*
FUNCTION_NAME: UnityEngine.UIElements.StyleSheets.StylePropertyReader.GetCursorIdFunction$$Invoke
ENTRY_POINT: 0408bb4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction__Invoke(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x20;
  undefined4 in_stack_00000038;
  int iStack000000000000003c;
  
  if (in_w8 < 1) {
    iStack000000000000003c = in_w8;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&stack0x0000003c);
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587908);
    uVar3 = FUN_03406290(uVar4,uVar3,0);
  }
  else {
                    /* try { // try from 0408bb54 to 0418bb57 has its CatchHandler @ 0408bbbc */
                    /* try { // try from 0408bb58 to 0418bb6b has its CatchHandler @ 0408bbc8 */
    iVar2 = FUN_04079a90(0);
    if (*(int *)(unaff_x20 + 0x18) <= iVar2) {
      if (DAT_0483eee8 == (code *)0x0) {
        DAT_0483eee8 = (code *)FUN_01f087c4(
                                           "UnityEngine.Rendering.CommandBuffer::SetRenderTargetMultiSubtarget_Injected(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction[],UnityEngine.Rendering.RenderBufferStoreAction[],UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,System.Int32,UnityEngine.CubemapFace,System.Int32)"
                                           );
      }
      (*DAT_0483eee8)();
      return;
    }
    FUN_01bc50c0();
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    iStack000000000000003c = (int)*(undefined8 *)(unaff_x20 + 0x18);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&stack0x0000003c);
    in_stack_00000038 = FUN_04079a90(0);
    uVar4 = thunk_FUN_01efb3a4(puVar1);
    uVar4 = thunk_FUN_01f113fc(uVar4,&stack0x00000038);
    uVar5 = thunk_FUN_01efb3a4(PTR_DAT_04587910);
    uVar3 = FUN_0340f2f0(uVar5,uVar3,uVar4,0);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar4 = thunk_FUN_01f117cc();
  FUN_034f6754(uVar4,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(PTR_DAT_04587918);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


