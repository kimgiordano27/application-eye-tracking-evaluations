/*
FUNCTION_NAME: FUN_03700c44
ENTRY_POINT: 03700c44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_03700c44(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined *local_48;
  undefined8 **local_40;
  undefined **local_38;
  
  puVar1 = Method_System_ReadOnlySpan<OVRPlugin_MarkerType>_get_Length__;
  local_48 = Method_System_ReadOnlySpan<OVRPlugin_MarkerType>_get_Length__;
  if (*(long *)Method_System_ReadOnlySpan<OVRPlugin_MarkerType>_get_Length__ != -1) {
    local_38 = &local_48;
    local_40 = &local_38;
    std::__ndk1::__call_once
              ((ulong *)Method_System_ReadOnlySpan<OVRPlugin_MarkerType>_get_Length__,&local_40,
               FUN_03713bac);
  }
  uVar3 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar3 - 1;
  if ((uVar8 < (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3)) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x10) + uVar8 * 8), lVar5 != 0)) {
    FUN_03732780(1,lVar5 + 8);
    plVar6 = (long *)(param_1 + 0x10);
    lVar2 = *plVar6;
    uVar4 = *(long *)(param_1 + 0x18) - lVar2 >> 3;
    if (uVar4 <= uVar8) {
      if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
        if (uVar3 < uVar4) {
          *(ulong *)(param_1 + 0x18) = lVar2 + uVar3 * 8;
        }
      }
      else {
        FUN_03712aa8(plVar6,uVar3 - uVar4);
        lVar2 = *plVar6;
      }
    }
    plVar7 = *(long **)(lVar2 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (lVar2 = FUN_037327b0(0xffffffffffffffff,plVar7 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    *(long *)(*plVar6 + uVar8 * 8) = lVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_036e0334();
}


