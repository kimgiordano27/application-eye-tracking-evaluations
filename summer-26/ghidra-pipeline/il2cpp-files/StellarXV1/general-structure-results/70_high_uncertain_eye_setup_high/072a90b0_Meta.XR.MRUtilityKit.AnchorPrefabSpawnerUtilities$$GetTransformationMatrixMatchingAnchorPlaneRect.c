/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetTransformationMatrixMatchingAnchorPlaneRect
ENTRY_POINT: 072a90b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetTransformationMatrixMatchingAnchorPlaneRect
               (void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  long in_stack_00000020;
  char *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000058;
  
  if (unaff_x21 == 0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) {
      lVar4 = FUN_072a824c();
      *(long *)(in_stack_00000058 + 0x28) = lVar4;
      thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x28),lVar4);
      unaff_x20 = in_stack_00000058;
      if (lVar4 != 0) {
        unaff_x19 = FUN_072a8c84(in_stack_00000058);
        goto LAB_072a9014;
      }
    }
    *(undefined4 *)(unaff_x19 + 0x38) = 0;
    *(long *)(unaff_x20 + 0x40) = unaff_x19;
    thunk_FUN_040ec700((long *)(unaff_x20 + 0x40));
    *(long *)(in_stack_00000058 + 0x30) = unaff_x19;
    thunk_FUN_040ec700();
  }
  else {
    iVar1 = FUN_072a8904();
    iVar2 = FUN_072a8904();
    if (iVar1 != iVar2) {
      *(undefined1 *)(unaff_x20 + 0x6a) = 1;
    }
    lVar4 = *(long *)(unaff_x20 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = FUN_072a8904(lVar4);
    *(long *)(lVar4 + 0x30) = unaff_x19;
    iVar1 = *(int *)(lVar4 + 0x38);
    *(ulong *)(unaff_x19 + 0x50) = *(long *)(lVar4 + 0x50) + (uVar3 & 0xffffffff);
    *(int *)(unaff_x19 + 0x38) = iVar1 + 1;
    thunk_FUN_040ec700((long *)(lVar4 + 0x30));
    *(long *)(in_stack_00000058 + 0x40) = unaff_x19;
    thunk_FUN_040ec700();
  }
  if ((*(byte *)(unaff_x19 + 0x3d) & 0xf0) == 0) {
    *(long *)(in_stack_00000058 + 0x48) = unaff_x19;
    thunk_FUN_040ec700();
  }
LAB_072a9014:
  FUN_03f9b6dc();
  if (*in_stack_00000028 != '\0') {
    thunk_FUN_0408541c(*in_stack_00000030,0);
  }
  if (in_stack_00000020 == 0) {
    return unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


