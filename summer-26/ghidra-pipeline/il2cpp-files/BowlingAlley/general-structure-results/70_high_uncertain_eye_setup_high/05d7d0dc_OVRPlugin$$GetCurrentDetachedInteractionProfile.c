/*
FUNCTION_NAME: OVRPlugin$$GetCurrentDetachedInteractionProfile
ENTRY_POINT: 05d7d0dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetCurrentDetachedInteractionProfile(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  
  lVar3 = FUN_032d5d3c(*param_1,*(undefined4 *)(unaff_x19 + 0x18));
  puVar2 = PTR_DAT_0727aa68;
  uVar7 = *(uint *)(unaff_x19 + 0x18);
  if (0 < (int)uVar7) {
    uVar4 = 0;
    do {
      if (uVar7 <= uVar4) {
LAB_05d7d1e4:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      plVar10 = (long *)(unaff_x19 + (long)(int)uVar4 * 8 + 0x20);
      lVar5 = *plVar10;
      if (lVar5 == 0) goto LAB_05d7d1e8;
      lVar5 = FUN_032d5d3c(*(undefined8 *)puVar2,*(undefined4 *)(lVar5 + 0x18));
      if (*(uint *)(unaff_x19 + 0x18) <= uVar4) goto LAB_05d7d1e4;
      lVar6 = *plVar10;
      if (lVar6 == 0) {
LAB_05d7d1e8:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar7 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar7) {
        uVar8 = 0;
        do {
          if (uVar7 <= uVar8) goto LAB_05d7d1e4;
          if (unaff_x20 == 0) goto LAB_05d7d1e8;
          lVar9 = (long)(int)uVar8;
          uVar1 = *(uint *)(lVar6 + lVar9 * 4 + 0x20);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_05d7d1e4;
          if (lVar5 == 0) goto LAB_05d7d1e8;
          if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_05d7d1e4;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(lVar5 + lVar9 * 4 + 0x20) =
               *(undefined4 *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20);
        } while ((int)uVar8 < (int)uVar7);
      }
      if (lVar3 == 0) goto LAB_05d7d1e8;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_05d7d1e4;
      *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20) = lVar5;
      thunk_FUN_0333a630();
      uVar7 = *(uint *)(unaff_x19 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar7);
  }
  return lVar3;
}


