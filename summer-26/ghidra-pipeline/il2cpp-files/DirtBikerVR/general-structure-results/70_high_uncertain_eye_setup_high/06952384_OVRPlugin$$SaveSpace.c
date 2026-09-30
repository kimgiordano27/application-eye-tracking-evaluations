/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 06952384
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpace(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 != (long *)0x0) {
    fVar3 = (float)(**(code **)(*plVar1 + 0x4f8))(plVar1,*(undefined8 *)(*plVar1 + 0x500));
    fVar9 = 1.0;
    if (fVar3 <= 1.0) {
      fVar9 = fVar3;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar3) {
      fVar4 = fVar9;
    }
    *(float *)(unaff_x19 + 0x78) = fVar4;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      fVar3 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
      fVar3 = fVar3 * 0.5;
      fVar9 = 1.0;
      if (fVar3 <= 1.0) {
        fVar9 = fVar3;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar3) {
        fVar5 = fVar9;
      }
      *(float *)(unaff_x19 + 0x78) = fVar4 * fVar5;
      *(float *)(unaff_x19 + 0x70) =
           *(float *)(unaff_x19 + 0x70) + *(float *)(unaff_x19 + 0x38) * fVar4 * fVar5;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fVar4 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),*(long *)(unaff_x19 + 0x28),0)
        ;
        fVar3 = *(float *)(unaff_x19 + 0x70);
        fVar10 = *(float *)(unaff_x19 + 0x74);
        fVar5 = (float)FUN_07ca88b8(0);
        fVar7 = fVar3 - fVar10;
                    /* try { // try from 0695242c to 06a52433 has its CatchHandler @ 0695257c */
                    /* try { // try from 06952440 to 06a5245b has its CatchHandler @ 06952578 */
        fVar7 = fVar7 + (float)(int)(fVar7 / 360.0) * -360.0;
        fVar9 = 360.0;
        if (fVar7 <= 360.0) {
          fVar9 = fVar7;
        }
        fVar8 = 0.0;
                    /* try { // try from 0695245c to 06a5254b has its CatchHandler @ 06951b3c */
        if (0.0 <= fVar7) {
          fVar8 = fVar9;
        }
        fVar9 = fVar8 + -360.0;
        if (fVar8 <= 180.0) {
          fVar9 = fVar8;
        }
        fVar7 = fVar4 * fVar5;
        if ((fVar9 <= -(fVar4 * fVar5)) || (fVar7 <= fVar9)) {
          fVar9 = fVar10 + fVar9;
          fVar3 = -(fVar4 * fVar5);
          if (0.0 <= fVar9 - fVar10) {
            fVar3 = fVar7;
          }
          fVar3 = fVar10 + fVar3;
          if (ABS(fVar9 - fVar10) <= fVar7) {
            fVar3 = fVar9;
          }
        }
        lVar2 = *(long *)(unaff_x19 + 0x90);
        *(float *)(unaff_x19 + 0x74) = fVar3;
        if (lVar2 != 0) {
          fVar5 = *(float *)(unaff_x19 + 0x48);
          fVar9 = *(float *)(unaff_x19 + 0x4c);
          fVar3 = *(float *)(unaff_x19 + 0x40);
          fVar4 = *(float *)(unaff_x19 + 0x44);
          *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
          uVar6 = *(undefined4 *)(unaff_x19 + 0x6c);
          *(float *)(lVar2 + 0x1c) = fVar9 * fVar5;
          *(float *)(lVar2 + 0x20) = fVar9 * fVar4;
          *(float *)(lVar2 + 0x24) = fVar9 * fVar3;
          FUN_0692a5f4(uVar6,lVar2,0);
          lVar2 = *(long *)(unaff_x19 + 0x90);
          if (lVar2 != 0) {
            *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
            FUN_07ca88b8(0);
            fVar9 = (float)FUN_0692a624(lVar2,0);
            fVar9 = -fVar9;
            *(float *)(unaff_x19 + 100) = fVar9;
            if (*(long *)(unaff_x19 + 0x88) != 0) {
              FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar9,*(float *)(unaff_x19 + 0xcc) * fVar9,
                           *(float *)(unaff_x19 + 0xd0) * fVar9,*(long *)(unaff_x19 + 0x88),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


