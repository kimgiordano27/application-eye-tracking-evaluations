/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 07443e20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_foveation_hits_4;functionality_foveated_rendering
*/


undefined4
Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_000000c8;
  
  if ((param_4 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar1 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
    uVar3 = FUN_08a5d3f4(lVar1,0);
    if (DAT_0983728b == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_0983728b = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    FUN_074442b4(uVar3,param_2,param_3,*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
                 *(undefined4 *)(lVar1 + 0x2c));
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar2 = (float)FUN_08abf9b0(*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar4 = *(float *)(unaff_x19 + 0x28);
        lVar1 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0);
        if (lVar1 != 0) {
          FUN_08a5d494(uVar3,fVar4 + ((float)param_2 - in_stack_000000c8._4_4_) + fVar2 * 0.5,
                       param_3,lVar1,0);
          *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
          *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,in_stack_00000078._4_4_);
          *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000068;
          *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000060;
          *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000078;
          *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
          *(undefined1 *)(unaff_x19 + 0x7c) = 1;
          FUN_074437b0();
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


