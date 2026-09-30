/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$MetaSetAppSpaceRotation
ENTRY_POINT: 0744401c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MetaXRSpaceWarp__MetaSetAppSpaceRotation(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar9;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fStack0000000000000004 = unaff_s14;
  fVar3 = (float)FUN_08abf928();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar9 = *(float *)(unaff_x20 + 0x28);
    fVar4 = fStack000000000000000c * 0.5 - unaff_s13;
    uVar7 = (ulong)(uint)(unaff_s12 + unaff_s10 * fVar4);
    uVar8 = (ulong)(uint)(unaff_s15 + fStack0000000000000008 * fVar4);
    fVar5 = (float)FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
    uVar1 = FUN_07445f14(unaff_s8 + unaff_s9 * fVar4,uVar7,uVar8,fVar3 + fVar9,
                         fVar5 + *(float *)(unaff_x20 + 0x28) + fStack0000000000000004);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar2 = FUN_08a4d98c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
      uVar6 = FUN_08a5d3f4(lVar2,0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar3 = (float)FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          fVar5 = *(float *)(unaff_x20 + 0x28);
          fVar4 = (float)FUN_08abf9b0(*(long *)(unaff_x20 + 0x20),0);
          uVar6 = FUN_07445f14(uVar6,uVar7,uVar8,fVar3 + fVar5,
                               fVar4 * 0.5 + *(float *)(unaff_x20 + 0x28) + fStack0000000000000004);
          return uVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


