/*
FUNCTION_NAME: FUN_020988bc
ENTRY_POINT: 020988bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void FUN_020988bc(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  char local_44 [4];
  
  if ((DAT_03780d69 & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_BlockExpression_GetOrMakeExpressions__);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateJump__);
    thunk_FUN_00d48444(System_Action<int>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugShapes_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    thunk_FUN_00d48444(System_Predicate<ScriptableRenderPass>_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Net_WebSockets_ManagedWebSocket_<>c_<WaitForServerToCloseConnectionAsync>b__63_0__
                      );
    DAT_03780d69 = 1;
  }
  puVar2 = System_Action<int>_TypeInfo;
  auVar14 = ZEXT816(0);
  local_60 = ZEXT816(0);
  local_70 = ZEXT816(0);
  iVar10 = *param_1;
  lVar9 = *(long *)(param_1 + 0xc);
                    /* try { // try from 0209896c to 02198aaf has its CatchHandler @ 0209896c
                       catch() { ... } // from try @ 0209896c with catch @ 0209896c
                       catch() { ... } // from try @ 02098b90 with catch @ 0209896c
                       catch() { ... } // from try @ 02098c54 with catch @ 0209896c
                       catch() { ... } // from try @ 02098c5c with catch @ 0209896c
                       catch() { ... } // from try @ 02098d14 with catch @ 0209896c */
  auVar1 = ZEXT816(0);
  if (iVar10 == 0) goto LAB_020989e0;
  if (iVar10 != 1) {
    bVar11 = true;
    goto LAB_0209899c;
  }
  local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
  iVar10 = -1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = -1;
  while( true ) {
    FUN_0127e70c(local_70,local_44,
                 *(undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
    if (local_44[0] != '\0') {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02098c54 to 02198c57 has its CatchHandler @ 0209896c */
        FUN_00da518c();
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02098c58 to 02198c5b has its CatchHandler @ 02098c64 */
        FUN_00da518c();
      }
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02098c5c to 02198c9b has its CatchHandler @ 0209896c */
        FUN_00da518c();
      }
      plVar6 = *(long **)(lVar9 + 0x20);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x228))
                  (plVar6,*(undefined4 *)(lVar12 + 0x138),*(undefined8 *)(*plVar6 + 0x230));
                    /* try { // try from 02098b0c to 02198b37 has its CatchHandler @ 02098c80 */
        uVar7 = *(undefined8 *)(param_1 + 8);
        uVar8 = *(undefined8 *)(lVar9 + 0x20);
        uVar13 = *(undefined8 *)(lVar9 + 0x38);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Net_WebSockets_ManagedWebSocket_<>c_<WaitForServerToCloseConnectionAsync>b__63_0__
                                   );
        if (lVar12 != 0) {
          FUN_0209f814(lVar12,lVar9,uVar7,uVar8,uVar13,0);
          *param_1 = -2;
          puVar3 = Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateJump__;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
                    /* try { // try from 02098b70 to 02198b7b has its CatchHandler @ 02098c7c */
          FUN_011ccb9c(param_1 + 2,lVar12,*(undefined8 *)puVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02098c58 with catch @ 02098c64
                        */
        FUN_00da518c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02098c48 to 02198c4f has its CatchHandler @ 02098c74 */
      FUN_00da518c();
    }
    lVar12 = *(long *)(lVar9 + 0x38);
    if (lVar12 == 0) break;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar12 + 0x40) == 0) break;
    if (*(char *)(lVar12 + 0x2d) != '\0') {
      FUN_02097204(lVar9);
    }
    bVar11 = false;
    auVar14 = local_60;
LAB_0209899c:
    local_60 = auVar14;
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0209d3a8(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 10),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar4 = FUN_02096640(lVar9);
    *(byte *)(param_1 + 0xe) = bVar4 & 1;
    if ((bVar4 & 1) == 0) {
      FUN_02097204(lVar9);
      if (bVar11) {
        FUN_02097078(lVar9);
      }
      auVar1 = local_70;
      if (iVar10 == 0) {
LAB_020989e0:
        local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
        iVar10 = -1;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = -1;
        local_70 = auVar1;
      }
      else {
        lVar12 = FUN_020966dc(lVar9,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02098c50 to 02198c53 has its CatchHandler @ 02098c70 */
          FUN_00da518c();
        }
        auVar14 = FUN_017e7d94(lVar12,0,0);
        local_60 = auVar14;
        uVar5 = FUN_016a1974(local_60,0);
        if ((uVar5 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,local_60,param_1,
                       *(undefined8 *)
                        System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo
                      );
          return;
        }
      }
      FUN_016a1990(local_60,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    lVar12 = FUN_020967c0(lVar9,*(undefined8 *)(param_1 + 8),(char)param_1[0xe],
                          *(undefined8 *)(param_1 + 10));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar14 = FUN_013bdbc8(lVar12,0,*(undefined8 *)
                                     UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                          );
    local_70 = auVar14;
    uVar5 = FUN_0127e6c0(local_70,*(undefined8 *)System_Predicate<ScriptableRenderPass>_TypeInfo);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 02098b84 to 02198b8f has its CatchHandler @ 02098c78 */
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
                    /* try { // try from 02098b90 to 02198c47 has its CatchHandler @ 0209896c */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,local_70,param_1,
                   *(undefined8 *)
                    Method_System_Linq_Expressions_BlockExpression_GetOrMakeExpressions__);
      return;
    }
  }
  uVar7 = FUN_020969ec(7,0);
  uVar8 = thunk_FUN_00d48444(PTR_DAT_033f5690);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar8);
}


