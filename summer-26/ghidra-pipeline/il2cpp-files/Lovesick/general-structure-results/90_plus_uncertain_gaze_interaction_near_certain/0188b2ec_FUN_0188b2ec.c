/*
FUNCTION_NAME: FUN_0188b2ec
ENTRY_POINT: 0188b2ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 154
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


long FUN_0188b2ec(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  
  if ((DAT_037797a5 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<int>_Clear__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_IntroCreditSceneManager_SkipButtonUnpressed__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_037797a5 = 1;
  }
  puVar4 = Method_System_Collections_Generic_Stack<int>_Clear__;
  puVar3 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__;
                    /* try { // try from 0188b360 to 0198b367 has its CatchHandler @ 0188b55c */
                    /* try { // try from 0188b368 to 0198b3a7 has its CatchHandler @ 0188b2bc */
  iVar7 = FUN_01866168(param_1,0);
  puVar6 = Method_IntroCreditSceneManager_SkipButtonUnpressed__;
  if (iVar7 == 4) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = FUN_01255314(param_1,*(undefined8 *)puVar4);
    return lVar8;
  }
                    /* try { // try from 0188b3a8 to 0198b3af has its CatchHandler @ 0188b4f8 */
                    /* try { // try from 0188b3b0 to 0198b4e7 has its CatchHandler @ 0188b2bc */
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_IntroCreditSceneManager_SkipButtonUnpressed__ + 300);
    if ((*(byte *)(*param_1 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_IntroCreditSceneManager_SkipButtonUnpressed__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_1);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar8 = FUN_01255314(param_1,*(undefined8 *)puVar4);
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__;
  if (lVar8 == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0185fa4c(param_1,0);
    puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    lVar8 = 0;
    if ((uVar9 & 1) != 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      do {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0178a8c4(uVar10,0,0);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_01862af4(uVar10,param_1,0);
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar6 + 300);
          if ((*(byte *)(*plVar11 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0188b360 with catch @ 0188b55c
                       catch(type#1 @ 03274860) { ... } // from try @ 0188b4e8 with catch @ 0188b55c
                        */
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar11);
          }
        }
        uVar9 = FUN_016ac200(plVar11,0,0);
        lVar8 = 0;
        if ((uVar9 & 1) != 0) {
                    /* try { // try from 0188b4e8 to 0198b4ef has its CatchHandler @ 0188b55c */
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
                    /* try { // try from 0188b4f0 to 0198b4f7 has its CatchHandler @ 0188b4f8 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0188b3a8 with catch @ 0188b4f8
                       catch(type#1 @ 03274860) { ... } // from try @ 0188b4f0 with catch @ 0188b4f8
                       try { // try from 0188b4f8 to 0198b50f has its CatchHandler @ 0188b2bc */
          uVar9 = FUN_0185fa4c(plVar11,0);
          lVar8 = 0;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 0188b510 to 0198b527 has its CatchHandler @ 0188b550 */
              thunk_FUN_00d32864();
            }
            lVar8 = FUN_01255314(plVar11,*(undefined8 *)puVar4);
          }
        }
                    /* try { // try from 0188b528 to 0198b53b has its CatchHandler @ 0188b2bc */
        uVar10 = FUN_018661f8(uVar10,0);
      } while (lVar8 == 0);
    }
  }
                    /* catch() { ... } // from try @ 0188b510 with catch @ 0188b550
                       catch() { ... } // from try @ 0188b53c with catch @ 0188b550 */
                    /* try { // try from 0188b554 to 0198b557 has its CatchHandler @ 0188b610 */
                    /* try { // try from 0188b558 to 0198b573 has its CatchHandler @ 0188b2bc */
  return lVar8;
}


