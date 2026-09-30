/*
FUNCTION_NAME: Oculus.Interaction.GrabAPI.FingerRawPinchAPI$$Update
ENTRY_POINT: 03096964
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 Oculus_Interaction_GrabAPI_FingerRawPinchAPI__Update(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined *puVar8;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x990));
  thunk_FUN_01ad9084(
                    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
  *(undefined1 *)(unaff_x21 + 0x7b8) = 1;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__;
  puVar8 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if (unaff_x20 == (long *)0x0) {
LAB_03096ae4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar10 = *unaff_x20;
  lVar9 = *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__;
  if (lVar10 == lVar9) {
    iVar3 = FUN_03096e80(0,0);
  }
  else {
    if (*(long *)(lVar10 + 0x40) !=
        *(long *)(*(long *)
                   Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                 + 0x40)) goto LAB_03096ae8;
    thunk_FUN_01afac30();
    iVar3 = FUN_03096f4c(0,0);
  }
  if (iVar3 == 0) {
    return **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  if (iVar3 < 0) {
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar6 = thunk_FUN_01afaadc();
    puVar8 = StringLiteral_12656;
  }
  else {
    lVar5 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,iVar3 + 1);
    if (lVar5 == 0) goto LAB_03096ae4;
    iVar4 = (int)*(undefined8 *)(lVar5 + 0x18);
    lVar1 = 0;
    if (iVar4 != 0) {
      lVar1 = lVar5 + 0x20;
    }
    if (lVar10 == lVar9) {
      iVar4 = FUN_03096e80(lVar1,(long)iVar4);
    }
    else {
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)puVar8 + 0x40)) {
LAB_03096ae8:
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c();
      }
      thunk_FUN_01afac30();
      iVar4 = FUN_03096f4c(lVar1,(long)iVar4);
    }
    if (iVar4 == iVar3) {
      uVar6 = FUN_03096d88(lVar5,0,iVar3);
      return uVar6;
    }
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar6 = thunk_FUN_01afaadc();
    puVar8 = StringLiteral_12657;
  }
  uVar7 = thunk_FUN_01ad9084(puVar8);
  FUN_030406c4(uVar6,uVar7,0);
  uVar7 = thunk_FUN_01ad9084(StringLiteral_12658);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar6,uVar7);
}


