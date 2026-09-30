/*
FUNCTION_NAME: OVRPlugin$$AreHandPosesGeneratedByControllerData
ENTRY_POINT: 027ec0e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AreHandPosesGeneratedByControllerData(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool in_ZR;
  int iVar6;
  long lVar7;
  int in_w8;
  uint uVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  ulong unaff_x22;
  undefined8 *puVar11;
  int unaff_w23;
  undefined8 *unaff_x24;
  long lVar12;
  
  if (!in_ZR) {
    in_w8 = unaff_w23;
  }
  uVar9 = unaff_x19 - unaff_x20;
  uVar3 = 0;
  if ((long)in_w8 != 0) {
    uVar3 = uVar9 / (ulong)(long)in_w8;
  }
  uVar4 = 0;
  if (unaff_x22 != 0) {
    uVar4 = uVar3 / unaff_x22;
  }
  uVar3 = unaff_x22;
  if (uVar4 * unaff_x22 != 0) {
    uVar3 = uVar4 * unaff_x22;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar9 / uVar3;
  }
  *(undefined4 *)(unaff_x21 + 0x1c) = 0;
  *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
  uVar8 = (uint)uVar4;
  if (uVar9 != uVar4 * uVar3) {
    uVar8 = uVar8 + 1;
  }
  iVar6 = FUN_027b9158(0);
  *(bool *)(unaff_x21 + 0x18) = iVar6 == 4 && (long)uVar3 < 0x80000000;
  lVar7 = FUN_01ab6a94(*unaff_x24,uVar8);
  plVar10 = (long *)(unaff_x21 + 0x10);
  *plVar10 = lVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar7);
  if (0 < (int)uVar8) {
    lVar12 = *plVar10;
    lVar7 = 0;
    uVar9 = 0;
    do {
      if (lVar12 == 0) {
LAB_027ec208:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar9) {
LAB_027ec204:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(long *)(lVar12 + lVar7 + 0x20) = unaff_x20;
      thunk_FUN_01a4b338();
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_027ec204;
      puVar11 = (undefined8 *)(lVar12 + lVar7 + 0x30);
      *puVar11 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,0);
      lVar12 = *plVar10;
      if (lVar12 == 0) goto LAB_027ec208;
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_027ec204;
      lVar1 = unaff_x20 + uVar3;
      uVar9 = uVar9 + 1;
      lVar2 = lVar12 + lVar7;
      bVar5 = unaff_x20 <= lVar1;
      unaff_x20 = unaff_x19;
      if (lVar1 <= unaff_x19 && bVar5) {
        unaff_x20 = lVar1;
      }
      lVar7 = lVar7 + 0x20;
      *(undefined4 *)(lVar2 + 0x38) = 0;
      *(long *)(lVar2 + 0x28) = unaff_x20;
    } while (uVar9 != uVar8);
  }
  return;
}


