/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 090c7f78
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
  int iVar3;
  long lVar4;
  int in_w9;
  int in_w10;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  
  iVar3 = (*(int *)(unaff_x20 + 0x90) + in_w9) - in_w10;
  iVar2 = 0;
  if (in_w9 != 0) {
    iVar2 = iVar3 / in_w9;
  }
  uVar1 = iVar3 - iVar2 * in_w9;
  lVar6 = 0;
  do {
    uVar5 = (uint)lVar6;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar5) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar5) {
LAB_090c8100:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar4 = *(long *)(param_1 + lVar6 * 8 + 0x20);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_090c8100;
    lVar7 = *(long *)(unaff_x19 + 0x48);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_090c8100;
    lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    lVar7 = lVar7 + lVar6 * 0x10;
    lVar6 = lVar6 + 1;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar7 + 0x20) = uVar8;
    param_1 = *(long *)(unaff_x20 + 0x88);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


