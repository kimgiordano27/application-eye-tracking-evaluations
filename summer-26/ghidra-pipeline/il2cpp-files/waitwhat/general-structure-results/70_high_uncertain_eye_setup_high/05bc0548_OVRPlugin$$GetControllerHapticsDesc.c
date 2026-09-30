/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 05bc0548
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerHapticsDesc(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  ulong unaff_x23;
  long unaff_x24;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float unaff_s12;
  
  do {
    if (*unaff_x21 == 0) goto LAB_05bc05c8;
    puVar1 = (undefined4 *)(param_1 + unaff_x24);
    uVar6 = puVar1[-3];
    uVar7 = puVar1[-2];
    uVar8 = puVar1[-1];
    uVar9 = *puVar1;
    lVar2 = FUN_05bc7640(*unaff_x21);
    if (lVar2 == 0) goto LAB_05bc05c8;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) break;
    uVar6 = FUN_069c5058(uVar6,0);
    if (unaff_x22 == 0) goto LAB_05bc05c8;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) break;
    puVar1 = (undefined4 *)(unaff_x22 + unaff_x24);
    unaff_x24 = unaff_x24 + 0x10;
    unaff_x23 = unaff_x23 + 1;
    puVar1[-3] = uVar6;
    puVar1[-2] = uVar7;
    puVar1[-1] = uVar8;
    *puVar1 = uVar9;
    if ((*unaff_x20 == 0) || (lVar2 = FUN_05bc7640(), lVar2 == 0)) goto LAB_05bc05c8;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x23) {
code_r0x05bc05d4:
      if (unaff_s12 <= 0.5) {
        unaff_x21 = unaff_x20;
      }
      lVar2 = *unaff_x21;
      if ((lVar2 == 0) || (*unaff_x19 == 0)) goto LAB_05bc05c8;
      lVar5 = 8;
      *(undefined4 *)(*unaff_x19 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      goto LAB_05bc05f4;
    }
    if ((*unaff_x21 == 0) || (lVar2 = FUN_05bc7640(), lVar2 == 0)) goto LAB_05bc05c8;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x23) goto code_r0x05bc05d4;
    if (*unaff_x19 == 0) goto LAB_05bc05c8;
    unaff_x22 = FUN_05bc7640();
    if ((*unaff_x20 == 0) || (param_1 = FUN_05bc7640(*unaff_x20), param_1 == 0)) goto LAB_05bc05c8;
  } while (unaff_x23 < *(uint *)(param_1 + 0x18));
LAB_05bc0668:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
LAB_05bc05f4:
  if (*unaff_x19 == 0) {
LAB_05bc05c8:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar3 = FUN_05bc7eec();
  lVar4 = FUN_05bc7eec(lVar2);
  if (lVar4 == 0) goto LAB_05bc05c8;
  if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 8U) goto LAB_05bc0668;
  if (lVar3 == 0) goto LAB_05bc05c8;
  if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar5 - 8U) goto LAB_05bc0668;
  *(undefined4 *)(lVar3 + lVar5 * 4) = *(undefined4 *)(lVar4 + lVar5 * 4);
  lVar5 = lVar5 + 1;
  if (lVar5 == 0xd) {
    return;
  }
  goto LAB_05bc05f4;
}


