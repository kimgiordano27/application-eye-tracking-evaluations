/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentMarkdownText
ENTRY_POINT: 04f894e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentMarkdownText(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_04f89614();
  lVar3 = *unaff_x21;
  uVar1 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *unaff_x21;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_04f89610:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) goto LAB_04f89610;
          lVar4 = *unaff_x21;
          uVar1 = *(uint *)(lVar3 + (long)(int)uVar6 * 4 + 0x20);
          lVar7 = (long)(int)uVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *unaff_x21;
          }
          lVar4 = **(long **)(lVar4 + 0xb8);
          if (lVar4 == 0) goto LAB_04f8960c;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_04f89610;
          if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
             (lVar5 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x48), lVar5 == 0)) goto LAB_04f8960c;
          uVar2 = *(uint *)(lVar4 + lVar7 * 4 + 0x20);
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_04f89610;
          lVar4 = *(long *)(unaff_x19 + 0x140);
          if (lVar4 == 0) goto LAB_04f8960c;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_04f89610;
          lVar5 = lVar5 + (long)(int)uVar2 * 0x10;
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          lVar4 = lVar4 + lVar7 * 0x10;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = uVar8;
          lVar4 = *(long *)(unaff_x19 + 0xd0);
          if (lVar4 == 0) goto LAB_04f8960c;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_04f89610;
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar6 = uVar6 + 1;
          *(undefined4 *)(lVar4 + lVar7 * 4 + 0x20) = 0x3f800000;
        } while ((int)uVar6 < (int)uVar1);
      }
      return;
    }
  }
LAB_04f8960c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


