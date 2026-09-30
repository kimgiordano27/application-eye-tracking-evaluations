/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_send_subscription_reply_t_base__set
ENTRY_POINT: 078e0a74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_send_subscription_reply_t_base__set
               (void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084a12e8);
  FUN_03a8a718(PTR_DAT_084a12f0);
  FUN_03a8a718(System_Collections_Generic_Stack<EventCallbackList>_TypeInfo);
  FUN_03a8a718(
              UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
              );
  FUN_03a8a718(
              System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
              );
  FUN_03a8a718(System_Collections_Generic_Stack<Expression>_TypeInfo);
  FUN_03a8a718(Oculus_Platform_Request<SdkAccountList>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_Stack<HDCamera>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xaad) = 1;
  puVar1 = PTR_DAT_084a12f8;
  lVar2 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_05f9f7c4(lVar2,*unaff_x20);
  plVar3 = *(long **)(unaff_x19 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar2,*(undefined8 *)System_Collections_Generic_Stack<HDCamera>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar2,*(undefined8 *)
                        System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                 ,uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x28);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar2,*(undefined8 *)System_Collections_Generic_Stack<Expression>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar2,*(undefined8 *)
                        System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar2,*(undefined8 *)System_Collections_Generic_Stack<EventCallbackList>_TypeInfo,
                 uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x40);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar2,*(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x48);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) {
LAB_078e0c88:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar2,*(undefined8 *)
                        UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
                 ,uVar4,*(undefined8 *)puVar1);
  }
  return lVar2;
}


