/*
FUNCTION_NAME: FUN_063ad548
ENTRY_POINT: 063ad548
PROGRAM: Untangled-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_063ad548(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,void *param_5)

{
  void *__dest;
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_071cd4f4 & 1) == 0) {
    FUN_02f07e70(UnityEngine_UIElements_FocusController_FocusedElement_var);
    FUN_02f07e70(System_Action<InputAction_CallbackContext>_TypeInfo);
    FUN_02f07e70(System_Action<InputStateHistory_Record>_TypeInfo);
    FUN_02f07e70(System_Action<OVRColocationSession_Data>_TypeInfo);
    FUN_02f07e70(System_Action<OVRHand_MicrogestureType>_TypeInfo);
    FUN_02f07e70(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02f07e70(PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var);
    FUN_02f07e70(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var);
    FUN_02f07e70(UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var);
    DAT_071cd4f4 = 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_b0 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03b648f8(&local_458,param_2,
               *(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo,&local_68,
               *(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo);
  uStack_58 = uStack_450;
  local_60 = local_458;
  uStack_48 = uStack_440;
  local_50 = local_448;
  local_70 = *(undefined4 *)((long)param_5 + 0x120);
  uStack_88 = *(undefined8 *)((long)param_5 + 0x108);
  local_90 = *(undefined8 *)((long)param_5 + 0x100);
  uStack_78 = *(undefined8 *)((long)param_5 + 0x118);
  uStack_80 = *(undefined8 *)((long)param_5 + 0x110);
  uStack_98 = *(undefined8 *)((long)param_5 + 0xf8);
  local_a0 = *(undefined8 *)((long)param_5 + 0xf0);
  FUN_066b5b18(&local_a0,0,0);
  uStack_88 = CONCAT44(0x5e,(undefined4)uStack_88);
  FUN_066b5c2c(&local_a0,0x20,0);
  uStack_98 = CONCAT44(uStack_98._4_4_,1);
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = uStack_80;
  local_f0 = local_70;
  uStack_118 = uStack_98;
  local_120 = local_a0;
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var + 0xe0) == 0)
  {
    thunk_FUN_02f12b58();
  }
  uStack_158 = uStack_118;
  local_160 = local_120;
  uStack_148 = uStack_108;
  uStack_150 = local_110;
  uStack_138 = uStack_f8;
  local_140 = local_100;
  local_130 = local_f0;
  uVar3 = FUN_06385084(param_2,&local_160,
                       *(undefined8 *)Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var,1
                       ,0,1,0);
  *param_4 = uVar3;
  local_b0 = *(undefined4 *)((long)param_5 + 0x120);
  uStack_c8 = *(undefined8 *)((long)param_5 + 0x108);
  local_d0 = *(undefined8 *)((long)param_5 + 0x100);
  uStack_b8 = *(undefined8 *)((long)param_5 + 0x118);
  local_c0 = *(undefined8 *)((long)param_5 + 0x110);
  uStack_d8 = *(undefined8 *)((long)param_5 + 0xf8);
  local_e0 = *(undefined8 *)((long)param_5 + 0xf0);
  FUN_066b5c2c(&local_e0,0,0);
  uStack_d8 = CONCAT44(uStack_d8._4_4_,1);
  if (*(int *)(*(long *)UnityEngine_UIElements_FocusController_FocusedElement_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_063acd6c();
  FUN_066b5b18(&local_e0,uVar2,0);
  uStack_198 = uStack_d8;
  local_1a0 = local_e0;
  uStack_188 = uStack_c8;
  uStack_190 = local_d0;
  uStack_178 = uStack_b8;
  local_180 = local_c0;
  local_170 = local_b0;
  uVar3 = FUN_06385084(param_2,&local_1a0,
                       *(undefined8 *)
                        UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var,1,0,1,0);
  lVar5 = local_68;
  *param_3 = uVar3;
  uVar3 = FUN_0628b3b4(&local_60,param_3,0,0);
  lVar6 = local_68;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  uVar3 = FUN_0628b58c(&local_60,param_4,2,0);
  lVar5 = local_68;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(lVar6 + 0x10) = uVar3;
  memcpy(&local_458,param_5,0x2b8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  __dest = (void *)(lVar5 + 0x20);
  memcpy(__dest,&local_458,0x2b8);
  thunk_FUN_02f411dc(__dest,0);
  if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(local_68 + 0x2d8) = *(undefined8 *)(param_1 + 0xe0);
  thunk_FUN_02f411dc(local_68 + 0x2d8);
  uVar7 = *(undefined8 *)(param_1 + 0x10c);
  uVar3 = *(undefined8 *)(param_1 + 0x104);
  if (local_68 != 0) {
    *(undefined8 *)(local_68 + 0x2f0) = *(undefined8 *)(param_1 + 0x114);
    *(undefined8 *)(local_68 + 0x2e8) = uVar7;
    *(undefined8 *)(local_68 + 0x2e0) = uVar3;
    *(undefined1 *)(local_68 + 0x2f8) = *(undefined1 *)(param_1 + 0x100);
    FUN_06282c94(&local_60,0,0);
    puVar1 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
    lVar5 = *(long *)System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar5);
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar5);
        lVar5 = *(long *)puVar1;
      }
      uVar3 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_02ef1808(*(undefined8 *)System_Action<InputAction_CallbackContext>_TypeInfo)
      ;
      FUN_045fdd18(lVar6,uVar3,*(undefined8 *)System_Action<OVRHand_MicrogestureType>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar4 = lVar6;
      thunk_FUN_02f411dc(plVar4,lVar6);
    }
    FUN_03b64a64(&local_60,lVar6,*(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo);
    FUN_0628be4c(&local_60,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


