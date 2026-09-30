/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 04f43cfc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported
               (float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar3 = param_2;
  fVar4 = param_3;
  FUN_04f421f0(param_4,1);
  fVar2 = (float)FUN_04f42a4c(param_4);
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_04f3eaf4((long)&stack0x00000000 + 4,*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x20) != 0) {
      FUN_04f3f86c((param_1 - fVar2) + in_stack_00000000._4_4_,
                   (param_2 - fVar3) + fStack0000000000000008,
                   (param_3 - fVar4) + fStack000000000000000c,*(long *)(param_4 + 0x20),0);
      lVar1 = *(long *)(param_4 + 0x20);
      if (lVar1 != 0) {
        FUN_04f3f1a4(*(undefined4 *)(lVar1 + 0x34),lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


