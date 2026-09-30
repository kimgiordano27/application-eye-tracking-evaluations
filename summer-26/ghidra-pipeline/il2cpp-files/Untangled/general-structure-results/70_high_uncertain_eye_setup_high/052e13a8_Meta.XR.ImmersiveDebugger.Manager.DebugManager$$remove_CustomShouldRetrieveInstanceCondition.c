/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$remove_CustomShouldRetrieveInstanceCondition
ENTRY_POINT: 052e13a8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_DebugManager__remove_CustomShouldRetrieveInstanceCondition
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((DAT_071c1137 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01e20);
    DAT_071c1137 = 1;
  }
  if (*(int *)(param_5 + 0x10) == 1) {
    lVar1 = *(long *)(param_5 + 0x28);
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_052e14f8;
    uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x1e8);
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066ca6a0(uVar4,lVar1,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (lVar3 = FUN_066c67b0(*(long *)(param_5 + 0x20),0), lVar3 == 0)) goto LAB_052e14f8;
      FUN_066d3f5c(*(undefined4 *)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x34),
                   *(undefined4 *)(param_5 + 0x38),lVar3,0);
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (lVar3 = FUN_066c67b0(*(long *)(param_5 + 0x20),0), lVar3 == 0)) goto LAB_052e14f8;
      FUN_066d4bec(*(undefined4 *)(param_5 + 0x3c),*(undefined4 *)(param_5 + 0x40),
                   *(undefined4 *)(param_5 + 0x44),*(undefined4 *)(param_5 + 0x48),lVar3,0);
    }
    if (lVar1 == 0) {
LAB_052e14f8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined8 *)(lVar1 + 0x1a8) = 0;
    thunk_FUN_02f411dc(lVar1 + 0x1a8,0);
  }
  else if (*(int *)(param_5 + 0x10) == 0) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if ((*(long *)(param_5 + 0x20) != 0) &&
       (lVar1 = FUN_066c67b0(*(long *)(param_5 + 0x20),0), lVar1 != 0)) {
      uVar5 = FUN_066d3ed0(lVar1,0);
      *(undefined4 *)(param_5 + 0x30) = uVar5;
      *(undefined4 *)(param_5 + 0x34) = param_2;
      *(undefined4 *)(param_5 + 0x38) = param_3;
      if ((*(long *)(param_5 + 0x20) != 0) &&
         (lVar1 = FUN_066c67b0(*(long *)(param_5 + 0x20),0), lVar1 != 0)) {
        uVar5 = FUN_066d4b64(lVar1,0);
        *(undefined8 *)(param_5 + 0x18) = 0;
        *(undefined4 *)(param_5 + 0x3c) = uVar5;
        *(undefined4 *)(param_5 + 0x40) = param_2;
        *(undefined4 *)(param_5 + 0x44) = param_3;
        *(undefined4 *)(param_5 + 0x48) = param_4;
        thunk_FUN_02f411dc((undefined8 *)(param_5 + 0x18),0);
        *(undefined4 *)(param_5 + 0x10) = 1;
        return 1;
      }
    }
    goto LAB_052e14f8;
  }
  return 0;
}


