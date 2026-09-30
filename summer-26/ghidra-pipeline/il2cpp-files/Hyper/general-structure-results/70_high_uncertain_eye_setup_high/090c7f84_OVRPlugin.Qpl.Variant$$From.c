/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 090c7f84
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int in_w9;
  int in_w10;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  
  iVar2 = 0;
  if (in_w9 != 0) {
    iVar2 = in_w10 / in_w9;
  }
  uVar1 = in_w10 - iVar2 * in_w9;
  lVar5 = 0;
  do {
    uVar4 = (uint)lVar5;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar4) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar4) {
LAB_090c8100:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar3 = *(long *)(param_1 + lVar5 * 8 + 0x20);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_090c8100;
    lVar6 = *(long *)(unaff_x19 + 0x48);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_090c8100;
    lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    lVar6 = lVar6 + lVar5 * 0x10;
    lVar5 = lVar5 + 1;
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    param_1 = *(long *)(unaff_x20 + 0x88);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


