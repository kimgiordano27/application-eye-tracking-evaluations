/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<SaveAsync>d__23$$SetStateMachine
ENTRY_POINT: 039cc518
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039cc584) */

undefined8
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23__SetStateMachine
          (undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x26;
  long lVar6;
  int unaff_w29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(param_2 + 8))();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x20 + 0x20) = unaff_w19 + 1;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w29 / (int)uVar2;
    }
    uVar3 = unaff_w29 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      piVar1 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
      if (lVar6 == 0) goto LAB_039cc694;
      if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)unaff_w19 * 0x20;
        *(int *)(lVar6 + 0x20) = unaff_w29;
        *(int *)(lVar6 + 0x24) = *piVar1 + -1;
        *(undefined8 *)(lVar6 + 0x38) = unaff_x26;
        *(undefined8 *)(lVar6 + 0x30) = in_stack_00000038;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000030;
        thunk_FUN_01656ef8((undefined8 *)(lVar6 + 0x38),0);
        *piVar1 = unaff_w19 + 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_039cc694:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


