/*
FUNCTION_NAME: FUN_05e60764
ENTRY_POINT: 05e60764
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_05e60764(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_68__;
  puVar2 = Method_System_Reflection_TypeDelegator__ctor__;
  puVar1 = Method_Unity_Properties_TypeConversion_Convert<double,_bool>__;
  if ((DAT_066dc64f & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_68__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_69__);
    FUN_02b3c81c(Method_DataUpdater_<HandleUserSignOut>d__54_System_Collections_IEnumerator_Reset__)
    ;
    FUN_02b3c81c(
                Method_DataUpdater_<InitializeDataSystem>d__28_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(PTR_DAT_06313038);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<MRUKAnchor>__);
    FUN_02b3c81c(Method_DataUpdater_<>c__DisplayClass48_0_<SyncWithFirebase>b__0__);
    FUN_02b3c81c(PTR_DAT_06313030);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<MaterialPropertyBlockEditor>__);
    FUN_02b3c81c(Method_DataUpdater_<LoadFromFirebase>d__59_System_Collections_IEnumerator_Reset__);
    FUN_02b3c81c(Method_DataUpdater_<>c__DisplayClass40_0_<AddPurchasedCoins>b__0__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_7__);
    FUN_02b3c81c(Method_DataUpdater_<LoadUserData>d__29_System_Collections_IEnumerator_Reset__);
    FUN_02b3c81c(Method_DataUpdater_<>c__DisplayClass59_0_<LoadFromFirebase>b__0__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_70__);
    FUN_02b3c81c(Method_Unity_Properties_TypeConversion_Convert<double,_bool>__);
    FUN_02b3c81c(Method_System_Reflection_TypeDelegator__ctor__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_71__);
    DAT_066dc64f = 1;
  }
  *(undefined8 *)(param_5 + 0x18) = 0;
  thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x18),0);
  *(undefined8 *)(param_5 + 0x20) = 0;
  thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x20),0);
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_05e5319c(uVar9,0x100,0x40,0);
  *(undefined8 *)(param_5 + 0x28) = uVar9;
  thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x28),uVar9);
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_05d7ff94(uVar9,0);
  *(undefined8 *)(param_5 + 0x50) = uVar9;
  thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x50),uVar9);
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_05d74f5c(lVar10,0);
  uVar11 = FUN_05c49e74(0);
  puVar8 = Method_DataUpdater_<LoadFromFirebase>d__59_System_Collections_IEnumerator_Reset__;
  puVar7 = Method_DataUpdater_<HandleUserSignOut>d__54_System_Collections_IEnumerator_Reset__;
  puVar6 = Method_DataUpdater_<>c__DisplayClass48_0_<SyncWithFirebase>b__0__;
  puVar5 = Method_DataUpdater_<>c__DisplayClass40_0_<AddPurchasedCoins>b__0__;
  puVar4 = Method_UnityEngine_Component_GetComponent<MaterialPropertyBlockEditor>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<MRUKAnchor>__;
  puVar2 = PTR_DAT_06313038;
  puVar1 = PTR_DAT_06313030;
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x38) = uVar11;
    *(undefined4 *)(lVar10 + 0x3c) = param_2;
    *(undefined4 *)(lVar10 + 0x40) = param_3;
    *(undefined4 *)(lVar10 + 0x44) = param_4;
    *(undefined1 *)(lVar10 + 0x81) = 1;
    *(long *)(param_5 + 0x58) = lVar10;
    thunk_FUN_02bb0e9c((long *)(param_5 + 0x58),lVar10);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_0365ca1c(uVar9,*(undefined8 *)puVar6);
    *(undefined8 *)(param_5 + 0x60) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x60),uVar9);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
    FUN_0365a13c(uVar9,*(undefined8 *)puVar7);
    *(undefined8 *)(param_5 + 0x68) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x68),uVar9);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_037a5cd0(uVar9,*(undefined8 *)puVar3);
    *(undefined8 *)(param_5 + 0x70) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x70),uVar9);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_03825c10(uVar9,*(undefined8 *)puVar2);
    *(undefined8 *)(param_5 + 0x78) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x78),uVar9);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_DataUpdater_<LoadUserData>d__29_System_Collections_IEnumerator_Reset__
                              );
    FUN_037550f8(uVar9,*(undefined8 *)
                        Method_DataUpdater_<InitializeDataSystem>d__28_System_Collections_IEnumerator_Reset__
                );
    *(undefined8 *)(param_5 + 0x80) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x80),uVar9);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_7__);
    FUN_038e27a4(uVar9,0x100,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_69__);
    *(undefined8 *)(param_5 + 0x90) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x90),uVar9);
    FUN_04dbdb8c(param_5,0);
    *(undefined8 *)(param_5 + 0x10) = param_6;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x10),param_6);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_DataUpdater_<>c__DisplayClass59_0_<LoadFromFirebase>b__0__);
    FUN_05e5fdd4(uVar9,param_5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_70__);
    *(undefined8 *)(param_5 + 0x88) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x88),uVar9);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_71__);
    FUN_05e2be34(uVar9,0);
    *(undefined8 *)(param_5 + 0x48) = uVar9;
    thunk_FUN_02bb0e9c((undefined8 *)(param_5 + 0x48),uVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


