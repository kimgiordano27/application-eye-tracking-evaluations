/*
FUNCTION_NAME: OVRPlugin$$get_eyeHeight
ENTRY_POINT: 05317dd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeHeight(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long lVar4;
  long unaff_x24;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined1 *)(unaff_x24 + 0x215) = 1;
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *unaff_x23;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) {
LAB_05317ec4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)unaff_w22 * 8 + 0x20);
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar2) {
        lVar4 = 0;
        do {
          if (uVar2 <= (uint)lVar4) goto LAB_05317ec4;
          if (unaff_x21 == 0) goto LAB_05317ec8;
          uVar2 = *(uint *)(lVar3 + 0x20 + lVar4 * 4);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar2) goto LAB_05317ec4;
          if (unaff_x20 == 0) goto LAB_05317ec8;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_05317ec4;
          lVar1 = unaff_x21 + (long)(int)uVar2 * 0x10;
          uVar6 = *(undefined4 *)(lVar1 + 0x24);
          uVar7 = *(undefined4 *)(lVar1 + 0x28);
          uVar8 = *(undefined4 *)(lVar1 + 0x2c);
          uVar5 = FUN_060df37c(*(undefined4 *)(lVar1 + 0x20),0);
          if (unaff_x19 == 0) goto LAB_05317ec8;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar2) goto LAB_05317ec4;
          lVar1 = unaff_x19 + (long)(int)uVar2 * 0x10;
          lVar4 = lVar4 + 1;
          *(undefined4 *)(lVar1 + 0x20) = uVar5;
          *(undefined4 *)(lVar1 + 0x24) = uVar6;
          *(undefined4 *)(lVar1 + 0x28) = uVar7;
          *(undefined4 *)(lVar1 + 0x2c) = uVar8;
          uVar2 = *(uint *)(lVar3 + 0x18);
        } while ((int)lVar4 < (int)uVar2);
      }
      return;
    }
  }
LAB_05317ec8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


