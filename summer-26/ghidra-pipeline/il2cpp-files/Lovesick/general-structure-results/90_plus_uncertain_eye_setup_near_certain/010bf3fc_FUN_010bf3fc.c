/*
FUNCTION_NAME: FUN_010bf3fc
ENTRY_POINT: 010bf3fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_010bf3fc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_54 [4];
  
  puVar9 = *(undefined8 **)(param_3 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f5c48);
    thunk_FUN_00d48444(Method_TinyJSON_Extensions_AnyOfType<__Il2CppFullySharedGenericType>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzq_f64__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
                    /* try { // try from 010bf45c to 011bf527 has its CatchHandler @ 010bf45c
                       catch() { ... } // from try @ 010bf45c with catch @ 010bf45c
                       catch() { ... } // from try @ 010bf594 with catch @ 010bf45c
                       catch() { ... } // from try @ 010bf5c8 with catch @ 010bf45c
                       catch() { ... } // from try @ 010bf5f8 with catch @ 010bf45c
                       catch() { ... } // from try @ 010bf62c with catch @ 010bf45c */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRView>_get_Item__);
    thunk_FUN_00d48444(Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeBrickIndex_VoxelMeta>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_WitResponseNode>_Dispose__
                      );
    thunk_FUN_00d48444(StringLiteral_10745);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                      );
    puVar9 = *(undefined8 **)(param_3 + 0x38);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_00d59478(param_3);
      puVar9 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  uVar10 = *puVar9;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_01780344(uVar10,0);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_List<ProbeBrickIndex_VoxelMeta>_GetEnumerator__
                            );
  if (lVar3 != 0) {
    FUN_01381348(lVar3,3,*(undefined8 *)Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
    puVar2 = Method_System_Collections_Generic_List<XRView>_get_Item__;
                    /* try { // try from 010bf528 to 011bf52f has its CatchHandler @ 010bf5e0 */
    FUN_01381d60(lVar3,param_1,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_get_Item__);
                    /* try { // try from 010bf538 to 011bf53f has its CatchHandler @ 010bf5d8 */
    uVar4 = FUN_01780344(*(undefined8 *)
                          Method_TinyJSON_Extensions_AnyOfType<__Il2CppFullySharedGenericType>__,0);
                    /* try { // try from 010bf548 to 011bf567 has its CatchHandler @ 010bf5e4 */
    if (*(int *)(*(long *)
                  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                        );
    }
                    /* try { // try from 010bf568 to 011bf573 has its CatchHandler @ 010bf5dc */
                    /* try { // try from 010bf578 to 011bf583 has its CatchHandler @ 010bf5d4 */
    uVar4 = FUN_01c93550(uVar4,*(undefined8 *)StringLiteral_10745,0);
    if (param_2 != 0) {
                    /* try { // try from 010bf588 to 011bf593 has its CatchHandler @ 010bf5d0 */
                    /* try { // try from 010bf594 to 011bf5c3 has its CatchHandler @ 010bf45c */
      uVar5 = FUN_010c026c(*(undefined8 *)(param_2 + 0x10),uVar4,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzq_f64__);
      puVar1 = PTR_DAT_033f5c48;
      if (*(int *)(*(long *)PTR_DAT_033f5c48 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)PTR_DAT_033f5c48);
      }
                    /* try { // try from 010bf5c4 to 011bf5c7 has its CatchHandler @ 010bf5cc */
                    /* try { // try from 010bf5c8 to 011bf5f3 has its CatchHandler @ 010bf45c */
      if (DAT_03776308 == '\0') {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010bf5c4 with catch @ 010bf5cc
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010bf588 with catch @ 010bf5d0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010bf578 with catch @ 010bf5d4
                        */
        thunk_FUN_00d48444(PTR_DAT_033f5c48);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010bf538 with catch @ 010bf5d8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010bf568 with catch @ 010bf5dc
                        */
        DAT_03776308 = '\x01';
      }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010bf528 with catch @ 010bf5e0
                        */
      lVar6 = *(long *)puVar1;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010bf548 with catch @ 010bf5e4
                        */
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
                    /* try { // try from 010bf5f4 to 011bf5f7 has its CatchHandler @ 010bf61c */
                    /* try { // try from 010bf5f8 to 011bf623 has its CatchHandler @ 010bf45c */
      uVar7 = FUN_01ca22f0(**(undefined8 **)(lVar6 + 0xb8),0);
      FUN_01381d60(lVar3,uVar7,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)(param_2 + 0x18);
                    /* catch() { ... } // from try @ 010bf5f4 with catch @ 010bf61c */
      uVar7 = FUN_01c8fde8(0);
                    /* try { // try from 010bf624 to 011bf62b has its CatchHandler @ 010bf640 */
      uVar7 = FUN_01c938d0(uVar7,uVar4,0);
      if (*(long *)(param_2 + 0x18) != 0) {
        uVar8 = FUN_01c9ef68(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18),0);
        uVar10 = FUN_01c93bd0(uVar4,uVar10,0);
        lVar6 = FUN_01780344(**(undefined8 **)(param_3 + 0x38),0);
        if (lVar6 != 0) {
          uVar4 = FUN_0178c5c4(lVar6,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_WitResponseNode>_Dispose__
                               ,0);
          uVar10 = FUN_01ca3760(uVar10,uVar4,0);
          uVar10 = FUN_01ca1a40(uVar10,uVar5,0);
          uVar10 = FUN_01c93e80(uVar7,uVar8,uVar10,0);
          uVar10 = FUN_01ca2348(uVar11,uVar10,0);
          FUN_01381d60(lVar3,uVar10,*(undefined8 *)puVar2);
          local_80 = FUN_01c9d494(lVar3,0);
          local_70 = local_54;
          puVar9 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x10);
          uStack_78 = *(undefined8 *)
                       Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
          ;
          local_54[0] = 1;
          uStack_68 = uVar5;
          (*(code *)puVar9[2])(*puVar9,puVar9,0,&local_80,&local_60);
          return local_60;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


