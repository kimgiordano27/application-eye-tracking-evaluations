/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$RemoveDestructibleGlobalMesh
ENTRY_POINT: 04a64afc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__RemoveDestructibleGlobalMesh(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  int unaff_w19;
  uint uVar7;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x28;
  undefined8 in_stack_00000008;
  
  uVar7 = *(uint *)(unaff_x26 + 0x28);
  if ((int)uVar7 < 0) {
    if (unaff_x28 == 0) goto LAB_04a64c9c;
    uVar7 = *(uint *)(unaff_x26 + 0x24);
    uVar3 = *(uint *)(unaff_x28 + 0x18);
    if (uVar7 == uVar3) {
      FUN_04a64738();
      if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a64c9c;
      uVar7 = *(uint *)(unaff_x26 + 0x24);
      unaff_x28 = *(long *)(unaff_x26 + 0x18);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
      *(uint *)(unaff_x26 + 0x24) = uVar7 + 1;
      if (unaff_x28 == 0) goto LAB_04a64c9c;
      iVar1 = 0;
      iVar2 = (int)uVar4;
      if (iVar2 != 0) {
        iVar1 = unaff_w19 / iVar2;
      }
      in_stack_00000008._4_4_ = unaff_w19 - iVar1 * iVar2;
      uVar3 = *(uint *)(unaff_x28 + 0x18);
    }
    else {
      *(uint *)(unaff_x26 + 0x24) = uVar7 + 1;
    }
  }
  else {
    if (unaff_x28 == 0) goto LAB_04a64c9c;
    uVar3 = *(uint *)(unaff_x28 + 0x18);
    if (uVar3 <= uVar7) goto LAB_04a64c5c;
    *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(unaff_x28 + (ulong)uVar7 * 0x18 + 0x24);
  }
  if (uVar7 < uVar3) {
    piVar5 = (int *)(unaff_x28 + 0x20 + (long)(int)uVar7 * 0x18);
    *(undefined8 *)(piVar5 + 4) = unaff_x24;
    *(undefined8 *)(piVar5 + 2) = unaff_x25;
    uVar3 = *(uint *)(unaff_x28 + 0x18);
    *piVar5 = unaff_w19;
    if (uVar7 < uVar3) {
      thunk_FUN_02bb0e9c(piVar5 + 2,0);
      lVar6 = *(long *)(unaff_x26 + 0x10);
      if (lVar6 == 0) {
LAB_04a64c9c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((in_stack_00000008._4_4_ < *(uint *)(lVar6 + 0x18)) &&
         (uVar7 < *(uint *)(unaff_x28 + 0x18))) {
        lVar6 = lVar6 + (ulong)in_stack_00000008._4_4_ * 4;
        *(int *)(unaff_x28 + 0x20 + (long)(int)uVar7 * 0x18 + 4) = *(int *)(lVar6 + 0x20) + -1;
        *(uint *)(lVar6 + 0x20) = uVar7 + 1;
        *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
        *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04a64c5c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


