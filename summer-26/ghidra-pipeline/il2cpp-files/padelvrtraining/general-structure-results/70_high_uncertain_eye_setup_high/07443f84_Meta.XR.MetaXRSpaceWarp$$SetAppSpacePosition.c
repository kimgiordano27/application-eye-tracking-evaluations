/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpacePosition
ENTRY_POINT: 07443f84
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MetaXRSpaceWarp__SetAppSpacePosition
          (float param_1,float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar1 = FUN_08a4d98c(param_4,0);
  if (lVar1 != 0) {
    fVar3 = (float)FUN_08a5d3f4(lVar1,0);
    if (DAT_0983728b == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_0983728b = '\x01';
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar1 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
      fVar10 = *(float *)(lVar1 + 0x24);
      fVar11 = *(float *)(lVar1 + 0x28);
      fVar12 = *(float *)(lVar1 + 0x2c);
      fVar4 = (float)FUN_08abf9b0(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar5 = (float)FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          fVar6 = (float)FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            fVar13 = *(float *)(unaff_x20 + 0x28);
            fVar5 = fVar4 * 0.5 - fVar5;
            uVar8 = (ulong)(uint)(param_2 + fVar11 * fVar5);
            uVar9 = (ulong)(uint)(param_3 + fVar12 * fVar5);
            fVar4 = (float)FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
            uVar2 = FUN_07445f14(fVar3 + fVar10 * fVar5,uVar8,uVar9,fVar6 + fVar13,
                                 fVar4 + *(float *)(unaff_x20 + 0x28) + param_1);
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            if ((*(long *)(unaff_x20 + 0x20) != 0) &&
               (lVar1 = FUN_08a4d98c(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
              uVar7 = FUN_08a5d3f4(lVar1,0);
              if (*(long *)(unaff_x20 + 0x20) != 0) {
                fVar3 = (float)FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
                if (*(long *)(unaff_x20 + 0x20) != 0) {
                  fVar10 = *(float *)(unaff_x20 + 0x28);
                  fVar4 = (float)FUN_08abf9b0(*(long *)(unaff_x20 + 0x20),0);
                  uVar7 = FUN_07445f14(uVar7,uVar8,uVar9,fVar3 + fVar10,
                                       fVar4 * 0.5 + *(float *)(unaff_x20 + 0x28) + param_1);
                  return uVar7;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


