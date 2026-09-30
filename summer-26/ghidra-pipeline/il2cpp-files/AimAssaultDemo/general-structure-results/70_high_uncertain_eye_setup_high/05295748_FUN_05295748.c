/*
FUNCTION_NAME: FUN_05295748
ENTRY_POINT: 05295748
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05295748(long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = 0;
  if (param_1[2] != 0) {
    uVar2 = FUN_05a3a6e4(param_1[2],param_2,&local_38,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
    if ((uVar2 & 1) == 0) {
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x20) + 0x135) & 1) ==
          0) {
        FUN_03775678();
      }
      lVar3 = thunk_FUN_037788cc();
      FUN_052c1450(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28));
      local_38 = lVar3;
      if (param_1[2] == 0) goto System_Span<OVRPlugin_Vector3f>___ctor;
      FUN_05a38c4c(param_1[2],param_2 & 0xffffffff,lVar3,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x30));
    }
    lVar3 = local_38;
    uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,param_3,*(undefined8 *)(*param_1 + 0x200));
    local_50 = 0;
    uStack_48 = 0;
    FUN_056dde00(&local_50,param_3,param_4,
                 *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
    if (lVar3 != 0) {
      FUN_052c16c4(lVar3,uVar1,local_50,uStack_48,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58));
      return;
    }
  }
System_Span<OVRPlugin_Vector3f>___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


