/*
FUNCTION_NAME: FUN_03096938
ENTRY_POINT: 03096938
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8 FUN_03096938(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined *puVar9;
  
  if ((DAT_03ff17b8 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    DAT_03ff17b8 = 1;
  }
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__;
  puVar9 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if (param_2 == (long *)0x0) {
LAB_03096ae4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar12 = *param_2;
  lVar11 = *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__;
  if (lVar12 == lVar11) {
    iVar3 = FUN_03096e80(0,0,param_1,param_2);
    plVar10 = param_2;
  }
  else {
    if (*(long *)(lVar12 + 0x40) !=
        *(long *)(*(long *)
                   Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                 + 0x40)) goto LAB_03096ae8;
    puVar5 = (undefined4 *)thunk_FUN_01afac30(param_2);
    iVar3 = FUN_03096f4c(0,0,param_1,*puVar5);
    plVar10 = (long *)0x0;
  }
  if (iVar3 == 0) {
    return **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  if (iVar3 < 0) {
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar7 = thunk_FUN_01afaadc();
    puVar9 = StringLiteral_12656;
  }
  else {
    lVar6 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,iVar3 + 1);
    if (lVar6 == 0) goto LAB_03096ae4;
    iVar4 = (int)*(undefined8 *)(lVar6 + 0x18);
    lVar1 = 0;
    if (iVar4 != 0) {
      lVar1 = lVar6 + 0x20;
    }
    if (lVar12 == lVar11) {
      iVar4 = FUN_03096e80(lVar1,(long)iVar4,param_1,plVar10);
    }
    else {
      if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)puVar9 + 0x40)) {
LAB_03096ae8:
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(param_2);
      }
      puVar5 = (undefined4 *)thunk_FUN_01afac30(param_2);
      iVar4 = FUN_03096f4c(lVar1,(long)iVar4,param_1,*puVar5);
    }
    if (iVar4 == iVar3) {
      uVar7 = FUN_03096d88(lVar6,0,iVar3);
      return uVar7;
    }
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar7 = thunk_FUN_01afaadc();
    puVar9 = StringLiteral_12657;
  }
  uVar8 = thunk_FUN_01ad9084(puVar9);
  FUN_030406c4(uVar7,uVar8,0);
  uVar8 = thunk_FUN_01ad9084(StringLiteral_12658);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar7,uVar8);
}


