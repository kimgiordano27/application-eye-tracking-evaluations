/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 037b3944
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar3 = *(long *)(param_3 + 0x38);
  local_28 = param_2;
  if (lVar3 == 0) {
    FUN_02d965b8(PTR_DAT_069fe240);
    FUN_02d965b8(PTR_DAT_069fe250);
    lVar3 = *(long *)(param_3 + 0x38);
    if (lVar3 == 0) {
      FUN_02dcfd74(param_3);
      lVar3 = *(long *)(param_3 + 0x38);
    }
  }
  local_38 = 0;
  local_30 = 0;
  FUN_0335b720(&local_28,param_1,0,*(undefined8 *)(lVar3 + 8));
  FUN_0335b7a8(&local_28,param_1 + 0x50,0,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
  uVar1 = FUN_045b2ce8(&local_28,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
  if ((uVar1 & 1) == 0) {
    iVar2 = 0;
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar2 = *(int *)(param_1 + 0x48);
    }
    local_38._4_4_ = iVar2;
    FUN_0335b7a8(&local_28,(long)&local_38 + 4,0,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
    if (0 < local_38._4_4_) {
      lVar3 = 0;
      do {
        local_38._0_4_ = *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar3 * 4);
        FUN_0335b7a8(&local_28,&local_38,0,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
        lVar3 = lVar3 + 1;
      } while (lVar3 < local_38._4_4_);
    }
  }
  else {
    local_30 = local_30 & 0xffffffff;
    FUN_0335b7a8(&local_28,(long)&local_30 + 4,0,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
    local_48 = 0;
    uStack_40 = 0;
    FUN_0423e1a0(&local_48,local_30._4_4_,4,1,*(undefined8 *)PTR_DAT_069fe240);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
    if (0 < local_30._4_4_) {
      lVar3 = 0;
      do {
        local_30 = local_30 & 0xffffffff00000000;
        FUN_0335b7a8(&local_28,&local_30,0,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
        *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar3 * 4) = (undefined4)local_30;
        lVar3 = lVar3 + 1;
      } while (lVar3 < local_30._4_4_);
    }
  }
  return;
}


