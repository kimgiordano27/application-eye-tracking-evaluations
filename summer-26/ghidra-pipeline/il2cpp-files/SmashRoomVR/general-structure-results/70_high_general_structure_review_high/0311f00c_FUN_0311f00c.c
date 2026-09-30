/*
FUNCTION_NAME: FUN_0311f00c
ENTRY_POINT: 0311f00c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0311f00c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff1da1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f2e0);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d7f2e8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1da1 = 1;
  }
  puVar5 = PTR_DAT_03d7f2e8;
  puVar4 = PTR_DAT_03d7f2e0;
  puVar3 = 
  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
  ;
  puVar2 = Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__;
  FUN_030d15a4(param_1,param_1 + 0x60,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03923030(uVar6,0);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
  FUN_02b888b4(uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x40),uVar6);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_02b2c088(uVar6,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x48),uVar6);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
  FUN_02b888b4(uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x50),uVar6);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_02b2c088(uVar6,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x58),uVar6);
  FUN_030d1618(param_1,param_1 + 0x60,0);
  return;
}


