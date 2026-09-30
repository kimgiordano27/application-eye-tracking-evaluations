/*
FUNCTION_NAME: FUN_059c02a0
ENTRY_POINT: 059c02a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_059c02a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 059c02b0 to 05ac02b7 has its CatchHandler @ 059c0998 */
  local_48 = param_1;
  if ((DAT_06dc1507 & 1) == 0) {
    FUN_02d965b8(UnityEngine_InputSystem_PlayerInput_ControlsChangedEvent_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_82_0_TypeInfo);
                    /* try { // try from 059c02e0 to 05ac02eb has its CatchHandler @ 059c0b10 */
    FUN_02d965b8(UnityEngine_InputSystem_PlayerInput_DeviceLostEvent_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_PlayerInput_DeviceRegainedEvent_TypeInfo);
                    /* try { // try from 059c02f8 to 05ac02ff has its CatchHandler @ 059c0b0c */
    FUN_02d965b8(UnityEngine_InputSystem_PlayerInputManager_PlayerJoinedEvent_TypeInfo);
                    /* try { // try from 059c0304 to 05ac030b has its CatchHandler @ 059c0b08 */
    FUN_02d965b8(PTR_DAT_06a0db88);
                    /* try { // try from 059c0318 to 05ac031f has its CatchHandler @ 059c0af4 */
    FUN_02d965b8(UnityEngine_InputSystem_PlayerInputManager_PlayerLeftEvent_TypeInfo);
    FUN_02d965b8(UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction_TypeInfo);
                    /* try { // try from 059c032c to 05ac0333 has its CatchHandler @ 059c0af0 */
    DAT_06dc1507 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x28);
  local_58 = &local_48;
  local_60 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar1 = (undefined8 *)UnityEngine_InputSystem_PlayerInput_DeviceRegainedEvent_TypeInfo;
    puVar2 = (undefined8 *)UnityEngine_InputSystem_PlayerInput_DeviceLostEvent_TypeInfo;
    puVar3 = (undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo;
    plVar4 = (long *)PTR_DAT_06a0db88;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
                    /* try { // try from 059c0350 to 05ac0357 has its CatchHandler @ 059c0a94 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 059c036c to 05ac0373 has its CatchHandler @ 059c0b00 */
    FUN_04e93a24(&local_b8,*(long *)(lVar10 + 0x10),
                 *(undefined8 *)UnityEngine_InputSystem_PlayerInput_ControlsChangedEvent_TypeInfo);
                    /* try { // try from 059c0378 to 05ac037f has its CatchHandler @ 059c0b04 */
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    uStack_78 = uStack_a0;
    uStack_80 = local_a8;
                    /* try { // try from 059c038c to 05ac0393 has its CatchHandler @ 059c0ae4 */
    local_70 = local_98;
    *(undefined8 *)(local_48 + 0x38) = uStack_b0;
    *(undefined8 *)(local_48 + 0x30) = local_b8;
    *(undefined8 *)(local_48 + 0x48) = uStack_a0;
    *(undefined8 *)(local_48 + 0x40) = local_a8;
    *(undefined8 *)(local_48 + 0x50) = local_98;
                    /* try { // try from 059c03a0 to 05ac03a7 has its CatchHandler @ 059c0ae0 */
    LeanTween__value(local_48 + 0x30,0);
    *(undefined4 *)(local_48 + 0x10) = 0xfffffffd;
    puVar1 = (undefined8 *)UnityEngine_InputSystem_PlayerInput_DeviceRegainedEvent_TypeInfo;
    puVar2 = (undefined8 *)UnityEngine_InputSystem_PlayerInput_DeviceLostEvent_TypeInfo;
    puVar3 = (undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo;
    plVar4 = (long *)PTR_DAT_06a0db88;
  }
  while( true ) {
                    /* try { // try from 059c03e8 to 05ac03ef has its CatchHandler @ 059c0afc */
    uVar5 = FUN_05232904(local_48 + 0x30,*puVar1);
    if ((uVar5 & 1) == 0) {
      FUN_059c0570();
      *(undefined8 *)(local_48 + 0x50) = 0;
      *(undefined8 *)(local_48 + 0x38) = 0;
      *(undefined8 *)(local_48 + 0x30) = 0;
      *(undefined8 *)(local_48 + 0x48) = 0;
      *(undefined8 *)(local_48 + 0x40) = 0;
      return 0;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 059c03fc to 05ac0403 has its CatchHandler @ 059c0ad8 */
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059c04c8 to 05ac04cf has its CatchHandler @ 059c0aa8 */
      FUN_02d96860();
    }
    uVar9 = *(undefined8 *)(local_48 + 0x40);
                    /* try { // try from 059c0410 to 05ac0417 has its CatchHandler @ 059c0adc */
    uVar6 = FUN_04e93570(*(long *)(lVar10 + 0x10),uVar9,*puVar2);
    lVar7 = *plVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *plVar4;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) break;
                    /* try { // try from 059c043c to 05ac043f has its CatchHandler @ 059c0a5c */
    uVar8 = FUN_04e95158(**(long **)(lVar7 + 0xb8),uVar9,&local_50,*puVar3);
                    /* try { // try from 059c044c to 05ac0457 has its CatchHandler @ 059c0a4c */
    lVar7 = FUN_059c0010(uVar8,uVar6,local_50);
    if (lVar7 != 0) {
                    /* try { // try from 059c0464 to 05ac046b has its CatchHandler @ 059c0aec */
      local_90 = 0;
      uStack_88 = 0;
                    /* try { // try from 059c0470 to 05ac0477 has its CatchHandler @ 059c0ae8 */
      FUN_03e81424(&local_90,uVar9,lVar7,
                   *(undefined8 *)
                    UnityEngine_InputSystem_PlayerInputManager_PlayerLeftEvent_TypeInfo);
                    /* try { // try from 059c0484 to 05ac048b has its CatchHandler @ 059c0ac4 */
      *(undefined8 *)(local_48 + 0x20) = uStack_88;
      *(undefined8 *)(local_48 + 0x18) = local_90;
      LeanTween__value(local_48 + 0x18,0);
                    /* try { // try from 059c049c to 05ac04a7 has its CatchHandler @ 059c0ad0 */
      *(undefined4 *)(local_48 + 0x10) = 1;
                    /* try { // try from 059c053c to 05ac0563 has its CatchHandler @ 059c0a80 */
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


