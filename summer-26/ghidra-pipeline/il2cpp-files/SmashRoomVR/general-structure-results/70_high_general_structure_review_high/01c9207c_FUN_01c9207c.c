/*
FUNCTION_NAME: FUN_01c9207c
ENTRY_POINT: 01c9207c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_01c9207c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
                    /* try { // try from 01c9209c to 01d92257 has its CatchHandler @ 01c922d0 */
  if ((DAT_03fed860 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_579);
    thunk_FUN_01ad9084(StringLiteral_580);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_581);
    thunk_FUN_01ad9084(StringLiteral_582);
    DAT_03fed860 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_038f032c(0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar7 = (long *)(param_1 + 0x20);
  lVar8 = *plVar7;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(lVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x28);
  lVar8 = *plVar6;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(lVar8,0,0);
  puVar2 = StringLiteral_579;
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar9 = *(undefined8 *)StringLiteral_579;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_0304eec0(uVar9,0);
  plVar5 = (long *)FUN_0391a670(*(undefined8 *)StringLiteral_581,uVar9,0);
  puVar3 = StringLiteral_580;
  if (plVar5 == (long *)0x0) {
    *plVar7 = 0;
  }
  else {
    lVar8 = *(long *)StringLiteral_580;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) goto LAB_01c922c4;
    *plVar7 = (long)plVar5;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) goto LAB_01c922c4;
  }
  thunk_FUN_01b4f09c(plVar7,plVar5);
  uVar9 = FUN_0304eec0(*(undefined8 *)puVar2,0);
  plVar5 = (long *)FUN_0391a670(*(undefined8 *)StringLiteral_582,uVar9,0);
  if (plVar5 != (long *)0x0) {
    lVar8 = *(long *)puVar3;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) == lVar8)) {
      *plVar6 = (long)plVar5;
      if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) == lVar8)) goto LAB_01c922d0;
    }
LAB_01c922c4:
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(plVar5);
  }
  *plVar6 = 0;
LAB_01c922d0:
  thunk_FUN_01b4f09c(plVar6,plVar5);
  return;
}


