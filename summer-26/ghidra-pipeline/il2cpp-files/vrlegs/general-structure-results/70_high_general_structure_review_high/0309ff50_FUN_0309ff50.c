/*
FUNCTION_NAME: FUN_0309ff50
ENTRY_POINT: 0309ff50
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long FUN_0309ff50(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_118 [72];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var;
                    /* try { // try from 0309ff60 to 0319ff67 has its CatchHandler @ 030a022c */
                    /* try { // try from 0309ff7c to 0319ff9b has its CatchHandler @ 030a03f4 */
  if ((DAT_0412b578 & 1) == 0) {
    FUN_01ab69ac(
                Unity_Services_Authentication_PlayerAccounts_UnityPlayerAccountSettings_SupportedScopesEnum_var
                );
    FUN_01ab69ac(PTR_DAT_03cbf4d8);
    FUN_01ab69ac(PTR_DAT_03cbf4e0);
                    /* try { // try from 0309ffb4 to 0319ffb7 has its CatchHandler @ 030a0224 */
    FUN_01ab69ac(PTR_DAT_03cbf4e8);
    FUN_01ab69ac(Unity_Entities_UnsafeCachedChunkList_Rebuild_00000C17_PostfixBurstDelegate_var);
    FUN_01ab69ac(PTR_DAT_03cc8880);
    FUN_01ab69ac(PTR_DAT_03cbf630);
    FUN_01ab69ac(PTR_DAT_03cbf508);
    FUN_01ab69ac(UnityEngine_PlayerLoop_Update_ScriptRunBehaviourUpdate_var);
    FUN_01ab69ac(
                Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var);
    DAT_0412b578 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar6,0);
  if ((param_1 != 0) &&
     (lVar7 = FUN_01f7e2fc(param_1,*(undefined8 *)
                                    Unity_Entities_UnsafeCachedChunkList_Rebuild_00000C17_PostfixBurstDelegate_var
                          ), lVar6 != 0)) {
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar7);
    puVar5 = 
    Unity_Services_Authentication_PlayerAccounts_UnityPlayerAccountSettings_SupportedScopesEnum_var;
    puVar4 = PTR_DAT_03cbf630;
    puVar3 = PTR_DAT_03cbf4e8;
    puVar2 = PTR_DAT_03cbf4e0;
    puVar1 = PTR_DAT_03cbf4d8;
    if ((param_2 != (long *)0x0) && (param_2[0xc] != 0)) {
      Animancer_FadeGroup__get_TargetWeight(param_2[0xc],&local_d0,*(undefined8 *)PTR_DAT_03cbf508);
      uStack_78 = uStack_c8;
      local_80 = local_d0;
      local_70 = local_c0;
      while (uVar8 = FUN_021b51c8(&local_80,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
        FUN_01b7a454(&local_80,&local_d0,*(undefined8 *)puVar3);
        uVar9 = local_d0;
        if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *(long *)(*plVar11 + 0x20);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_01b5f01c(lVar7,local_d0,*(undefined8 *)puVar4);
        if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *(long *)(*plVar11 + 0x28);
        local_90 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        FUN_0306b034(&local_d0,uVar9,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        memcpy(auStack_118,&local_d0,0x44);
        FUN_0219b9a4(lVar7,uVar9,auStack_118,*(undefined8 *)puVar5);
      }
      FUN_021b51c4(&local_80,*(undefined8 *)puVar1);
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)
                                  UnityEngine_PlayerLoop_Update_ScriptRunBehaviourUpdate_var);
      FUN_0399e4c8(uVar9,lVar6,
                   *(undefined8 *)
                    Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_PostfixBurstDelegate_var
                   ,0);
      (**(code **)(*param_2 + 0x1e8))(param_2,uVar9,*(undefined8 *)(*param_2 + 0x1f0));
      lVar6 = FUN_01f7eccc(param_1,*(undefined8 *)PTR_DAT_03cc8880);
      if (lVar6 != 0) {
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar8 = 0;
          uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            if (*plVar11 == 0) goto LAB_030a022c;
            FUN_030a02b8(*plVar11,*(undefined8 *)(lVar6 + 0x20 + uVar8 * 8));
            uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        return *plVar11;
      }
    }
  }
LAB_030a022c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


