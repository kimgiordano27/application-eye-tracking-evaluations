/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$OnShareCompleted
ENTRY_POINT: 04a213e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__OnShareCompleted
               (long param_1,undefined8 param_2,uint param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long in_x9;
  long lVar5;
  int *piVar6;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (in_x9 != 0) {
    if (param_3 < *(uint *)(in_x9 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x18);
      piVar6 = (int *)(in_x9 + 0x20 + (long)(int)param_3 * 0x28);
      *piVar6 = param_4;
      uVar9 = param_5[1];
      uVar8 = *param_5;
      uVar7 = param_5[2];
      *(undefined8 *)(piVar6 + 8) = param_5[3];
      *(undefined8 *)(piVar6 + 6) = uVar7;
      *(undefined8 *)(piVar6 + 4) = uVar9;
      *(undefined8 *)(piVar6 + 2) = uVar8;
      if (param_3 < *(uint *)(in_x9 + 0x18)) {
        thunk_FUN_02bb0e9c(in_x9 + 0x20 + (long)(int)param_3 * 0x28 + 0x20,0);
        lVar4 = *(long *)(unaff_x21 + 0x18);
        if ((lVar4 == 0) || (lVar5 = *(long *)(unaff_x21 + 0x10), lVar5 == 0)) goto LAB_04a2149c;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = param_4 / iVar1;
        }
        uVar2 = param_4 - iVar3 * iVar1;
        if ((uVar2 < *(uint *)(lVar5 + 0x18)) && (param_3 < *(uint *)(lVar4 + 0x18))) {
          lVar5 = lVar5 + (long)(int)uVar2 * 4;
          *(int *)(lVar4 + (long)(int)param_3 * 0x28 + 0x24) = *(int *)(lVar5 + 0x20) + -1;
          *(uint *)(lVar5 + 0x20) = param_3 + 1;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_04a2149c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


