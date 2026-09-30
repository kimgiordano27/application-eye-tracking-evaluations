/*
FUNCTION_NAME: FUN_05edb010
ENTRY_POINT: 05edb010
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x05edb358) */
/* WARNING: Removing unreachable block (ram,0x05edb350) */

void FUN_05edb010(long param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long local_128;
  long *plStack_120;
  long local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_100;
  undefined8 *local_f8;
  long local_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  puVar5 = Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__;
  if ((DAT_06dc3f56 & 1) == 0) {
    FUN_02d965b8(Method_OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetAwaiter__)
    ;
    FUN_02d965b8(Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_ContinueWith__);
    FUN_02d965b8(Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_SetResult__);
    FUN_02d965b8(Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_get_IsPending__);
    FUN_02d965b8(Method_OVRTask<bool>_ContinueWith<List<OVRAnchor>>__);
    FUN_02d965b8(Method_OVRTask<bool>_ContinueWith__);
    FUN_02d965b8(Method_OVRTask<bool>_GetAwaiter__);
    FUN_02d965b8(Method_OVRTask<bool>_SetResult__);
    FUN_02d965b8(Method_OVRTask<bool>_get_IsPending__);
    FUN_02d965b8(Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__);
    FUN_02d965b8(Method_OVRTask<OVRPlugin_Result>_WithInternalData<IList<OVRAnchor>>__);
    FUN_02d965b8(Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
    FUN_02d965b8(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__);
    FUN_02d965b8(Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__);
    DAT_06dc3f56 = 1;
  }
  local_68 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  plStack_e8 = (long *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  plStack_c8 = (long *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uVar13 = FUN_05d38880(2,0);
  FUN_042cf614(&local_68,0x10,uVar13,*(undefined8 *)puVar5);
  local_100 = 0;
  local_f8 = &local_68;
  if (*(long *)(param_1 + 0x820) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar14 = FUN_05042cc8(*(long *)(param_1 + 0x820),
                        *(undefined8 *)Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_SetResult__)
  ;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_03e4155c(&local_128,lVar14,
               *(undefined8 *)
                Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__);
  puVar10 = Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__;
  puVar9 = Method_OVRTask<OVRPlugin_Result>_WithInternalData<IList<OVRAnchor>>__;
  puVar8 = Method_OVRTask<bool>_GetAwaiter__;
  puVar6 = Method_OVRTask<bool>_ContinueWith__;
  puVar7 = Method_OVRTask<bool>_ContinueWith<List<OVRAnchor>>__;
  puVar5 = Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_get_IsPending__;
  uStack_88 = plStack_120;
  local_90 = local_128;
  plStack_120 = &local_90;
  uStack_78 = uStack_110;
  local_80 = local_118;
  local_128 = 0;
  while (uVar15 = FUN_0526eb2c(&local_90,*(undefined8 *)puVar6), (uVar15 & 1) != 0) {
    uStack_98 = uStack_78;
    local_a0 = local_80;
    if (local_80 == param_2) {
      FUN_042cf878(&local_68,&local_a0,*(undefined8 *)puVar9);
    }
  }
  FUN_0526eb28(&local_90,*(undefined8 *)puVar5);
  FUN_042cfafc(&local_128,&local_68,*(undefined8 *)puVar10);
  puVar6 = Method_OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_ContinueWith__;
  puVar5 = Method_OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetAwaiter__;
  plStack_c8 = plStack_120;
  plVar12 = plStack_c8;
  local_d0 = local_128;
  local_b8 = uStack_110;
  local_c0._0_4_ = (int)local_118;
  local_b0 = local_108;
  plStack_c8._0_4_ = (int)plStack_120;
  iVar16 = (int)local_c0 + 1;
  lVar14 = *(long *)puVar8;
  local_c0._4_4_ = (undefined4)((ulong)local_118 >> 0x20);
  local_c0 = CONCAT44(local_c0._4_4_,iVar16);
  bVar1 = iVar16 < (int)plStack_c8;
  plStack_c8 = plVar12;
  if (bVar1) {
    do {
      lVar11 = local_d0;
      if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar2 = (undefined8 *)(lVar11 + (long)iVar16 * 0x10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      local_b8 = uVar3;
      local_b0 = uVar4;
      if (*(long *)(param_1 + 0x820) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05042f80(&local_128,*(long *)(param_1 + 0x820),uVar3,uVar4,*(undefined8 *)puVar6);
      plStack_e8 = plStack_120;
      local_f0 = local_128;
      uStack_d8 = uStack_110;
      lStack_e0 = local_118;
      FUN_05ed7b78(&local_f0);
      if (*(long *)(param_1 + 0x820) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05044604(*(long *)(param_1 + 0x820),uVar3,uVar4,*(undefined8 *)puVar5);
      iVar16 = (int)local_c0 + 1;
      lVar14 = *(long *)puVar8;
      local_c0 = CONCAT44(local_c0._4_4_,iVar16);
      bVar1 = iVar16 < (int)plStack_c8;
    } while (bVar1);
  }
  local_b8 = 0;
  local_b0 = 0;
  FUN_0519c9c0(&local_d0,*(undefined8 *)puVar7);
  lVar14 = local_100;
  FUN_042cf9fc(local_f8,*(undefined8 *)Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
  if (lVar14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(lVar14);
}


