/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$Unregister
ENTRY_POINT: 06dcf210
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Unregister(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
LAB_06dcf29c:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(int *)((long)param_1 + 0xc) == *(int *)(lVar2 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
          lVar4 = *(long *)(lVar2 + 0x48);
          lVar3 = *(long *)(lVar2 + 0x40);
          lVar6 = *(long *)(lVar2 + 0x58);
          lVar5 = *(long *)(lVar2 + 0x50);
          lVar8 = *(long *)(lVar2 + 0x28);
          lVar7 = *(long *)(lVar2 + 0x20);
          lVar9 = *(long *)(lVar2 + 0x38);
          lVar2 = *(long *)(lVar2 + 0x30);
          *(uint *)(param_1 + 1) = uVar1 + 1;
          param_1[7] = lVar4;
          param_1[6] = lVar3;
          param_1[9] = lVar6;
          param_1[8] = lVar5;
          param_1[3] = lVar8;
          param_1[2] = lVar7;
          param_1[5] = lVar9;
          param_1[4] = lVar2;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      goto LAB_06dcf29c;
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06dcf2a4(param_1);
  return 0;
}


