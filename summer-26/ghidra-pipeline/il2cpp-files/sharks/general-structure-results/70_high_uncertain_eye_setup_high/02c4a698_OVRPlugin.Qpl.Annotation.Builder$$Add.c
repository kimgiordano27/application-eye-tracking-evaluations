/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 02c4a698
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if ((DAT_03a260e3 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f8768);
    DAT_03a260e3 = 1;
  }
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_2 + 0x38);
    thunk_FUN_0181f594();
    if ((uVar3 & 0x1600000) == 0x1000000) {
      uVar3 = 0x10;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x38);
      thunk_FUN_0181f594();
      uVar3 = 0x11;
      if ((uVar2 & 0x600000) == 0x400000) {
        uVar3 = 0x12;
      }
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      if ((uVar1 >> (ulong)uVar3 & 1) != 0) {
        FUN_02c430d4(lVar4,0);
        return;
      }
      uVar3 = *(uint *)(lVar4 + 0x38);
      thunk_FUN_0181f594();
      if (((uVar3 & 0x600000) != 0x400000) && (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0)) {
        thunk_FUN_01843fdc();
      }
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x20);
      thunk_FUN_0188fd20();
      if (((uVar1 >> 0x13 & 1) != 0) && ((param_3 & 1) != 0)) {
        FUN_02c4a548(lVar4,1);
        return;
      }
      FUN_02c43d68(lVar4,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


