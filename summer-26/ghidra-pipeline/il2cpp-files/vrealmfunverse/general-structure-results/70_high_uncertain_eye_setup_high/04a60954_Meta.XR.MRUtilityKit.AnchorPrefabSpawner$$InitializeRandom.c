/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$InitializeRandom
ENTRY_POINT: 04a60954
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


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__InitializeRandom(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong in_x9;
  long lVar6;
  int in_w12;
  long lVar7;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar5 = 0;
  lVar6 = 0x20;
  do {
    lVar8 = *(long *)(unaff_x19 + 0x18);
    if (lVar8 == 0) {
LAB_04a60a6c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar8 + 0x18) <= in_x9) goto LAB_04a60a68;
    if (-1 < *(int *)(lVar8 + lVar6)) {
      if (unaff_x21 == 0) goto LAB_04a60a6c;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar5) {
LAB_04a60a68:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar7 = (long)(int)uVar5;
      uVar9 = *(undefined8 *)(lVar8 + lVar6);
      lVar1 = unaff_x21 + lVar7 * 0x10;
      *(undefined8 *)(lVar1 + 0x28) = ((undefined8 *)(lVar8 + lVar6))[1];
      *(undefined8 *)(lVar1 + 0x20) = uVar9;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_04a60a68;
      if (unaff_x22 == 0) goto LAB_04a60a6c;
      iVar4 = (int)uVar9;
      iVar3 = 0;
      if (unaff_w20 != 0) {
        iVar3 = iVar4 / unaff_w20;
      }
      uVar2 = iVar4 - iVar3 * unaff_w20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_04a60a68;
      lVar8 = unaff_x22 + (long)(int)uVar2 * 4;
      uVar5 = uVar5 + 1;
      *(int *)(unaff_x21 + lVar7 * 0x10 + 0x24) = *(int *)(lVar8 + 0x20) + -1;
      *(uint *)(lVar8 + 0x20) = uVar5;
      in_w12 = *(int *)(unaff_x19 + 0x24);
    }
    in_x9 = in_x9 + 1;
    lVar6 = lVar6 + 0x10;
    if ((long)in_w12 <= (long)in_x9) {
      *(uint *)(unaff_x19 + 0x24) = uVar5;
      *(long *)(unaff_x19 + 0x18) = unaff_x21;
      thunk_FUN_02bb0e9c();
      *(long *)(unaff_x19 + 0x10) = unaff_x22;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
      *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
      return;
    }
  } while( true );
}


