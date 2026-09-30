/*
FUNCTION_NAME: OVRManager$$add_HMDLost
ENTRY_POINT: 04f3f3c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_HMDLost(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float fVar11;
  undefined8 in_stack_00000008;
  
  fVar11 = *(float *)(param_1 + 0x24);
  fVar8 = *(float *)(param_1 + 0x28);
  fVar10 = *(float *)(param_1 + 0x2c);
  fVar4 = (float)FUN_05d0be20();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar5 = (float)FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar6 = (float)FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar5 = fVar4 * 0.5 - fVar5;
        fVar9 = *(float *)(unaff_x20 + 0x28);
        fVar8 = unaff_s11 + fVar8 * fVar5;
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar10 * fVar5;
        fVar4 = (float)FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
        uVar1 = FUN_04f41240(unaff_s10 + fVar11 * fVar5,fVar8,in_stack_00000008._4_4_,fVar6 + fVar9,
                             fVar4 + *(float *)(unaff_x20 + 0x28) + unaff_s13);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar2 = FUN_05c89340(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
          uVar7 = FUN_05c9bf94(lVar2,0);
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            fVar4 = (float)FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
            if (*(long *)(unaff_x20 + 0x20) != 0) {
              fVar11 = *(float *)(unaff_x20 + 0x28);
              fVar10 = (float)FUN_05d0be20(*(long *)(unaff_x20 + 0x20),0);
              uVar3 = FUN_04f41240(uVar7,fVar8,in_stack_00000008._4_4_,fVar4 + fVar11,
                                   fVar10 * 0.5 + *(float *)(unaff_x20 + 0x28) + unaff_s13);
              return uVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


