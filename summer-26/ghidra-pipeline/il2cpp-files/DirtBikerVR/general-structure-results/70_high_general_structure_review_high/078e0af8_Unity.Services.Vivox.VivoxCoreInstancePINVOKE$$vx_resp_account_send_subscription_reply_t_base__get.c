/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_send_subscription_reply_t_base__get
ENTRY_POINT: 078e0af8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_send_subscription_reply_t_base__get
               (void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  lVar1 = thunk_FUN_03ac74bc();
  FUN_05f9f7c4(lVar1,*unaff_x20);
  plVar2 = *(long **)(unaff_x19 + 0x18);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar1,*(undefined8 *)System_Collections_Generic_Stack<HDCamera>_TypeInfo,uVar3,
                 *unaff_x21);
  }
  plVar2 = *(long **)(unaff_x19 + 0x20);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar1,*(undefined8 *)
                        System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                 ,uVar3,*unaff_x21);
  }
  plVar2 = *(long **)(unaff_x19 + 0x28);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar1,*(undefined8 *)System_Collections_Generic_Stack<Expression>_TypeInfo,uVar3,
                 *unaff_x21);
  }
  plVar2 = *(long **)(unaff_x19 + 0x30);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar1,*(undefined8 *)
                        System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,uVar3,
                 *unaff_x21);
  }
  plVar2 = *(long **)(unaff_x19 + 0x38);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar1,*(undefined8 *)System_Collections_Generic_Stack<EventCallbackList>_TypeInfo,
                 uVar3,*unaff_x21);
  }
  plVar2 = *(long **)(unaff_x19 + 0x40);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) goto LAB_078e0c88;
    FUN_05fa0540(lVar1,*(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo,uVar3,
                 *unaff_x21);
  }
  plVar2 = *(long **)(unaff_x19 + 0x48);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) {
LAB_078e0c88:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar1,*(undefined8 *)
                        UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
                 ,uVar3,*unaff_x21);
  }
  return lVar1;
}


