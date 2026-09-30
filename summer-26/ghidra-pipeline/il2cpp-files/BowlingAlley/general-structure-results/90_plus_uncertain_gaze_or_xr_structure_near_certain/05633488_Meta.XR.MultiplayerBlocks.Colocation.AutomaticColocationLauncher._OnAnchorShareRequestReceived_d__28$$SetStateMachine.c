/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 05633488
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_w8;
  uint uVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  
  if (0 < in_w8) {
    if (unaff_x22 == 0) {
LAB_0563351c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    uVar5 = 0;
    piVar6 = (int *)(unaff_x22 + 0x24);
    do {
      if (uVar2 <= uVar5) {
LAB_05633518:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (param_1 == 0) goto LAB_0563351c;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar6[-1] / unaff_w20;
      }
      uVar3 = piVar6[-1] - iVar4 * unaff_w20;
      if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_05633518;
      lVar1 = param_1 + (long)(int)uVar3 * 4;
      uVar5 = uVar5 + 1;
      *piVar6 = *(int *)(lVar1 + 0x20) + -1;
      *(uint *)(lVar1 + 0x20) = uVar5;
      piVar6 = piVar6 + 10;
    } while ((int)uVar5 < *(int *)(unaff_x19 + 0x24));
  }
  *(long *)(unaff_x19 + 0x18) = unaff_x22;
  thunk_FUN_0333a630();
  *(long *)(unaff_x19 + 0x10) = param_1;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x10),param_1);
  return;
}


