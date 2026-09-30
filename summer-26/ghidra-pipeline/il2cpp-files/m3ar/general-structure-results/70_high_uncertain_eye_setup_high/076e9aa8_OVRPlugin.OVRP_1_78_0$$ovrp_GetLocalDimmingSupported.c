/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimmingSupported
ENTRY_POINT: 076e9aa8
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimmingSupported(float param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = *(float *)(unaff_x19 + 0xa0);
  fVar11 = 1.0;
  if (ABS(param_1) <= 1.0) {
    fVar11 = ABS(param_1);
  }
  uVar1 = FUN_076e9f08();
  fVar10 = 0.0;
  plVar7 = *(long **)(unaff_x19 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    fVar10 = *(float *)(unaff_x19 + 0xa8);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fab668) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_076e9b34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fab668,0);
FUN_076e9b34:
    fVar8 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
    fVar12 = 1.0;
    if (fVar8 <= 1.0) {
      fVar12 = fVar8;
    }
    fVar9 = 0.0;
    if (0.0 <= fVar8) {
      fVar9 = fVar12;
    }
    fVar10 = fVar10 * fVar9 + 0.0;
  }
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_076e9cfc;
  FUN_08584234(*(long *)(unaff_x19 + 0x68),0.0 <= param_1,0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_076e9cfc;
  fVar11 = fVar13 * fVar11 + 0.0;
  FUN_08584234(*(long *)(unaff_x19 + 0x60),param_1 < 0.0,0);
  fVar13 = *(float *)(unaff_x19 + 0x9c);
  if (fVar11 <= fVar13) {
    fVar11 = fVar13;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_076e9cfc;
  fVar12 = fVar10 + fVar11;
  if (0.0 <= param_1) {
    fVar13 = fVar12;
  }
  FUN_085849e0(*(long *)(unaff_x19 + 0x58),0);
  uVar3 = FUN_076e9f90(fVar13);
  if ((uVar1 & 1) == 0) {
    FUN_076ea14c(0,uVar3,*(undefined8 *)(unaff_x19 + 0x78));
    fVar13 = fVar12;
    if (0.0 <= param_1) goto LAB_076e9c48;
LAB_076e9c0c:
    if (0.0 <= param_1) goto LAB_076e9cfc;
    FUN_076ea1d4(*(undefined4 *)(unaff_x19 + 0x9c));
    fVar13 = -fVar11 - fVar10;
  }
  else {
    if (param_1 < 0.0) {
      FUN_076ea14c(0,uVar3,*(undefined8 *)(unaff_x19 + 0x78));
      goto LAB_076e9c0c;
    }
    FUN_076ea14c(fVar11 - *(float *)(unaff_x19 + 0x9c),uVar3,*(undefined8 *)(unaff_x19 + 0x78));
    fVar13 = fVar10 + *(float *)(unaff_x19 + 0x9c);
LAB_076e9c48:
    FUN_076ea1d4(fVar13);
    fVar13 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_085849e0(*(long *)(unaff_x19 + 0x50),0);
    uVar3 = FUN_076e9f90(fVar13);
    fVar13 = 0.0;
    if (param_1 < 0.0 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
      fVar13 = *(float *)(unaff_x19 + 0x9c) - fVar11;
    }
    FUN_076ea14c(fVar13,uVar3,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= param_1) {
      fVar12 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((uVar1 & 1) != 0) {
      fVar12 = fVar10 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_076ea1d4(fVar12);
    FUN_076ea228(fVar11,fVar10);
    return;
  }
LAB_076e9cfc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


