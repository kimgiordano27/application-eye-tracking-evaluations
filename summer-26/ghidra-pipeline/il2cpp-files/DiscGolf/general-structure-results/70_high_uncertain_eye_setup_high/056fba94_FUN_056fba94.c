/*
FUNCTION_NAME: FUN_056fba94
ENTRY_POINT: 056fba94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x056fbc90) */
/* WARNING: Removing unreachable block (ram,0x056fbcec) */
/* WARNING: Removing unreachable block (ram,0x056fbd84) */

undefined1  [16] FUN_056fba94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long local_120;
  undefined8 *local_118;
  undefined1 auStack_110 [152];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_60 = param_2;
  local_58 = param_3;
  if ((DAT_06dbeb87 & 1) == 0) {
    FUN_02d965b8(System_Globalization_HebrewNumber_HS___TypeInfo);
    FUN_02d965b8(System_Globalization_HebrewNumber_HebrewValue___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_BindingJson___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadActionJson___TypeInfo);
    FUN_02d965b8(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_02d965b8(System_Collections_Hashtable_bucket___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
    FUN_02d965b8(OVRPlugin_Quatf___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
    DAT_06dbeb87 = 1;
  }
  local_48 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  memset(auStack_110,0,0x98);
  puVar3 = OVRPlugin_Quatf___TypeInfo;
  puVar2 = OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo;
  puVar1 = UnityEngine_InputSystem_InputActionMap_ReadActionJson___TypeInfo;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar8 = thunk_FUN_02dd3144();
    uVar10 = thunk_FUN_02dfd288(PTR_DAT_06a0e6b0);
    FUN_0544bf54(uVar8,uVar10,0);
    uVar10 = thunk_FUN_02dfd288(OVRPlugin_SpaceComponentType___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,uVar10);
  }
  local_48 = FUN_03762800(param_1,*(undefined8 *)System_Collections_Hashtable_bucket___TypeInfo);
  uVar8 = FUN_0434a718(&local_48,*(undefined8 *)puVar2);
  FUN_043545e4(&local_78,uVar8,2,*(undefined8 *)puVar3);
  local_120 = 0;
  local_118 = &local_78;
  FUN_0434a52c(&local_1c0,&local_48,*(undefined8 *)puVar1);
  puVar6 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
  puVar5 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
  puVar4 = UnityEngine_InputSystem_InputActionMap_BindingJson___TypeInfo;
  puVar3 = System_Globalization_HebrewNumber_HebrewValue___TypeInfo;
  puVar2 = System_Globalization_HebrewNumber_HS___TypeInfo;
  puVar1 = PTR_DAT_06a0d0a8;
  memcpy(auStack_110,&local_1c0,0x98);
  while (uVar9 = FUN_03785860(auStack_110,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
    FUN_037855d8(&local_1c0,auStack_110,*(undefined8 *)puVar4);
    uVar8 = local_1c0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_04354b64(&local_78,uVar8,*(undefined8 *)puVar5);
  }
  FUN_0515325c(auStack_110,*(undefined8 *)puVar2);
  uStack_1b8 = uStack_70;
  local_1c0 = local_78;
  local_1b0 = local_68;
  auVar11 = FUN_04355430(&local_1c0,*(undefined8 *)puVar6);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar11 = FUN_056fb93c(auVar11._0_8_,auVar11._8_8_,&local_60,1);
  lVar7 = local_120;
  FUN_043552c0(local_118,
               *(undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar7);
  }
  return auVar11;
}


