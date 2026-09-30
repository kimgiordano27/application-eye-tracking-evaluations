/*
FUNCTION_NAME: FUN_05d60e04
ENTRY_POINT: 05d60e04
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_16;validity_or_gating_hits_15;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d60e04(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  undefined8 local_98;
  undefined8 *puStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  puVar8 = Method_OVRTask_WhenAll<OVRSceneManager_Metrics>__;
  puVar7 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  puVar6 = Method_OVRTask_WhenAll<bool>__;
  puVar5 = Method_OVRTask_WhenAll<bool>__;
  puVar4 = Method_OVRTask_TryGetPendingTask<OVRPlugin_Result>__;
  puVar3 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_06bc3950 & 1) == 0) {
    FUN_02f08768(Method_OVRTask_WhenAll<OVRSceneManager_Metrics>__);
    FUN_02f08768(PTR_DAT_067d23f0);
    FUN_02f08768(PTR_DAT_067c9de8);
    FUN_02f08768(Method_OVRTask_TryGetPendingTask<OVRPlugin_Result>__);
    FUN_02f08768(Method_OVRTask_WhenAll<OVRPlugin_Result>__);
    FUN_02f08768(Method_OVRTask_WhenAll<bool>__);
    FUN_02f08768(Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__);
    FUN_02f08768(PTR_DAT_067caf18);
    FUN_02f08768(PTR_DAT_067caf20);
    FUN_02f08768(PTR_DAT_067caf28);
    FUN_02f08768(Method_OVRTriangleMesh_IOVRAnchorComponent<OVRTriangleMesh>_SetEnabledAsync__);
                    /* try { // try from 05d60ef4 to 05e6129b has its CatchHandler @ 05d60ef4
                       catch() { ... } // from try @ 05d60ef4 with catch @ 05d60ef4
                       catch() { ... } // from try @ 05d612b8 with catch @ 05d60ef4
                       catch() { ... } // from try @ 05d612f0 with catch @ 05d60ef4
                       catch() { ... } // from try @ 05d6131c with catch @ 05d60ef4
                       catch() { ... } // from try @ 05d61348 with catch @ 05d60ef4 */
    FUN_02f08768(Method_OVRTask_WhenAll<bool>__);
    FUN_02f08768(
                Method_OVRUnityHumanoidSkeletonRetargeter_ValidateGameObjectForUnityHumanoidRetargeting__
                );
    FUN_02f08768(Method_OVRVignette_OnBeginCameraRendering__);
    FUN_02f08768(PTR_DAT_067caf30);
    FUN_02f08768(Method_OVRVirtualKeyboard_<InitializeGlTFModel>b__92_0__);
    FUN_02f08768(Method_OVRVirtualKeyboard_<InitializeGlTFModel>b__92_1__);
    FUN_02f08768(Method_OVRVirtualKeyboard_AnimationStateHandler__);
    FUN_02f08768(Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Data_DataTableCollection_BaseAdd__);
    FUN_02f08768(PTR_DAT_067cf788);
    FUN_02f08768(Method_OVRVirtualKeyboard_Awake__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(Method_OVRVirtualKeyboard_OnBackspace__);
    DAT_06bc3950 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_0481821c(uVar12,10,*(undefined8 *)puVar4);
  uVar13 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  uVar12 = FUN_02f0880c(uVar13,0x14);
  uVar13 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  uVar12 = thunk_FUN_02f45270(uVar13);
  FUN_04814d34(uVar12,10,*(undefined8 *)puVar7);
  uVar13 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  lVar14 = FUN_02f0880c(uVar13,8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar2);
  }
  if (DAT_06bc3978 == '\0') {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3978 = '\x01';
  }
  lVar15 = *(long *)puVar2;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar15 = *(long *)puVar2;
  }
  if (lVar14 == 0) goto LAB_05d6163c;
  if (*(int *)(lVar14 + 0x18) != 0) {
    memmove((void *)(lVar14 + 0x20),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
    if (DAT_06bc3978 == '\0') {
      FUN_02f08768(
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  );
      DAT_06bc3978 = '\x01';
    }
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar15 = *(long *)puVar2;
    }
    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
      memmove((void *)(lVar14 + 0x98),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
      if (DAT_06bc3978 == '\0') {
        FUN_02f08768(
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    );
        DAT_06bc3978 = '\x01';
      }
      lVar15 = *(long *)puVar2;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar15 = *(long *)puVar2;
      }
      if (2 < *(uint *)(lVar14 + 0x18)) {
        memmove((void *)(lVar14 + 0x110),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar15 = *(long *)puVar2;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar15 = *(long *)puVar2;
        }
        if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
          memmove((void *)(lVar14 + 0x188),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
          if (DAT_06bc3978 == '\0') {
            FUN_02f08768(
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                        );
            DAT_06bc3978 = '\x01';
          }
          lVar15 = *(long *)puVar2;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar15 = *(long *)puVar2;
          }
          if (4 < *(uint *)(lVar14 + 0x18)) {
            memmove((void *)(lVar14 + 0x200),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
            if (DAT_06bc3978 == '\0') {
              FUN_02f08768(
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                          );
              DAT_06bc3978 = '\x01';
            }
            lVar15 = *(long *)puVar2;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar15 = *(long *)puVar2;
            }
            if (5 < *(uint *)(lVar14 + 0x18)) {
              memmove((void *)(lVar14 + 0x278),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
              if (DAT_06bc3978 == '\0') {
                FUN_02f08768(
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                            );
                DAT_06bc3978 = '\x01';
              }
              lVar15 = *(long *)puVar2;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar15 = *(long *)puVar2;
              }
              if (6 < *(uint *)(lVar14 + 0x18)) {
                memmove((void *)(lVar14 + 0x2f0),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
                if (DAT_06bc3978 == '\0') {
                  FUN_02f08768(
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                              );
                  DAT_06bc3978 = '\x01';
                }
                lVar15 = *(long *)puVar2;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar15 = *(long *)puVar2;
                }
                puVar10 = Method_OVRVirtualKeyboard_Awake__;
                puVar9 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
                puVar8 = Method_OVRVirtualKeyboard_AnimationStateHandler__;
                puVar7 = Method_OVRVirtualKeyboard_<InitializeGlTFModel>b__92_1__;
                puVar6 = Method_OVRVirtualKeyboard_<InitializeGlTFModel>b__92_0__;
                puVar5 = 
                Method_OVRTriangleMesh_IOVRAnchorComponent<OVRTriangleMesh>_SetEnabledAsync__;
                puVar4 = PTR_DAT_067d23f0;
                puVar3 = PTR_DAT_067cf788;
                puVar2 = PTR_DAT_067c9de8;
                    /* try { // try from 05d6129c to 05e612a3 has its CatchHandler @ 05d612fc */
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) != 0) {
                    /* try { // try from 05d612b0 to 05e612b7 has its CatchHandler @ 05d612f8 */
                    /* try { // try from 05d612b8 to 05e612eb has its CatchHandler @ 05d60ef4 */
                    /* try { // try from 05d612ec to 05e612ef has its CatchHandler @ 05d612f4 */
                    /* try { // try from 05d612f0 to 05e61317 has its CatchHandler @ 05d60ef4 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d612ec with catch @ 05d612f4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d612b0 with catch @ 05d612f8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d6129c with catch @ 05d612fc
                        */
                  memmove((void *)(lVar14 + 0x368),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
                  uVar12 = *(undefined8 *)puVar4;
                  *(long *)(param_1 + 0x40) = lVar14;
                  uVar12 = FUN_02f0880c(uVar12,8);
                  uVar13 = *(undefined8 *)puVar3;
                  *(undefined8 *)(param_1 + 0xc0) = uVar12;
                    /* try { // try from 05d61318 to 05e6131b has its CatchHandler @ 05d6133c */
                    /* try { // try from 05d6131c to 05e6133f has its CatchHandler @ 05d60ef4 */
                  uVar12 = FUN_02f0880c(uVar13,8);
                  uVar13 = *(undefined8 *)puVar10;
                  *(undefined8 *)(param_1 + 200) = uVar12;
                  *(undefined1 *)(param_1 + 0xe0) = 1;
                  uVar12 = thunk_FUN_02f45270(uVar13);
                    /* catch() { ... } // from try @ 05d61318 with catch @ 05d6133c */
                    /* try { // try from 05d61340 to 05e61347 has its CatchHandler @ 05d61350 */
                  FUN_05d69d68(uVar12,0);
                    /* try { // try from 05d61348 to 05e61353 has its CatchHandler @ 05d60ef4 */
                  uVar13 = *(undefined8 *)puVar5;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d61340 with catch @ 05d61350
                        */
                  *(undefined8 *)(param_1 + 0xf0) = uVar12;
                  uVar12 = FUN_02f0880c(uVar13,0);
                  uVar13 = *(undefined8 *)puVar9;
                  *(undefined8 *)(param_1 + 0xf8) = uVar12;
                  uVar12 = thunk_FUN_02f45270(uVar13);
                  FUN_03abf17c(uVar12,0x20,*(undefined8 *)puVar6);
                  uVar13 = *(undefined8 *)puVar8;
                  *(undefined8 *)(param_1 + 0x108) = uVar12;
                  uVar12 = thunk_FUN_02f45270(uVar13);
                  FUN_03abf17c(uVar12,10,*(undefined8 *)puVar7);
                  uVar13 = *(undefined8 *)puVar2;
                  *(undefined8 *)(param_1 + 0x110) = uVar12;
                  *(undefined2 *)(param_1 + 0x130) = 0x101;
                  uVar12 = thunk_FUN_02f45270(uVar13);
                  FUN_05c451d0(uVar12,0);
                  *(undefined8 *)(param_1 + 0x138) = uVar12;
                  FUN_05116b38(param_1,0);
                  puVar3 = Method_OVRVirtualKeyboard_OnBackspace__;
                  puVar2 = Method_System_Data_DataTableCollection_BaseAdd__;
                  if (param_2 != 0) {
                    uVar12 = thunk_FUN_060f6130(param_2,0);
                    uVar12 = FUN_04f65260(*(undefined8 *)puVar3,uVar12,0);
                    uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    FUN_05c5c73c(uVar13,uVar12,0);
                    *(undefined8 *)(param_1 + 0xd8) = uVar13;
                    puVar7 = 
                    Method_OVRUnityHumanoidSkeletonRetargeter_ValidateGameObjectForUnityHumanoidRetargeting__
                    ;
                    puVar6 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
                    puVar5 = PTR_DAT_067cb280;
                    puVar4 = PTR_DAT_067caf20;
                    puVar3 = PTR_DAT_067caf18;
                    puVar2 = PTR_DAT_067c8f20;
                    if (*(long *)(param_2 + 0x30) != 0) {
                    /* try { // try from 05d61440 to 05e614e7 has its CatchHandler @ 05d61440
                       catch() { ... } // from try @ 05d61440 with catch @ 05d61440
                       catch() { ... } // from try @ 05d61504 with catch @ 05d61440
                       catch() { ... } // from try @ 05d61534 with catch @ 05d61440
                       catch() { ... } // from try @ 05d61560 with catch @ 05d61440
                       catch() { ... } // from try @ 05d61584 with catch @ 05d61440 */
                      FUN_03ac039c(&local_98,*(long *)(param_2 + 0x30),
                                   *(undefined8 *)PTR_DAT_067caf30);
                      local_70 = local_88;
                      puStack_78 = puStack_90;
                      local_80 = local_98;
                      local_98 = 0;
                      puStack_90 = &local_80;
LAB_05d61484:
                      uVar16 = FUN_04aff1b0(&local_80,*(undefined8 *)puVar4);
                      plVar11 = local_70;
                      if ((uVar16 & 1) != 0) {
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        uVar16 = FUN_060f245c(plVar11,0,0);
                        if ((uVar16 & 1) == 0) {
                          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                          (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
                          lVar14 = *(long *)(param_1 + 0x110);
                          if (lVar14 != 0) {
                            lVar15 = *(long *)(lVar14 + 0x10);
                            lVar17 = *(long *)puVar7;
                    /* try { // try from 05d614e8 to 05e614ef has its CatchHandler @ 05d61540 */
                            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar14 + 0x18);
                    /* try { // try from 05d614fc to 05e61503 has its CatchHandler @ 05d6153c */
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                    /* try { // try from 05d61504 to 05e6152f has its CatchHandler @ 05d61440 */
                                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                *(long **)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = plVar11;
                              }
                              else {
                                FUN_03abf904(lVar14,plVar11,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                              }
                              goto LAB_05d61484;
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        goto LAB_05d61484;
                      }
                    /* try { // try from 05d61530 to 05e61533 has its CatchHandler @ 05d61538 */
                    /* try { // try from 05d61534 to 05e6155b has its CatchHandler @ 05d61440 */
                      FUN_04aff1ac(&local_80,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d61530 with catch @ 05d61538
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d614fc with catch @ 05d6153c
                        */
                      FUN_05d5b5c8(param_1);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d614e8 with catch @ 05d61540
                        */
                      *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x40);
                      FUN_05d616ac(param_1,0);
                      lVar14 = *(long *)(param_1 + 0x108);
                      if (lVar14 != 0) {
                    /* try { // try from 05d6155c to 05e6155f has its CatchHandler @ 05d61578 */
                        iVar18 = *(int *)(lVar14 + 0x18);
                    /* try { // try from 05d61560 to 05e6157b has its CatchHandler @ 05d61440 */
                        *(undefined4 *)(lVar14 + 0x18) = 0;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (0 < iVar18) {
                    /* catch() { ... } // from try @ 05d6155c with catch @ 05d61578 */
                    /* try { // try from 05d6157c to 05e61583 has its CatchHandler @ 05d6158c */
                          Newtonsoft_Json_Linq_JObject__LoadAsync
                                    (*(undefined8 *)(lVar14 + 0x10),0,iVar18,0);
                        }
                    /* try { // try from 05d61584 to 05e6158f has its CatchHandler @ 05d61440 */
                        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d6157c with catch @ 05d6158c
                        */
                          thunk_FUN_02f6670c();
                        }
                    /* try { // try from 05d61590 to 05e61653 has its CatchHandler @ 05d61590
                       catch() { ... } // from try @ 05d61590 with catch @ 05d61590
                       catch() { ... } // from try @ 05d61674 with catch @ 05d61590
                       catch() { ... } // from try @ 05d617b4 with catch @ 05d61590
                       catch() { ... } // from try @ 05d617e0 with catch @ 05d61590
                       catch() { ... } // from try @ 05d61804 with catch @ 05d61590 */
                        uVar12 = FUN_05dd59d4(0);
                        lVar14 = *(long *)puVar2;
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_02f6670c(lVar14);
                        }
                        uVar16 = FUN_060f60a4(uVar12,0);
                        if ((uVar16 & 1) == 0) {
                          iVar18 = *(int *)(param_1 + 0x100);
                        }
                        else {
                          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          lVar14 = FUN_05dd59d4(0);
                          if (lVar14 == 0) goto LAB_05d6163c;
                          iVar18 = *(int *)(lVar14 + 0x100);
                          *(int *)(param_1 + 0x100) = iVar18;
                        }
                        lVar14 = *(long *)puVar6;
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                          lVar14 = *(long *)puVar6;
                        }
                        *(bool *)(*(long *)(lVar14 + 0xb8) + 8) = iVar18 != 2;
                        return;
                      }
                    }
                  }
LAB_05d6163c:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


