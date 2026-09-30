/*
FUNCTION_NAME: FUN_0603fb44
ENTRY_POINT: 0603fb44
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0603fb44(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar4 = PTR_DAT_075f7be0;
                    /* try { // try from 0603fb48 to 0613fb63 has its CatchHandler @ 0603fbbc */
                    /* try { // try from 0603fb64 to 0613fbd7 has its CatchHandler @ 0603fa6c */
  if ((DAT_07a46d61 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7be0);
    FUN_031f20f4(PTR_DAT_075f2e00);
    FUN_031f20f4(PTR_DAT_075f7d08);
    FUN_031f20f4(PTR_DAT_075f2e08);
    FUN_031f20f4(PTR_DAT_075f2e10);
    FUN_031f20f4(PTR_DAT_075f2e18);
    FUN_031f20f4(PTR_DAT_075ed9b8);
    FUN_031f20f4(PTR_DAT_0759d9d8);
    FUN_031f20f4(PTR_DAT_0759d9e0);
    FUN_031f20f4(PTR_DAT_075d6af8);
    DAT_07a46d61 = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar2 = PTR_DAT_075ed9b8;
  pvVar7 = (void *)FUN_0603eab0(param_1);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_05813518(param_2,*(undefined8 *)PTR_DAT_075f7d08);
  }
  lVar8 = FUN_031f21dc(*(undefined8 *)puVar2,iVar6 << 1);
  puVar3 = PTR_DAT_075f2e10;
  puVar2 = PTR_DAT_075f2e08;
  if (0 < iVar6) {
    if (param_2 == 0) goto OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2;
    FUN_05813c78(&local_a8,param_2,*(undefined8 *)PTR_DAT_075f2e00);
    uVar12 = 1;
    uStack_78 = uStack_a0;
    local_80 = local_a8;
    uStack_68 = uStack_90;
    local_70 = local_98;
    local_60 = local_88;
    while (uVar9 = FUN_05afc380(&local_80,*(undefined8 *)puVar3), uVar5 = uStack_68,
          uVar10 = local_70, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar10 = FUN_0603eab0(uVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined8 *)(lVar8 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar10;
      uVar10 = FUN_0603eab0(uVar5);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar8 + lVar1 * 8 + 0x20) = uVar10;
    }
    FUN_05afc4a0(&local_80,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_075d6af8;
  uVar10 = FUN_05e5b8a8((long)iVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar4);
  }
  FUN_0603fe74(pvVar7,lVar8,uVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  free(pvVar7);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        pvVar7 = *(void **)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        free(pvVar7);
        uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return;
  }
OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


