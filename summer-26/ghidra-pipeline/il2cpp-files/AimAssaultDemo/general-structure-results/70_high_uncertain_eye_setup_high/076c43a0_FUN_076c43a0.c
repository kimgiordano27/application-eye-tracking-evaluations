/*
FUNCTION_NAME: FUN_076c43a0
ENTRY_POINT: 076c43a0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_076c43a0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_08271419 & 1) == 0) {
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_0373b518(PTR_DAT_07dbeea8);
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
                    /* try { // try from 076c4408 to 077c44bf has its CatchHandler @ 076c4408
                       catch() { ... } // from try @ 076c4408 with catch @ 076c4408
                       catch() { ... } // from try @ 076c44e4 with catch @ 076c4408
                       catch() { ... } // from try @ 076c4528 with catch @ 076c4408
                       catch() { ... } // from try @ 076c4550 with catch @ 076c4408
                       catch() { ... } // from try @ 076c4590 with catch @ 076c4408 */
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                );
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                );
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08271419 = 1;
  }
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_075ac5e0(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = FUN_075ac5e0(param_2,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_2 != (long *)0x0) {
        uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2,*(undefined8 *)(*param_2 + 0x2c0));
        puVar1 = PTR_DAT_07dbeea8;
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_07dbeea8 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar3 = FUN_076c8f3c();
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
                    /* try { // try from 076c44c0 to 077c44c7 has its CatchHandler @ 076c4534 */
          System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                    (*(long *)(lVar3 + 0x18),param_1,&local_28,
                     *(undefined8 *)Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__)
          ;
          if (local_28 != 0) {
                    /* try { // try from 076c44e0 to 077c44e3 has its CatchHandler @ 076c4530 */
                    /* try { // try from 076c44e4 to 077c4523 has its CatchHandler @ 076c4408 */
            FUN_04633890(local_28,param_2,1,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                        );
            return;
          }
          lVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                                    );
          FUN_046340bc(lVar3,*(undefined8 *)
                              Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                      );
                    /* try { // try from 076c4524 to 077c4527 has its CatchHandler @ 076c452c */
          local_28 = lVar3;
          if (lVar3 != 0) {
                    /* try { // try from 076c4528 to 077c454b has its CatchHandler @ 076c4408 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076c4524 with catch @ 076c452c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076c44e0 with catch @ 076c4530
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076c44c0 with catch @ 076c4534
                        */
            FUN_0463378c(lVar3,param_2,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                        );
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 076c454c to 077c454f has its CatchHandler @ 076c4578 */
              thunk_FUN_03798b70();
            }
                    /* try { // try from 076c4550 to 077c4587 has its CatchHandler @ 076c4408 */
            lVar3 = FUN_076c8f3c();
            if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
              FUN_05b0f700(*(long *)(lVar3 + 0x18),param_1,local_28,
                           *(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                          );
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 076c4588 to 077c458f has its CatchHandler @ 076c45a4 */
      FUN_0373b7b4();
    }
  }
                    /* catch() { ... } // from try @ 076c454c with catch @ 076c4578 */
  return;
}


