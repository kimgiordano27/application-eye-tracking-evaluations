/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$LoadAndInstantiateAnchorsFromGroup
ENTRY_POINT: 04a20f54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup
               (long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x9c9) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313588);
    *(undefined1 *)(unaff_x22 + 0x9c9) = 1;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x118);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  puVar5 = PTR_DAT_06313588;
  lVar6 = FUN_02b3c908(lVar6,unaff_w20);
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    FUN_04d9e334(lVar8,0,lVar6,0,*(undefined4 *)(param_1 + 0x24),0);
  }
  lVar8 = FUN_02b3c908(*(undefined8 *)puVar5,unaff_w20);
  if (0 < *(int *)(param_1 + 0x24)) {
    if (lVar6 == 0) {
LAB_04a21070:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    iVar7 = 0;
    piVar9 = (int *)(lVar6 + 0x24);
    do {
      if (iVar2 == iVar7) {
LAB_04a2106c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (lVar8 == 0) goto LAB_04a21070;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar9[-1] / unaff_w20;
      }
      uVar3 = piVar9[-1] - iVar4 * unaff_w20;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_04a2106c;
      lVar1 = lVar8 + (long)(int)uVar3 * 4;
      iVar7 = iVar7 + 1;
      *piVar9 = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = iVar7;
      piVar9 = piVar9 + 10;
    } while (iVar7 < *(int *)(param_1 + 0x24));
  }
  *(long *)(param_1 + 0x18) = lVar6;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x18),lVar6);
  *(long *)(param_1 + 0x10) = lVar8;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x10),lVar8);
  return;
}


