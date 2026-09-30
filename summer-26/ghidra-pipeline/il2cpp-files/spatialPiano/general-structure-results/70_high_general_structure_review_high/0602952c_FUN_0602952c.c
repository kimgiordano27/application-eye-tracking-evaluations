/*
FUNCTION_NAME: FUN_0602952c
ENTRY_POINT: 0602952c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0602952c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = Method_PageScroll_<LateStart>d__14_System_Collections_IEnumerator_Reset__;
  if ((DAT_06bc54d0 & 1) == 0) {
    FUN_02f08768(Method_PanelHoverState_<>c_<_ctor>b__8_0__);
    FUN_02f08768(Method_System_IO_Path_<>c_<JoinInternal>b__56_0__);
    FUN_02f08768(Method_PageScroll_<LateStart>d__14_System_Collections_IEnumerator_Reset__);
    FUN_02f08768(Method_System_IO_Path_<>c_<JoinInternal>b__57_0__);
    FUN_02f08768(
                Method_UnityEngine_XR_Templates_MR_PermissionsManager_<ProcessPermissions>d__6_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Templates_MR_PermissionsManager_<Start>d__5_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__35_0__);
    FUN_02f08768(
                Method_Oculus_Interaction_Samples_PingPongPaddle_<HapticsRoutine>d__20_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(Method_System_ParameterizedStrings_LowLevelStack_Pop__);
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_<GetEntitlementInformation>g__CheckEntitlement_1__
                );
    DAT_06bc54d0 = 1;
  }
  lVar8 = *(long *)puVar1;
  local_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar1;
  }
  if ((**(long **)(lVar8 + 0xb8) != 0) &&
     (lVar8 = FUN_04987a6c(**(long **)(lVar8 + 0xb8),
                           *(undefined8 *)
                            Method_UnityEngine_XR_Templates_MR_PermissionsManager_<ProcessPermissions>d__6_System_Collections_IEnumerator_Reset__
                          ),
     puVar7 = Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__35_0__,
     puVar6 = 
     Method_UnityEngine_XR_Templates_MR_PermissionsManager_<Start>d__5_System_Collections_IEnumerator_Reset__
     , puVar5 = Method_System_IO_Path_<>c_<JoinInternal>b__57_0__,
     puVar4 = Method_System_IO_Path_<>c_<JoinInternal>b__56_0__,
     puVar3 = Method_System_ParameterizedStrings_LowLevelStack_Pop__,
     puVar2 = Method_PanelHoverState_<>c_<_ctor>b__8_0__, lVar8 != 0)) {
    FUN_04532e38(&local_a8,lVar8,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_<GetEntitlementInformation>g__CheckEntitlement_1__
                );
    local_60 = local_88;
    puStack_78 = puStack_a0;
    local_80 = local_a8;
    uStack_68 = uStack_90;
    local_70 = local_98;
    local_a8 = 0;
    puStack_a0 = &local_80;
    while (uVar9 = FUN_04bf7130(&local_80,*(undefined8 *)puVar7), lVar8 = local_70, (uVar9 & 1) != 0
          ) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_03d7e30c(local_70,*(undefined8 *)puVar4);
      FUN_03d7e50c(lVar8,*(undefined8 *)puVar2);
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0336e080(lVar10,lVar8,*(undefined8 *)puVar3);
    }
    FUN_04bf712c(&local_80,*(undefined8 *)puVar6);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      FUN_04987edc(**(long **)(lVar8 + 0xb8),*(undefined8 *)puVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


