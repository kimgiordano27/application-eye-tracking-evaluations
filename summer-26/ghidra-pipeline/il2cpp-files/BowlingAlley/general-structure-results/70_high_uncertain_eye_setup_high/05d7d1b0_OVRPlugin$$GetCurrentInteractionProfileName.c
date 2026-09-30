/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 05d7d1b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfileName(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar7;
  
  do {
    *(long *)(unaff_x21 + unaff_x23 * 8 + 0x20) = param_2;
    thunk_FUN_0333a630();
    uVar1 = (int)unaff_x23 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)uVar1) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) break;
    unaff_x23 = (long)(int)uVar1;
    plVar7 = (long *)(unaff_x19 + unaff_x23 * 8 + 0x20);
    lVar4 = *plVar7;
    if (lVar4 == 0) {
LAB_05d7d1e8:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_2 = FUN_032d5d3c(*unaff_x22,*(undefined4 *)(lVar4 + 0x18));
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) break;
    lVar4 = *plVar7;
    if (lVar4 == 0) goto LAB_05d7d1e8;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        if (uVar2 <= uVar5) goto LAB_05d7d1e4;
        if (unaff_x20 == 0) goto LAB_05d7d1e8;
        lVar6 = (long)(int)uVar5;
        uVar3 = *(uint *)(lVar4 + lVar6 * 4 + 0x20);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d7d1e4;
        if (param_2 == 0) goto LAB_05d7d1e8;
        if (*(uint *)(param_2 + 0x18) <= uVar5) goto LAB_05d7d1e4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(param_2 + lVar6 * 4 + 0x20) =
             *(undefined4 *)(unaff_x20 + (long)(int)uVar3 * 4 + 0x20);
      } while ((int)uVar5 < (int)uVar2);
    }
    if (unaff_x21 == 0) goto LAB_05d7d1e8;
  } while (uVar1 < *(uint *)(unaff_x21 + 0x18));
LAB_05d7d1e4:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


