/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 07443c5c
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


uint Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel
               (undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  lVar2 = FUN_08a4d98c();
  if (lVar2 != 0) {
    fVar3 = (float)FUN_08a5d3f4(lVar2,0);
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (fVar7 = param_3, fVar6 = param_2, lVar2 = FUN_08a4d98c(*(long *)(unaff_x20 + 0x20),0),
       lVar2 != 0)) {
      fVar4 = (float)FUN_08a5d3f4(lVar2,0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar8 = unaff_s11 * 0.5 - unaff_s12;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        uVar5 = FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
        uStack0000000000000004 = uStack0000000000000018;
        uVar1 = FUN_07445ac0(fVar4 - unaff_s8 * fVar8,fVar6 - unaff_s9 * fVar8,
                             fVar7 - unaff_s10 * fVar8,unaff_s8 * fVar8 + fVar3,
                             unaff_s9 * fVar8 + param_2,unaff_s10 * fVar8 + param_3,uVar5);
        if ((uVar1 & 1) == 0) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          in_stack_00000050 = **(undefined8 **)(*unaff_x22 + 0xb8);
          in_stack_00000058 = *(undefined4 *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
        }
        else {
          FUN_05edca54(&stack0x00000050,&stack0x00000080,*(undefined8 *)PTR_DAT_09222990);
          uStack0000000000000044 = uStack0000000000000074;
          FUN_07445d78(&stack0x00000050,in_stack_00000010._4_4_,uStack0000000000000018,
                       uStack000000000000001c);
        }
        *unaff_x19 = in_stack_00000050;
        *(undefined4 *)(unaff_x19 + 1) = in_stack_00000058;
        return uVar1 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


