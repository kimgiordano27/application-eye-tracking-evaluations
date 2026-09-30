/*
FUNCTION_NAME: FUN_01c619d4
ENTRY_POINT: 01c619d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c619d4(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  int local_28;
  float local_24;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed6af & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__);
                    /* catch() { ... } // from try @ 01c619b0 with catch @ 01c61a20 */
    thunk_FUN_01ad9084(StringLiteral_181);
    DAT_03fed6af = 1;
  }
                    /* try { // try from 01c61a34 to 01d61af7 has its CatchHandler @ 01c61a34
                       catch(type#1 @ 00000000) { ... } // from try @ 01c61a34 with catch @ 01c61a34
                       catch(type#1 @ 00000000) { ... } // from try @ 01c61b58 with catch @ 01c61a34
                       catch(type#1 @ 00000000) { ... } // from try @ 01c61c68 with catch @ 01c61a34
                        */
  local_24 = 0.0;
  lVar5 = param_1[0xb];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar5,0);
  if ((uVar2 & 1) != 0) {
    fVar7 = *(float *)(param_1 + 0x14);
    plVar6 = (long *)param_1[0xb];
    fVar8 = *(float *)((long)param_1 + 0x3c);
    if (fVar7 <= *(float *)((long)param_1 + 0x3c)) {
      fVar8 = fVar7;
    }
    if (fVar7 < *(float *)(param_1 + 7)) {
      fVar8 = *(float *)(param_1 + 7);
    }
    local_28 = -0x80000000;
    if (fVar8 != -INFINITY) {
      local_28 = (int)-fVar8;
    }
    uVar3 = thunk_FUN_01afa70c(*(undefined8 *)
                                Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               ,&local_28);
    fVar7 = *(float *)(param_1 + 0x14);
    fVar8 = *(float *)((long)param_1 + 0x3c);
    if (fVar7 <= *(float *)((long)param_1 + 0x3c)) {
      fVar8 = fVar7;
    }
    if (fVar7 < *(float *)(param_1 + 7)) {
      fVar8 = *(float *)(param_1 + 7);
    }
    local_24 = (float)(**(code **)(*param_1 + 0x348))
                                (fVar8,param_1,*(undefined8 *)(*param_1 + 0x350));
    local_24 = -local_24;
    uVar4 = FUN_03052740(&local_24,
                         *(undefined8 *)
                          Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,0);
    uVar3 = FUN_02ee7120(*(undefined8 *)StringLiteral_181,uVar3,uVar4,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x5f0));
  }
  return;
}


