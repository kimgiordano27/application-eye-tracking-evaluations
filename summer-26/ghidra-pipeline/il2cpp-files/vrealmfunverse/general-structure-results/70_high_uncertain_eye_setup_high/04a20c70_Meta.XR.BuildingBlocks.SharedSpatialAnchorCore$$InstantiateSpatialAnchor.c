/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$InstantiateSpatialAnchor
ENTRY_POINT: 04a20c70
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


void Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__InstantiateSpatialAnchor(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int in_w8;
  long in_x9;
  int in_w10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  do {
    if (-1 < in_w10) {
      if (unaff_x21 == 0) goto LAB_04a20d94;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) {
LAB_04a20d90:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      puVar1 = (undefined8 *)(in_x9 + unaff_x26);
      uVar10 = puVar1[1];
      uVar9 = *puVar1;
      uVar8 = puVar1[3];
      uVar7 = puVar1[2];
      lVar2 = unaff_x21 + (long)(int)unaff_w23 * 0x28;
      *(undefined8 *)(lVar2 + 0x40) = puVar1[4];
      *(undefined8 *)(lVar2 + 0x28) = uVar10;
      *(undefined8 *)(lVar2 + 0x20) = uVar9;
      *(undefined8 *)(lVar2 + 0x38) = uVar8;
      *(undefined8 *)(lVar2 + 0x30) = uVar7;
      thunk_FUN_02bb0e9c(unaff_x25 + (long)(int)unaff_w23 * 0x28 + 0x20,0);
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) goto LAB_04a20d90;
      if (unaff_x22 == 0) goto LAB_04a20d94;
      iVar3 = *(int *)(unaff_x25 + (long)(int)unaff_w23 * (long)unaff_w27);
      iVar5 = 0;
      if (unaff_w20 != 0) {
        iVar5 = iVar3 / unaff_w20;
      }
      uVar4 = iVar3 - iVar5 * unaff_w20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_04a20d90;
      lVar2 = unaff_x22 + (long)(int)uVar4 * 4;
      lVar6 = (long)(int)unaff_w23;
      unaff_w23 = unaff_w23 + 1;
      *(int *)(unaff_x25 + lVar6 * unaff_w27 + 4) = *(int *)(lVar2 + 0x20) + -1;
      *(uint *)(lVar2 + 0x20) = unaff_w23;
      in_w8 = *(int *)(unaff_x19 + 0x24);
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x26 = unaff_x26 + 0x28;
    if ((long)in_w8 <= (long)unaff_x24) {
      *(uint *)(unaff_x19 + 0x24) = unaff_w23;
      *(long *)(unaff_x19 + 0x18) = unaff_x21;
      thunk_FUN_02bb0e9c();
      *(long *)(unaff_x19 + 0x10) = unaff_x22;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
      *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
      return;
    }
    in_x9 = *(long *)(unaff_x19 + 0x18);
    if (in_x9 == 0) {
LAB_04a20d94:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_x24) goto LAB_04a20d90;
    in_w10 = *(int *)(in_x9 + unaff_x26);
  } while( true );
}


