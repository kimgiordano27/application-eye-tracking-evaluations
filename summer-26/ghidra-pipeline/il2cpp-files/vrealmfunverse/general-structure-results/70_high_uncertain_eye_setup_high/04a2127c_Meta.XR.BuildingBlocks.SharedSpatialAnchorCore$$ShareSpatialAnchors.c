/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$ShareSpatialAnchors
ENTRY_POINT: 04a2127c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__ShareSpatialAnchors(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x24);
    lVar9 = *(long *)(unaff_x19 + 0x18);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    *(uint *)(unaff_x19 + 0x24) = uVar2 + 1;
    if (lVar9 != 0) {
      iVar4 = 0;
      iVar5 = (int)uVar6;
      if (iVar5 != 0) {
        iVar4 = unaff_w21 / iVar5;
      }
      uVar3 = unaff_w21 - iVar4 * iVar5;
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        lVar1 = lVar9 + 0x20;
        piVar7 = (int *)(lVar1 + (long)(int)uVar2 * 0x28);
        *piVar7 = unaff_w21;
        uVar11 = unaff_x20[1];
        uVar10 = *unaff_x20;
        uVar6 = unaff_x20[2];
        *(undefined8 *)(piVar7 + 8) = unaff_x20[3];
        *(undefined8 *)(piVar7 + 6) = uVar6;
        *(undefined8 *)(piVar7 + 4) = uVar11;
        *(undefined8 *)(piVar7 + 2) = uVar10;
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          thunk_FUN_02bb0e9c(lVar1 + (long)(int)uVar2 * 0x28 + 0x20,0);
          lVar8 = *(long *)(unaff_x19 + 0x10);
          if (lVar8 == 0) goto LAB_04a213c0;
          if ((uVar3 < *(uint *)(lVar8 + 0x18)) && (uVar2 < *(uint *)(lVar9 + 0x18))) {
            lVar8 = lVar8 + (ulong)uVar3 * 4;
            *(int *)(lVar1 + (long)(int)uVar2 * 0x28 + 4) = *(int *)(lVar8 + 0x20) + -1;
            *(uint *)(lVar8 + 0x20) = uVar2 + 1;
            *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
            *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
            return 1;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
LAB_04a213c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


