/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SetNotificationShown
ENTRY_POINT: 090c9770
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SetNotificationShown(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int in_w8;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x21;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x20) {
LAB_090c987c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar4 = *(long *)(lVar4 + unaff_x20 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) goto LAB_090c987c;
          lVar3 = *unaff_x21;
          uVar1 = *(uint *)(lVar4 + (long)(int)uVar6 * 4 + 0x20);
          lVar7 = (long)(int)uVar1;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar3 = *unaff_x21;
          }
          lVar3 = **(long **)(lVar3 + 0xb8);
          if (lVar3 == 0) goto LAB_090c9878;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_090c987c;
          if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
             (lVar5 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x48), lVar5 == 0)) goto LAB_090c9878;
          uVar2 = *(uint *)(lVar3 + lVar7 * 4 + 0x20);
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_090c987c;
          lVar3 = *(long *)(unaff_x19 + 0x140);
          if (lVar3 == 0) goto LAB_090c9878;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_090c987c;
          lVar5 = lVar5 + (long)(int)uVar2 * 0x10;
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          lVar3 = lVar3 + lVar7 * 0x10;
          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar3 + 0x20) = uVar8;
          lVar3 = *(long *)(unaff_x19 + 0xd0);
          if (lVar3 == 0) goto LAB_090c9878;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_090c987c;
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar6 = uVar6 + 1;
          *(undefined4 *)(lVar3 + lVar7 * 4 + 0x20) = 0x3f800000;
        } while ((int)uVar6 < (int)uVar1);
      }
      return;
    }
  }
LAB_090c9878:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


