/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 05bc9328
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_bodyTrackingSupported(void)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  do {
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05bc9394;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(unaff_x22,*unaff_x25,0);
LAB_05bc9394:
    fVar9 = (float)(*(code *)*puVar3)(unaff_x22,unaff_x21 & 0xffffffff,puVar3[1]);
    if (*(long *)(unaff_x20 + 0xd0) == 0) {
LAB_05bc9524:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    fVar10 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
    lVar6 = *unaff_x19;
    fVar10 = (fVar9 - fVar10) / (unaff_s11 - fVar10);
    fVar9 = unaff_s11;
    if (fVar10 <= unaff_s11) {
      fVar9 = fVar10;
    }
    fVar1 = unaff_s8;
    if (0.0 <= fVar10) {
      fVar1 = fVar9;
    }
    if (lVar6 == 0) goto LAB_05bc9524;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
LAB_05bc9528:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar4 = *unaff_x23;
    *(float *)(lVar6 + unaff_x21 * 4 + 0x20) = fVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    iVar2 = FUN_05be2380();
    if (iVar2 == 2) {
      lVar6 = *unaff_x19;
      if (lVar6 == 0) goto LAB_05bc9524;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_05bc9528;
      unaff_x24 = 1;
      fVar9 = *(float *)(lVar6 + unaff_x21 * 4 + 0x20);
      if (fVar9 <= unaff_s10) {
        unaff_s10 = fVar9;
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_05bc9524;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      iVar2 = FUN_05be2380();
      lVar6 = *unaff_x19;
      if (iVar2 == 1) {
        if (lVar6 == 0) goto LAB_05bc9524;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_05bc9528;
        fVar9 = *(float *)(lVar6 + unaff_x21 * 4 + 0x20);
        if (unaff_s9 <= fVar9) {
          unaff_s9 = fVar9;
        }
      }
      else if (lVar6 == 0) goto LAB_05bc9524;
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_05bc9528;
    uVar5 = unaff_w26 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar6 + unaff_x21 * 4 + 0x20) <= 0.0) {
      uVar5 = *(uint *)(unaff_x20 + 0x158) & (uVar5 ^ 0xffffffff);
    }
    else {
      uVar5 = *(uint *)(unaff_x20 + 0x158) | uVar5;
    }
    *(uint *)(unaff_x20 + 0x158) = uVar5;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        if ((unaff_x24 & 1) == 0) {
          unaff_s10 = unaff_s9;
        }
        return unaff_s10;
      }
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_05bc9524;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      iVar2 = FUN_05be2380();
      if (iVar2 != 0) break;
      lVar6 = *unaff_x19;
      if (lVar6 == 0) goto LAB_05bc9524;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_05bc9528;
      *(undefined4 *)(lVar6 + unaff_x21 * 4 + 0x20) = 0;
    }
    unaff_x22 = *(long **)(unaff_x20 + 0x130);
    if (unaff_x22 == (long *)0x0) goto LAB_05bc9524;
  } while( true );
}


