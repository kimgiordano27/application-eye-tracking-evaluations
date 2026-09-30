/*
FUNCTION_NAME: FUN_03dc0a80
ENTRY_POINT: 03dc0a80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03dc0a80(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_0322bf50(param_7);
  }
  if (param_1 == 0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar4 = thunk_FUN_0322f148();
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075d6788);
    FUN_05d6f364(uVar4,uVar5,0);
  }
  else if ((param_3 < 0) || (param_2 < 0)) {
    puVar1 = PTR_DAT_0759c148;
    if (-1 < param_2) {
      puVar1 = PTR_DAT_075a1b80;
    }
    uVar5 = thunk_FUN_03257e30(puVar1);
    thunk_FUN_03257e30(PTR_DAT_0759e028);
    uVar4 = thunk_FUN_0322f148();
    uVar3 = thunk_FUN_03257e30(PTR_DAT_075d67a8);
    FUN_05d72b58(uVar4,uVar5,uVar3,0);
  }
  else {
    if (param_3 <= *(int *)(param_1 + 0x18) - param_2) {
      lVar2 = *(long *)(*(long *)(param_7 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar6 = *(long *)(*(long *)(param_7 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
                (**(long **)(lVar2 + 0xb8),param_1,param_2,param_3,param_4,param_5,param_6,
                 *(undefined8 *)(*(long *)(param_7 + 0x38) + 0x30));
      return;
    }
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar4 = thunk_FUN_0322f148();
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075d6838);
    FUN_05d75da4(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar4,param_7);
}


