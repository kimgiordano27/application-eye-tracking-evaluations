/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$ToggleGlobalMeshCollisions
ENTRY_POINT: 04a73b08
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__ToggleGlobalMeshCollisions(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x26;
  undefined8 in_stack_00000008;
  
  if (unaff_x26 == 0) goto LAB_04a73c54;
  uVar2 = *(uint *)(unaff_x19 + 0x24);
  uVar3 = *(uint *)(unaff_x26 + 0x18);
  if (uVar2 == uVar3) {
    FUN_04a73764();
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a73c54;
    uVar2 = *(uint *)(unaff_x19 + 0x24);
    unaff_x26 = *(long *)(unaff_x19 + 0x18);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    *(uint *)(unaff_x19 + 0x24) = uVar2 + 1;
    if (unaff_x26 == 0) goto LAB_04a73c54;
    iVar4 = 0;
    iVar5 = (int)uVar6;
    if (iVar5 != 0) {
      iVar4 = unaff_w21 / iVar5;
    }
    in_stack_00000008._4_4_ = unaff_w21 - iVar4 * iVar5;
    uVar3 = *(uint *)(unaff_x26 + 0x18);
  }
  else {
    *(uint *)(unaff_x19 + 0x24) = uVar2 + 1;
  }
  if (uVar2 < uVar3) {
    lVar1 = unaff_x26 + 0x20;
    *(int *)(lVar1 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4)) = unaff_w21
    ;
    *(undefined8 *)(lVar1 + (long)(int)uVar2 * 0x10 + 8) = unaff_x20;
    thunk_FUN_02bb0e9c();
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (lVar7 == 0) {
LAB_04a73c54:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar7 + 0x18)) && (uVar2 < *(uint *)(unaff_x26 + 0x18))
       ) {
      lVar7 = lVar7 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(lVar1 + (long)(int)uVar2 * 0x10 + 4) = *(int *)(lVar7 + 0x20) + -1;
      *(uint *)(lVar7 + 0x20) = uVar2 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


