/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_GetSpaceUserId
ENTRY_POINT: 06978b48
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_GetSpaceUserId(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_07d32824(*(long *)(unaff_x19 + 0xa0),0);
    if (*(char *)(unaff_x19 + 0x9c) != '\0') {
      if ((*(long *)(unaff_x19 + 0x20) == 0) || (*(long *)(unaff_x19 + 0xa0) == 0))
      goto LAB_06978e5c;
      fVar4 = *(float *)(unaff_x19 + 0xa8);
      fVar5 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
      FUN_07d32a2c(*(undefined4 *)(unaff_x19 + 0x3c8),*(undefined4 *)(unaff_x19 + 0x3cc),
                   *(undefined4 *)(unaff_x19 + 0x3d0),
                   *(float *)(unaff_x19 + 0x5c) + fVar5 * fVar4 * *(float *)(unaff_x19 + 0x284),
                   (float)*(undefined8 *)(unaff_x19 + 0x60) +
                   (float)*(undefined8 *)(unaff_x19 + 0x288) * fVar4 * fVar5,
                   (float)((ulong)*(undefined8 *)(unaff_x19 + 0x60) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(unaff_x19 + 0x288) >> 0x20) * fVar4 * fVar5,
                   *(long *)(unaff_x19 + 0xa0),0);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x3b8);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar1 = FUN_07c9c218(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x3b8) == 0) goto LAB_06978e5c;
        fVar5 = *(float *)(unaff_x19 + 0xb8);
        fVar4 = -((float)((ulong)*(undefined8 *)(unaff_x19 + 0x3c8) >> 0x20) +
                 (float)((ulong)*unaff_x22 >> 0x20)) * fVar5;
        FUN_07d32a2c(CONCAT44(fVar4,-((float)*(undefined8 *)(unaff_x19 + 0x3c8) + (float)*unaff_x22)
                                    * fVar5),fVar4,
                     -((*(float *)(unaff_x19 + 0x3d0) + *(float *)(unaff_x19 + 0x3dc)) * fVar5),
                     *(undefined4 *)(unaff_x19 + 0x5c),*(undefined4 *)(unaff_x19 + 0x60),
                     *(undefined4 *)(unaff_x19 + 100),*(long *)(unaff_x19 + 0x3b8),0);
      }
    }
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
      FUN_07cad038(*(undefined4 *)(unaff_x19 + 0x30c),*(undefined4 *)(unaff_x19 + 0x310),
                   *(undefined4 *)(unaff_x19 + 0x314),*(undefined4 *)(lVar2 + 0x30),
                   *(undefined4 *)(lVar2 + 0x34),*(undefined4 *)(lVar2 + 0x38),
                   *(undefined4 *)(lVar2 + 0x3c),*(long *)(lVar2 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar2 != 0)) {
        fVar4 = *(float *)(unaff_x19 + 0x324);
        fVar5 = *(float *)(unaff_x19 + 0x318);
        fVar6 = *(float *)(unaff_x19 + 800);
        fVar7 = *(float *)(unaff_x19 + 0x31c);
        FUN_07cad038(*(undefined4 *)(unaff_x19 + 0x30c),*(undefined4 *)(unaff_x19 + 0x310),
                     *(undefined4 *)(unaff_x19 + 0x314),
                     (fStack0000000000000024 * fVar4 + in_stack_00000018._4_4_ * fVar5 +
                     fStack0000000000000020 * fVar6) - in_stack_00000028 * fVar7,
                     (in_stack_00000028 * fVar5 +
                     fStack0000000000000020 * fVar4 + in_stack_00000018._4_4_ * fVar7) -
                     fStack0000000000000024 * fVar6,
                     (fStack0000000000000024 * fVar7 +
                     in_stack_00000028 * fVar4 + in_stack_00000018._4_4_ * fVar6) -
                     fStack0000000000000020 * fVar5,
                     ((in_stack_00000018._4_4_ * fVar4 - fStack0000000000000024 * fVar5) -
                     fStack0000000000000020 * fVar7) - in_stack_00000028 * fVar6,lVar2,0);
        if (((*(long *)(unaff_x19 + 0x30) != 0) &&
            (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar2 != 0)) &&
           (lVar2 = FUN_07c98f88(lVar2,0), lVar2 != 0)) {
          fVar4 = *(float *)(unaff_x19 + 0x280);
          fVar5 = *(float *)(unaff_x19 + 0x274);
          fVar6 = *(float *)(unaff_x19 + 0x27c);
          fVar7 = *(float *)(unaff_x19 + 0x278);
          FUN_07cad038(*(undefined4 *)(unaff_x19 + 0x268),*(undefined4 *)(unaff_x19 + 0x26c),
                       *(undefined4 *)(unaff_x19 + 0x270),
                       (fStack0000000000000024 * fVar4 + in_stack_00000018._4_4_ * fVar5 +
                       fStack0000000000000020 * fVar6) - in_stack_00000028 * fVar7,
                       (in_stack_00000028 * fVar5 +
                       fStack0000000000000020 * fVar4 + in_stack_00000018._4_4_ * fVar7) -
                       fStack0000000000000024 * fVar6,
                       (fStack0000000000000024 * fVar7 +
                       in_stack_00000028 * fVar4 + in_stack_00000018._4_4_ * fVar6) -
                       fStack0000000000000020 * fVar5,
                       ((in_stack_00000018._4_4_ * fVar4 - fStack0000000000000024 * fVar5) -
                       fStack0000000000000020 * fVar7) - in_stack_00000028 * fVar6,lVar2,0);
          return;
        }
      }
    }
  }
LAB_06978e5c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


