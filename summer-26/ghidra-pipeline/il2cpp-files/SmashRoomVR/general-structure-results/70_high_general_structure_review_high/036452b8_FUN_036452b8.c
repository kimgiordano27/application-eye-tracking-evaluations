/*
FUNCTION_NAME: FUN_036452b8
ENTRY_POINT: 036452b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036452b8(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff72ff & 1) == 0) {
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(PTR_DAT_03d9ae28);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a2f0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff72ff = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(param_2,0,0);
  uVar6 = 0;
  if ((uVar5 & 1) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar5,0);
    }
    uVar6 = FUN_0391c2b8(param_2,0);
  }
  puVar4 = PTR_DAT_03d9ae28;
  puVar3 = PTR_DAT_03d9a2f0;
  puVar2 = 
  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
  ;
  puVar1 = Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__;
  FUN_03644e28(param_1,uVar6);
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_01b4f09c((long *)(param_1 + 0x18),param_2);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02b2c088(uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x20),uVar6);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x28),param_3);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_02b591b0(uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x30),uVar6);
  return;
}


