/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 06929840
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__UseExternalCompositionFromCmd(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  float fVar9;
  float fVar10;
  
  uVar5 = 0;
  fVar9 = 0.0;
  fVar10 = *(float *)(in_x9 + 0x9ec);
  do {
    if (*(int *)(param_1 + 0x18) <= (int)uVar5) {
      return ABS(fVar9);
    }
    if (unaff_x21 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 <= uVar5) {
LAB_06929960:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x20 == 0) break;
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    uVar3 = *(uint *)(unaff_x21 + (long)(int)uVar5 * 4 + 0x20);
    if ((((uVar2 <= uVar3) || (uVar1 <= uVar5 + 1)) ||
        (uVar4 = *(uint *)(unaff_x21 + (long)(int)(uVar5 + 1) * 4 + 0x20), uVar2 <= uVar4)) ||
       (uVar1 <= uVar5 + 2)) goto LAB_06929960;
    uVar1 = *(uint *)(unaff_x21 + (long)(int)(uVar5 + 2) * 4 + 0x20);
    if (uVar2 <= uVar1) goto LAB_06929960;
    lVar8 = unaff_x20 + (long)(int)uVar4 * 0xc;
    lVar6 = unaff_x20 + (long)(int)uVar1 * 0xc;
    lVar7 = unaff_x20 + (long)(int)uVar3 * 0xc;
    fVar9 = fVar9 + (*(float *)(lVar7 + 0x20) * *(float *)(lVar8 + 0x24) * *(float *)(lVar6 + 0x28)
                    + (((*(float *)(lVar8 + 0x28) *
                         *(float *)(lVar7 + 0x24) * *(float *)(lVar6 + 0x20) +
                        (*(float *)(lVar7 + 0x28) *
                         *(float *)(lVar8 + 0x20) * *(float *)(lVar6 + 0x24) -
                        *(float *)(lVar7 + 0x28) *
                        *(float *)(lVar8 + 0x24) * *(float *)(lVar6 + 0x20))) -
                       *(float *)(lVar8 + 0x28) *
                       *(float *)(lVar7 + 0x20) * *(float *)(lVar6 + 0x24)) -
                      *(float *)(lVar7 + 0x24) * *(float *)(lVar8 + 0x20) * *(float *)(lVar6 + 0x28)
                      )) * fVar10;
    param_1 = FUN_07c73a5c();
    uVar5 = uVar5 + 3;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


