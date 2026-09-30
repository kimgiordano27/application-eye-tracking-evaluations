/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 069277e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  uVar2 = FUN_07d32394();
  *(undefined4 *)(unaff_x19 + 0x8c) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x90) = param_2;
  *(undefined4 *)(unaff_x19 + 0x94) = param_3;
  lVar1 = FUN_07c98f88();
  if (lVar1 != 0) {
    uVar3 = *(undefined4 *)(unaff_x19 + 0x94);
    uVar2 = FUN_07cadd74(*(undefined4 *)(unaff_x19 + 0x8c),*(undefined4 *)(unaff_x19 + 0x90),lVar1,0
                        );
    *(undefined4 *)(unaff_x19 + 0x98) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x9c) = uVar2;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_07fc9414(*(long *)(unaff_x19 + 0x30),&stack0x00000010);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar1 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
        FUN_07cad038(uStack0000000000000010,uStack0000000000000014,in_stack_00000018,
                     uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                     uStack000000000000000c,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


