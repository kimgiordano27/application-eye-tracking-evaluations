/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelProperties
ENTRY_POINT: 06955514
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetRenderModelProperties
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  if ((*(long *)(param_1 + 0xe8) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 0x50), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) != 2) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uStack0000000000000030 = FUN_07d30058(*(long *)(param_1 + 0x20),0);
      uStack0000000000000034 = param_3;
      in_stack_00000038 = param_4;
      uVar3 = FUN_03bcb6c8(&stack0x00000030,0);
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (uVar13 = param_3, uVar16 = param_4, lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0),
         lVar2 != 0)) {
        uVar4 = FUN_07cac924(lVar2,0);
        if ((*(long *)(unaff_x19 + 0x10) != 0) &&
           (lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0), lVar2 != 0)) {
          FUN_07cac824(lVar2,0);
          fVar5 = (float)FUN_03ce0520(uVar3,param_3,param_4,uVar4,uVar13,uVar16,0);
          fVar6 = 90.0;
          if (fVar5 <= 90.0) {
            fVar6 = fVar5;
          }
          fVar14 = -90.0;
          if (-90.0 <= fVar5) {
            fVar14 = fVar6;
          }
          fVar14 = ABS(fVar14);
          fVar17 = -fVar14;
          fVar6 = fVar17;
          if (0.0 <= fVar5) {
            fVar6 = fVar14;
          }
          *(float *)(unaff_x19 + 0x38) = fVar6;
          if ((((*(long *)(unaff_x19 + 0x10) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar2 != 0)) &&
              (lVar2 = *(long *)(lVar2 + 0x50), lVar2 != 0)) &&
             ((lVar2 = FUN_04de82e0(lVar2,1,*(undefined8 *)PTR_DAT_084b63c8), lVar2 != 0 &&
              (*(long *)(lVar2 + 0x48) != 0)))) {
            if (*(int *)(*(long *)(lVar2 + 0x48) + 0x18) != 2) {
              return;
            }
            lVar1 = FUN_0694d3e8(lVar2);
            lVar2 = FUN_0694d460(lVar2);
            if (((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) &&
               ((lVar1 = FUN_07c98f88(*(long *)(lVar1 + 0x80),0), lVar1 != 0 &&
                (((fVar6 = (float)FUN_07cac280(lVar1,0), lVar2 != 0 &&
                  (*(long *)(lVar2 + 0x80) != 0)) &&
                 (fVar5 = fVar14, fVar18 = fVar17, lVar2 = FUN_07c98f88(*(long *)(lVar2 + 0x80),0),
                 lVar2 != 0)))))) {
              fVar7 = (float)FUN_07cac280(lVar2,0);
              if ((*(long *)(unaff_x19 + 0x10) != 0) &&
                 (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar2 != 0)) {
                fVar8 = *(float *)(unaff_x19 + 0x2c);
                fVar15 = fVar5;
                fVar19 = fVar18;
                fVar9 = (float)FUN_06960788(lVar2,0);
                fVar22 = *(float *)(unaff_x19 + 0x38);
                fVar21 = *(float *)(unaff_x19 + 0x3c);
                fVar23 = *(float *)(unaff_x19 + 0x30);
                fVar10 = (float)FUN_07ca88b8(0);
                if ((*(long *)(unaff_x19 + 0x10) != 0) &&
                   (lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0), lVar2 != 0)) {
                  fVar11 = (float)FUN_07cac7a8(lVar2,0);
                  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    fVar20 = *(float *)(unaff_x19 + 0x34);
                    fVar24 = *(float *)(unaff_x19 + 0x38);
                    fVar12 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
                    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
                       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar2 != 0)) {
                      fVar25 = *(float *)(unaff_x19 + 0x28);
                      fVar12 = fVar12 / 3.0;
                      fVar22 = ABS(fVar22) - ABS(fVar8 + fVar9 * fVar23);
                      fVar9 = fVar22 + (fVar22 - fVar21) / fVar10;
                      fVar8 = 90.0;
                      if (fVar9 <= 90.0) {
                        fVar8 = fVar9;
                      }
                      fVar10 = 0.0;
                      if (0.0 <= fVar9) {
                        fVar10 = fVar8;
                      }
                      fVar8 = -fVar10;
                      if (0.0 <= fVar24) {
                        fVar8 = fVar10;
                      }
                      fVar9 = 1.0;
                      if (fVar12 <= 1.0) {
                        fVar9 = fVar12;
                      }
                      fVar20 = fVar20 * fVar8;
                      fVar8 = 0.0;
                      if (0.0 <= fVar12) {
                        fVar8 = fVar9;
                      }
                      FUN_07d32a2c(fVar11 * fVar20 * fVar8 * fVar25,fVar15 * fVar20 * fVar8 * fVar25
                                   ,fVar19 * fVar20 * fVar8 * fVar25,(fVar6 + fVar7) * 0.5,
                                   (fVar14 + fVar5) * 0.5,(fVar17 + fVar18) * 0.5,lVar2,0);
                      *(float *)(unaff_x19 + 0x3c) = fVar22;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


