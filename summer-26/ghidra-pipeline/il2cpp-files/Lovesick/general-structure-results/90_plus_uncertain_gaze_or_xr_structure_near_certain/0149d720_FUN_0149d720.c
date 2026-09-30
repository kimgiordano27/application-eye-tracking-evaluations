/*
FUNCTION_NAME: FUN_0149d720
ENTRY_POINT: 0149d720
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_0149d720(int *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_03776c88 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11425);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoCloseAsync>d__8>__
                      );
                    /* try { // try from 0149d760 to 0159d76b has its CatchHandler @ 0149d948 */
    thunk_FUN_00d48444(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    thunk_FUN_00d48444(StringLiteral_11955);
    thunk_FUN_00d48444(StringLiteral_702);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugUI_Foldout_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_TypeExtensions_<GetAllMembers>d__51<object>_System_Collections_IEnumerator_Reset__
                      );
                    /* try { // try from 0149d794 to 0159d79f has its CatchHandler @ 0149d94c */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<BezierControlPoint>_get_Current__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_58_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5c50);
                    /* try { // try from 0149d7b8 to 0159d7bf has its CatchHandler @ 0149d948 */
    thunk_FUN_00d48444(StringLiteral_720);
    thunk_FUN_00d48444(System_Func<GlyphPairAdjustmentRecord,_uint>_TypeInfo);
    DAT_03776c88 = 1;
  }
  puVar3 = StringLiteral_11955;
                    /* try { // try from 0149d7d8 to 0159d7e3 has its CatchHandler @ 0149d94c */
  local_40 = 0;
  local_38 = 0;
  lVar8 = *(long *)(param_1 + 10);
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0149d8a8:
    FUN_016a13e0(&local_38,0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar6 = (long *)FUN_0269d7d8(*(long *)(param_1 + 0xc),0);
                    /* try { // try from 0149d8c4 to 0159d8c7 has its CatchHandler @ 0149d8fc */
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 0149d8c8 to 0159d8cb has its CatchHandler @ 0149d8f8 */
                    /* try { // try from 0149d8cc to 0159d8cf has its CatchHandler @ 0149d8f4 */
                    /* try { // try from 0149d8d0 to 0159d8d3 has its CatchHandler @ 0149d8f0 */
                    /* try { // try from 0149d8d4 to 0159d8d7 has its CatchHandler @ 0149d8ec */
                    /* try { // try from 0149d8d8 to 0159d8db has its CatchHandler @ 0149d2e4 */
                    /* try { // try from 0149d8dc to 0159d8df has its CatchHandler @ 0149d908 */
      bVar1 = *(byte *)(*(long *)PTR_DAT_033f5c50 + 300);
                    /* try { // try from 0149d8e0 to 0159d8e3 has its CatchHandler @ 0149d910 */
                    /* try { // try from 0149d8e4 to 0159d96b has its CatchHandler @ 0149d2e4 */
                    /* catch() { ... } // from try @ 0149d8d4 with catch @ 0149d8ec */
                    /* catch() { ... } // from try @ 0149d8d0 with catch @ 0149d8f0 */
                    /* catch() { ... } // from try @ 0149d8cc with catch @ 0149d8f4 */
                    /* catch() { ... } // from try @ 0149d8c8 with catch @ 0149d8f8 */
      if ((bVar1 <= *(byte *)(*plVar6 + 300)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_033f5c50))
      {
                    /* catch() { ... } // from try @ 0149d9b0 with catch @ 0149d9f8
                       catch() { ... } // from try @ 0149d9e8 with catch @ 0149d9f8 */
        uVar9 = FUN_0268d09c(plVar6,0);
                    /* try { // try from 0149d9fc to 0159da9b has its CatchHandler @ 0149d9fc
                       catch() { ... } // from try @ 0149d9fc with catch @ 0149d9fc
                       catch() { ... } // from try @ 0149dce8 with catch @ 0149d9fc
                       catch() { ... } // from try @ 0149ddd4 with catch @ 0149d9fc
                       catch() { ... } // from try @ 0149de68 with catch @ 0149d9fc
                       catch() { ... } // from try @ 0149de98 with catch @ 0149d9fc
                       catch() { ... } // from try @ 0149dedc with catch @ 0149d9fc
                       catch() { ... } // from try @ 0149df74 with catch @ 0149d9fc */
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar9,uVar9);
        }
        lVar8 = FUN_0149d61c(lVar8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_40 = FUN_013bdbc4(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
        uVar5 = FUN_013ba28c(&local_40,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<BezierControlPoint>_get_Current__
                            );
        if ((uVar5 & 1) == 0) {
          *param_1 = 1;
          *(undefined8 *)(param_1 + 0x10) = local_40;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(param_1 + 2,&local_40,param_1,*(undefined8 *)StringLiteral_11425);
          return;
        }
        goto LAB_0149d80c;
      }
    }
                    /* catch() { ... } // from try @ 0149d8c4 with catch @ 0149d8fc */
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* catch() { ... } // from try @ 0149d45c with catch @ 0149d900 */
                    /* catch() { ... } // from try @ 0149d460 with catch @ 0149d904 */
                    /* catch() { ... } // from try @ 0149d4a0 with catch @ 0149d908
                       catch() { ... } // from try @ 0149d8dc with catch @ 0149d908 */
    plVar6 = (long *)thunk_FUN_00d93c64(lVar8,0);
                    /* catch() { ... } // from try @ 0149d404 with catch @ 0149d90c */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* catch() { ... } // from try @ 0149d4e0 with catch @ 0149d910
                       catch() { ... } // from try @ 0149d8e0 with catch @ 0149d910 */
                    /* catch() { ... } // from try @ 0149d7f0 with catch @ 0149d914 */
                    /* catch() { ... } // from try @ 0149d6d8 with catch @ 0149d918 */
    uVar9 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                    /* catch() { ... } // from try @ 0149d668 with catch @ 0149d91c */
                    /* catch() { ... } // from try @ 0149d6fc with catch @ 0149d920 */
                    /* catch() { ... } // from try @ 0149d6e4 with catch @ 0149d924 */
                    /* catch() { ... } // from try @ 0149d718 with catch @ 0149d928 */
                    /* catch() { ... } // from try @ 0149d5d0 with catch @ 0149d92c */
                    /* catch() { ... } // from try @ 0149d6a8 with catch @ 0149d930 */
                    /* catch() { ... } // from try @ 0149d638 with catch @ 0149d934 */
    uVar7 = FUN_015f5b28(*(undefined8 *)System_Func<GlyphPairAdjustmentRecord,_uint>_TypeInfo,
                         *(undefined8 *)(param_1 + 8),0);
                    /* catch() { ... } // from try @ 0149d80c with catch @ 0149d938 */
                    /* catch() { ... } // from try @ 0149d7f4 with catch @ 0149d93c */
                    /* catch() { ... } // from try @ 0149d81c with catch @ 0149d940 */
                    /* catch() { ... } // from try @ 0149d594 with catch @ 0149d944 */
                    /* catch() { ... } // from try @ 0149d760 with catch @ 0149d948
                       catch() { ... } // from try @ 0149d7b8 with catch @ 0149d948 */
                    /* catch() { ... } // from try @ 0149d794 with catch @ 0149d94c
                       catch() { ... } // from try @ 0149d7d8 with catch @ 0149d94c */
    if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0149d71c with catch @ 0149d950 */
      thunk_FUN_00d32864();
    }
                    /* catch() { ... } // from try @ 0149d550 with catch @ 0149d954 */
    FUN_014def10(uVar9,uVar7,0,0);
    uVar9 = 0;
  }
  else {
                    /* try { // try from 0149d7f0 to 0159d7f3 has its CatchHandler @ 0149d914 */
                    /* try { // try from 0149d7f4 to 0159d7ff has its CatchHandler @ 0149d93c */
    if (*param_1 != 1) {
      uVar9 = *(undefined8 *)(param_1 + 8);
      if (*(int *)(*(long *)StringLiteral_702 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_016e47f4(uVar9,0);
      uVar9 = FUN_0113a2b0(uVar9,*(undefined8 *)UnityEngine_Rendering_DebugUI_Foldout_TypeInfo);
      *(undefined8 *)(param_1 + 0xc) = uVar9;
      lVar4 = FUN_014dfab0(uVar9,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_38 = FUN_017e7d88(lVar4,0);
      uVar5 = FUN_016a1310(&local_38,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = local_38;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
                    /* try { // try from 0149d9dc to 0159d9e7 has its CatchHandler @ 0149d2e4 */
                    /* try { // try from 0149d9e8 to 0159d9ef has its CatchHandler @ 0149d9f8 */
        FUN_01098fc0(param_1 + 2,&local_38,param_1,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoCloseAsync>d__8>__
                    );
        return;
                    /* catch() { ... } // from try @ 0149d96c with catch @ 0149d9f0 */
      }
      goto LAB_0149d8a8;
    }
    local_40 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_0149d80c:
                    /* try { // try from 0149d80c to 0159d813 has its CatchHandler @ 0149d938 */
                    /* try { // try from 0149d81c to 0159d827 has its CatchHandler @ 0149d940 */
    FUN_013ba2d0(&local_40,&local_28,
                 *(undefined8 *)
                  Method_Sirenix_Serialization_Utilities_TypeExtensions_<GetAllMembers>d__51<object>_System_Collections_IEnumerator_Reset__
                );
    uVar9 = local_28;
                    /* try { // try from 0149d828 to 0159d8c3 has its CatchHandler @ 0149d2e4 */
  }
                    /* try { // try from 0149d96c to 0159d96f has its CatchHandler @ 0149d9f0 */
  *param_1 = -2;
  param_1[0xc] = 0;
  puVar2 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
  param_1[0xd] = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(param_1 + 2,uVar9,*(undefined8 *)puVar2);
                    /* try { // try from 0149d9b0 to 0159d9db has its CatchHandler @ 0149d9f8 */
  return;
}


