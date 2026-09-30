/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_account_send_sms_t
ENTRY_POINT: 078e2578
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


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_account_send_sms_t(void)

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
                    /* try { // try from 078e257c to 079e2587 has its CatchHandler @ 078e28c4 */
  FUN_03a8a718(PTR_DAT_084a12f0);
  FUN_03a8a718(System_Collections_Generic_Stack<EventCallbackList>_TypeInfo);
                    /* try { // try from 078e2594 to 079e2597 has its CatchHandler @ 078e28c0 */
  FUN_03a8a718(
              UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
              );
  FUN_03a8a718(
              System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
              );
                    /* try { // try from 078e25ac to 079e25c3 has its CatchHandler @ 078e28f0 */
  FUN_03a8a718(System_Collections_Generic_Stack<Expression>_TypeInfo);
  FUN_03a8a718(Oculus_Platform_Request<SdkAccountList>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_Stack<HDCamera>_TypeInfo);
                    /* try { // try from 078e25e0 to 079e25e3 has its CatchHandler @ 078e28bc */
  *(undefined1 *)(unaff_x21 + 0xabb) = 1;
  puVar1 = PTR_DAT_084a12f8;
  lVar2 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_05f9f7c4(lVar2,*unaff_x20);
  plVar3 = *(long **)(unaff_x19 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e2780;
    FUN_05fa0540(lVar2,*(undefined8 *)System_Collections_Generic_Stack<HDCamera>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e2780;
    FUN_05fa0540(lVar2,*(undefined8 *)
                        System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                 ,uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x28);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e2780;
    FUN_05fa0540(lVar2,*(undefined8 *)System_Collections_Generic_Stack<Expression>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e2780;
    FUN_05fa0540(lVar2,*(undefined8 *)
                        System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e2780;
    FUN_05fa0540(lVar2,*(undefined8 *)System_Collections_Generic_Stack<EventCallbackList>_TypeInfo,
                 uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x40);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_078e2780;
    FUN_05fa0540(lVar2,*(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x48);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) {
LAB_078e2780:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar2,*(undefined8 *)
                        UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
                 ,uVar4,*(undefined8 *)puVar1);
  }
  return lVar2;
}


