/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$.ctor
ENTRY_POINT: 052e1f9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate___ctor
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_071c1141 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3ce88);
    FUN_02f07e70(PTR_DAT_06d3ce90);
    FUN_02f07e70(PTR_DAT_06d08950);
    DAT_071c1141 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar2 = FUN_05241d74(*(long *)(param_1 + 0x68),param_2,*(undefined8 *)PTR_DAT_06d3ce90);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_05242864(*(long *)(param_1 + 0x68),param_2,*(undefined8 *)PTR_DAT_06d3ce88);
      lVar3 = *(long *)(param_1 + 0x60);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)PTR_DAT_06d08950;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = param_2;
            thunk_FUN_02f411dc(puVar5,param_2);
            return;
          }
          FUN_03fd0c9c(lVar3,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


