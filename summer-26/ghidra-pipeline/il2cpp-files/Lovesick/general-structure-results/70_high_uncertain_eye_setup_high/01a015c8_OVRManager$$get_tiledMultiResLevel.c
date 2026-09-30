/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResLevel
ENTRY_POINT: 01a015c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__get_tiledMultiResLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar10 = 0.0;
  if (param_3 <= SQRT(param_2)) {
    fVar7 = (unaff_s13 * unaff_s10 + unaff_s15 * unaff_s8 + unaff_s12 * unaff_s9) / SQRT(param_2);
    fVar10 = fVar7;
    if (1.0 < fVar7) {
      fVar10 = 1.0;
    }
    if (fVar7 < -1.0) {
      fVar10 = -1.0;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar9 = acos((double)fVar10);
    fVar10 = (float)dVar9 * DAT_028aa158;
  }
  plVar6 = *(long **)(unaff_x19 + 0x20);
  fVar7 = 1.0;
  if (in_stack_00000008._4_4_ * (unaff_s12 * unaff_s8 - unaff_s15 * unaff_s9) +
      fStack000000000000007c * (unaff_s13 * unaff_s9 - unaff_s12 * unaff_s10) +
      fStack0000000000000078 * (unaff_s15 * unaff_s10 - unaff_s13 * unaff_s8) < 0.0) {
    fVar7 = -1.0;
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_01a016d4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,0);
LAB_01a016d4:
  iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  fVar8 = -(fVar7 * fVar10);
  if (iVar1 != 1) {
    fVar8 = fVar7 * fVar10;
  }
  if (fVar8 < -70.0) {
    fVar8 = fVar8 + 360.0;
  }
  return fVar8;
}


