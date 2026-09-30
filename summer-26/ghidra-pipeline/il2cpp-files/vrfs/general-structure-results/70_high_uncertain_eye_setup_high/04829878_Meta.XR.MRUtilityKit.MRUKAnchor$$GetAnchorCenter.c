/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetAnchorCenter
ENTRY_POINT: 04829878
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetAnchorCenter(void)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float unaff_s8;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float unaff_s12;
  float fVar14;
  ulong unaff_d13;
  float unaff_s14;
  
  while (lVar1 = *(long *)(unaff_x19 + 0x10), lVar1 != 0) {
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
      FUN_048a39ac(lVar1,0);
      return;
    }
    lVar2 = *(long *)(lVar1 + 0x310);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_048298ac;
    lVar4 = *(long *)(lVar1 + 0x360);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_048298ac;
    lVar2 = (long)*(int *)(lVar2 + unaff_x20 * 4 + 0x20);
    fVar14 = (float)unaff_d13;
    if (*(char *)(lVar4 + unaff_x20 + 0x20) == '\0') {
      lVar4 = *(long *)(lVar1 + 0x358);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_048298ac;
      fVar5 = *(float *)(lVar4 + unaff_x20 * 4 + 0x20);
      fVar12 = 0.0;
      if (unaff_s8 < fVar5) {
        lVar1 = *(long *)(lVar1 + 0x340);
        fVar12 = unaff_s8 / fVar5;
        if (fVar5 <= unaff_s12) {
          fVar12 = fVar14;
        }
        uVar11 = (ulong)(uint)fVar12;
joined_r0x04829760:
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) <= unaff_x20) {
LAB_048298ac:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          fVar12 = *(float *)(lVar1 + unaff_x20 * 4 + 0x20);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          fVar13 = (float)FUN_048b073c(uVar11,0);
          fVar5 = fVar13;
          if (fVar14 < fVar13) {
            fVar5 = fVar14;
          }
          if (fVar13 < 0.0) {
            fVar5 = unaff_s14;
          }
          fVar13 = unaff_s14 - fVar12;
          goto LAB_048297f0;
        }
        break;
      }
    }
    else {
      lVar4 = *(long *)(lVar1 + 0x350);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_048298ac;
      fVar5 = *(float *)(lVar4 + unaff_x20 * 4 + 0x20);
      if (fVar5 <= unaff_s8) {
        lVar4 = *(long *)(lVar1 + 0x358);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_048298ac;
        fVar13 = *(float *)(lVar4 + unaff_x20 * 4 + 0x20);
        fVar12 = 0.0;
        if (unaff_s8 < fVar5 + fVar13) {
          uVar11 = unaff_d13;
          if (unaff_s12 < fVar13) {
            uVar11 = (ulong)(uint)((unaff_s8 - fVar5) / fVar13);
          }
          lVar1 = *(long *)(lVar1 + 0x348);
          goto joined_r0x04829760;
        }
      }
      else {
        lVar4 = *(long *)(lVar1 + 0x340);
        fVar6 = unaff_s8 / fVar5;
        if (fVar5 <= unaff_s12) {
          fVar6 = fVar14;
        }
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_048298ac;
        lVar1 = *(long *)(lVar1 + 0x348);
        if (lVar1 == 0) break;
        if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_048298ac;
        fVar12 = *(float *)(lVar4 + unaff_x20 * 4 + 0x20);
        fVar13 = *(float *)(lVar1 + unaff_x20 * 4 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        fVar6 = (float)FUN_048b073c(fVar6,0);
        fVar5 = fVar6;
        if (fVar14 < fVar6) {
          fVar5 = fVar14;
        }
        if (fVar6 < 0.0) {
          fVar5 = unaff_s14;
        }
        fVar13 = fVar13 - fVar12;
LAB_048297f0:
        fVar12 = fVar12 + fVar13 * fVar5;
      }
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x2a8) + lVar2 * unaff_x22);
    uVar10 = puVar3[2];
    uVar9 = FUN_0392e218(*puVar3,puVar3[1],0);
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) break;
    fVar14 = fVar12;
    uVar8 = uVar10;
    uVar7 = FUN_0392e21c(0);
    puVar3 = (undefined4 *)(*(long *)(lVar1 + 0x2a8) + lVar2 * unaff_x22);
    *puVar3 = uVar7;
    puVar3[1] = fVar14;
    puVar3[2] = uVar8;
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) break;
    uVar8 = FUN_0392e21c(uVar9,0);
    unaff_x20 = unaff_x20 + 1;
    puVar3 = (undefined4 *)(*(long *)(lVar1 + 0x2b8) + lVar2 * unaff_x22);
    *puVar3 = uVar8;
    puVar3[1] = fVar12;
    puVar3[2] = uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


