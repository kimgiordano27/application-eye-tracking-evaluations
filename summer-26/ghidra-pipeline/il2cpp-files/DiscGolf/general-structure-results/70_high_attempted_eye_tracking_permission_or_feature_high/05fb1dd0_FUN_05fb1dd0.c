/*
FUNCTION_NAME: FUN_05fb1dd0
ENTRY_POINT: 05fb1dd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_20;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05fb1dd0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureInteractorUnregistered__
  ;
  puVar4 = Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__;
  puVar5 = PTR_DAT_06a109c8;
  puVar3 = PTR_DAT_06a109c0;
  if ((DAT_06dc46ec & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fe458);
                    /* try { // try from 05fb1e30 to 060b1e37 has its CatchHandler @ 05fb22e8 */
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__);
                    /* try { // try from 05fb1e44 to 060b1e57 has its CatchHandler @ 05fb22c0 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnInteractorRegistered__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__);
                    /* try { // try from 05fb1e60 to 060b1e67 has its CatchHandler @ 05fb22cc */
    FUN_02d965b8(Method_System_Threading_Tasks_TaskCompletionSource<GoogleSignInUser>_get_Task__);
    FUN_02d965b8(Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_SetResult__)
    ;
                    /* try { // try from 05fb1e74 to 060b1e7f has its CatchHandler @ 05fb2260 */
    FUN_02d965b8(PTR_DAT_069fda18);
                    /* try { // try from 05fb1e84 to 060b1e8b has its CatchHandler @ 05fb2258 */
    FUN_02d965b8(Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__);
    FUN_02d965b8(PTR_DAT_06a109c0);
                    /* try { // try from 05fb1e94 to 060b1e9f has its CatchHandler @ 05fb2248 */
    FUN_02d965b8(PTR_DAT_06a109c8);
                    /* try { // try from 05fb1ea4 to 060b1eab has its CatchHandler @ 05fb225c */
    FUN_02d965b8(PTR_DAT_06a11688);
    FUN_02d965b8(Method_Mono_Security_Cryptography_ARC4Managed_CheckInput__);
    FUN_02d965b8(Method_Mono_Security_Cryptography_ARC4Managed_TransformBlock__);
                    /* try { // try from 05fb1ec4 to 060b1ecf has its CatchHandler @ 05fb2358 */
    FUN_02d965b8(Method_Mono_Security_Cryptography_ARC4Managed_set_Key__);
                    /* try { // try from 05fb1ed4 to 060b1edb has its CatchHandler @ 05fb2354 */
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCoreImageStabilizationUtils_UpdateBackgroundGeometry__
                );
    FUN_02d965b8(Method_UnityEngine_XR_ARCore_ARCorePermissionManager_RequestPermission__);
                    /* try { // try from 05fb1ee8 to 060b1eef has its CatchHandler @ 05fb2350 */
    FUN_02d965b8(
                Method_UnityEngine_XR_ARCore_ARCoreSessionSubsystem_ConfigurationChangedFromProvider__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARGestureInteractor_OnInteractableRegistered__
                );
                    /* try { // try from 05fb1f04 to 060b1f0f has its CatchHandler @ 05fb2340 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARGestureInteractor_OnInteractableUnregistered__
                );
                    /* try { // try from 05fb1f14 to 060b1f1b has its CatchHandler @ 05fb233c */
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARPlaneBoundaryChangedEventArgs__ctor__);
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARRaycastHit__ctor__);
                    /* try { // try from 05fb1f24 to 060b1f2b has its CatchHandler @ 05fb2330 */
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARRaycastHit__ctor__);
                    /* try { // try from 05fb1f38 to 060b1f3f has its CatchHandler @ 05fb2244 */
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARRaycastManager_Raycast__);
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARRaycastManager_Raycast__);
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARRaycastManager_RaycastFallback__);
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARRaycastManager_RaycastHitComparer__);
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_ARRaycastManager_RaycastRay__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureInteractorUnregistered__
                );
    DAT_06dc46ec = 1;
  }
  lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_0400f984(lVar8,*(undefined8 *)puVar3);
  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                    /* try { // try from 05fb1f9c to 060b1fa3 has its CatchHandler @ 05fb223c */
                    /* try { // try from 05fb1fa4 to 060b1ff3 has its CatchHandler @ 05fb1c04 */
  FUN_05f455a0(lVar9,0);
  uVar10 = FUN_05362cb4(param_2,*(undefined8 *)puVar2,0);
  puVar5 = Method_UnityEngine_XR_ARFoundation_ARRaycastManager_RaycastRay__;
  puVar3 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x28) = uVar10;
    LeanTween__value((undefined8 *)(lVar9 + 0x28),uVar10);
    lVar13 = *(long *)(lVar9 + 0x48);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                    /* try { // try from 05fb1ff4 to 060b1ffb has its CatchHandler @ 05fb22ec */
    Unity_Services_Relay_RelayServiceException__set_Reason(lVar11,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    puVar6 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AR_ARGestureInteractor_OnInteractableRegistered__;
    puVar2 = Method_Mono_Security_Cryptography_ARC4Managed_CheckInput__;
    puVar4 = PTR_DAT_069fe458;
    puVar3 = PTR_DAT_069fda18;
    if (lVar11 != 0) {
                    /* try { // try from 05fb2018 to 060b201b has its CatchHandler @ 05fb22d8 */
                    /* try { // try from 05fb2028 to 060b2033 has its CatchHandler @ 05fb22e4 */
      FUN_05f3b620(lVar11,**(undefined8 **)(*(long *)puVar5 + 0xb8),
                   (*(undefined8 **)(*(long *)puVar5 + 0xb8))[1],0);
                    /* try { // try from 05fb2044 to 060b204b has its CatchHandler @ 05fb22e0 */
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                    /* try { // try from 05fb204c to 060b209f has its CatchHandler @ 05fb1c04 */
      FUN_03b6efa0(uVar10,param_1,*(undefined8 *)puVar2,0);
      *(undefined8 *)(lVar11 + 0x48) = uVar10;
      LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_04bdbe64(uVar10,param_1,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar11 + 0x50) = uVar10;
      LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar10);
      puVar2 = PTR_DAT_06a11688;
      if (lVar13 != 0) {
        FUN_044193fc(lVar13,lVar11,*(undefined8 *)PTR_DAT_06a11688);
        lVar13 = *(long *)(lVar9 + 0x48);
        lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                   );
        Unity_Services_Relay_RelayServiceException__set_Reason(lVar11,0);
        puVar7 = Method_UnityEngine_XR_ARFoundation_ARPlaneBoundaryChangedEventArgs__ctor__;
        puVar6 = 
        Method_UnityEngine_XR_Interaction_Toolkit_AR_ARGestureInteractor_OnInteractableUnregistered__
        ;
        if (lVar11 != 0) {
          FUN_05f3b620(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                       *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
          FUN_03b6efa0(uVar10,param_1,*(undefined8 *)puVar6,0);
          *(undefined8 *)(lVar11 + 0x48) = uVar10;
          LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
          FUN_04bdbe64(uVar10,param_1,*(undefined8 *)puVar7,0);
          *(undefined8 *)(lVar11 + 0x50) = uVar10;
          LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar10);
          if (lVar13 != 0) {
            FUN_044193fc(lVar13,lVar11,*(undefined8 *)puVar2);
            lVar13 = *(long *)(lVar9 + 0x48);
            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                       );
            Unity_Services_Relay_RelayServiceException__set_Reason(lVar11,0);
            puVar7 = Method_UnityEngine_XR_ARFoundation_ARRaycastHit__ctor__;
            puVar6 = Method_UnityEngine_XR_ARFoundation_ARRaycastHit__ctor__;
            if (lVar11 != 0) {
              FUN_05f3b620(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20),
                           *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28),0);
              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
              FUN_03b6efa0(uVar10,param_1,*(undefined8 *)puVar6,0);
              *(undefined8 *)(lVar11 + 0x48) = uVar10;
              LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
              FUN_04bdbe64(uVar10,param_1,*(undefined8 *)puVar7,0);
              *(undefined8 *)(lVar11 + 0x50) = uVar10;
              LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar10);
              if (lVar13 != 0) {
                FUN_044193fc(lVar13,lVar11,*(undefined8 *)puVar2);
                lVar13 = *(long *)(lVar9 + 0x48);
                lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                           );
                Unity_Services_Relay_RelayServiceException__set_Reason(lVar11,0);
                puVar6 = Method_UnityEngine_XR_ARFoundation_ARRaycastManager_Raycast__;
                puVar2 = Method_UnityEngine_XR_ARFoundation_ARRaycastManager_Raycast__;
                if (lVar11 != 0) {
                  FUN_05f3b620(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30),
                               *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38),0);
                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                  FUN_03b6efa0(uVar10,param_1,*(undefined8 *)puVar2,0);
                  *(undefined8 *)(lVar11 + 0x48) = uVar10;
                  LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                  FUN_04bdbe64(uVar10,param_1,*(undefined8 *)puVar6,0);
                  *(undefined8 *)(lVar11 + 0x50) = uVar10;
                  LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar10);
                  if (lVar13 != 0) {
                    FUN_044193fc(lVar13,lVar11,*(undefined8 *)PTR_DAT_06a11688);
                    lVar13 = *(long *)(lVar9 + 0x48);
                    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                 Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                               );
                    Unity_Services_Relay_RelayServiceException__set_Reason(lVar11,0);
                    puVar7 = 
                    Method_UnityEngine_XR_ARFoundation_ARRaycastManager_RaycastHitComparer__;
                    puVar6 = Method_UnityEngine_XR_ARFoundation_ARRaycastManager_RaycastFallback__;
                    puVar2 = Method_Mono_Security_Cryptography_ARC4Managed_TransformBlock__;
                    if (lVar11 != 0) {
                      FUN_05f3b620(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40),
                                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48),0);
                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                      FUN_03b6efa0(uVar10,param_1,*(undefined8 *)puVar6,0);
                      *(undefined8 *)(lVar11 + 0x48) = uVar10;
                      LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                      FUN_04bdbe64(uVar10,param_1,*(undefined8 *)puVar7,0);
                      *(undefined8 *)(lVar11 + 0x50) = uVar10;
                      LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar10);
                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                      FUN_03b6efa0(uVar10,param_1,*(undefined8 *)puVar2,0);
                      *(undefined8 *)(lVar11 + 0x40) = uVar10;
                      LeanTween__value((undefined8 *)(lVar11 + 0x40),uVar10);
                      if (lVar13 != 0) {
                        FUN_044193fc(lVar13,lVar11,*(undefined8 *)PTR_DAT_06a11688);
                        lVar13 = *(long *)(lVar9 + 0x48);
                        lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                        Unity_Services_Relay_RelayServiceException__set_Reason(lVar11,0);
                        puVar6 = 
                        Method_UnityEngine_XR_ARCore_ARCoreImageStabilizationUtils_UpdateBackgroundGeometry__
                        ;
                        puVar2 = Method_Mono_Security_Cryptography_ARC4Managed_set_Key__;
                        if (lVar11 != 0) {
                          FUN_05f3b620(lVar11,*(undefined8 *)
                                               (*(long *)(*(long *)puVar5 + 0xb8) + 0x50),
                                       *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58),0);
                          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                          FUN_03b6efa0(uVar10,param_1,*(undefined8 *)puVar2,0);
                          *(undefined8 *)(lVar11 + 0x48) = uVar10;
                          LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
                          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                          FUN_04bdbe64(uVar10,param_1,*(undefined8 *)puVar6,0);
                          *(undefined8 *)(lVar11 + 0x50) = uVar10;
                          LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar10);
                          puVar4 = 
                          Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnInteractorRegistered__
                          ;
                          puVar3 = PTR_DAT_06a11688;
                          if (lVar13 != 0) {
                            FUN_044193fc(lVar13,lVar11,*(undefined8 *)PTR_DAT_06a11688);
                            lVar13 = *(long *)(lVar9 + 0x48);
                            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                            FUN_05f4677c(lVar11,0);
                            puVar6 = 
                            Method_UnityEngine_XR_ARCore_ARCorePermissionManager_RequestPermission__
                            ;
                            puVar2 = PTR_DAT_069fc868;
                            if (lVar11 != 0) {
                              FUN_05f3b620(lVar11,*(undefined8 *)
                                                   (*(long *)(*(long *)puVar5 + 0xb8) + 0x60),
                                           *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x68)
                                           ,0);
                              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                              FUN_054521e8(uVar10,param_1,*(undefined8 *)puVar6,0);
                              *(undefined8 *)(lVar11 + 0x48) = uVar10;
                              LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
                              if (lVar13 != 0) {
                                FUN_044193fc(lVar13,lVar11,*(undefined8 *)puVar3);
                                lVar13 = *(long *)(lVar9 + 0x48);
                                lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                FUN_05f4677c(lVar11,0);
                                puVar4 = 
                                Method_UnityEngine_XR_ARCore_ARCoreSessionSubsystem_ConfigurationChangedFromProvider__
                                ;
                                if (lVar11 != 0) {
                                  FUN_05f3b620(lVar11,*(undefined8 *)
                                                       (*(long *)(*(long *)puVar5 + 0xb8) + 0x70),
                                               *(undefined8 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x78),0);
                                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                  FUN_054521e8(uVar10,param_1,*(undefined8 *)puVar4,0);
                                  *(undefined8 *)(lVar11 + 0x48) = uVar10;
                                  LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar10);
                                  if ((lVar13 != 0) &&
                                     (FUN_044193fc(lVar13,lVar11,*(undefined8 *)puVar3), lVar8 != 0)
                                     ) {
                                    lVar11 = *(long *)(lVar8 + 0x10);
                                    lVar13 = *(long *)
                                              Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__
                                    ;
                                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                    if (lVar11 != 0) {
                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                        plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar12 = lVar9;
                                        LeanTween__value(plVar12,lVar9);
                                      }
                                      else {
                                        FUN_040101ec(lVar8,lVar9,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      return lVar8;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


