/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetSystemHeadphonesPresent
ENTRY_POINT: 0316c11c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_GetSystemHeadphonesPresent(float param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = *(float *)(unaff_x19 + 0xa0);
  uVar2 = FUN_0316c55c();
  plVar8 = *(long **)(unaff_x19 + 0x40);
  fVar11 = 0.0;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    fVar11 = *(float *)(unaff_x19 + 0xa8);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_13348) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0316c198;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)StringLiteral_13348,0);
LAB_0316c198:
    fVar9 = (float)(*(code *)*puVar3)(plVar8,puVar3[1]);
    fVar10 = fVar9;
    if (1.0 < fVar9) {
      fVar10 = 1.0;
    }
    if (fVar9 < 0.0) {
      fVar10 = 0.0;
    }
    fVar11 = fVar11 * fVar10 + 0.0;
  }
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_0316c378;
  FUN_0391b78c(*(long *)(unaff_x19 + 0x68),0.0 <= param_1,0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0316c378;
  fVar10 = ABS(param_1);
  if (1.0 < fVar10) {
    fVar10 = 1.0;
  }
  fVar12 = fVar12 * fVar10 + 0.0;
  lVar5 = unaff_x19;
  lVar1 = 0;
  if (param_1 >= 0.0) {
    lVar5 = 0;
    lVar1 = unaff_x19;
  }
  FUN_0391b78c(*(long *)(unaff_x19 + 0x60),param_1 < 0.0,0);
  fVar10 = *(float *)(unaff_x19 + 0x9c);
  if (fVar12 <= fVar10) {
    fVar12 = fVar10;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0316c378;
  fVar9 = fVar11 + fVar12;
  if (0.0 <= param_1) {
    fVar10 = fVar9;
  }
  FUN_0391c27c(*(long *)(unaff_x19 + 0x58),0);
  uVar4 = FUN_0316c5e4(fVar10);
  if ((param_1 < 0.0) || (((uVar2 ^ 1) & 1) != 0)) {
    FUN_0316c79c(0,uVar4,*(undefined8 *)(unaff_x19 + 0x78));
    if (0.0 <= param_1) {
      fVar10 = fVar12;
      if ((uVar2 & 1) != 0) goto LAB_0316c2b8;
      goto LAB_0316c2bc;
    }
LAB_0316c290:
    if (lVar5 == 0) goto LAB_0316c378;
    FUN_0316c824(*(undefined4 *)(unaff_x19 + 0x9c),lVar5,*(undefined8 *)(unaff_x19 + 0x78));
    fVar10 = -fVar12 - fVar11;
  }
  else {
    if ((uVar2 & 1) == 0) goto LAB_0316c378;
    FUN_0316c79c(fVar12 - *(float *)(unaff_x19 + 0x9c),uVar4,*(undefined8 *)(unaff_x19 + 0x78));
    if (param_1 < 0.0) goto LAB_0316c290;
LAB_0316c2b8:
    fVar10 = *(float *)(unaff_x19 + 0x9c);
LAB_0316c2bc:
    FUN_0316c824(fVar11 + fVar10,lVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar10 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_0391c27c(*(long *)(unaff_x19 + 0x50),0);
    uVar4 = FUN_0316c5e4(fVar10);
    fVar10 = 0.0;
    if (param_1 < 0.0 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
      fVar10 = *(float *)(unaff_x19 + 0x9c) - fVar12;
    }
    FUN_0316c79c(fVar10,uVar4,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= param_1) {
      fVar9 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((uVar2 & 1) != 0) {
      fVar9 = fVar11 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_0316c824(fVar9);
    FUN_0316c878(fVar12,fVar11);
    return;
  }
LAB_0316c378:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


