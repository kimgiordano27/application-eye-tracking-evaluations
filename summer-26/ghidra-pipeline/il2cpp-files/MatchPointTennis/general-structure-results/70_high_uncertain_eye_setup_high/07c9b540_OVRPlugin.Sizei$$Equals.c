/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 07c9b540
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizei__Equals(long param_1,long param_2,uint param_3,int *param_4,uint param_5)

{
  long lVar1;
  uint in_w9;
  int iVar2;
  long lVar3;
  uint unaff_w19;
  long lVar4;
  undefined8 uVar5;
  
  if (in_w9 <= param_3) goto LAB_07c9b61c;
  lVar4 = (long)(int)unaff_w19;
  iVar2 = *(int *)(param_1 + lVar4 * 4 + 0x20);
  if (iVar2 != *param_4) {
    lVar1 = *(long *)(param_2 + 0xd8);
    if ((lVar1 == 0) || (lVar3 = *(long *)(param_2 + 0xe0), lVar3 == 0)) {
LAB_07c9b620:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(uint *)(lVar1 + 0x18) <= unaff_w19) || (*(uint *)(lVar3 + 0x18) <= unaff_w19))
    goto LAB_07c9b61c;
    FUN_07c9b7d8(lVar1 + lVar4 * 8 + 0x20,lVar3 + lVar4 * 8 + 0x20,*param_4 - 1U < 2,param_5 & 1);
    lVar1 = *(long *)(param_2 + 0x150);
    if (lVar1 == 0) goto LAB_07c9b620;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w19) goto LAB_07c9b61c;
    lVar3 = *(long *)(param_2 + 0x148);
    if (lVar3 == 0) goto LAB_07c9b620;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_07c9b61c;
    lVar1 = lVar1 + lVar4 * 0x10;
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    lVar3 = lVar3 + lVar4 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    param_1 = *(long *)(param_2 + 0x158);
    if (param_1 == 0) goto LAB_07c9b620;
    iVar2 = *param_4;
  }
  if (unaff_w19 < *(uint *)(param_1 + 0x18)) {
    *(int *)(param_1 + lVar4 * 4 + 0x20) = iVar2;
    return;
  }
LAB_07c9b61c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


