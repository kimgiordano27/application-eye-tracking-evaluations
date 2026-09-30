/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$.cctor
ENTRY_POINT: 090c9a94
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_1___cctor
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  bool in_ZR;
  long lVar1;
  int in_w9;
  undefined4 in_w10;
  long lVar2;
  uint unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  if (!in_ZR) {
    lVar1 = *(long *)(param_2 + 0xd8);
    if ((lVar1 == 0) || (lVar2 = *(long *)(param_2 + 0xe0), lVar2 == 0)) {
LAB_090c9b54:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((*(uint *)(lVar1 + 0x18) <= unaff_w19) || (*(uint *)(lVar2 + 0x18) <= unaff_w19))
    goto LAB_090c9b50;
    FUN_090c9d0c(lVar1 + unaff_x22 * 8 + 0x20,lVar2 + unaff_x22 * 8 + 0x20,in_w9 - 1U < 2,
                 param_5 & 1);
    lVar1 = *(long *)(param_2 + 0x150);
    if (lVar1 == 0) goto LAB_090c9b54;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w19) goto LAB_090c9b50;
    lVar2 = *(long *)(param_2 + 0x148);
    if (lVar2 == 0) goto LAB_090c9b54;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_090c9b50;
    lVar1 = lVar1 + unaff_x22 * 0x10;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    lVar2 = lVar2 + unaff_x22 * 0x10;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    param_1 = *(long *)(param_2 + 0x158);
    if (param_1 == 0) goto LAB_090c9b54;
    in_w10 = *unaff_x20;
  }
  if (unaff_w19 < *(uint *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + unaff_x22 * 4 + 0x20) = in_w10;
    return;
  }
LAB_090c9b50:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


