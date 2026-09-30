/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceHandle$$Equals
ENTRY_POINT: 052c72bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Utils_InstanceHandle__Equals(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_071c1085 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3d508);
    FUN_02f07e70(PTR_DAT_06d3d510);
    FUN_02f07e70(PTR_DAT_06d3d518);
    FUN_02f07e70(PTR_DAT_06d3d520);
    DAT_071c1085 = 1;
  }
  puVar2 = PTR_DAT_06d3d518;
  plVar7 = (long *)(param_1 + 0x58);
  lVar3 = *plVar7;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3d520);
    FUN_03fd0468(lVar3,*(undefined8 *)puVar2);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      if (lVar3 == 0) goto LAB_052c7534;
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_06d3d508;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_052c7534;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      if (lVar3 == 0) goto LAB_052c7534;
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_06d3d508;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_052c7534;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      if (lVar3 == 0) goto LAB_052c7534;
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_06d3d508;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_052c7534;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      if (lVar3 == 0) goto LAB_052c7534;
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_06d3d508;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_052c7534;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 == 0) {
      if (lVar3 == 0) goto LAB_052c7534;
    }
    else {
      if (lVar3 == 0) {
LAB_052c7534:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_06d3d508;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_052c7534;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar3 = FUN_03fd275c(lVar3,*(undefined8 *)PTR_DAT_06d3d510);
    *plVar7 = lVar3;
    thunk_FUN_02f411dc(plVar7,lVar3);
    lVar3 = *plVar7;
  }
  return lVar3;
}


