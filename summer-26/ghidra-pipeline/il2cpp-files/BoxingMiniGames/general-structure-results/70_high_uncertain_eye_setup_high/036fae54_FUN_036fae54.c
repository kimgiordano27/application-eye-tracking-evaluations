/*
FUNCTION_NAME: FUN_036fae54
ENTRY_POINT: 036fae54
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_036fae54(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_48;
  undefined8 **local_40;
  undefined **local_38;
  
  puVar1 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__;
  local_48 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__;
  if (*(long *)Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__ != -1) {
    local_38 = &local_48;
    local_40 = &local_38;
    std::__ndk1::__call_once
              ((ulong *)Method_System_ReadOnlySpan<OVRPlugin_Bool>_GetPinnableReference__,&local_40,
               FUN_03713bac);
  }
  uVar2 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar2 - 1;
  FUN_03732780(1,param_2 + 8);
  plVar5 = (long *)(param_1 + 0x10);
  lVar3 = *plVar5;
  uVar4 = *(long *)(param_1 + 0x18) - lVar3 >> 3;
  if (uVar4 <= uVar7) {
    if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
      if (uVar2 < uVar4) {
        *(ulong *)(param_1 + 0x18) = lVar3 + uVar2 * 8;
      }
    }
    else {
      FUN_03712aa8(plVar5,uVar2 - uVar4);
      lVar3 = *plVar5;
    }
  }
  plVar6 = *(long **)(lVar3 + uVar7 * 8);
  if ((plVar6 != (long *)0x0) && (lVar3 = FUN_037327b0(0xffffffffffffffff,plVar6 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  *(long *)(*plVar5 + uVar7 * 8) = param_2;
  return;
}


