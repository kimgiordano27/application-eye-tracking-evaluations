/*
FUNCTION_NAME: FUN_058ac45c
ENTRY_POINT: 058ac45c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_058ac45c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_06313630;
  if ((DAT_066d31e1 & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                );
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_get_IsPending__);
    FUN_02b3c81c(Method_OVRTask<bool>_ContinueWith<List<OVRAnchor>>__);
    FUN_02b3c81c(Method_OVRTask<bool>_ContinueWith__);
    FUN_02b3c81c(Method_OVRTask<bool>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<bool>_SetResult__);
    FUN_02b3c81c(Method_OVRTask<bool>_get_IsPending__);
                    /* try { // try from 058ac4e0 to 059ac54b has its CatchHandler @ 058ac4e0
                       catch() { ... } // from try @ 058ac4e0 with catch @ 058ac4e0
                       catch() { ... } // from try @ 058ac558 with catch @ 058ac4e0
                       catch() { ... } // from try @ 058ac5cc with catch @ 058ac4e0 */
    FUN_02b3c81c(Method_OVRTask<MRUK_LoadDeviceResult>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<MRUK_LoadDeviceResult>_SetResult__);
    FUN_02b3c81c(Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__);
    FUN_02b3c81c(Method_OVRTask<OVRPlugin_Result>_WithInternalData<IList<OVRAnchor>>__);
    FUN_02b3c81c(Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetResult__);
    FUN_02b3c81c(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__);
    DAT_066d31e1 = 1;
  }
                    /* try { // try from 058ac54c to 059ac557 has its CatchHandler @ 058ac598 */
  lVar3 = FUN_02b3c908(*(undefined8 *)puVar2,0xe);
  if (lVar3 != 0) {
                    /* try { // try from 058ac558 to 059ac5b3 has its CatchHandler @ 058ac4e0 */
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) =
           *(undefined8 *)Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 058ac54c with catch @ 058ac598
                        */
        *(undefined8 *)(lVar3 + 0x28) =
             *(undefined8 *)Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 058ac5b4 to 059ac5b7 has its CatchHandler @ 058ac5c0 */
                    /* catch() { ... } // from try @ 058ac5b4 with catch @ 058ac5c0 */
                    /* try { // try from 058ac5c4 to 059ac5cb has its CatchHandler @ 058ac5d4 */
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)Method_OVRTask<bool>_SetResult__;
                    /* try { // try from 058ac5cc to 059ac5d7 has its CatchHandler @ 058ac4e0 */
          thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x30));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 058ac5c4 with catch @ 058ac5d4
                        */
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)Method_OVRTask<bool>_GetAwaiter__;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) =
                   *(undefined8 *)Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetResult__;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x40));
              puVar2 = Method_OVRTask<MRUK_LoadDeviceResult>_SetResult__;
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) =
                     *(undefined8 *)
                      Method_OVRTask<OVRPlugin_Result>_WithInternalData<IList<OVRAnchor>>__;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x48));
                puVar1 = PTR_DAT_06312310;
                local_34 = 8;
                uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_34);
                uVar4 = FUN_04c00984(*(undefined8 *)puVar2,uVar4,0);
                puVar2 = Method_OVRTask<OVRPlugin_Result>_GetAwaiter__;
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = uVar4;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x50),uVar4);
                  local_38 = 8;
                  uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)(puVar1 + 0x48),&local_38);
                  uVar4 = FUN_04c00984(*(undefined8 *)puVar2,uVar4,0);
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar3 + 0x58) = uVar4;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x58),uVar4);
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x60) =
                           *(undefined8 *)Method_OVRTask<bool>_ContinueWith<List<OVRAnchor>>__;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x60));
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) =
                             *(undefined8 *)Method_OVRTask<MRUK_LoadDeviceResult>_GetAwaiter__;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x68));
                        if (10 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x70) =
                               *(undefined8 *)
                                Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_get_IsPending__;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x70));
                          if (0xb < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x78) =
                                 *(undefined8 *)Method_OVRTask<bool>_ContinueWith__;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x78));
                            if (0xc < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x80) =
                                   *(undefined8 *)
                                    Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__
                              ;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x80));
                              puVar2 = 
                              Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                              ;
                              if (0xd < *(uint *)(lVar3 + 0x18)) {
                                *(undefined8 *)(lVar3 + 0x88) =
                                     *(undefined8 *)Method_OVRTask<bool>_get_IsPending__;
                                thunk_FUN_02bb0e9c();
                                **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
                                thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar3);
                                return;
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
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


